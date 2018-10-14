//===========================================================================
// Copyright (c) 1996-2012 Synaptics Incorporated. All rights reserved.
//
// RCS Header - Do not delete or modify.
//
// $RCSfile: synwraps.h,v $
// $Source: /cvs/software/Driver/SynCom/SynCom/synwraps.h,v $
//===========================================================================

// Public header file for access to the Synaptics COM API/Toolkit.

#ifndef __SYNWRAPS_H
#define __SYNWRAPS_H

#ifdef SYNA_LINUX // Linux requires concrete classes
#include "bstr.h"
#include "SynAPI.h"
#include "LinuxSynDevice.h"
#include "SynPacket.h"
#include "SynGroup.h"
#define __ISynDevice CLinuxSynDevice
#define __ISynAPI    CSynAPI
#define __ISynPacket CSynPacket
#define __ISynGroup  CSynGroup
#else
#include <comdef.h>
#define __ISynAPI    ISynAPI
#define __ISynDevice ISynDevice
#define __ISynPacket ISynPacket
#define __ISynGroup  ISynGroup
#endif

//const LPTSTR pszSCRYBE_PROFILES_PATH = TEXT("Software\\Synaptics\\Scrybe\\Profiles");
//const LPTSTR pszSCRYBE_SETTINGS_WINDOW_NAME = TEXT("ScrybeSettingsWindowName");

// Definitions used for Synaptics Gesture API
//const LPTSTR pszSYN_GESTURE_MSG = TEXT("SYN_GESTURE-{96E11DAB-6AE3-48c6-A1CF-391D8C5F2A17}");

typedef struct
{
  SynProfileCommand Command;
  SynProfileCommandResult Result;
  TCHAR szProfileDescription[1024];
  TCHAR szProfileGuidString[48];
} SCopyProfileData;

typedef struct _SSynGestureActionEventData
{
  DWORD dwGestureSubType;
  LONG lGestureActionValue;
  LONG lGestureActionValueReserved;
} SSynGestureActionEventData;

template <class Object, class Interface> class SynWrap
{
public:
  SynWrap()
  {
#ifdef SYNA_LINUX
    m_pInternal = new Interface();
#else
    m_pInternal = 0; // Fault reliably if a SynWrap can't be created.

    DoThreadCoInitialize();
    CoCreateInstance(_uuidof(Object), 0, CLSCTX_SERVER,
      _uuidof(Interface), (void **) &m_pInternal);
#endif
  }

  SynWrap(LPCOLESTR psProgID)
  {
#ifdef SYNA_LINUX
    m_pInternal = new Interface();
#else
    CLSID clsid;
    m_pInternal = 0; // Fault reliably if a SynWrap can't be created.

    DoThreadCoInitialize();
    CLSIDFromProgID( psProgID, &clsid );
    CoCreateInstance(clsid, 0, CLSCTX_SERVER,
      _uuidof(Interface), (void **) &m_pInternal);
#endif
  }

  SynWrap(Interface *pDevice)
  {
    m_pInternal = pDevice;
    if (m_pInternal)
      pDevice->AddRef();
  }

  ~SynWrap()
  {
    if (m_pInternal)
      m_pInternal->Release();
#ifdef SYNA_LINUX
    delete m_pInternal;
#endif
  }

  operator Interface *() { return m_pInternal; }

  Interface *operator->() { return m_pInternal; }


  LONG GetLongProperty(LONG lSpecifier) const
  {
    LONG lProperty = 0;

    if (m_pInternal)
      m_pInternal->GetProperty(lSpecifier, &lProperty);
    return lProperty;
  }

  bool SetLongProperty(LONG lSpecifier, LONG lProperty) 
  {
    return  (m_pInternal && 
      m_pInternal->SetProperty(lSpecifier, lProperty) == S_OK);    
  }

  _bstr_t GetStringProperty (LONG lSpecifier)
  {
    char buf[256];
    LONG ulSize = sizeof(buf);
    buf[0] = 0;

    if (m_pInternal)
      m_pInternal->GetStringProperty(lSpecifier, (unsigned char *)buf, &ulSize);
    return _bstr_t(buf);
  }

  Interface *m_pInternal;

private:
  void DoThreadCoInitialize()
  {
#ifndef SYNA_LINUX
    static DWORD s_dwTlsIndex = TlsAlloc();
    if (!TlsGetValue(s_dwTlsIndex)) { // These are initted to NULL for each thread.
      CoInitialize(0);
      TlsSetValue(s_dwTlsIndex, (PVOID)1);
    }
#endif
  }
};

template <class Object, class Interface, class Events> class SynWrapEvents :
  public SynWrap<Object, Interface>,
  public Events
{
public:
  SynWrapEvents() { }
  SynWrapEvents(LPCOLESTR psProgID) : SynWrap<Object, Interface>(psProgID){ }
  SynWrapEvents(Interface *pDevice) : SynWrap<Object, Interface>(pDevice) { }
  ~SynWrapEvents() { }

  HRESULT Activate()
  {
    HRESULT res = SYNE_FAIL;
    if (this->m_pInternal)
      res = this->m_pInternal->SetSynchronousNotification(this);

    return res;
  }

  HRESULT Deactivate()
  {
    HRESULT res = SYNE_FAIL;
    if (this->m_pInternal)
      res = this->m_pInternal->SetSynchronousNotification(0);

    return res;
  }

  HRESULT STDMETHODCALLTYPE OnSynAPINotify(LONG /* lReason */) { return 0; }
  HRESULT STDMETHODCALLTYPE OnSynDevicePacket(LONG /* lSequence */) { return 0; }
  HRESULT STDMETHODCALLTYPE OnSynDisplayMessage(LONG /* lMessage */) { return 0; }
};


#ifndef SYNA_LINUX
#pragma warning(disable:4100)
#endif

//Dummy classes used in case if no connection can be established 
//to the COM server. These are needed because the connection to COM
//is done in constructor thus its failure cannot be tracked

class CDummySynAPI : public ISynAPI
{
public:
  CDummySynAPI(){}
  ~CDummySynAPI(){}

  virtual HRESULT STDMETHODCALLTYPE QueryInterface( 
    REFIID riid, void  **ppvObject){return E_UNEXPECTED;}

  virtual ULONG STDMETHODCALLTYPE AddRef( void){return 1;}

  virtual ULONG STDMETHODCALLTYPE Release( void){return 1;}


  virtual  HRESULT STDMETHODCALLTYPE Initialize(void){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE FindDevice(LONG lConnectionType,
    LONG lDeviceType, LONG *ulHandle){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE CreateDevice( 
    LONG lHandle, ISynDevice **ppDevice){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE GetProperty( 
    LONG lSpecifier, LONG *pValue){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE GetStringProperty( 
    LONG lSpecifier, unsigned char *pBuffer, LONG *ulBufLen){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE SetProperty( 
    LONG lSpecifier, LONG lValue){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE SetEventNotification( 
    HANDLE hEvent){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE GetEventParameter( 
    LONG *lParameter){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE PersistState( 
    LONG lStateFlags){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE RestoreState( 
    LONG lStateFlags){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE HardwareBroadcast( 
    LONG lAction){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE SetSynchronousNotification( 
    _ISynAPIEvents *pCallbackInstance){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE ForwardSystemMessage( 
    UINT uMsg, WPARAM wParam, LPARAM lParam){return E_UNEXPECTED;}

  virtual  HRESULT STDMETHODCALLTYPE FindDeviceEx(LONG lConnectionType,LONG lDeviceType,
    LONG *ulHandle, BOOL bMatchConnectionType, BOOL bMatchDeviceType) { return E_UNEXPECTED; }
  
};



class CDummySynDevice : public ISynDevice
{
public:
  CDummySynDevice(){}
  ~CDummySynDevice(){}

  virtual HRESULT STDMETHODCALLTYPE QueryInterface( 
    REFIID riid, void  **ppvObject){return E_UNEXPECTED;}

  virtual ULONG STDMETHODCALLTYPE AddRef( void){return 1;}

  virtual ULONG STDMETHODCALLTYPE Release( void){return 1;}

  virtual HRESULT STDMETHODCALLTYPE GetProperty( 
    LONG lSpecifier,
    LONG *pValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE GetBooleanProperty( 
    LONG lSpecifier,
    LONG *pValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE GetStringProperty( 
    LONG lSpecifier,
    unsigned char *pBuffer,
    LONG *ulBufLen){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetProperty( 
    LONG lSpecifier,
    LONG lValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetEventNotification( 
    HANDLE hEvent){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE CreatePacket( 
    ISynPacket **ppPacket){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE LoadPacket( 
    ISynPacket *pPacket){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE ForceMotion( 
    LONG lDeltaX,
    LONG lDeltaY,
    LONG lButtonState){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE ForcePacket( 
    ISynPacket *pPacket){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE Acquire( 
    LONG lFlags){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE Unacquire( void){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE CreateDisplay( 
    ISynDisplay **ppDisplay){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE Select( 
    LONG lHandle){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE PeekPacket( 
    LONG *plSequence){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetSynchronousNotification( 
    _ISynDeviceEvents *pCallbackInstance){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE GetPropertyDefault( 
    LONG lSpecifier,
    LONG *pValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE BulkTransaction( 
    ULONG ulWriteLength,
    UCHAR *ucWriteBuffer,
    ULONG ulReadLength,
    UCHAR *ucReadBuffer){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE DiagnosticTransaction( 
    ULONG ulWriteLength,
    UCHAR *ucWriteBuffer,
    ULONG ulReadLength,
    UCHAR *ucReadBuffer){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE DiagnosticSelect( 
    LONG lHandle,
    LONG lFlags){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE ForceMotionWithWheel( 
    LONG lDeltaX,
    LONG lDeltaY,
    LONG lButtonState,
    LONG lWheelDelta){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE ForceMotionWithHorizontalWheel( 
    LONG lDeltaX,
    LONG lDeltaY,
    LONG lButtonState,
    LONG lWheelDelta){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE ValidateProperty( 
    LONG lSpecifier,
    LONG lSynAccessRightType){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE ForceSecondaryFingerPacket( 
    ISynPacket *pPacket){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE ForceFingerCountPacket( 
    ISynPacket *pPacket){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetZoneAction( 
    DWORD dwZoneID,
    DWORD dwActionID,
    LPTSTR pszPlugInName){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE OnSynGestureActionEvent(
    LONG lType, 
    LONG lSize, 
    UCHAR *ucData) { return E_UNEXPECTED; }

#ifndef SYNA_LINUX
  virtual HRESULT STDMETHODCALLTYPE SetGestureActionNotification(
    DWORD dwProcID,
    _ISynGestureActionEvents *pConnection,
    LONG lValue, LONG lValueEx) { return E_UNEXPECTED; }
#endif

  virtual HRESULT STDMETHODCALLTYPE ForceMotionWithWheelEx( 
    LONG lDeltaX,
    LONG lDeltaY,
    LONG lButtonState,
    LONG lWheelDelta,
    LONG lFlags){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE LoadGroupPackets( 
    ISynPacket **ppPacket,
    ULONG ulPacketCount){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetBinaryProperty(
    LONG lSpecifier,
    WORD wArg,
    UCHAR *pucData,
    WORD nData){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE CreateGroup( 
    ISynGroup **ppGroup){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE LoadGroup( 
    ISynGroup *pGroup){return E_UNEXPECTED;}
};


#ifndef SYNA_LINUX
class CDummySynDisplay : public ISynDisplay
{
public:
  CDummySynDisplay(){}
  ~CDummySynDisplay(){}

  virtual HRESULT STDMETHODCALLTYPE QueryInterface( 
    REFIID riid, void  **ppvObject){return E_UNEXPECTED;}

  virtual ULONG STDMETHODCALLTYPE AddRef( void){return 1;}

  virtual ULONG STDMETHODCALLTYPE Release( void){return 1;}

  virtual HRESULT STDMETHODCALLTYPE GetProperty( 
    LONG lSpecifier,
    LONG *pValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetProperty( 
    LONG lSpecifier,
    LONG lValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE PixelToTouch( 
    LONG PixelX,
    LONG PixelY,
    LONG *pTouchX,
    LONG *pTouchY){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE TouchToPixel( 
    LONG TouchX,
    LONG TouchY,
    LONG *pPixelX,
    LONG *pPixelY){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE GetDC( 
    HDC *pHDC){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE FlushDC( 
    LONG lFlags){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE Acquire( 
    LONG lDisplayAcquisitionMethod){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE Unacquire( void){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE Select( 
    LONG lDeviceHandle){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetEventNotification( 
    HANDLE hEvent){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE GetEventParameter( 
    LONG *lParameter){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetSynchronousNotification( 
    _ISynDisplayEvents *pCallbackInstance){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE GetStringProperty( 
    LONG lSpecifier,
    unsigned char *pBuffer,
    LONG *ulBufLen){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetBackgroundImage( 
    HBITMAP hBmp){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE CloneBackgroundImage( 
    HBITMAP *pHBmp){return E_UNEXPECTED;}
};
#endif


class CDummySynPacket : public ISynPacket
{
public:
  CDummySynPacket(){}
  ~CDummySynPacket(){}

  virtual HRESULT STDMETHODCALLTYPE QueryInterface( 
    REFIID riid, void  **ppvObject){return E_UNEXPECTED;}

  virtual ULONG STDMETHODCALLTYPE AddRef( void){return 1;}

  virtual ULONG STDMETHODCALLTYPE Release( void){return 1;}

  virtual HRESULT STDMETHODCALLTYPE GetProperty( 
    LONG lSpecifier,
    LONG *pValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetProperty( 
    LONG lSpecifier,
    LONG lValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE GetStringProperty( 
    LONG lSpecifier,
    unsigned char *pBuffer,
    LONG *ulBufLen){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE Copy( 
    ISynPacket *pFrom){return E_UNEXPECTED;}
};

class CDummySynGroup : public ISynGroup
{
public:
  CDummySynGroup(){}
  ~CDummySynGroup(){}

  virtual HRESULT STDMETHODCALLTYPE QueryInterface( 
    REFIID riid, void  **ppvObject){return E_UNEXPECTED;}

  virtual ULONG STDMETHODCALLTYPE AddRef( void){return 1;}

  virtual ULONG STDMETHODCALLTYPE Release( void){return 1;}

  virtual HRESULT STDMETHODCALLTYPE GetProperty( 
    LONG lSpecifier,
    LONG *pValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetProperty( 
    LONG lSpecifier,
    LONG lValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE GetPropertyByIndex( 
    LONG lSpecifier,
    LONG lIndex,
    LONG *pValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetPropertyByIndex( 
    LONG lSpecifier,
    LONG lIndex,
    LONG lValue){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE GetPacketByIndex( 
    LONG lIndex,
    ISynPacket *pPacket){return E_UNEXPECTED;}

  virtual HRESULT STDMETHODCALLTYPE SetPacketByIndex( 
    LONG lIndex,
    ISynPacket *pPacket){return E_UNEXPECTED;}
};

class SynAPI :
  public SynWrapEvents<SynAPI, __ISynAPI, _ISynAPIEvents>
{
public:
  SynAPI() :
    SynWrapEvents<SynAPI, __ISynAPI, _ISynAPIEvents>(L"SynCom.SynAPI") { }

  SynAPI(__ISynAPI *pInterface) : 
    SynWrapEvents<SynAPI, __ISynAPI, _ISynAPIEvents>(pInterface) { }


  HRESULT STDMETHODCALLTYPE OnSynAPINotify(LONG /* lReason */) { return 0; }


  LONG FindDevice(enum SynConnectionType eConnectionType, 
    enum SynDeviceType eDeviceType, LONG lStart)
  {
    if (m_pInternal && m_pInternal->FindDevice(eConnectionType, eDeviceType, &lStart) == S_OK) {
      return lStart;
    }
    return -1;
  }

  LONG FindDeviceEx(enum SynConnectionType eConnectionType, enum SynDeviceType eDeviceType,
    LONG lStart, BOOL bMatchConnectionType, BOOL bMatchDeviceType)
  {
    if (m_pInternal && m_pInternal->FindDeviceEx(eConnectionType, eDeviceType, &lStart, 
        bMatchConnectionType, bMatchDeviceType) == S_OK)
    {      
       return lStart;      
    }
    return -1;
  }

#ifndef SYNA_LINUX
  operator ISynAPI *() { return m_pInternal? m_pInternal : &m_dummyInterface;}
  ISynAPI *operator->() { return m_pInternal? m_pInternal : &m_dummyInterface;}

private:
  CDummySynAPI m_dummyInterface;
#endif
};

class SynDevice :
  public SynWrapEvents<SynDevice, __ISynDevice, _ISynDeviceEvents>
#ifndef SYNA_LINUX
  , public _ISynGestureActionEvents
#endif
{
#ifndef SYNA_LINUX
protected:
  DWORD m_dwCounter;
  DWORD m_dwCookie;
#endif

public:
  SynDevice() :
    SynWrapEvents<SynDevice, __ISynDevice, _ISynDeviceEvents>(L"SynCom.PointingDevice") 
  {
#ifndef SYNA_LINUX
    Advise();
#endif
  }

  SynDevice(__ISynDevice *pInterface) : 
    SynWrapEvents<SynDevice, __ISynDevice, _ISynDeviceEvents>(pInterface) 
  {
#ifndef SYNA_LINUX
    Advise();
#endif
  }

  ~SynDevice() 
  { 
#ifndef SYNA_LINUX
    Unadvise(); 
#endif
  }

  LONG GetLongPropertyDefault(LONG lSpecifier)
  {
    LONG lProperty = 0;

    if (m_pInternal)
      m_pInternal->GetPropertyDefault(lSpecifier, &lProperty);
    return lProperty;
  }
  
  HRESULT STDMETHODCALLTYPE OnSynDevicePacket(LONG /* lSequence */) { return 0; }
  
  bool IsTouchPad() {
    return (SE_DeviceTouchPad == GetLongProperty(SP_DeviceType));
  }

  bool IsStyk() {
    return (SE_DeviceStyk == GetLongProperty(SP_DeviceType));
  }

  bool IsIBMCompatibleStick() {
    return (SE_DeviceIBMCompatibleStick == GetLongProperty(SP_DeviceType));
  }

  bool IsStykOrIBMCompatibleStick() {
    return (IsStyk() || IsIBMCompatibleStick());
  }

  bool IscPad() {
    return IsDisplayPresent();
  }

  bool IsDisplayPresent() {
    return IsTouchPad() &&
      !!(GetLongProperty(SP_DisplayFlags) & SF_DisplayPresent);
  }

  bool IsRGBControlBar() {
    return (SE_DeviceRGBControlBar == GetLongProperty(SP_DeviceType));
  }

  bool IsStdControlBar() {
    return (SE_DeviceControlBar == GetLongProperty(SP_DeviceType));
  }

  bool IsControlBar() {
    return (IsStdControlBar() || IsRGBControlBar());
  }

  bool IsStandardMouse() {
    return (SE_DeviceMouse == GetLongProperty(SP_DeviceType));
  }

  bool IsWheelMouse() {
    return (SE_DeviceWheelMouse == GetLongProperty(SP_DeviceType));
  }
  
  bool IsFiveButtonWheelMouse() {
    return (SE_DeviceFiveButtonWheelMouse == GetLongProperty(SP_DeviceType));
  }

  bool IsMouse() {
    return (IsStandardMouse() || IsWheelMouse() || IsFiveButtonWheelMouse());
  }

  bool IsUSBDevice() {
    return (SE_ConnectionUSB == GetLongProperty(SP_ConnectionType));
  }

  bool IsPS2Device() {
    return (SE_ConnectionPS2 == GetLongProperty(SP_ConnectionType));
  }

#ifndef SYNA_LINUX
  BOOL SetGestureActionNotification(DWORD dwProcID, _ISynGestureActionEvents *pConnection, 
    LONG lValue, LONG lValueEx)
  {
    BOOL bResult = FALSE;
    if(!m_pInternal)
      return bResult;
    ISynDevice2 *pISynDevice2 = 0;
    m_pInternal->QueryInterface(__uuidof(ISynDevice2), (void **)&pISynDevice2);
    if (!pISynDevice2) 
      return bResult;
    bResult = (pISynDevice2->SetGestureActionNotification(dwProcID, pConnection, lValue, lValueEx)
      == SYN_OK);
    pISynDevice2->Release();
    return bResult;
  }
#endif

#ifndef SYNA_LINUX
protected:
  IConnectionPoint* GetIConnectionPoint()
  {
    if(!m_pInternal)
      return NULL;
    ISynDevice2 *pISynDevice2 = 0;
    m_pInternal->QueryInterface(__uuidof(ISynDevice2), (void **)&pISynDevice2);
    if (!pISynDevice2) return 0;

    IConnectionPointContainer *pCPC = 0;
    HRESULT hr = pISynDevice2->QueryInterface(__uuidof(IConnectionPointContainer), (void**)&pCPC);
    pISynDevice2->Release();
    IConnectionPoint *pCP = 0;
    if (SUCCEEDED(hr)) {
      hr = pCPC->FindConnectionPoint(__uuidof(_ISynGestureActionEvents), &pCP);
      pCPC->Release();
    }
    return pCP;
  }

  void Unadvise() 
  {
    IConnectionPoint* pCP = GetIConnectionPoint();
    if (pCP && m_dwCookie) {
      pCP->Unadvise(m_dwCookie);
      pCP->Release();
    }
  }

  HRESULT Advise()
  {
    HRESULT hr = E_FAIL;
    m_dwCounter = 1;
    m_dwCookie = 0;

    IConnectionPoint* pCP = GetIConnectionPoint();
    if (pCP) {
      hr = pCP->Advise((IUnknown *)(this), &m_dwCookie);
      pCP->Release();
    }
    return hr;
  }

public:
  virtual HRESULT STDMETHODCALLTYPE OnSynGestureActionEvent(LONG lType, LONG lSize, UCHAR *ucData) 
  { 
    UNREFERENCED_PARAMETER(lType);
    UNREFERENCED_PARAMETER(lSize);
    UNREFERENCED_PARAMETER(ucData);
    return S_OK; 
  }

  virtual HRESULT STDMETHODCALLTYPE QueryInterface( 
    REFIID riid,
    void **ppvObject)
  {
    if (ppvObject == NULL || !m_pInternal) 
      return E_POINTER;
    *ppvObject = NULL;
    HRESULT hr = E_NOINTERFACE;
    if (IsEqualIID(riid,IID_IUnknown) || IsEqualIID(riid,IID__ISynGestureActionEvents)) {
      *ppvObject = (IUnknown *)(this);
      AddRef();
      hr = S_OK;
    }

    return hr; 
  }

  virtual ULONG STDMETHODCALLTYPE AddRef() 
  {
    return ++m_dwCounter;
  }

  virtual ULONG STDMETHODCALLTYPE Release()
  {
    --m_dwCounter;
    return m_dwCounter;
  }

  operator ISynDevice *() { return m_pInternal? m_pInternal : &m_dummyInterface;}

  ISynDevice *operator->() { return m_pInternal? m_pInternal : &m_dummyInterface;}

private:
  CDummySynDevice m_dummyInterface;
#endif

};

#ifdef SYNA_LINUX
class SynDisplay;
#else
class SynDisplay :
  public SynWrapEvents<SynDisplay, ISynDisplay, _ISynDisplayEvents>
{
public:
  SynDisplay() :
    SynWrapEvents<SynDisplay, ISynDisplay, _ISynDisplayEvents>(L"SynCom.SynDisplay") { }

  SynDisplay(ISynDisplay *pInterface) : 
    SynWrapEvents<SynDisplay, ISynDisplay, _ISynDisplayEvents>(pInterface) { }


  HRESULT STDMETHODCALLTYPE OnSynDisplayMessage(LONG /* lMessage */) { return 0; }

  LONG PixelX(LONG lTouchX)
  {
    LONG lPixelX = 0, lPixelY = 0;
    if (m_pInternal)
    {
      m_pInternal->TouchToPixel(lTouchX, 0, &lPixelX, &lPixelY);
    }

    return lPixelX;
  }

  LONG PixelY(LONG lTouchY)
  {
    LONG lPixelX = 0, lPixelY = 0;
    if (m_pInternal)
    {
      m_pInternal->TouchToPixel(0, lTouchY, &lPixelX, &lPixelY);
    }

    return lPixelY;
  }

  LONG TouchX(LONG lPixelX)
  {
    LONG lTouchX = 0, lTouchY = 0;
    if (m_pInternal)
    {
      m_pInternal->PixelToTouch(lPixelX, 0, &lTouchX, &lTouchY);
    }

    return lTouchX;
  }

  LONG TouchY(LONG lPixelY)
  {
    LONG lTouchX = 0, lTouchY = 0;
    if (m_pInternal)
    {
      m_pInternal->PixelToTouch(0, lPixelY, &lTouchX, &lTouchY);
    }

    return lTouchY;
  }

  operator ISynDisplay *() { return m_pInternal? m_pInternal : &m_dummyInterface;}

  ISynDisplay *operator->() { return m_pInternal? m_pInternal : &m_dummyInterface;}

private:
  CDummySynDisplay m_dummyInterface;
};
#endif

class SynPacket :
  public SynWrap<SynPacket, __ISynPacket>
{
public:
  SynPacket() : SynWrap<SynPacket, __ISynPacket>(L"SynCom.SynPacket") { }

  SynPacket(__ISynPacket *pPacket) : SynWrap<SynPacket, __ISynPacket>(pPacket) { }

  LONG AssociatedDeviceHandle() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_AssociatedDeviceHandle, &lProperty);
    return lProperty;
  }

  LONG SequenceNumber() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_SequenceNumber, &lProperty);
    return lProperty;
  }

  LONG GroupNumber() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_PacketGroupNumber, &lProperty);
    return lProperty;
  }

  LONG SubType() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_SubType, &lProperty);
    return lProperty;
  }

  ULONG TimeStamp() const
  {
    if(!m_pInternal)
      return 0;

    ULONG ulProperty;
    m_pInternal->GetProperty(SP_TimeStamp, (LONG *) &ulProperty);
    return ulProperty;
  }

  LONG W() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_W, &lProperty);
    return lProperty;
  }

  LONG X() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_X, &lProperty);
    return lProperty;
  }

  LONG Y() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_Y, &lProperty);
    return lProperty;
  }

  LONG Z() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_Z, &lProperty);
    return lProperty;
  }

  LONG XRaw() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_XRaw, &lProperty);
    return lProperty;
  }

  LONG ZXRaw() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_ZXRaw, &lProperty);
    return lProperty;
  }

  LONG YRaw() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_YRaw, &lProperty);
    return lProperty;
  }

  LONG ZRaw() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_ZRaw, &lProperty);
    return lProperty;
  }

  LONG ZYRaw() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_ZYRaw, &lProperty);
    return lProperty;
  }

  LONG XDelta() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_XDelta, &lProperty);
    return lProperty;
  }

  LONG YDelta() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_YDelta, &lProperty);
    return lProperty;
  }

  LONG ZDelta() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_ZDelta, &lProperty);
    return lProperty;
  }

  LONG XMickeys() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_XMickeys, &lProperty);
    return lProperty;
  }

  LONG YMickeys() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_YMickeys, &lProperty);
    return lProperty;
  }

  LONG WheelDelta() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_WheelDelta, &lProperty);
    return lProperty;
  }

  LONG ExtendedState() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_ExtendedState, &lProperty);
    return lProperty;
  }

  LONG ExtendedState2() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_ExtendedState2, &lProperty);
    return lProperty;
  }

  LONG ZForce() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_ZForce, &lProperty);
    return lProperty;
  }

  LONG ZImage() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_ZImage, &lProperty);
    return lProperty;
  }

  LONG FingerState() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_FingerState, &lProperty);
    return lProperty;
  }

  // This function is only called by ForcePacket to convert SynCOM button and finger states
  // into TP_PACKET_xxx 
  LONG ConvertSFPacketStateToTPPacketState() const 
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty = 0; 
    LONG lState = 0;
    // Get finger state
    m_pInternal->GetProperty(SP_FingerState, &lProperty);
    // Map finger state
    lState = lProperty & (SF_FingerPresent | SF_FingerPrimGest | SF_FingerSecGest | 
      SF_FingerStylus);
    // Get button state
    lProperty = 0;
    m_pInternal->GetProperty(SP_ButtonState, &lProperty);
    // Map L,R,M buttons
    lState |= (lProperty & (SF_ButtonLeft | SF_ButtonRight | SF_ButtonMiddle));
    // Map SF_ButtonUp&SF_ButtonDown to TP_PacketState_UpSw&TP_PacketState_DownSw
    lState |= ((lProperty & (SF_ButtonUp | SF_ButtonDown)) << 24);
    return lState;
  }

  LONG FingerIndex() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty = 0;  // if GetProperty() fails defaults to zero
    m_pInternal->GetProperty(SP_FingerIndex, &lProperty);
    return lProperty;
  }

  LONG FilterIndex() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty = 0;  // if GetProperty() fails defaults to zero
    m_pInternal->GetProperty(SP_FilterIndex, &lProperty);
    return lProperty;
  }

  LONG ExtraFingerState() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_ExtraFingerState, &lProperty);
    return lProperty;
  }

  LONG NumCurrentFingers() const
  {
    return (ExtraFingerState() & SF_CurrentFingerCountMask) >> SF_CurrentFingerCountBit;
  }

  LONG NumStrokeFingers() const
  {
    return (ExtraFingerState() & SF_StrokeFingerCountMask) >> SF_StrokeFingerCountBit;
  }

  LONG PrimaryFingerContactID() const
  {
    return (((DWORD) ExtraFingerState() & SF_PrimaryFingerContactIDMask) >> 
      SF_PrimaryFingerContactIDBit);
  }

  LONG SecondaryFingerContactID() const
  {
    return (((DWORD) ExtraFingerState() & SF_SecondaryFingerContactIDMask) >> 
      SF_SecondaryFingerContactIDBit);
  }

  LONG ButtonState() const
  {
    if(!m_pInternal)
      return 0;
    LONG lProperty;
    m_pInternal->GetProperty(SP_ButtonState, &lProperty);
    return lProperty;
  }

  bool IsLeftButton() const { 
    return (ButtonState() & SF_ButtonLeft) != 0; 
  }

  bool IsRightButton() const { 
    return (ButtonState() & SF_ButtonRight) != 0; 
  }

  bool IsMiddleButton() const { 
    return (ButtonState() & SF_ButtonMiddle) != 0; 
  }

  bool IsTap() const {
    return (FingerState() & SF_FingerTap) != 0;
  }

  bool IsMotion() const {
    return (FingerState() & SF_FingerMotion) != 0;
  }

  bool IsFinger() const {
    return (FingerState() & SF_FingerPresent) != 0;
  }

  bool IsTouch() const {
    return (FingerState() & SF_FingerTouch) != 0;
  }

  bool IsScrollFinger() const {
    return (ExtendedState() & SF_StateScrollFinger) != 0;
  }

  bool IsMomentum() const {
    return (ExtendedState() & SF_Momentum) != 0;
  }

  bool IsNearKeyPress() const {
    return (ExtendedState() & SF_NearKeyPress) != 0;
  }

  bool IsNearHighPalmW() const {
    return (ExtendedState() & SF_NearHighPalmW) != 0;
  }

  bool IsAnyFinger() const {
    return (IsFinger() || IsScrollFinger());
  }

  bool IsAnyButton() const {
    return (!!ButtonState() || !!(FingerState() & SF_FingerAsButton));
  }

#ifndef SYNA_LINUX
  operator ISynPacket *() { return m_pInternal? m_pInternal : &m_dummyInterface;}

  ISynPacket *operator->() { return m_pInternal? m_pInternal : &m_dummyInterface;}

private:
  CDummySynPacket m_dummyInterface;
#endif
};


class SynGroup :
  public SynWrap<SynGroup, __ISynGroup>
{
public:
  SynGroup() : SynWrap<SynGroup, __ISynGroup>(L"SynCom.SynGroup") { }

  SynGroup(__ISynGroup *pGroup) : SynWrap<SynGroup, __ISynGroup>(pGroup) { }

  LONG DeviceHandle() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_DeviceHandle, &lProperty);
    return lProperty;
  }

  LONG GroupNumber() const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetProperty(SP_GroupNumber, &lProperty);
    return lProperty;
  }

  LONG ForceRaw(LONG lIndex) const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetPropertyByIndex(SP_ForceRaw, lIndex, &lProperty);
    return lProperty;
  }


  LONG Force(LONG lIndex) const
  {
    if(!m_pInternal)
      return 0;

    LONG lProperty;
    m_pInternal->GetPropertyByIndex(SP_Force, lIndex, &lProperty);
    return lProperty;
  }


  BOOL Packet(LONG lIndex, SynPacket& pkt) {
    if (m_pInternal) {
      m_pInternal->GetPacketByIndex(lIndex, pkt);
      return TRUE;
    }
    return FALSE;
  }

#ifndef SYNA_LINUX
  operator ISynGroup *() { return m_pInternal? m_pInternal : &m_dummyInterface;}

  ISynGroup *operator->() { return m_pInternal? m_pInternal : &m_dummyInterface;}

private:
  CDummySynGroup m_dummyInterface;
#endif
};

#endif
