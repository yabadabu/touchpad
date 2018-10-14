//===========================================================================
// Copyright (c) 1996-2007 Synaptics Incorporated. All rights reserved.
//
// RCS Header - Do not delete or modify.
//
// $RCSfile: SynError.h,v $
// $Source: /cvs/software/Driver/SynCom/SynCom/SynError.h,v $
//===========================================================================

//---------------------------------------------------------------------------
// SynError.h
// Possible Synaptics COM API return values.
//---------------------------------------------------------------------------

#ifndef __SYNERROR_H
#define __SYNERROR_H

#define SYN_OK ((HRESULT)0x00000000L)

#define SYN_FALSE ((HRESULT)0x00000000L)
#define SYN_TRUE ((HRESULT)0x00000001L)

#define SYNE_HANDLE E_HANDLE
#define SYNE_FAIL E_FAIL
#define SYNE_INVALIDARG E_INVALIDARG
#define SYNE_OUTOFMEMORY E_OUTOFMEMORY
#define SYNE_ACCESSDENIED E_ACCESSDENIED
#define SYNE_NOTIMPL E_NOTIMPL
#define SYNE_SEQUENCE E_UNEXPECTED

#define SYNE_NOTFOUND \
  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, ERROR_FILE_NOT_FOUND)

#define SYNE_SYNTPENH_NOTFOUND \
  MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WIN32, ERROR_FILE_NOT_FOUND)

#endif

