

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Thu May 17 19:22:56 2012
 */
/* Compiler settings for .\SynCom.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SynCom_h__
#define __SynCom_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___ISynAPIEvents_FWD_DEFINED__
#define ___ISynAPIEvents_FWD_DEFINED__
typedef interface _ISynAPIEvents _ISynAPIEvents;
#endif 	/* ___ISynAPIEvents_FWD_DEFINED__ */


#ifndef ___ISynDeviceEvents_FWD_DEFINED__
#define ___ISynDeviceEvents_FWD_DEFINED__
typedef interface _ISynDeviceEvents _ISynDeviceEvents;
#endif 	/* ___ISynDeviceEvents_FWD_DEFINED__ */


#ifndef ___ISynDisplayEvents_FWD_DEFINED__
#define ___ISynDisplayEvents_FWD_DEFINED__
typedef interface _ISynDisplayEvents _ISynDisplayEvents;
#endif 	/* ___ISynDisplayEvents_FWD_DEFINED__ */


#ifndef __ISynAPI_FWD_DEFINED__
#define __ISynAPI_FWD_DEFINED__
typedef interface ISynAPI ISynAPI;
#endif 	/* __ISynAPI_FWD_DEFINED__ */


#ifndef __ISynDevice_FWD_DEFINED__
#define __ISynDevice_FWD_DEFINED__
typedef interface ISynDevice ISynDevice;
#endif 	/* __ISynDevice_FWD_DEFINED__ */


#ifndef __ISynPacket_FWD_DEFINED__
#define __ISynPacket_FWD_DEFINED__
typedef interface ISynPacket ISynPacket;
#endif 	/* __ISynPacket_FWD_DEFINED__ */


#ifndef __ISynGroup_FWD_DEFINED__
#define __ISynGroup_FWD_DEFINED__
typedef interface ISynGroup ISynGroup;
#endif 	/* __ISynGroup_FWD_DEFINED__ */


#ifndef __ISynDisplay_FWD_DEFINED__
#define __ISynDisplay_FWD_DEFINED__
typedef interface ISynDisplay ISynDisplay;
#endif 	/* __ISynDisplay_FWD_DEFINED__ */


#ifndef __SynAPI_FWD_DEFINED__
#define __SynAPI_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynAPI SynAPI;
#else
typedef struct SynAPI SynAPI;
#endif /* __cplusplus */

#endif 	/* __SynAPI_FWD_DEFINED__ */


#ifndef __SynDevice_FWD_DEFINED__
#define __SynDevice_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynDevice SynDevice;
#else
typedef struct SynDevice SynDevice;
#endif /* __cplusplus */

#endif 	/* __SynDevice_FWD_DEFINED__ */


#ifndef __SynPacket_FWD_DEFINED__
#define __SynPacket_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynPacket SynPacket;
#else
typedef struct SynPacket SynPacket;
#endif /* __cplusplus */

#endif 	/* __SynPacket_FWD_DEFINED__ */


#ifndef __SynGroup_FWD_DEFINED__
#define __SynGroup_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynGroup SynGroup;
#else
typedef struct SynGroup SynGroup;
#endif /* __cplusplus */

#endif 	/* __SynGroup_FWD_DEFINED__ */


#ifndef __SynDisplay_FWD_DEFINED__
#define __SynDisplay_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynDisplay SynDisplay;
#else
typedef struct SynDisplay SynDisplay;
#endif /* __cplusplus */

#endif 	/* __SynDisplay_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "SynComDefs.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_SynCom_0000 */
/* [local] */ 









extern RPC_IF_HANDLE __MIDL_itf_SynCom_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SynCom_0000_v0_0_s_ifspec;

#ifndef ___ISynAPIEvents_INTERFACE_DEFINED__
#define ___ISynAPIEvents_INTERFACE_DEFINED__

/* interface _ISynAPIEvents */
/* [helpstring][uuid][object][local] */ 


EXTERN_C const IID IID__ISynAPIEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2566B5BA-ADDC-4cc6-BBFB-B777E5C860CC")
    _ISynAPIEvents
    {
    public:
        BEGIN_INTERFACE
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnSynAPINotify( 
            LONG lReason) = 0;
        
        END_INTERFACE
    };
    
#else 	/* C style interface */

    typedef struct _ISynAPIEventsVtbl
    {
        BEGIN_INTERFACE
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnSynAPINotify )( 
            _ISynAPIEvents * This,
            LONG lReason);
        
        END_INTERFACE
    } _ISynAPIEventsVtbl;

    interface _ISynAPIEvents
    {
        CONST_VTBL struct _ISynAPIEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISynAPIEvents_OnSynAPINotify(This,lReason)	\
    (This)->lpVtbl -> OnSynAPINotify(This,lReason)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE _ISynAPIEvents_OnSynAPINotify_Proxy( 
    _ISynAPIEvents * This,
    LONG lReason);


void __RPC_STUB _ISynAPIEvents_OnSynAPINotify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* ___ISynAPIEvents_INTERFACE_DEFINED__ */


#ifndef ___ISynDeviceEvents_INTERFACE_DEFINED__
#define ___ISynDeviceEvents_INTERFACE_DEFINED__

/* interface _ISynDeviceEvents */
/* [helpstring][uuid][object][local] */ 


EXTERN_C const IID IID__ISynDeviceEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AE255EED-248F-4998-8376-F063ECB9E220")
    _ISynDeviceEvents
    {
    public:
        BEGIN_INTERFACE
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnSynDevicePacket( 
            LONG lSequenceNumber) = 0;
        
        END_INTERFACE
    };
    
#else 	/* C style interface */

    typedef struct _ISynDeviceEventsVtbl
    {
        BEGIN_INTERFACE
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnSynDevicePacket )( 
            _ISynDeviceEvents * This,
            LONG lSequenceNumber);
        
        END_INTERFACE
    } _ISynDeviceEventsVtbl;

    interface _ISynDeviceEvents
    {
        CONST_VTBL struct _ISynDeviceEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISynDeviceEvents_OnSynDevicePacket(This,lSequenceNumber)	\
    (This)->lpVtbl -> OnSynDevicePacket(This,lSequenceNumber)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE _ISynDeviceEvents_OnSynDevicePacket_Proxy( 
    _ISynDeviceEvents * This,
    LONG lSequenceNumber);


void __RPC_STUB _ISynDeviceEvents_OnSynDevicePacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* ___ISynDeviceEvents_INTERFACE_DEFINED__ */


#ifndef ___ISynDisplayEvents_INTERFACE_DEFINED__
#define ___ISynDisplayEvents_INTERFACE_DEFINED__

/* interface _ISynDisplayEvents */
/* [helpstring][uuid][object][local] */ 


EXTERN_C const IID IID__ISynDisplayEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4b55d73c-87d6-4c49-9cf2-ae7654226d68")
    _ISynDisplayEvents
    {
    public:
        BEGIN_INTERFACE
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnSynDisplayMessage( 
            LONG lMessage) = 0;
        
        END_INTERFACE
    };
    
#else 	/* C style interface */

    typedef struct _ISynDisplayEventsVtbl
    {
        BEGIN_INTERFACE
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnSynDisplayMessage )( 
            _ISynDisplayEvents * This,
            LONG lMessage);
        
        END_INTERFACE
    } _ISynDisplayEventsVtbl;

    interface _ISynDisplayEvents
    {
        CONST_VTBL struct _ISynDisplayEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISynDisplayEvents_OnSynDisplayMessage(This,lMessage)	\
    (This)->lpVtbl -> OnSynDisplayMessage(This,lMessage)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE _ISynDisplayEvents_OnSynDisplayMessage_Proxy( 
    _ISynDisplayEvents * This,
    LONG lMessage);


void __RPC_STUB _ISynDisplayEvents_OnSynDisplayMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* ___ISynDisplayEvents_INTERFACE_DEFINED__ */


#ifndef __ISynAPI_INTERFACE_DEFINED__
#define __ISynAPI_INTERFACE_DEFINED__

/* interface ISynAPI */
/* [helpstring][uuid][object][local] */ 


EXTERN_C const IID IID_ISynAPI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41320763-F0EC-4B7F-9A2E-B4DA92C80FE7")
    ISynAPI : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindDevice( 
            LONG lConnectionType,
            LONG lDeviceType,
            LONG *ulHandle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateDevice( 
            LONG lHandle,
            ISynDevice **ppDevice) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            LONG lSpecifier,
            LONG *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStringProperty( 
            LONG lSpecifier,
            unsigned char *pBuffer,
            LONG *ulBufLen) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            LONG lSpecifier,
            LONG lValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetEventNotification( 
            HANDLE hEvent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEventParameter( 
            LONG *lParameter) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PersistState( 
            LONG lStateFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RestoreState( 
            LONG lStateFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HardwareBroadcast( 
            LONG lAction) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSynchronousNotification( 
            _ISynAPIEvents *pCallbackInstance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ForwardSystemMessage( 
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindDeviceEx( 
            LONG lConnectionType,
            LONG lDeviceType,
            LONG *ulHandle,
            BOOL bMatchConnectionType,
            BOOL bMatchDeviceType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynAPIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynAPI * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynAPI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynAPI * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ISynAPI * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindDevice )( 
            ISynAPI * This,
            LONG lConnectionType,
            LONG lDeviceType,
            LONG *ulHandle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateDevice )( 
            ISynAPI * This,
            LONG lHandle,
            ISynDevice **ppDevice);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            ISynAPI * This,
            LONG lSpecifier,
            LONG *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStringProperty )( 
            ISynAPI * This,
            LONG lSpecifier,
            unsigned char *pBuffer,
            LONG *ulBufLen);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            ISynAPI * This,
            LONG lSpecifier,
            LONG lValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetEventNotification )( 
            ISynAPI * This,
            HANDLE hEvent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEventParameter )( 
            ISynAPI * This,
            LONG *lParameter);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PersistState )( 
            ISynAPI * This,
            LONG lStateFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RestoreState )( 
            ISynAPI * This,
            LONG lStateFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HardwareBroadcast )( 
            ISynAPI * This,
            LONG lAction);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSynchronousNotification )( 
            ISynAPI * This,
            _ISynAPIEvents *pCallbackInstance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ForwardSystemMessage )( 
            ISynAPI * This,
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindDeviceEx )( 
            ISynAPI * This,
            LONG lConnectionType,
            LONG lDeviceType,
            LONG *ulHandle,
            BOOL bMatchConnectionType,
            BOOL bMatchDeviceType);
        
        END_INTERFACE
    } ISynAPIVtbl;

    interface ISynAPI
    {
        CONST_VTBL struct ISynAPIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynAPI_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynAPI_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynAPI_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynAPI_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define ISynAPI_FindDevice(This,lConnectionType,lDeviceType,ulHandle)	\
    (This)->lpVtbl -> FindDevice(This,lConnectionType,lDeviceType,ulHandle)

#define ISynAPI_CreateDevice(This,lHandle,ppDevice)	\
    (This)->lpVtbl -> CreateDevice(This,lHandle,ppDevice)

#define ISynAPI_GetProperty(This,lSpecifier,pValue)	\
    (This)->lpVtbl -> GetProperty(This,lSpecifier,pValue)

#define ISynAPI_GetStringProperty(This,lSpecifier,pBuffer,ulBufLen)	\
    (This)->lpVtbl -> GetStringProperty(This,lSpecifier,pBuffer,ulBufLen)

#define ISynAPI_SetProperty(This,lSpecifier,lValue)	\
    (This)->lpVtbl -> SetProperty(This,lSpecifier,lValue)

#define ISynAPI_SetEventNotification(This,hEvent)	\
    (This)->lpVtbl -> SetEventNotification(This,hEvent)

#define ISynAPI_GetEventParameter(This,lParameter)	\
    (This)->lpVtbl -> GetEventParameter(This,lParameter)

#define ISynAPI_PersistState(This,lStateFlags)	\
    (This)->lpVtbl -> PersistState(This,lStateFlags)

#define ISynAPI_RestoreState(This,lStateFlags)	\
    (This)->lpVtbl -> RestoreState(This,lStateFlags)

#define ISynAPI_HardwareBroadcast(This,lAction)	\
    (This)->lpVtbl -> HardwareBroadcast(This,lAction)

#define ISynAPI_SetSynchronousNotification(This,pCallbackInstance)	\
    (This)->lpVtbl -> SetSynchronousNotification(This,pCallbackInstance)

#define ISynAPI_ForwardSystemMessage(This,uMsg,wParam,lParam)	\
    (This)->lpVtbl -> ForwardSystemMessage(This,uMsg,wParam,lParam)

#define ISynAPI_FindDeviceEx(This,lConnectionType,lDeviceType,ulHandle,bMatchConnectionType,bMatchDeviceType)	\
    (This)->lpVtbl -> FindDeviceEx(This,lConnectionType,lDeviceType,ulHandle,bMatchConnectionType,bMatchDeviceType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_Initialize_Proxy( 
    ISynAPI * This);


void __RPC_STUB ISynAPI_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_FindDevice_Proxy( 
    ISynAPI * This,
    LONG lConnectionType,
    LONG lDeviceType,
    LONG *ulHandle);


void __RPC_STUB ISynAPI_FindDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_CreateDevice_Proxy( 
    ISynAPI * This,
    LONG lHandle,
    ISynDevice **ppDevice);


void __RPC_STUB ISynAPI_CreateDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_GetProperty_Proxy( 
    ISynAPI * This,
    LONG lSpecifier,
    LONG *pValue);


void __RPC_STUB ISynAPI_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_GetStringProperty_Proxy( 
    ISynAPI * This,
    LONG lSpecifier,
    unsigned char *pBuffer,
    LONG *ulBufLen);


void __RPC_STUB ISynAPI_GetStringProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_SetProperty_Proxy( 
    ISynAPI * This,
    LONG lSpecifier,
    LONG lValue);


void __RPC_STUB ISynAPI_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_SetEventNotification_Proxy( 
    ISynAPI * This,
    HANDLE hEvent);


void __RPC_STUB ISynAPI_SetEventNotification_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_GetEventParameter_Proxy( 
    ISynAPI * This,
    LONG *lParameter);


void __RPC_STUB ISynAPI_GetEventParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_PersistState_Proxy( 
    ISynAPI * This,
    LONG lStateFlags);


void __RPC_STUB ISynAPI_PersistState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_RestoreState_Proxy( 
    ISynAPI * This,
    LONG lStateFlags);


void __RPC_STUB ISynAPI_RestoreState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_HardwareBroadcast_Proxy( 
    ISynAPI * This,
    LONG lAction);


void __RPC_STUB ISynAPI_HardwareBroadcast_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_SetSynchronousNotification_Proxy( 
    ISynAPI * This,
    _ISynAPIEvents *pCallbackInstance);


void __RPC_STUB ISynAPI_SetSynchronousNotification_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_ForwardSystemMessage_Proxy( 
    ISynAPI * This,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);


void __RPC_STUB ISynAPI_ForwardSystemMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI_FindDeviceEx_Proxy( 
    ISynAPI * This,
    LONG lConnectionType,
    LONG lDeviceType,
    LONG *ulHandle,
    BOOL bMatchConnectionType,
    BOOL bMatchDeviceType);


void __RPC_STUB ISynAPI_FindDeviceEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynAPI_INTERFACE_DEFINED__ */


#ifndef __ISynDevice_INTERFACE_DEFINED__
#define __ISynDevice_INTERFACE_DEFINED__

/* interface ISynDevice */
/* [helpstring][uuid][object][local] */ 


EXTERN_C const IID IID_ISynDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7D5F8AC-866C-4C8C-AF5F-F28DE4918647")
    ISynDevice : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            LONG lSpecifier,
            LONG *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBooleanProperty( 
            LONG lSpecifier,
            LONG *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStringProperty( 
            LONG lSpecifier,
            unsigned char *pBuffer,
            LONG *ulBufLen) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            LONG lSpecifier,
            LONG lValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetEventNotification( 
            HANDLE hEvent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreatePacket( 
            ISynPacket **ppPacket) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadPacket( 
            ISynPacket *pPacket) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ForceMotion( 
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ForcePacket( 
            ISynPacket *pPacket) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Acquire( 
            LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Unacquire( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateDisplay( 
            ISynDisplay **ppDisplay) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Select( 
            LONG lHandle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PeekPacket( 
            LONG *plSequence) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSynchronousNotification( 
            _ISynDeviceEvents *pCallbackInstance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPropertyDefault( 
            LONG lSpecifier,
            LONG *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BulkTransaction( 
            ULONG ulWriteLength,
            UCHAR *ucWriteBuffer,
            ULONG ulReadLength,
            UCHAR *ucReadBuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DiagnosticTransaction( 
            ULONG ulWriteLength,
            UCHAR *ucWriteBuffer,
            ULONG ulReadLength,
            UCHAR *ucReadBuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DiagnosticSelect( 
            LONG lHandle,
            LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ForceMotionWithWheel( 
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState,
            LONG lWheelDelta) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ForceMotionWithHorizontalWheel( 
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState,
            LONG lWheelDelta) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ValidateProperty( 
            LONG lSpecifier,
            LONG lSynAccessRightType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ForceSecondaryFingerPacket( 
            ISynPacket *pPacket) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ForceFingerCountPacket( 
            ISynPacket *pPacket) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetZoneAction( 
            DWORD dwZoneID,
            DWORD dwActionID,
            LPTSTR pszPlugInName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ForceMotionWithWheelEx( 
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState,
            LONG lWheelDelta,
            LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadGroupPackets( 
            ISynPacket **ppPacket,
            ULONG ulPacketCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBinaryProperty( 
            LONG lSpecifier,
            WORD wArg,
            UCHAR *pucData,
            WORD nData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateGroup( 
            ISynGroup **ppGroup) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadGroup( 
            ISynGroup *pGroup) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynDevice * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynDevice * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            ISynDevice * This,
            LONG lSpecifier,
            LONG *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBooleanProperty )( 
            ISynDevice * This,
            LONG lSpecifier,
            LONG *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStringProperty )( 
            ISynDevice * This,
            LONG lSpecifier,
            unsigned char *pBuffer,
            LONG *ulBufLen);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            ISynDevice * This,
            LONG lSpecifier,
            LONG lValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetEventNotification )( 
            ISynDevice * This,
            HANDLE hEvent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreatePacket )( 
            ISynDevice * This,
            ISynPacket **ppPacket);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadPacket )( 
            ISynDevice * This,
            ISynPacket *pPacket);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ForceMotion )( 
            ISynDevice * This,
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ForcePacket )( 
            ISynDevice * This,
            ISynPacket *pPacket);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Acquire )( 
            ISynDevice * This,
            LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Unacquire )( 
            ISynDevice * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateDisplay )( 
            ISynDevice * This,
            ISynDisplay **ppDisplay);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            ISynDevice * This,
            LONG lHandle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PeekPacket )( 
            ISynDevice * This,
            LONG *plSequence);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSynchronousNotification )( 
            ISynDevice * This,
            _ISynDeviceEvents *pCallbackInstance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPropertyDefault )( 
            ISynDevice * This,
            LONG lSpecifier,
            LONG *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BulkTransaction )( 
            ISynDevice * This,
            ULONG ulWriteLength,
            UCHAR *ucWriteBuffer,
            ULONG ulReadLength,
            UCHAR *ucReadBuffer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DiagnosticTransaction )( 
            ISynDevice * This,
            ULONG ulWriteLength,
            UCHAR *ucWriteBuffer,
            ULONG ulReadLength,
            UCHAR *ucReadBuffer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DiagnosticSelect )( 
            ISynDevice * This,
            LONG lHandle,
            LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ForceMotionWithWheel )( 
            ISynDevice * This,
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState,
            LONG lWheelDelta);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ForceMotionWithHorizontalWheel )( 
            ISynDevice * This,
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState,
            LONG lWheelDelta);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ValidateProperty )( 
            ISynDevice * This,
            LONG lSpecifier,
            LONG lSynAccessRightType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ForceSecondaryFingerPacket )( 
            ISynDevice * This,
            ISynPacket *pPacket);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ForceFingerCountPacket )( 
            ISynDevice * This,
            ISynPacket *pPacket);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetZoneAction )( 
            ISynDevice * This,
            DWORD dwZoneID,
            DWORD dwActionID,
            LPTSTR pszPlugInName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ForceMotionWithWheelEx )( 
            ISynDevice * This,
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState,
            LONG lWheelDelta,
            LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadGroupPackets )( 
            ISynDevice * This,
            ISynPacket **ppPacket,
            ULONG ulPacketCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBinaryProperty )( 
            ISynDevice * This,
            LONG lSpecifier,
            WORD wArg,
            UCHAR *pucData,
            WORD nData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateGroup )( 
            ISynDevice * This,
            ISynGroup **ppGroup);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadGroup )( 
            ISynDevice * This,
            ISynGroup *pGroup);
        
        END_INTERFACE
    } ISynDeviceVtbl;

    interface ISynDevice
    {
        CONST_VTBL struct ISynDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynDevice_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynDevice_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynDevice_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynDevice_GetProperty(This,lSpecifier,pValue)	\
    (This)->lpVtbl -> GetProperty(This,lSpecifier,pValue)

#define ISynDevice_GetBooleanProperty(This,lSpecifier,pValue)	\
    (This)->lpVtbl -> GetBooleanProperty(This,lSpecifier,pValue)

#define ISynDevice_GetStringProperty(This,lSpecifier,pBuffer,ulBufLen)	\
    (This)->lpVtbl -> GetStringProperty(This,lSpecifier,pBuffer,ulBufLen)

#define ISynDevice_SetProperty(This,lSpecifier,lValue)	\
    (This)->lpVtbl -> SetProperty(This,lSpecifier,lValue)

#define ISynDevice_SetEventNotification(This,hEvent)	\
    (This)->lpVtbl -> SetEventNotification(This,hEvent)

#define ISynDevice_CreatePacket(This,ppPacket)	\
    (This)->lpVtbl -> CreatePacket(This,ppPacket)

#define ISynDevice_LoadPacket(This,pPacket)	\
    (This)->lpVtbl -> LoadPacket(This,pPacket)

#define ISynDevice_ForceMotion(This,lDeltaX,lDeltaY,lButtonState)	\
    (This)->lpVtbl -> ForceMotion(This,lDeltaX,lDeltaY,lButtonState)

#define ISynDevice_ForcePacket(This,pPacket)	\
    (This)->lpVtbl -> ForcePacket(This,pPacket)

#define ISynDevice_Acquire(This,lFlags)	\
    (This)->lpVtbl -> Acquire(This,lFlags)

#define ISynDevice_Unacquire(This)	\
    (This)->lpVtbl -> Unacquire(This)

#define ISynDevice_CreateDisplay(This,ppDisplay)	\
    (This)->lpVtbl -> CreateDisplay(This,ppDisplay)

#define ISynDevice_Select(This,lHandle)	\
    (This)->lpVtbl -> Select(This,lHandle)

#define ISynDevice_PeekPacket(This,plSequence)	\
    (This)->lpVtbl -> PeekPacket(This,plSequence)

#define ISynDevice_SetSynchronousNotification(This,pCallbackInstance)	\
    (This)->lpVtbl -> SetSynchronousNotification(This,pCallbackInstance)

#define ISynDevice_GetPropertyDefault(This,lSpecifier,pValue)	\
    (This)->lpVtbl -> GetPropertyDefault(This,lSpecifier,pValue)

#define ISynDevice_BulkTransaction(This,ulWriteLength,ucWriteBuffer,ulReadLength,ucReadBuffer)	\
    (This)->lpVtbl -> BulkTransaction(This,ulWriteLength,ucWriteBuffer,ulReadLength,ucReadBuffer)

#define ISynDevice_DiagnosticTransaction(This,ulWriteLength,ucWriteBuffer,ulReadLength,ucReadBuffer)	\
    (This)->lpVtbl -> DiagnosticTransaction(This,ulWriteLength,ucWriteBuffer,ulReadLength,ucReadBuffer)

#define ISynDevice_DiagnosticSelect(This,lHandle,lFlags)	\
    (This)->lpVtbl -> DiagnosticSelect(This,lHandle,lFlags)

#define ISynDevice_ForceMotionWithWheel(This,lDeltaX,lDeltaY,lButtonState,lWheelDelta)	\
    (This)->lpVtbl -> ForceMotionWithWheel(This,lDeltaX,lDeltaY,lButtonState,lWheelDelta)

#define ISynDevice_ForceMotionWithHorizontalWheel(This,lDeltaX,lDeltaY,lButtonState,lWheelDelta)	\
    (This)->lpVtbl -> ForceMotionWithHorizontalWheel(This,lDeltaX,lDeltaY,lButtonState,lWheelDelta)

#define ISynDevice_ValidateProperty(This,lSpecifier,lSynAccessRightType)	\
    (This)->lpVtbl -> ValidateProperty(This,lSpecifier,lSynAccessRightType)

#define ISynDevice_ForceSecondaryFingerPacket(This,pPacket)	\
    (This)->lpVtbl -> ForceSecondaryFingerPacket(This,pPacket)

#define ISynDevice_ForceFingerCountPacket(This,pPacket)	\
    (This)->lpVtbl -> ForceFingerCountPacket(This,pPacket)

#define ISynDevice_SetZoneAction(This,dwZoneID,dwActionID,pszPlugInName)	\
    (This)->lpVtbl -> SetZoneAction(This,dwZoneID,dwActionID,pszPlugInName)

#define ISynDevice_ForceMotionWithWheelEx(This,lDeltaX,lDeltaY,lButtonState,lWheelDelta,lFlags)	\
    (This)->lpVtbl -> ForceMotionWithWheelEx(This,lDeltaX,lDeltaY,lButtonState,lWheelDelta,lFlags)

#define ISynDevice_LoadGroupPackets(This,ppPacket,ulPacketCount)	\
    (This)->lpVtbl -> LoadGroupPackets(This,ppPacket,ulPacketCount)

#define ISynDevice_SetBinaryProperty(This,lSpecifier,wArg,pucData,nData)	\
    (This)->lpVtbl -> SetBinaryProperty(This,lSpecifier,wArg,pucData,nData)

#define ISynDevice_CreateGroup(This,ppGroup)	\
    (This)->lpVtbl -> CreateGroup(This,ppGroup)

#define ISynDevice_LoadGroup(This,pGroup)	\
    (This)->lpVtbl -> LoadGroup(This,pGroup)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_GetProperty_Proxy( 
    ISynDevice * This,
    LONG lSpecifier,
    LONG *pValue);


void __RPC_STUB ISynDevice_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_GetBooleanProperty_Proxy( 
    ISynDevice * This,
    LONG lSpecifier,
    LONG *pValue);


void __RPC_STUB ISynDevice_GetBooleanProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_GetStringProperty_Proxy( 
    ISynDevice * This,
    LONG lSpecifier,
    unsigned char *pBuffer,
    LONG *ulBufLen);


void __RPC_STUB ISynDevice_GetStringProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_SetProperty_Proxy( 
    ISynDevice * This,
    LONG lSpecifier,
    LONG lValue);


void __RPC_STUB ISynDevice_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_SetEventNotification_Proxy( 
    ISynDevice * This,
    HANDLE hEvent);


void __RPC_STUB ISynDevice_SetEventNotification_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_CreatePacket_Proxy( 
    ISynDevice * This,
    ISynPacket **ppPacket);


void __RPC_STUB ISynDevice_CreatePacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_LoadPacket_Proxy( 
    ISynDevice * This,
    ISynPacket *pPacket);


void __RPC_STUB ISynDevice_LoadPacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_ForceMotion_Proxy( 
    ISynDevice * This,
    LONG lDeltaX,
    LONG lDeltaY,
    LONG lButtonState);


void __RPC_STUB ISynDevice_ForceMotion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_ForcePacket_Proxy( 
    ISynDevice * This,
    ISynPacket *pPacket);


void __RPC_STUB ISynDevice_ForcePacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_Acquire_Proxy( 
    ISynDevice * This,
    LONG lFlags);


void __RPC_STUB ISynDevice_Acquire_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_Unacquire_Proxy( 
    ISynDevice * This);


void __RPC_STUB ISynDevice_Unacquire_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_CreateDisplay_Proxy( 
    ISynDevice * This,
    ISynDisplay **ppDisplay);


void __RPC_STUB ISynDevice_CreateDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_Select_Proxy( 
    ISynDevice * This,
    LONG lHandle);


void __RPC_STUB ISynDevice_Select_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_PeekPacket_Proxy( 
    ISynDevice * This,
    LONG *plSequence);


void __RPC_STUB ISynDevice_PeekPacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_SetSynchronousNotification_Proxy( 
    ISynDevice * This,
    _ISynDeviceEvents *pCallbackInstance);


void __RPC_STUB ISynDevice_SetSynchronousNotification_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_GetPropertyDefault_Proxy( 
    ISynDevice * This,
    LONG lSpecifier,
    LONG *pValue);


void __RPC_STUB ISynDevice_GetPropertyDefault_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_BulkTransaction_Proxy( 
    ISynDevice * This,
    ULONG ulWriteLength,
    UCHAR *ucWriteBuffer,
    ULONG ulReadLength,
    UCHAR *ucReadBuffer);


void __RPC_STUB ISynDevice_BulkTransaction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_DiagnosticTransaction_Proxy( 
    ISynDevice * This,
    ULONG ulWriteLength,
    UCHAR *ucWriteBuffer,
    ULONG ulReadLength,
    UCHAR *ucReadBuffer);


void __RPC_STUB ISynDevice_DiagnosticTransaction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_DiagnosticSelect_Proxy( 
    ISynDevice * This,
    LONG lHandle,
    LONG lFlags);


void __RPC_STUB ISynDevice_DiagnosticSelect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_ForceMotionWithWheel_Proxy( 
    ISynDevice * This,
    LONG lDeltaX,
    LONG lDeltaY,
    LONG lButtonState,
    LONG lWheelDelta);


void __RPC_STUB ISynDevice_ForceMotionWithWheel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_ForceMotionWithHorizontalWheel_Proxy( 
    ISynDevice * This,
    LONG lDeltaX,
    LONG lDeltaY,
    LONG lButtonState,
    LONG lWheelDelta);


void __RPC_STUB ISynDevice_ForceMotionWithHorizontalWheel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_ValidateProperty_Proxy( 
    ISynDevice * This,
    LONG lSpecifier,
    LONG lSynAccessRightType);


void __RPC_STUB ISynDevice_ValidateProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_ForceSecondaryFingerPacket_Proxy( 
    ISynDevice * This,
    ISynPacket *pPacket);


void __RPC_STUB ISynDevice_ForceSecondaryFingerPacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_ForceFingerCountPacket_Proxy( 
    ISynDevice * This,
    ISynPacket *pPacket);


void __RPC_STUB ISynDevice_ForceFingerCountPacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_SetZoneAction_Proxy( 
    ISynDevice * This,
    DWORD dwZoneID,
    DWORD dwActionID,
    LPTSTR pszPlugInName);


void __RPC_STUB ISynDevice_SetZoneAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_ForceMotionWithWheelEx_Proxy( 
    ISynDevice * This,
    LONG lDeltaX,
    LONG lDeltaY,
    LONG lButtonState,
    LONG lWheelDelta,
    LONG lFlags);


void __RPC_STUB ISynDevice_ForceMotionWithWheelEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_LoadGroupPackets_Proxy( 
    ISynDevice * This,
    ISynPacket **ppPacket,
    ULONG ulPacketCount);


void __RPC_STUB ISynDevice_LoadGroupPackets_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_SetBinaryProperty_Proxy( 
    ISynDevice * This,
    LONG lSpecifier,
    WORD wArg,
    UCHAR *pucData,
    WORD nData);


void __RPC_STUB ISynDevice_SetBinaryProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_CreateGroup_Proxy( 
    ISynDevice * This,
    ISynGroup **ppGroup);


void __RPC_STUB ISynDevice_CreateGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice_LoadGroup_Proxy( 
    ISynDevice * This,
    ISynGroup *pGroup);


void __RPC_STUB ISynDevice_LoadGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynDevice_INTERFACE_DEFINED__ */


#ifndef __ISynPacket_INTERFACE_DEFINED__
#define __ISynPacket_INTERFACE_DEFINED__

/* interface ISynPacket */
/* [helpstring][uuid][object][local] */ 


EXTERN_C const IID IID_ISynPacket;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BF9D398B-F631-44B4-8EC0-D3FB3E388B62")
    ISynPacket : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            LONG lSpecifier,
            LONG *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            LONG lSpecifier,
            LONG lValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStringProperty( 
            LONG lSpecifier,
            unsigned char *pBuffer,
            LONG *ulBufLen) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Copy( 
            ISynPacket *pFrom) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynPacketVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynPacket * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynPacket * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynPacket * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            ISynPacket * This,
            LONG lSpecifier,
            LONG *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            ISynPacket * This,
            LONG lSpecifier,
            LONG lValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStringProperty )( 
            ISynPacket * This,
            LONG lSpecifier,
            unsigned char *pBuffer,
            LONG *ulBufLen);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            ISynPacket * This,
            ISynPacket *pFrom);
        
        END_INTERFACE
    } ISynPacketVtbl;

    interface ISynPacket
    {
        CONST_VTBL struct ISynPacketVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynPacket_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynPacket_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynPacket_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynPacket_GetProperty(This,lSpecifier,pValue)	\
    (This)->lpVtbl -> GetProperty(This,lSpecifier,pValue)

#define ISynPacket_SetProperty(This,lSpecifier,lValue)	\
    (This)->lpVtbl -> SetProperty(This,lSpecifier,lValue)

#define ISynPacket_GetStringProperty(This,lSpecifier,pBuffer,ulBufLen)	\
    (This)->lpVtbl -> GetStringProperty(This,lSpecifier,pBuffer,ulBufLen)

#define ISynPacket_Copy(This,pFrom)	\
    (This)->lpVtbl -> Copy(This,pFrom)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynPacket_GetProperty_Proxy( 
    ISynPacket * This,
    LONG lSpecifier,
    LONG *pValue);


void __RPC_STUB ISynPacket_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynPacket_SetProperty_Proxy( 
    ISynPacket * This,
    LONG lSpecifier,
    LONG lValue);


void __RPC_STUB ISynPacket_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynPacket_GetStringProperty_Proxy( 
    ISynPacket * This,
    LONG lSpecifier,
    unsigned char *pBuffer,
    LONG *ulBufLen);


void __RPC_STUB ISynPacket_GetStringProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynPacket_Copy_Proxy( 
    ISynPacket * This,
    ISynPacket *pFrom);


void __RPC_STUB ISynPacket_Copy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynPacket_INTERFACE_DEFINED__ */


#ifndef __ISynGroup_INTERFACE_DEFINED__
#define __ISynGroup_INTERFACE_DEFINED__

/* interface ISynGroup */
/* [helpstring][uuid][object][local] */ 


EXTERN_C const IID IID_ISynGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("289531F4-DE95-416e-BBCE-971A75B880DE")
    ISynGroup : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            LONG lSpecifier,
            LONG *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            LONG lSpecifier,
            LONG lValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPropertyByIndex( 
            LONG lSpecifier,
            LONG lIndex,
            LONG *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPropertyByIndex( 
            LONG lSpecifier,
            LONG lIndex,
            LONG lValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPacketByIndex( 
            LONG lIndex,
            ISynPacket *pPacket) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPacketByIndex( 
            LONG lIndex,
            ISynPacket *pPacket) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynGroup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynGroup * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            ISynGroup * This,
            LONG lSpecifier,
            LONG *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            ISynGroup * This,
            LONG lSpecifier,
            LONG lValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPropertyByIndex )( 
            ISynGroup * This,
            LONG lSpecifier,
            LONG lIndex,
            LONG *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPropertyByIndex )( 
            ISynGroup * This,
            LONG lSpecifier,
            LONG lIndex,
            LONG lValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPacketByIndex )( 
            ISynGroup * This,
            LONG lIndex,
            ISynPacket *pPacket);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPacketByIndex )( 
            ISynGroup * This,
            LONG lIndex,
            ISynPacket *pPacket);
        
        END_INTERFACE
    } ISynGroupVtbl;

    interface ISynGroup
    {
        CONST_VTBL struct ISynGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynGroup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynGroup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynGroup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynGroup_GetProperty(This,lSpecifier,pValue)	\
    (This)->lpVtbl -> GetProperty(This,lSpecifier,pValue)

#define ISynGroup_SetProperty(This,lSpecifier,lValue)	\
    (This)->lpVtbl -> SetProperty(This,lSpecifier,lValue)

#define ISynGroup_GetPropertyByIndex(This,lSpecifier,lIndex,pValue)	\
    (This)->lpVtbl -> GetPropertyByIndex(This,lSpecifier,lIndex,pValue)

#define ISynGroup_SetPropertyByIndex(This,lSpecifier,lIndex,lValue)	\
    (This)->lpVtbl -> SetPropertyByIndex(This,lSpecifier,lIndex,lValue)

#define ISynGroup_GetPacketByIndex(This,lIndex,pPacket)	\
    (This)->lpVtbl -> GetPacketByIndex(This,lIndex,pPacket)

#define ISynGroup_SetPacketByIndex(This,lIndex,pPacket)	\
    (This)->lpVtbl -> SetPacketByIndex(This,lIndex,pPacket)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynGroup_GetProperty_Proxy( 
    ISynGroup * This,
    LONG lSpecifier,
    LONG *pValue);


void __RPC_STUB ISynGroup_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynGroup_SetProperty_Proxy( 
    ISynGroup * This,
    LONG lSpecifier,
    LONG lValue);


void __RPC_STUB ISynGroup_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynGroup_GetPropertyByIndex_Proxy( 
    ISynGroup * This,
    LONG lSpecifier,
    LONG lIndex,
    LONG *pValue);


void __RPC_STUB ISynGroup_GetPropertyByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynGroup_SetPropertyByIndex_Proxy( 
    ISynGroup * This,
    LONG lSpecifier,
    LONG lIndex,
    LONG lValue);


void __RPC_STUB ISynGroup_SetPropertyByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynGroup_GetPacketByIndex_Proxy( 
    ISynGroup * This,
    LONG lIndex,
    ISynPacket *pPacket);


void __RPC_STUB ISynGroup_GetPacketByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynGroup_SetPacketByIndex_Proxy( 
    ISynGroup * This,
    LONG lIndex,
    ISynPacket *pPacket);


void __RPC_STUB ISynGroup_SetPacketByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynGroup_INTERFACE_DEFINED__ */


#ifndef __ISynDisplay_INTERFACE_DEFINED__
#define __ISynDisplay_INTERFACE_DEFINED__

/* interface ISynDisplay */
/* [helpstring][uuid][object][local] */ 


EXTERN_C const IID IID_ISynDisplay;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A398ED6B-A2CC-471D-96F7-959610870AE0")
    ISynDisplay : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            LONG lSpecifier,
            LONG *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            LONG lSpecifier,
            LONG lValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PixelToTouch( 
            LONG PixelX,
            LONG PixelY,
            LONG *pTouchX,
            LONG *pTouchY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TouchToPixel( 
            LONG TouchX,
            LONG TouchY,
            LONG *pPixelX,
            LONG *pPixelY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDC( 
            HDC *pHDC) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlushDC( 
            LONG lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Acquire( 
            LONG lDisplayAcquisitionMethod) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Unacquire( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Select( 
            LONG lDeviceHandle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetEventNotification( 
            HANDLE hEvent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEventParameter( 
            LONG *lParameter) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSynchronousNotification( 
            _ISynDisplayEvents *pCallbackInstance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStringProperty( 
            LONG lSpecifier,
            unsigned char *pBuffer,
            LONG *ulBufLen) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBackgroundImage( 
            HBITMAP hBmp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloneBackgroundImage( 
            HBITMAP *pHBmp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynDisplayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynDisplay * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynDisplay * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynDisplay * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            ISynDisplay * This,
            LONG lSpecifier,
            LONG *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            ISynDisplay * This,
            LONG lSpecifier,
            LONG lValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PixelToTouch )( 
            ISynDisplay * This,
            LONG PixelX,
            LONG PixelY,
            LONG *pTouchX,
            LONG *pTouchY);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TouchToPixel )( 
            ISynDisplay * This,
            LONG TouchX,
            LONG TouchY,
            LONG *pPixelX,
            LONG *pPixelY);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDC )( 
            ISynDisplay * This,
            HDC *pHDC);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlushDC )( 
            ISynDisplay * This,
            LONG lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Acquire )( 
            ISynDisplay * This,
            LONG lDisplayAcquisitionMethod);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Unacquire )( 
            ISynDisplay * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            ISynDisplay * This,
            LONG lDeviceHandle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetEventNotification )( 
            ISynDisplay * This,
            HANDLE hEvent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEventParameter )( 
            ISynDisplay * This,
            LONG *lParameter);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSynchronousNotification )( 
            ISynDisplay * This,
            _ISynDisplayEvents *pCallbackInstance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStringProperty )( 
            ISynDisplay * This,
            LONG lSpecifier,
            unsigned char *pBuffer,
            LONG *ulBufLen);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBackgroundImage )( 
            ISynDisplay * This,
            HBITMAP hBmp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloneBackgroundImage )( 
            ISynDisplay * This,
            HBITMAP *pHBmp);
        
        END_INTERFACE
    } ISynDisplayVtbl;

    interface ISynDisplay
    {
        CONST_VTBL struct ISynDisplayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynDisplay_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynDisplay_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynDisplay_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynDisplay_GetProperty(This,lSpecifier,pValue)	\
    (This)->lpVtbl -> GetProperty(This,lSpecifier,pValue)

#define ISynDisplay_SetProperty(This,lSpecifier,lValue)	\
    (This)->lpVtbl -> SetProperty(This,lSpecifier,lValue)

#define ISynDisplay_PixelToTouch(This,PixelX,PixelY,pTouchX,pTouchY)	\
    (This)->lpVtbl -> PixelToTouch(This,PixelX,PixelY,pTouchX,pTouchY)

#define ISynDisplay_TouchToPixel(This,TouchX,TouchY,pPixelX,pPixelY)	\
    (This)->lpVtbl -> TouchToPixel(This,TouchX,TouchY,pPixelX,pPixelY)

#define ISynDisplay_GetDC(This,pHDC)	\
    (This)->lpVtbl -> GetDC(This,pHDC)

#define ISynDisplay_FlushDC(This,lFlags)	\
    (This)->lpVtbl -> FlushDC(This,lFlags)

#define ISynDisplay_Acquire(This,lDisplayAcquisitionMethod)	\
    (This)->lpVtbl -> Acquire(This,lDisplayAcquisitionMethod)

#define ISynDisplay_Unacquire(This)	\
    (This)->lpVtbl -> Unacquire(This)

#define ISynDisplay_Select(This,lDeviceHandle)	\
    (This)->lpVtbl -> Select(This,lDeviceHandle)

#define ISynDisplay_SetEventNotification(This,hEvent)	\
    (This)->lpVtbl -> SetEventNotification(This,hEvent)

#define ISynDisplay_GetEventParameter(This,lParameter)	\
    (This)->lpVtbl -> GetEventParameter(This,lParameter)

#define ISynDisplay_SetSynchronousNotification(This,pCallbackInstance)	\
    (This)->lpVtbl -> SetSynchronousNotification(This,pCallbackInstance)

#define ISynDisplay_GetStringProperty(This,lSpecifier,pBuffer,ulBufLen)	\
    (This)->lpVtbl -> GetStringProperty(This,lSpecifier,pBuffer,ulBufLen)

#define ISynDisplay_SetBackgroundImage(This,hBmp)	\
    (This)->lpVtbl -> SetBackgroundImage(This,hBmp)

#define ISynDisplay_CloneBackgroundImage(This,pHBmp)	\
    (This)->lpVtbl -> CloneBackgroundImage(This,pHBmp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_GetProperty_Proxy( 
    ISynDisplay * This,
    LONG lSpecifier,
    LONG *pValue);


void __RPC_STUB ISynDisplay_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_SetProperty_Proxy( 
    ISynDisplay * This,
    LONG lSpecifier,
    LONG lValue);


void __RPC_STUB ISynDisplay_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_PixelToTouch_Proxy( 
    ISynDisplay * This,
    LONG PixelX,
    LONG PixelY,
    LONG *pTouchX,
    LONG *pTouchY);


void __RPC_STUB ISynDisplay_PixelToTouch_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_TouchToPixel_Proxy( 
    ISynDisplay * This,
    LONG TouchX,
    LONG TouchY,
    LONG *pPixelX,
    LONG *pPixelY);


void __RPC_STUB ISynDisplay_TouchToPixel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_GetDC_Proxy( 
    ISynDisplay * This,
    HDC *pHDC);


void __RPC_STUB ISynDisplay_GetDC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_FlushDC_Proxy( 
    ISynDisplay * This,
    LONG lFlags);


void __RPC_STUB ISynDisplay_FlushDC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_Acquire_Proxy( 
    ISynDisplay * This,
    LONG lDisplayAcquisitionMethod);


void __RPC_STUB ISynDisplay_Acquire_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_Unacquire_Proxy( 
    ISynDisplay * This);


void __RPC_STUB ISynDisplay_Unacquire_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_Select_Proxy( 
    ISynDisplay * This,
    LONG lDeviceHandle);


void __RPC_STUB ISynDisplay_Select_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_SetEventNotification_Proxy( 
    ISynDisplay * This,
    HANDLE hEvent);


void __RPC_STUB ISynDisplay_SetEventNotification_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_GetEventParameter_Proxy( 
    ISynDisplay * This,
    LONG *lParameter);


void __RPC_STUB ISynDisplay_GetEventParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_SetSynchronousNotification_Proxy( 
    ISynDisplay * This,
    _ISynDisplayEvents *pCallbackInstance);


void __RPC_STUB ISynDisplay_SetSynchronousNotification_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_GetStringProperty_Proxy( 
    ISynDisplay * This,
    LONG lSpecifier,
    unsigned char *pBuffer,
    LONG *ulBufLen);


void __RPC_STUB ISynDisplay_GetStringProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_SetBackgroundImage_Proxy( 
    ISynDisplay * This,
    HBITMAP hBmp);


void __RPC_STUB ISynDisplay_SetBackgroundImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDisplay_CloneBackgroundImage_Proxy( 
    ISynDisplay * This,
    HBITMAP *pHBmp);


void __RPC_STUB ISynDisplay_CloneBackgroundImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynDisplay_INTERFACE_DEFINED__ */



#ifndef __SYNCOMLib_LIBRARY_DEFINED__
#define __SYNCOMLib_LIBRARY_DEFINED__

/* library SYNCOMLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SYNCOMLib;

EXTERN_C const CLSID CLSID_SynAPI;

#ifdef __cplusplus

class DECLSPEC_UUID("9C042297-D1CD-4F0D-B1AB-9F48AD6A6DFF")
SynAPI;
#endif

EXTERN_C const CLSID CLSID_SynDevice;

#ifdef __cplusplus

class DECLSPEC_UUID("9345312C-D098-4BB1-B2B2-D529EB995173")
SynDevice;
#endif

EXTERN_C const CLSID CLSID_SynPacket;

#ifdef __cplusplus

class DECLSPEC_UUID("E0C6335D-27F8-424B-A5C2-561291A902A0")
SynPacket;
#endif

EXTERN_C const CLSID CLSID_SynGroup;

#ifdef __cplusplus

class DECLSPEC_UUID("FB9298BC-209C-46b8-827A-533F46A05220")
SynGroup;
#endif

EXTERN_C const CLSID CLSID_SynDisplay;

#ifdef __cplusplus

class DECLSPEC_UUID("248AFB1A-27C4-4A30-BF45-6544146648BC")
SynDisplay;
#endif
#endif /* __SYNCOMLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


