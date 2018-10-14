//===========================================================================
// Copyright (c) 1996-2012 Synaptics Incorporated. All rights reserved.
//
// RCS Header - Do not delete or modify.
//
// $RCSfile: SynComDefs.h,v $
// $Source: /cvs/software/Driver/SynCom/SynCom/SynComDefs.h,v $
//===========================================================================

// This file contains basic type definitions for the Synaptics SDK

#ifndef __SYNCOMDEFS_H_
#define __SYNCOMDEFS_H_

#ifndef __SYNCTRLLib_LIBRARY_DEFINED__

// This version of the Synaptics SDK requires a driver version of at least
// the following. The Synaptics driver version can be obtained using the 
// SP_DriverVersion property of the SynAPI interface.
enum SynRequiredVersion {
  SE_RequiredDriverVersion    = 0x070C0900,
  SE_RequiredSynCOMDllVersion = 0x070C0900,
};

// Property specifiers

// API property specifiers

enum SynAPIProperty {
  SP_First = 0x10000000,
  SP_Version,
  SP_SynComDllVersion = SP_Version,
  SP_MaxDevices,
  SP_DevicesPresent,
  SP_DriverVersion,
  SP_RequiredDriverVersion,
  SP_ForeignDevicesPresent,
  SP_APILast = SP_First + 0x100
};

// Device property specifiers

enum SynDeviceProperty {
  SP_DeviceFirst = SP_APILast,
  // Direct values (cached).
  SP_Handle,
  SP_DeviceType,
  SP_ConnectionType,
  
  SP_FWVersion,
  SP_Geometry,
  SP_SensorType,
  SP_ProductType,
  SP_ASICType = SP_ProductType + 2,
  SP_ReportRate = SP_ASICType + 4,
  SP_Gestures,
  SP_SecondaryGestures,
  SP_EdgeMotionOptions,
  SP_EdgeMotionSpeed,
  SP_MotionRotationAngle,

  SP_XDPI,
  SP_YDPI,
  SP_XLoSensor,
  SP_YLoSensor,
  SP_XHiSensor,
  SP_YHiSensor,
  SP_XLoRim,
  SP_YLoRim,
  SP_XHiRim,
  SP_YHiRim,
  SP_XLoBorder,
  SP_YLoBorder,
  SP_XHiBorder,
  SP_YHiBorder,
  SP_YLoBorderVScroll,
  SP_YHiBorderVScroll,
  SP_XLoWideBorder,
  SP_YLoWideBorder,
  SP_XHiWideBorder,
  SP_YHiWideBorder,
  SP_ZMaximum,
  SP_ZTouchThreshold,

  SP_TopLeftCornerWidth,
  SP_TopLeftCornerHeight,
  SP_TopRightCornerWidth,
  SP_TopRightCornerHeight,
  SP_BottomRightCornerWidth,
  SP_BottomRightCornerHeight,
  SP_BottomLeftCornerWidth,
  SP_BottomLeftCornerHeight,

  SP_TopLeftCornerAction,
  SP_TopRightCornerAction,
  SP_BottomRightCornerAction,
  SP_BottomLeftCornerAction,

  SP_LeftButtonAction,
  SP_RightButtonAction,
  SP_HasBothButtonFeature,  
  SP_MiddleButtonAction,
  SP_UpButtonAction,
  SP_DownButtonAction,
  SP_Ex1ButtonAction,
  SP_Ex2ButtonAction,
  SP_Ex3ButtonAction,
  SP_Ex4ButtonAction,
  SP_Ex5ButtonAction,
  SP_Ex6ButtonAction,
  SP_Ex7ButtonAction,
  SP_Ex8ButtonAction,

  SP_ExtendedButtons,

  // Boolean properties.
  SP_HasMiddleButton,
  SP_HasUpDownButtons,

  SP_IsMultiFingerCapable,
  SP_IsPenCapable,
  SP_IsVScroll,
  SP_IsHScroll,
  SP_IsWEMode,
  SP_IsLowReportRate,
  SP_IsHighReportRate,

  SP_IsTapEnabled,
  SP_IsDragEnabled,
  SP_IsDragLockEnabled,
  SP_IsCornerTapEnabled,
  SP_IsEdgeMotionEnabled,
  SP_IsEdgeMotionDragEnabled,
  SP_IsEdgeMotionMoveEnabled,

  SP_IsReleaseToSelectEnabled, 
  SP_IsMiddleTapToHelpEnabled, 
  SP_IsMiddleButtonBlockEnabled, 
  SP_IsPressureDragEnabled, 
  SP_Is3ButtonEnabled, 
  SP_IsPressureEdgeMotionEnabled, 
  SP_IsMiddleButtonLock, 

  // Button 4 & 5 support
  SP_Button4Action,
  SP_Button5Action,

  // Some specifiers have been removed, so we need to
  // create a gap in the codes to keep them consistent.
  // Somewhat vetted enhancements app properties.
  SP_DisablePDIfExtPresent = SP_Button5Action + 16,
  SP_VerticalScrollingFlags,
  SP_HorizontalScrollingFlags,

  // New COM specific properties
  SP_DisplayFlags,

  // Newer properties.
  SP_ModelId,
  SP_DisableState,
  SP_NumLEDs,
  SP_Pid,

  SP_IsBtnSensitivity,
  SP_BtnSensitivity,

  SP_IlluminationState,

  SP_HasMultiFingerReport,
  SP_IsMultiFingerReportEnabled,
  
  SP_IsClearPad,

  SP_HasMultiFingerPacketsGrouped,

  SP_PinchFlags,

  SP_Slider0Flags,
  SP_Slider1Flags,

  SP_VerticalScrollRegionWidth,
  SP_VerticalScrollSpeed,
  SP_HorizontalScrollRegionHeight,
  SP_HorizontalScrollSpeed,
  SP_GlobalScrollingModes,
  SP_PalmThreshold,

  SP_2FVerticalScrollingFlags,
  SP_2FHorizontalScrollingFlags,
  SP_SuppressTapping,

  SP_2FingerVerticalScrollSpeed,
  SP_2FingerHorizontalScrollSpeed,
  SP_HasCoverGesture,

  SP_IsFingerStateReportEnabled,
  
  SP_IsEdgeTapFilteringEnabled,
  SP_IsOriginationZoneEnabled,
  SP_IsButtonTapFilteringEnabled,
  SP_EdgeTapZoneTopLeft,
  SP_EdgeTapZoneWidthHeight,
  SP_ButtonTapZoneTopLeft,
  SP_ButtonTapZoneWidthHeight,
  SP_OriginationZoneTopLeft,
  SP_OriginationZoneWidthHeight,

  SP_IlluminationEnabledState,
  SP_IlluminationBrightnessState,

  SP_2FingerTapAction,

  SP_3FingerStrokeUp,
  SP_3FingerStrokeDown,

  SP_TwoFingerDoubleTapState,
  SP_HasTwoFingerDoubleTap,


  SP_ChiralScrolling,

  SP_1FingerPressButtonAction,
  SP_2FingerPressButtonAction,
  SP_3FingerPressButtonAction,

  SP_WorkspaceSwitch,


  SP_EnableActiveStick,
  SP_ActiveStickTimeOut,

  SP_IsTheaterPad,

  SP_DeviceMode,

  SP_TouchPadLightingEnabled,

  SP_ProfileDirtyFlag,
  SP_BoardNumber,
  SP_SaveDeviceDisableState,

  SP_NumMaxReportedFingers,

  SP_SSLeftButtonZoneFlags,
  SP_SSLeftButtonZoneL,
  SP_SSLeftButtonZoneR,
  SP_SSLeftButtonZoneT,
  SP_SSLeftButtonZoneB,
  SP_SSRightButtonZoneFlags,
  SP_SSRightButtonZoneL,
  SP_SSRightButtonZoneR,
  SP_SSRightButtonZoneT,
  SP_SSRightButtonZoneB,
  SP_SSMiddleButtonZoneFlags,
  SP_SSMiddleButtonZoneL,
  SP_SSMiddleButtonZoneR,
  SP_SSMiddleButtonZoneT,
  SP_SSMiddleButtonZoneB,

  SP_MultiFingerGestures,
  SP_IsGroupReportEnabled,
  SP_HasPacketGroupProcessing,
  SP_TouchPadSubType,
  SP_IsLEDZoneDoubleTapEnableDisableTPEnabled,

  SP_NumForceSensors,

  SP_AcquireUnacquireGestures,

  SP_DeviceStatus,

  SP_DeviceLast = SP_DeviceFirst + 0x200
};

enum SynPacketProperty {
  SP_PacketFirst = SP_DeviceLast,
  SP_AssociatedDeviceHandle,
  SP_SequenceNumber,
  SP_TimeStamp,
  SP_XRaw,
  SP_ZXRaw = SP_XRaw,
  SP_YRaw,
  SP_ZRaw,
  SP_ZYRaw,
  SP_W,
  SP_X,
  SP_Y,
  SP_Z,
  SP_XDelta,
  SP_YDelta,
  SP_ZDelta,
  SP_XMickeys,
  SP_YMickeys,
  SP_AnachronisticState,
  SP_FingerState,
  SP_ExtendedState,
  SP_ButtonState,
  SP_ExtraFingerState,
  SP_WheelDelta,

  SP_FingerIndex,
  SP_FilterIndex,
  SP_PacketGroupNumber,
  SP_SubType,
  SP_ExtendedState2,
  SP_ZForce,
  SP_ZImage,

  //when adding new properties make sure to update
  //CSynPacket::Copy function

   SP_PacketLast = SP_PacketFirst + 0xE0
};

enum SynGroupProperty {
  SP_GroupFirst = SP_PacketLast,
  
  SP_DeviceHandle,
  SP_GroupNumber,
  SP_ForceRaw,
  SP_Force,     // grams

  //when adding new properties make sure to update
  //CSynGroup::Copy function

  SP_GroupLast = SP_GroupFirst + 0x20
};

// Display property specifiers

enum SynDisplayProperty {
  SP_DisplayFirst = SP_GroupLast,
  SP_BackLightState,
  SP_DisplayRows,
  SP_DisplayColumns,
  SP_DisplayOwned,
  SP_BackLightOnOffOnce,
  SP_DisplayLast = SP_DisplayFirst + 0x100
};

// String properties

// API strings.

enum SynAPIStringProperty {
  SP_StringFirst = SP_DisplayLast,
  SP_APIStringFirst = SP_StringFirst,
  SP_VersionString,
  SP_APIStringLast = SP_APIStringFirst + 0x100
};

// Device strings.

enum SynDeviceStringProperty {
  SP_DeviceStringFirst = SP_APIStringLast,
  SP_ModelString,
  SP_PnPID,
  SP_ShortName,
  SP_ProductSubclassConfigKey,
  SP_DeviceStringLast = SP_DeviceStringFirst + 0x100,
  SP_StringLast = SP_DeviceStringLast
};

// Actions are issued by kernel mode driver.

enum SynNonPlugInAction {
  SE_ActionNone       = 0xFFFFFF00, // Generate no gestures
  SE_ActionPrimary    = 0xFFFFFF01, // Generate primary gestures
  SE_ActionSecondary  = 0xFFFFFF02, // Generate secondary gestures
  SE_ActionAuxilliary = 0xFFFFFF04, // Generate auxiliary gestures
  SE_ActionButton4    = 0xFFFFFF08, // Generate button 4 gestures
  SE_ActionButton5    = 0xFFFFFF10, // Generate button 5 gestures
  SE_ActionMask       = 0x000000FF
};

// Plugin action id

enum SynPlugInAction {
  SE_StartButton        = 0,
  SE_MinimizeApp        = 1,
  SE_RestoreApp         = 2,
  SE_MaximizeApp        = 3,
  SE_RunApp             = 5,
  SE_ScrollLock         = 6,
  SE_ScrollUp           = 7,
  SE_ScrollDown         = 8,
  SE_ScrollLeft         = 9,
  SE_ScrollRight        = 10,
  SE_NoAction           = 11,
  SE_Gesture            = 12,
  SE_DoubleClick        = 13,
  SE_BrowseBack         = 14,
  SE_BrowseForward      = 15,
  SE_BrowseURL          = 16,
  SE_BrowseReload       = 17,
  SE_BrowseStop         = 18,
  SE_PageUp             = 19,
  SE_PageDown           = 20,
  SE_MouseCP            = 21,
  SE_CloseApp           = 22,
  SE_ArrowUp            = 23,
  SE_ArrowDown          = 24,
  SE_ArrowLeft          = 25,
  SE_ArrowRight         = 26,
  SE_StickScroll        = 27,
  SE_KeyboardMacro      = 28,
  SE_StickMagnify       = 30,

  SE_AVPlay             = 31,
  SE_AVStop             = 32,
  SE_AVBack             = 33,
  SE_AVForward          = 34,
  SE_ToggleDeviceOnOff  = 35,
  SE_Launch_Email       = 36,
  SE_Launch_Browser     = 37,
  SE_Print              = 38,
  SE_ButtonModeOn       = 39,
  SE_ButtonModeOff      = 40,
  SE_ButtonToggle       = 71,
  SE_VolUp              = 41,
  SE_VolDown            = 42,
  SE_VolMute            = 43,
  SE_Launch_MediaPlayer = 44,
  SE_Record             = 45,
  SE_WindowsSearch      = 46,
  SE_ScrollLockMomentary = 47,
  SE_ButtonModeMomentary = 48,
  SE_ChangeRegistryValue = 49,
  SE_SendWindowMessage  = 50,
  SE_BrowserHome        = 51,
  SE_NewMailMessage     = 52,
  SE_GetSendMail        = 53,
  SE_ReplyToMail        = 54,
  SE_ForwardMail        = 55,
  SE_MouseMacro         = 57,
  SE_MinimizeAllWindows = 56,
  SE_Escape             = 58,
  SE_Enter              = 59,

  SE_WmAppVolumeUp      = 60,
  SE_WmAppVolumeDown    = 61,
  SE_WmAppVolumeMute    = 62,

  SE_MSExcelAppRotateCW  = 63,
  SE_MSExcelAppRotateCCW = 64,
  SE_MSWordAppRotateCW   = 65,
  SE_MSWordAppRotateCCW  = 66,
  SE_MSPowerPointAppRotateCW  = 67,
  SE_MSPowerPointAppRotateCCW = 68,
  SE_BlackScreen = 69,
  SE_LockComputer = 70,
  SE_ActivateScrybe = 72,
};


// For use with ISynAPI::FindDevice

// The various types of devices.
enum SynDeviceType {
  SE_DeviceAny,
  SE_DeviceUnknown = SE_DeviceAny,
  SE_DeviceMouse,
  SE_DeviceTouchPad,
  SE_DeviceWheelMouse,
  SE_DeviceIBMCompatibleStick,
  SE_DeviceStyk,
  SE_DeviceFiveButtonWheelMouse,
  SE_DevicecPad,
  SE_DeviceControlBar,
  SE_DeviceRGBControlBar,
  SE_DeviceUnAuthenticatedTouchPad,
  SE_DeviceNGIPS2Legacy,
  SE_DeviceTouchDisplay = SE_DevicecPad,
  SE_DeviceTouchScreen = SE_DeviceTouchPad,
};

// The various ways that devices may be connected.
enum SynConnectionType {
  SE_ConnectionAny,
  SE_ConnectionCOM,
  SE_ConnectionPS2,
  SE_ConnectionUSB,
  SE_ConnectionSMB,
  SE_ConnectionI2C,
  SE_ConnectionUnknown = SE_ConnectionAny
};

// Interpret notification reasons returned by ISynAPI::GetEventParameter
enum SynNotificationReason
{
  SE_Configuration_Changed = 0x00000001,
  SE_DeviceRemoved = 0x00000002,
  SE_DeviceAdded = 0x00000004,
  SE_InternalPS2DeviceDisabled = 0x00000008,
  SE_InternalPS2DeviceInCompatibilityMode = 0x00000010,
  SE_ForeignDeviceChanged = 0x00000100,
  SE_DeviceModeChanged = 0x00000400,
  // Specialized Enhancements App notifications are not passed through
  // in this release.
};

// Interpretation of SP_ButtonState, each bit indicates a particular button.
enum SynButtonFlags {
  SF_ButtonLeft             = 0x00000001,
  SF_ButtonRight            = 0x00000002,
  SF_ButtonMiddle           = 0x00000004,
  SF_ButtonUp               = 0x00000010,
  SF_ButtonDown             = 0x00000020,
  SF_Button4                = 0x00000040,
  SF_Button5                = 0x00000080,
  SF_ButtonExtended1        = 0x00000100,
  SF_ButtonExtended2        = 0x00000200,
  SF_ButtonExtended3        = 0x00000400,
  SF_ButtonExtended4        = 0x00000800,
  SF_ButtonExtended5        = 0x00001000,
  SF_ButtonExtended6        = 0x00002000,
  SF_ButtonExtended7        = 0x00004000,
  SF_ButtonExtended8        = 0x00008000,
  SF_ButtonExtendedAll      = 0x0000FF00,
  SF_ButtonReportedLeft     = 0x00010000,
  SF_ButtonReportedRight    = 0x00020000,
  SF_ButtonReportedMiddle   = 0x00040000,
  SF_ButtonReported4        = 0x00080000,
  SF_ButtonReported5        = 0x01000000,
  SF_ButtonVirtualLeft      = 0x00100000,
  SF_ButtonVirtualRight     = 0x00200000,
  SF_ButtonVirtualMiddle    = 0x00400000,
  SF_ButtonVirtual4         = 0x00800000,
  SF_ButtonVirtual5         = 0x02000000,
  SF_ButtonAnyVirtual       = 0x02F00000,
  SF_ButtonAnyReported      = 0x010F0000,
  SF_ButtonAnyPhysical      = 0x0000FFFF,
  SF_ButtonAnyExtended      = 0x0000FF00,
  SF_ButtonAny              = 0x03FFFFFF
};

enum SynWheelFlags {
  SF_WheelHorizontal        = 0x00000001,
  SF_WheelSmall             = 0x00000002,
};

// Interpretation of vertical and horizontal scrolling flags.
enum SynScrollingFlags { 
  SF_ScrollingEnabled       = 0x00000001,
  SF_ScrollingEdgeMotion    = 0x00000002,
  SF_ScrollingMomentum      = 0x00000004,
  SF_ScrollingUnderPointer  = 0x00000008,
  SF_ScrollingReversed      = 0x00000040,
  SF_ScrollingAxisSwapped   = 0x00000080
};

enum SynHardwareBroadcastFlags { 
  SF_Detect,
  SF_Configure
};

enum SynPersistFlags {
  SF_PersistMachine
};

enum SynFingerFlags {
  SF_FingerProx           = 0x00000200, // Z exceeds proximity threshold.
  SF_FingerTouch          = 0x00000400, // Z exceeds touch threshold.
  SF_FingerHeavy          = 0x00000800, // Z exceeds heavy touch threshold.
  SF_FingerPress          = 0x00001000, // "Press hard" gesture in progress.
  SF_FingerPresent        = 0x00002000, // Finger present on TouchPad.
  SF_FingerPossTap        = 0x00004000, // Early stroke, tap still possible.
  SF_FingerStylus         = 0x00008000, // Stylus present on TouchPad.

  SF_FingerTap            = 0x00010000, // Tap gesture in progress.
  SF_FingerDrag           = 0x00020000, // Drag gesture in progress.
  SF_FingerDragLock       = 0x00040000, // Drag-lock gesture in progress.
  SF_FingerPrimGest       = 0x00080000, // Primary gesture in progress.
  SF_FingerSecGest        = 0x00100000, // Secondary gesture in progress.
  SF_FingerAuxGest        = 0x00200000, // Auxiliary gesture in progress.
  SF_FingerMotion         = 0x00400000, // Motion deltas are non-zero.
  SF_FingerMoving         = 0x00800000, // Significant finger motion.

  SF_FingerTopLeftTap     = 0x01000000, // Tap in zone in progress.
  SF_FingerTopRightTap    = 0x02000000, // Tap in zone in progress.
  SF_FingerBottomLeftTap  = 0x04000000, // Tap in zone in progress.
  SF_FingerBottomRightTap = 0x08000000, // Tap in zone in progress.

  // Flags for multi finger pads
  SF_FingerTap2           = 0x40000000, // 2 finger tap
  SF_FingerTap3           = 0x80000000, // 3+ finger tap

  SF_FingerAllCorner      = 0x0F000000, // Corner gestures.
  SF_FingerAllTap         = 0xCF000000, // Any and all taps
  SF_FingerAsButton       = 0xCF380000, // Finger state as buttons
  SF_FingerAllGest        = 0xCF3F1000, // Any and all gestures.
  SF_FingerAll            = 0xCFFFFE00  // All flags
};

enum SynStateFlags {
  SF_StateFinger = 0x00002000
};

enum SynExtendedStateFlags {
  SF_StateScrollFinger              = 0x00000100,  // Finger in scroll area
  SF_Momentum                       = 0x00010000,  // Momentum motion
  SF_NearKeyPress                   = 0x00020000,  // Key Press event since last packet
  SF_NearHighPalmW                  = 0x00200000,  // High Palm W event since last packet
};

// Note: these masks and values correspond to the SP_ExtraFingerState item.
enum SynExtendedFingerFlags {
  SF_CurrentFingerCountMask         = 0x000000FF, // Number of fingers currently on the pad
  SF_StrokeFingerCountMask          = 0x0000FF00, // Max number of fingers during this stroke
  // Note: the following 2 masks are only relevant for PS/2 image sensors
  SF_PrimaryFingerContactIDMask     = 0x00FF0000, // The finger contact ID for finger index 0
  SF_SecondaryFingerContactIDMask   = 0xFF000000, // The finger contact ID for finger index 1
  SF_CurrentFingerCountBit          = 0,
  SF_StrokeFingerCountBit           = 8,
  SF_PrimaryFingerContactIDBit      = 16,
  SF_SecondaryFingerContactIDBit    = 24
};

// define the same value as defined in TPIOCTL.h
enum SynDisplayFlags {
  SF_DisplayNone,
  SF_DisplayPresent = 0x00000001
};

enum SynFlushMethod {
  SE_FlushSynchronous,
  SE_FlushAsynchronous
};

enum SynDisplayAquisitionMethod {
  SE_AcquireCooperative,
  SE_AcquireExclusive,
  SE_AcquirePassive
};

// Interpret notification messages returned by ISynDisplay::GetEventParameter
enum SynDisplayMessage
{
  SE_AcquisitionLost        = 0x00000001,
  SE_AcquisitionGained      = 0x00000002,
  SE_BackgroundImageChanged = 0x00000003,
};

// Use with SP_Gestures to enable or disable certain gestures.
enum SynGestures {
  SF_GestureTap              = 0x00000001, // Enable tap gestures.
  SF_GesturePressToSelect    = 0x00000001, // Enable press to select gestures.
  SF_GestureDrag             = 0x00000002, // Enable drag gestures.
  SF_GestureDragLock         = 0x00000004, // Enable drag lock.
  SF_GesturePressureDrag     = 0x00000008, // Press-to-drag.
  SF_GestureReleaseToSelect  = 0x00000010, // Enable Release-to-Select
  SF_GestureMiddleTapToHelp  = 0x00000020, // 3-middle button taps to help
  SF_GestureMiddleButtonLock = 0x00000040, // Middle Button Lock state
  SF_GestureMiddleButtonBlock= 0x00000080, // Middle Button Block state
  SF_GestureTapSuppress      = 0x00000100, // Enable tap gesture suppress to OS.
  SF_GestureTapMask          = 0x00000007, // Mask for tap gestures.
  SF_GestureAll              = 0x000001FF
};

// Use with SP_*Action properties to associate an action with a particular
// device event.
enum SynActions {
  SF_ActionNone       = 0x00000000, // Generate no gestures
  SF_ActionPrimary    = 0x00000001, // Generate primary gestures
  SF_ActionSecondary  = 0x00000002, // Generate secondary gestures
  SF_ActionAuxilliary = 0x00000004, // Generate auxiliary gestures
  SF_ActionAll        = 0x00000007
};

enum SynAcquisitionFlags { // Use with SynDevice::Acquire
  SF_AcquireAll           = 0x00000000, // Acquire both motion and buttons.
  SF_AcquireMotionOnly    = 0x00000001, // Let button changes through to OS.
  SF_AcquireWheelOnly     = 0x00000002, // Let buttons and motion through to OS. 
  SF_AcquireTapAndMotionOnly  = 0x00000003  // Let physical button through to OS.
};

enum SynIlluminationState {
  SE_Illumination_Off,              // Turn LED off
  SE_Illumination_On,               // Turn LED on
};

enum SynIlluminationGroup {
  SE_Illumination_All_LEDs = 0,         // Group of all LEDs
  SE_Illumination_Pulsing_LED = 1,      // Group of pulsing LED(s)
  SE_Illumination_Button_LED = 2,       // Group of button LED(s)
  SE_Illumination_Group_Offset = 8,     // Offset bits when passing with "state"
  SE_Illumination_Group_Mask = 0xff00,  // Mask for getting the LED group setting
};

enum SynIlluminationEnabledState {
  SE_Illumination_Disabled = 0,         // Disable LED
  SE_Illumination_Enabled = 1,          // Enable LED
  SE_Illumination_State_Mask = 0xff,    // Mask for getting the state setting
};

enum SynIlluminationBrightnessState {
  SE_Illumination_Half_Brightness = 1,  // Half brightness
  SE_Illumination_Full_Brightness = 2,  // Full brightness
};

enum SynValidateProperty { // Use with SynDevice::ValidateProperty
  SP_Read          = 0x00000000, // Validate read attribute
  SP_Write         = 0x00000001, // Validate write attribute        
  SP_ReadWrite     = 0x00000002  // Validate read and write attributes
};

enum SynNotificationFromApps {
  SF_Workspace_Leave = 1,
  SF_Workspace_Enter = 2,
};

enum SynDeviceMode {
  SE_ModePointing = 0,          // Device is in pointing mode
  SE_ModeButton = 1,            // Device is in button mode
};

// Zone ID
enum SynZoneID {
  SE_ZoneID_None           = 0,
  SE_ZoneID_TopLeft        = 0x01000000,                           // TP_PacketState_TopLeftTap
  SE_ZoneID_TopRight       = 0x02000000,                           // TP_PacketState_TopRightTap
  SE_ZoneID_BottomLeft     = 0x04000000,                           // TP_PacketState_BottomLeftTap
  SE_ZoneID_BottomRight    = 0x08000000,                           // TP_PacketState_BottomRightTap
  SE_ZoneID_LeftButton     = 0x00000001,                           // TP_PacketState_LeftSw
  SE_ZoneID_RightButton    = 0x00000002,                           // TP_PacketState_RightSw
  SE_ZoneID_MiddleButton   = 0x00000004,                           // TP_PacketState_MiddleSw
  SE_ZoneID_UpButton       = 0x10000000,                           // TP_PacketState_UpSw
  SE_ZoneID_DownButton     = 0x20000000,                           // TP_PacketState_DownSw
  SE_ZoneID_3FingerPress   = 0x00080000,
  SE_ZoneID_OmniModeCorner = 0x00000800,                           // TP_ZoneID_ExButton4
};

enum SynProfileCommand {
  SE_ProfileLoad = 1,
  SE_ProfileSave,
  SE_ProfileCheckDirtyFlag,
};

enum SynProfileCommandResult {
  SE_ProfileCommandOK = 1,
  SE_ProfileCommandFailed,
  SE_ProfileUnknownCommand,
  SE_ProfileReadError,
  SE_ProfileWriteError,
  SE_ProfileIsDirty,
  SE_ProfileIsNotDirty,
};

enum SynGestureActionNotifyFlag {
  SF_GestureActionNotify_None       = 0,
  SF_GestureActionNotify_Scroll     = 0x00000001,
  SF_GestureActionNotify_Zoom       = 0x00000002,
  SF_GestureActionNotify_Rotate     = 0x00000004,
  SF_GestureActionNotify_Single     = 0x00000010,
};

enum SynGestureActionNotifyFlagEx {
  SF_GestureActionNotify_AlwaysNotified_Disabled  = 0,
  SF_GestureActionNotify_AlwaysNotified_Enabled   = 0x00000001,
};

enum SynGestureActionEvent {
  SE_GestureAction_Undefined   = -1,
  SE_Cancel_Gesture            = 0,
  SE_Gesture_Scroll            = 1000,
  SE_Gesture_Zoom              = 1001,
  SE_Gesture_Rotate            = 1002,
  SE_Action_ScrollUp           = 1,
  SE_Action_ScrollDown         = 2,
  SE_Action_ScrollLeft         = 3,
  SE_Action_ScrollRight        = 4,
  SE_Action_PageUp             = 5,
  SE_Action_PageDown           = 6,
  SE_Action_ArrowUp            = 7,
  SE_Action_ArrowDown          = 8,
  SE_Action_ArrowLeft          = 9,
  SE_Action_ArrowRight         = 10,
  SE_Action_PlayPause          = 11,
  SE_Action_Stop               = 12,
  SE_Action_Next               = 13,
  SE_Action_Previous           = 14,
};

enum SynGestureActionSubType {
  SF_GestureActionSubType_None               = 0,
  SF_GestureActionSubType_Scroll_Horizontal  = 0x00000001,
  SF_GestureActionSubType_Scroll_Vertical    = 0x00000002,
};

// Interpretation of SP_MultiFingerGestures, each bit indicates a particular gesture.
enum SynMultiFingerGestureFlags {
  SF_UnacquireAllGestures   = 0x00000000,
  SF_OneFingerScrolling     = 0x00000001, // 1 finger scrolling gesture 
  SF_TwoFingerScrolling     = 0x00000002, // 2 finger scrolling gesture 
  SF_TwoFingerFlick         = 0x00000004, // 2 finger flick gesture 
  SF_Rotate                 = 0x00000008, // rotate gesture 
  SF_Pinch                  = 0x00000010, // pinch gesture 
  SF_ThreeFingerFlick       = 0x00000020, // 3 finger flick gesture 
  SF_ThreeFingerPress       = 0x00000040, // 3 finger flick gesture 
  SF_FourFingerFlick        = 0x00000080, // 4 finger flick gesture 
  SF_NotifySingleAction     = 0x00000100, 
  SF_TwoFingerTap           = 0x00000200, // two fingers tap.
  SF_ThreeFingerTap         = 0x00000400, // three fingers tap.
  SF_FourFingerTap          = 0x00000800, // four fingers tap.
  SF_MultiFingerGestures    = 0x00001000,
  SF_EdgeSwipeTop           = 0x00002000,
  SF_EdgeSwipeLeft          = 0x00004000,
  SF_EdgeSwipeRight         = 0x00008000,
  SF_EdgeSwipeBottom        = 0x00010000,
  SF_MultiFingerGesturesMask = 0x0000FFFF,
};

enum SynTouchPadSubType {
  SE_TouchPad               = 0x00000000,   // Regular TouchPad
  SE_ClickPad               = 0x00000001,   // ClickPad
  SE_LuxPad                 = 0x00000002
};

#endif
#endif

