#include "touchpad.h"
#include "synaptics/SynKit.h"

#pragma comment(lib,"SynCom.lib")
#pragma comment(lib,"SynCtrl.lib")

#define dbg printf

TouchPad::TouchPad( ) 
  : frame_counter( 0 )
  , nfingers( 0 )
  , prev_nfingers( 0 )
{ }

bool TouchPad::start() {
  HRESULT hr;

  // Wait object will indicate when new data is available
  event = CreateEvent(NULL, FALSE, FALSE, NULL);

  // Entry point to Synaptics API
  ISynAPI* api = NULL;
  hr = SynCreateAPI(&api);

  if (!api)
    return false;

  // Find the first USB TouchPad device connected to the system
  LONG lHandle = -1;
  if (api->FindDevice(SE_ConnectionAny, SE_DeviceTouchPad, &lHandle) == SYNE_NOTFOUND)
    return false;

  // Create an interface to the ForcePad
  api->CreateDevice(lHandle, &device);

  // Tell the device to signal event when data is ready
  api->SetEventNotification(event);
  device->SetEventNotification(event);

  // Enable multi-finger touch and grouped reporting
  device->SetProperty(SP_IsMultiFingerReportEnabled, 1);

  // Hack
  device->GetProperty(SP_XLoSensor, &rectLeft);
  device->GetProperty(SP_YLoSensor, &rectBottom);
  device->GetProperty(SP_XHiSensor, &rectRight);
  device->GetProperty(SP_YHiSensor, &rectTop);
  //dbg("  Border %d %d %d %d \n", rectLeft, rectBottom, rectRight, rectTop);

  // Create an ISynPacket instance to receive per-touch data
  device->CreatePacket(&packet);

  frame_counter = 0;

  LONG data = 0;
#define PRINT(prop_name)  \
      device->GetBooleanProperty(prop_name, &data); \
      dbg("  %s: %d\n", #prop_name, data)
  //PRINT(SP_HasMultiFingerReport);
  //PRINT(SP_IsGroupReportEnabled);

  return true;
}

bool TouchPad::update() {

  if (!packet || !device)
    return false;

  // Poll for new data
  if (WaitForSingleObject(event, 0) != 0)
    return false;

  // Load data into the ISynGroup instance, repeating until there is no more data
  int n = 0;
  while (device->LoadPacket(packet) != SYNE_FAIL) {

    // Is there a finger present?
    LONG lFingerState;
    packet->GetProperty(SP_FingerState, &lFingerState);
    if (lFingerState & SF_FingerPresent) {
      
      // Extract the position and force of the touch
      LONG lX, lY;
      packet->GetProperty(SP_X, &lX);
      packet->GetProperty(SP_Y, &lY);

      LONG ldx, ldy;
      packet->GetProperty(SP_XDelta, &ldx);
      packet->GetProperty(SP_YDelta, &ldy);

      LONG idx = 0;
      packet->GetProperty(SP_FingerIndex, &idx);

      if (idx >= 0 && idx < max_fingers) {
        Finger& f = fingers[idx];
        
        // Normalize coords
        float xcoord = (float)lX - rectLeft;
        float ycoord = (float)lY - rectBottom;
        xcoord /= abs(rectRight - rectLeft);
        ycoord /= abs(rectTop - rectBottom);
        
        f.loc.x = xcoord;
        f.loc.y = ycoord;
        f.delta.x = ldx / (float)abs(rectRight - rectLeft);
        f.delta.y = ldy / (float)abs(rectTop - rectBottom);
        f.last_updated = frame_counter;

        if (!f.is_present) {
          f.first_appear = frame_counter;
          f.appear_loc = f.loc;
          f.is_present = true;
        }

        //dbg("Touch %d: %d at %f,%f dx:%d dy:%d\n", n, idx, xcoord, ycoord, ldx, ldy);
      }

    }

    ++n;
  }

  // Remove old fingers
  prev_nfingers = nfingers;
  nfingers = 0;
  for (unsigned i = 0; i < max_fingers; ++i) {
    Finger& f = fingers[i];
    if (frame_counter - f.last_updated > 2) {
      f.delta = VEC2(0, 0);
      f.is_present = false;
    }
    else {
      ++nfingers;
      f.delta_from_appear = f.loc - f.appear_loc;
    }
  }

  // Generate high level 'actions'
  if (nfingers == 0) {
    setAction(NONE);
  }
  else if (nfingers == 2) {
    auto f0 = fingers[0];
    auto f1 = fingers[1];
    VEC2 d0 = f0.delta_from_appear;
    VEC2 d1 = f1.delta_from_appear;
    if (action == NONE) {
      const float threshold_distance = 1e-2f;
      if (d0.Length() >= threshold_distance && d1.Length() >= threshold_distance) {
        if (d0.Dot(d1) > 0) 
          setAction(PANNING);
        else
          setAction(ZOOMING);

        if ( 0 ) 
          dbg("d0:%f(%f,%f)   d1:%f(%f,%f)  => %s\n"
            , d0.Length(), d0.x, d0.y 
            , d1.Length(), d1.x, d1.y
            , action == PANNING ? "Pan" : "Zoom");
      }
    }

    if (action == PANNING) {
      pan_amount = f1.delta + f0.delta;
      //dbg("Touchpad: panning %f,%f\n", pan_amount.x, pan_amount.y);
    }
    else if (action == ZOOMING) {
      float curr_d = (f0.loc - f1.loc).Length();
      zoom_prev_ratio = zoom_ratio;
      zoom_ratio = curr_d / zoom_initial_distance;
      zoom_amount = zoom_ratio - zoom_prev_ratio;
      //dbg("Touchpad: zooming %f\n", zoom_amount);
    }
  }

  ++frame_counter;
  return true;
}
  
void TouchPad::setAction(Action new_action) {
  action = new_action;
  pan_amount = VEC2(0, 0);
  zoom_amount = 0.f;
  zoom_ratio = 1.f;
  zoom_prev_ratio = 1.f;

  auto f0 = fingers[0];
  auto f1 = fingers[1];
  zoom_initial_distance = (f1.loc - f0.loc).Length();
}
