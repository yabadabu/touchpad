#ifndef INC_TOUCH_PAD_H_
#define INC_TOUCH_PAD_H_

#define _CRT_SECURE_NO_WARNINGS     // Don't warn about using fopen..
#define WIN32_LEAN_AND_MEAN         // Reduce the size of things included in windows.h
#define _USE_MATH_DEFINES           // M_PI M_PI_2
#define NOMINMAX

#include <Windows.h>
#include "geometry.h"

struct ISynAPI;
struct ISynDevice;
struct ISynPacket;

class TouchPad {

public:

  static const unsigned max_fingers = 4;

  enum Action {
    NONE        // 0 fingers on the pad
  , PANNING
  , ZOOMING
  };

  struct Finger {
    VEC2    loc;
    VEC2    delta;
    VEC2    appear_loc;
    VEC2    delta_from_appear;
    bool    is_present;
    int     first_appear;
    int     last_updated;
    Finger() : is_present(false) {}
  };
  Finger  fingers[ max_fingers ];
  int     nfingers;

  Action  action;
  VEC2    pan_amount;
  float   zoom_amount;

  TouchPad();
  bool start();
  bool update( );

protected:

  ISynAPI*    api;
  ISynDevice* device;
  ISynPacket* packet;
  long        rectLeft, rectBottom, rectRight, rectTop;

  int         frame_counter;
  int         prev_nfingers;

  float       zoom_ratio;       // ratio between (current / initial) distance two fingers locs
  float       zoom_prev_ratio;  // prev value
  float       zoom_initial_distance;

  HANDLE      event;

  void setAction(Action action);
};


#endif
