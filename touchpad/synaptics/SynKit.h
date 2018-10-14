//===========================================================================
// Copyright (c) 1996-2007 Synaptics Incorporated. All rights reserved.
//
// RCS Header - Do not delete or modify.
//
// $RCSfile: SynKit.h,v $
// $Source: /cvs/software/Driver/SynCom/SynCom/SynKit.h,v $
//===========================================================================

// Public header file for access to the Synaptics COM API/Toolkit.

#ifndef __SYNKIT_H
#define __SYNKIT_H

#ifdef SYNA_LINUX
#include "Windows.h"
#include "Linux/SynCom.h"
#include "SynError.h"
#include "synwraps.h"
#else

#if !defined(SYN_INCLUDE_NO_CONTROLS) && (!defined(_MFC_VER) || defined(SYN_INCLUDE_CONTROLS))
// Include controls by default only for non-MFC programs.
// MFC programs likely will import the type library and add controls to dialogs which will
// automatically create MFC wrapper classes for the  controls.
// If controls are included, inlcude them first as the enumerations are in the type library.
#include "SynCtrl.h"
#endif

#include "SynCom.h"
#ifndef SYNA_LINUX
#ifndef SKIP_INITGUID
#include <initguid.h>
#endif
#include "SynCom2.h"
DEFINE_GUID(IID__ISynGestureActionEvents, 0x513F1384,0x1B4E,0x4533,0x97,0x5D,0x42,0xC7,0x87,0x66,0x8C,0x08);
#endif
#include "SynError.h"
#include "SynWraps.h"

STDAPI SynCreateAPI(ISynAPI **ppAPI);

// Declare GUIDs here so that controls can be imported into MFC even if
// SYN_INCLUDE_NO_CONTROLS has been defined. 
// Define SYN_INCLUDE_NO_CONTROLS to allow classwizard to reuse the ISynXXX 
// names when using MFC to import the synctrl.dll class library.
class DECLSPEC_UUID("F418EBA0-6A10-4482-AC2B-2D10C807073A") SynAPICtrl;
class DECLSPEC_UUID("a220a2df-406f-4d68-9b62-995669ae0c92") SynPacketCtrl;
class DECLSPEC_UUID("856BEFCE-E5DD-47bf-B274-B17FA9DFE7D2") SynGroupCtrl;
class DECLSPEC_UUID("2060435E-AB52-49E1-A2EA-5D31645887CF") SynDeviceCtrl;

#endif //SYNA_LINUX

#endif
