

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Thu May 17 19:21:42 2012
 */
/* Compiler settings for .\SynTPEnh.idl:
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

#ifndef __SynCom2_h__
#define __SynCom2_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISynPacket2_FWD_DEFINED__
#define __ISynPacket2_FWD_DEFINED__
typedef interface ISynPacket2 ISynPacket2;
#endif 	/* __ISynPacket2_FWD_DEFINED__ */


#ifndef __ISynGroup2_FWD_DEFINED__
#define __ISynGroup2_FWD_DEFINED__
typedef interface ISynGroup2 ISynGroup2;
#endif 	/* __ISynGroup2_FWD_DEFINED__ */


#ifndef __ISynDisplay2_FWD_DEFINED__
#define __ISynDisplay2_FWD_DEFINED__
typedef interface ISynDisplay2 ISynDisplay2;
#endif 	/* __ISynDisplay2_FWD_DEFINED__ */


#ifndef __ISynPlugin_FWD_DEFINED__
#define __ISynPlugin_FWD_DEFINED__
typedef interface ISynPlugin ISynPlugin;
#endif 	/* __ISynPlugin_FWD_DEFINED__ */


#ifndef ___ISynGestureActionEvents_FWD_DEFINED__
#define ___ISynGestureActionEvents_FWD_DEFINED__
typedef interface _ISynGestureActionEvents _ISynGestureActionEvents;
#endif 	/* ___ISynGestureActionEvents_FWD_DEFINED__ */


#ifndef __ISynDevice2_FWD_DEFINED__
#define __ISynDevice2_FWD_DEFINED__
typedef interface ISynDevice2 ISynDevice2;
#endif 	/* __ISynDevice2_FWD_DEFINED__ */


#ifndef __ISynAPI2_FWD_DEFINED__
#define __ISynAPI2_FWD_DEFINED__
typedef interface ISynAPI2 ISynAPI2;
#endif 	/* __ISynAPI2_FWD_DEFINED__ */


#ifndef __SynAPI2_FWD_DEFINED__
#define __SynAPI2_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynAPI2 SynAPI2;
#else
typedef struct SynAPI2 SynAPI2;
#endif /* __cplusplus */

#endif 	/* __SynAPI2_FWD_DEFINED__ */


#ifndef __SynDevice2_FWD_DEFINED__
#define __SynDevice2_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynDevice2 SynDevice2;
#else
typedef struct SynDevice2 SynDevice2;
#endif /* __cplusplus */

#endif 	/* __SynDevice2_FWD_DEFINED__ */


#ifndef __SynPacket2_FWD_DEFINED__
#define __SynPacket2_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynPacket2 SynPacket2;
#else
typedef struct SynPacket2 SynPacket2;
#endif /* __cplusplus */

#endif 	/* __SynPacket2_FWD_DEFINED__ */


#ifndef __SynGroup2_FWD_DEFINED__
#define __SynGroup2_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynGroup2 SynGroup2;
#else
typedef struct SynGroup2 SynGroup2;
#endif /* __cplusplus */

#endif 	/* __SynGroup2_FWD_DEFINED__ */


#ifndef __SynDisplay2_FWD_DEFINED__
#define __SynDisplay2_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynDisplay2 SynDisplay2;
#else
typedef struct SynDisplay2 SynDisplay2;
#endif /* __cplusplus */

#endif 	/* __SynDisplay2_FWD_DEFINED__ */


#ifndef __SynPlugin_FWD_DEFINED__
#define __SynPlugin_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynPlugin SynPlugin;
#else
typedef struct SynPlugin SynPlugin;
#endif /* __cplusplus */

#endif 	/* __SynPlugin_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ISynPacket2_INTERFACE_DEFINED__
#define __ISynPacket2_INTERFACE_DEFINED__

/* interface ISynPacket2 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISynPacket2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("915E3228-3A43-4CC3-936F-140966A48873")
    ISynPacket2 : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISynPacket2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynPacket2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynPacket2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynPacket2 * This);
        
        END_INTERFACE
    } ISynPacket2Vtbl;

    interface ISynPacket2
    {
        CONST_VTBL struct ISynPacket2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynPacket2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynPacket2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynPacket2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISynPacket2_INTERFACE_DEFINED__ */


#ifndef __ISynGroup2_INTERFACE_DEFINED__
#define __ISynGroup2_INTERFACE_DEFINED__

/* interface ISynGroup2 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISynGroup2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DB1F7F99-6339-4dfe-A45D-6B6C78E498B1")
    ISynGroup2 : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISynGroup2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynGroup2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynGroup2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynGroup2 * This);
        
        END_INTERFACE
    } ISynGroup2Vtbl;

    interface ISynGroup2
    {
        CONST_VTBL struct ISynGroup2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynGroup2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynGroup2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynGroup2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISynGroup2_INTERFACE_DEFINED__ */


#ifndef __ISynDisplay2_INTERFACE_DEFINED__
#define __ISynDisplay2_INTERFACE_DEFINED__

/* interface ISynDisplay2 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISynDisplay2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B43D54D0-AC5C-4285-ADD2-1874140B623E")
    ISynDisplay2 : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISynDisplay2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynDisplay2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynDisplay2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynDisplay2 * This);
        
        END_INTERFACE
    } ISynDisplay2Vtbl;

    interface ISynDisplay2
    {
        CONST_VTBL struct ISynDisplay2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynDisplay2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynDisplay2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynDisplay2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISynDisplay2_INTERFACE_DEFINED__ */


#ifndef __ISynPlugin_INTERFACE_DEFINED__
#define __ISynPlugin_INTERFACE_DEFINED__

/* interface ISynPlugin */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISynPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FB16AA71-F2DD-45CF-9B1B-1C5F732A4B21")
    ISynPlugin : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [out] */ BSTR *pName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNumberOfActions( 
            /* [out] */ LONG *plCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetActionName( 
            /* [in] */ LONG lIndex,
            /* [out] */ BSTR *pActionName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetActionStringProperty( 
            /* [in] */ LONG lIndex,
            /* [in] */ BSTR pStrValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetActionBlobProperty( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG lSize,
            /* [size_is][in] */ UCHAR *pucData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetActionProperty( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG lValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynPlugin * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynPlugin * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            ISynPlugin * This,
            /* [out] */ BSTR *pName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfActions )( 
            ISynPlugin * This,
            /* [out] */ LONG *plCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetActionName )( 
            ISynPlugin * This,
            /* [in] */ LONG lIndex,
            /* [out] */ BSTR *pActionName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetActionStringProperty )( 
            ISynPlugin * This,
            /* [in] */ LONG lIndex,
            /* [in] */ BSTR pStrValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetActionBlobProperty )( 
            ISynPlugin * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG lSize,
            /* [size_is][in] */ UCHAR *pucData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetActionProperty )( 
            ISynPlugin * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG lValue);
        
        END_INTERFACE
    } ISynPluginVtbl;

    interface ISynPlugin
    {
        CONST_VTBL struct ISynPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynPlugin_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynPlugin_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynPlugin_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynPlugin_GetName(This,pName)	\
    (This)->lpVtbl -> GetName(This,pName)

#define ISynPlugin_GetNumberOfActions(This,plCount)	\
    (This)->lpVtbl -> GetNumberOfActions(This,plCount)

#define ISynPlugin_GetActionName(This,lIndex,pActionName)	\
    (This)->lpVtbl -> GetActionName(This,lIndex,pActionName)

#define ISynPlugin_SetActionStringProperty(This,lIndex,pStrValue)	\
    (This)->lpVtbl -> SetActionStringProperty(This,lIndex,pStrValue)

#define ISynPlugin_SetActionBlobProperty(This,lIndex,lSize,pucData)	\
    (This)->lpVtbl -> SetActionBlobProperty(This,lIndex,lSize,pucData)

#define ISynPlugin_SetActionProperty(This,lIndex,lValue)	\
    (This)->lpVtbl -> SetActionProperty(This,lIndex,lValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynPlugin_GetName_Proxy( 
    ISynPlugin * This,
    /* [out] */ BSTR *pName);


void __RPC_STUB ISynPlugin_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynPlugin_GetNumberOfActions_Proxy( 
    ISynPlugin * This,
    /* [out] */ LONG *plCount);


void __RPC_STUB ISynPlugin_GetNumberOfActions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynPlugin_GetActionName_Proxy( 
    ISynPlugin * This,
    /* [in] */ LONG lIndex,
    /* [out] */ BSTR *pActionName);


void __RPC_STUB ISynPlugin_GetActionName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynPlugin_SetActionStringProperty_Proxy( 
    ISynPlugin * This,
    /* [in] */ LONG lIndex,
    /* [in] */ BSTR pStrValue);


void __RPC_STUB ISynPlugin_SetActionStringProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynPlugin_SetActionBlobProperty_Proxy( 
    ISynPlugin * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG lSize,
    /* [size_is][in] */ UCHAR *pucData);


void __RPC_STUB ISynPlugin_SetActionBlobProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynPlugin_SetActionProperty_Proxy( 
    ISynPlugin * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG lValue);


void __RPC_STUB ISynPlugin_SetActionProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynPlugin_INTERFACE_DEFINED__ */


#ifndef ___ISynGestureActionEvents_INTERFACE_DEFINED__
#define ___ISynGestureActionEvents_INTERFACE_DEFINED__

/* interface _ISynGestureActionEvents */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID__ISynGestureActionEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("513F1384-1B4E-4533-975D-42C787668C08")
    _ISynGestureActionEvents : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnSynGestureActionEvent( 
            /* [in] */ LONG lGestureActionType,
            /* [in] */ LONG lGestureActionDataSize,
            /* [size_is][in] */ UCHAR *ucGestureActionData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct _ISynGestureActionEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ISynGestureActionEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ISynGestureActionEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ISynGestureActionEvents * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnSynGestureActionEvent )( 
            _ISynGestureActionEvents * This,
            /* [in] */ LONG lGestureActionType,
            /* [in] */ LONG lGestureActionDataSize,
            /* [size_is][in] */ UCHAR *ucGestureActionData);
        
        END_INTERFACE
    } _ISynGestureActionEventsVtbl;

    interface _ISynGestureActionEvents
    {
        CONST_VTBL struct _ISynGestureActionEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISynGestureActionEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _ISynGestureActionEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _ISynGestureActionEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _ISynGestureActionEvents_OnSynGestureActionEvent(This,lGestureActionType,lGestureActionDataSize,ucGestureActionData)	\
    (This)->lpVtbl -> OnSynGestureActionEvent(This,lGestureActionType,lGestureActionDataSize,ucGestureActionData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE _ISynGestureActionEvents_OnSynGestureActionEvent_Proxy( 
    _ISynGestureActionEvents * This,
    /* [in] */ LONG lGestureActionType,
    /* [in] */ LONG lGestureActionDataSize,
    /* [size_is][in] */ UCHAR *ucGestureActionData);


void __RPC_STUB _ISynGestureActionEvents_OnSynGestureActionEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* ___ISynGestureActionEvents_INTERFACE_DEFINED__ */


#ifndef __ISynDevice2_INTERFACE_DEFINED__
#define __ISynDevice2_INTERFACE_DEFINED__

/* interface ISynDevice2 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISynDevice2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4FF2C59B-0D34-42F1-A3FC-43ABC2EB70C7")
    ISynDevice2 : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ LONG lSpecifier,
            /* [out][in] */ LONG *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPropertyDefault( 
            /* [in] */ LONG lSpecifier,
            /* [out] */ LONG *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStringProperty( 
            /* [in] */ LONG lSpecifier,
            /* [out] */ BSTR *strValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ LONG lSpecifier,
            /* [in] */ LONG lValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Select( 
            /* [in] */ LONG lHandle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPluginAction( 
            /* [in] */ LONG lZoneId,
            /* [in] */ ISynPlugin *pPlugin,
            /* [in] */ LONG lActionIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPluginAction( 
            /* [in] */ LONG lZoneId,
            /* [out] */ ISynPlugin **ppPlugin,
            /* [out] */ LONG *lActionIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPluginActionDefault( 
            /* [in] */ LONG lZoneId,
            /* [out] */ ISynPlugin **ppPlugin,
            /* [out] */ LONG *lActionIndexDefault) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetGestureActionNotification( 
            /* [in] */ DWORD dwProcId,
            /* [in] */ _ISynGestureActionEvents *pConnection,
            /* [in] */ LONG lValue,
            /* [in] */ LONG lValueEx) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynDevice2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynDevice2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynDevice2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynDevice2 * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            ISynDevice2 * This,
            /* [in] */ LONG lSpecifier,
            /* [out][in] */ LONG *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPropertyDefault )( 
            ISynDevice2 * This,
            /* [in] */ LONG lSpecifier,
            /* [out] */ LONG *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStringProperty )( 
            ISynDevice2 * This,
            /* [in] */ LONG lSpecifier,
            /* [out] */ BSTR *strValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            ISynDevice2 * This,
            /* [in] */ LONG lSpecifier,
            /* [in] */ LONG lValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            ISynDevice2 * This,
            /* [in] */ LONG lHandle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPluginAction )( 
            ISynDevice2 * This,
            /* [in] */ LONG lZoneId,
            /* [in] */ ISynPlugin *pPlugin,
            /* [in] */ LONG lActionIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPluginAction )( 
            ISynDevice2 * This,
            /* [in] */ LONG lZoneId,
            /* [out] */ ISynPlugin **ppPlugin,
            /* [out] */ LONG *lActionIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPluginActionDefault )( 
            ISynDevice2 * This,
            /* [in] */ LONG lZoneId,
            /* [out] */ ISynPlugin **ppPlugin,
            /* [out] */ LONG *lActionIndexDefault);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetGestureActionNotification )( 
            ISynDevice2 * This,
            /* [in] */ DWORD dwProcId,
            /* [in] */ _ISynGestureActionEvents *pConnection,
            /* [in] */ LONG lValue,
            /* [in] */ LONG lValueEx);
        
        END_INTERFACE
    } ISynDevice2Vtbl;

    interface ISynDevice2
    {
        CONST_VTBL struct ISynDevice2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynDevice2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynDevice2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynDevice2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynDevice2_GetProperty(This,lSpecifier,pValue)	\
    (This)->lpVtbl -> GetProperty(This,lSpecifier,pValue)

#define ISynDevice2_GetPropertyDefault(This,lSpecifier,pValue)	\
    (This)->lpVtbl -> GetPropertyDefault(This,lSpecifier,pValue)

#define ISynDevice2_GetStringProperty(This,lSpecifier,strValue)	\
    (This)->lpVtbl -> GetStringProperty(This,lSpecifier,strValue)

#define ISynDevice2_SetProperty(This,lSpecifier,lValue)	\
    (This)->lpVtbl -> SetProperty(This,lSpecifier,lValue)

#define ISynDevice2_Select(This,lHandle)	\
    (This)->lpVtbl -> Select(This,lHandle)

#define ISynDevice2_SetPluginAction(This,lZoneId,pPlugin,lActionIndex)	\
    (This)->lpVtbl -> SetPluginAction(This,lZoneId,pPlugin,lActionIndex)

#define ISynDevice2_GetPluginAction(This,lZoneId,ppPlugin,lActionIndex)	\
    (This)->lpVtbl -> GetPluginAction(This,lZoneId,ppPlugin,lActionIndex)

#define ISynDevice2_GetPluginActionDefault(This,lZoneId,ppPlugin,lActionIndexDefault)	\
    (This)->lpVtbl -> GetPluginActionDefault(This,lZoneId,ppPlugin,lActionIndexDefault)

#define ISynDevice2_SetGestureActionNotification(This,dwProcId,pConnection,lValue,lValueEx)	\
    (This)->lpVtbl -> SetGestureActionNotification(This,dwProcId,pConnection,lValue,lValueEx)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice2_GetProperty_Proxy( 
    ISynDevice2 * This,
    /* [in] */ LONG lSpecifier,
    /* [out][in] */ LONG *pValue);


void __RPC_STUB ISynDevice2_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice2_GetPropertyDefault_Proxy( 
    ISynDevice2 * This,
    /* [in] */ LONG lSpecifier,
    /* [out] */ LONG *pValue);


void __RPC_STUB ISynDevice2_GetPropertyDefault_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice2_GetStringProperty_Proxy( 
    ISynDevice2 * This,
    /* [in] */ LONG lSpecifier,
    /* [out] */ BSTR *strValue);


void __RPC_STUB ISynDevice2_GetStringProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice2_SetProperty_Proxy( 
    ISynDevice2 * This,
    /* [in] */ LONG lSpecifier,
    /* [in] */ LONG lValue);


void __RPC_STUB ISynDevice2_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice2_Select_Proxy( 
    ISynDevice2 * This,
    /* [in] */ LONG lHandle);


void __RPC_STUB ISynDevice2_Select_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice2_SetPluginAction_Proxy( 
    ISynDevice2 * This,
    /* [in] */ LONG lZoneId,
    /* [in] */ ISynPlugin *pPlugin,
    /* [in] */ LONG lActionIndex);


void __RPC_STUB ISynDevice2_SetPluginAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice2_GetPluginAction_Proxy( 
    ISynDevice2 * This,
    /* [in] */ LONG lZoneId,
    /* [out] */ ISynPlugin **ppPlugin,
    /* [out] */ LONG *lActionIndex);


void __RPC_STUB ISynDevice2_GetPluginAction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice2_GetPluginActionDefault_Proxy( 
    ISynDevice2 * This,
    /* [in] */ LONG lZoneId,
    /* [out] */ ISynPlugin **ppPlugin,
    /* [out] */ LONG *lActionIndexDefault);


void __RPC_STUB ISynDevice2_GetPluginActionDefault_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynDevice2_SetGestureActionNotification_Proxy( 
    ISynDevice2 * This,
    /* [in] */ DWORD dwProcId,
    /* [in] */ _ISynGestureActionEvents *pConnection,
    /* [in] */ LONG lValue,
    /* [in] */ LONG lValueEx);


void __RPC_STUB ISynDevice2_SetGestureActionNotification_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynDevice2_INTERFACE_DEFINED__ */


#ifndef __ISynAPI2_INTERFACE_DEFINED__
#define __ISynAPI2_INTERFACE_DEFINED__

/* interface ISynAPI2 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISynAPI2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1FB3B18F-C702-485C-BF7E-16A6843BA87D")
    ISynAPI2 : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ LONG lSpecifier,
            /* [out] */ LONG *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ LONG lSpecifier,
            /* [in] */ LONG lValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStringProperty( 
            /* [in] */ LONG lSpecifier,
            /* [out] */ BSTR *pStr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNumOfPlugins( 
            /* [out] */ LONG *pCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPlugin( 
            /* [in] */ LONG index,
            /* [out] */ ISynPlugin **pPlugIn) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynAPI2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynAPI2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynAPI2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynAPI2 * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ISynAPI2 * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            ISynAPI2 * This,
            /* [in] */ LONG lSpecifier,
            /* [out] */ LONG *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            ISynAPI2 * This,
            /* [in] */ LONG lSpecifier,
            /* [in] */ LONG lValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStringProperty )( 
            ISynAPI2 * This,
            /* [in] */ LONG lSpecifier,
            /* [out] */ BSTR *pStr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNumOfPlugins )( 
            ISynAPI2 * This,
            /* [out] */ LONG *pCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPlugin )( 
            ISynAPI2 * This,
            /* [in] */ LONG index,
            /* [out] */ ISynPlugin **pPlugIn);
        
        END_INTERFACE
    } ISynAPI2Vtbl;

    interface ISynAPI2
    {
        CONST_VTBL struct ISynAPI2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynAPI2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynAPI2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynAPI2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynAPI2_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define ISynAPI2_GetProperty(This,lSpecifier,pValue)	\
    (This)->lpVtbl -> GetProperty(This,lSpecifier,pValue)

#define ISynAPI2_SetProperty(This,lSpecifier,lValue)	\
    (This)->lpVtbl -> SetProperty(This,lSpecifier,lValue)

#define ISynAPI2_GetStringProperty(This,lSpecifier,pStr)	\
    (This)->lpVtbl -> GetStringProperty(This,lSpecifier,pStr)

#define ISynAPI2_GetNumOfPlugins(This,pCount)	\
    (This)->lpVtbl -> GetNumOfPlugins(This,pCount)

#define ISynAPI2_GetPlugin(This,index,pPlugIn)	\
    (This)->lpVtbl -> GetPlugin(This,index,pPlugIn)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI2_Initialize_Proxy( 
    ISynAPI2 * This);


void __RPC_STUB ISynAPI2_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI2_GetProperty_Proxy( 
    ISynAPI2 * This,
    /* [in] */ LONG lSpecifier,
    /* [out] */ LONG *pValue);


void __RPC_STUB ISynAPI2_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI2_SetProperty_Proxy( 
    ISynAPI2 * This,
    /* [in] */ LONG lSpecifier,
    /* [in] */ LONG lValue);


void __RPC_STUB ISynAPI2_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI2_GetStringProperty_Proxy( 
    ISynAPI2 * This,
    /* [in] */ LONG lSpecifier,
    /* [out] */ BSTR *pStr);


void __RPC_STUB ISynAPI2_GetStringProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI2_GetNumOfPlugins_Proxy( 
    ISynAPI2 * This,
    /* [out] */ LONG *pCount);


void __RPC_STUB ISynAPI2_GetNumOfPlugins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISynAPI2_GetPlugin_Proxy( 
    ISynAPI2 * This,
    /* [in] */ LONG index,
    /* [out] */ ISynPlugin **pPlugIn);


void __RPC_STUB ISynAPI2_GetPlugin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynAPI2_INTERFACE_DEFINED__ */



#ifndef __SynTPEnhLib_LIBRARY_DEFINED__
#define __SynTPEnhLib_LIBRARY_DEFINED__

/* library SynTPEnhLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SynTPEnhLib;

EXTERN_C const CLSID CLSID_SynAPI2;

#ifdef __cplusplus

class DECLSPEC_UUID("63793357-C855-483F-8ABA-A8CE26C43753")
SynAPI2;
#endif

EXTERN_C const CLSID CLSID_SynDevice2;

#ifdef __cplusplus

class DECLSPEC_UUID("A5D8CC60-F629-4C13-83A3-55CB38031A70")
SynDevice2;
#endif

EXTERN_C const CLSID CLSID_SynPacket2;

#ifdef __cplusplus

class DECLSPEC_UUID("E42CA82A-A15F-4723-9906-83359AABA62B")
SynPacket2;
#endif

EXTERN_C const CLSID CLSID_SynGroup2;

#ifdef __cplusplus

class DECLSPEC_UUID("2FC36709-C2DE-4544-81AD-73D335E1D95A")
SynGroup2;
#endif

EXTERN_C const CLSID CLSID_SynDisplay2;

#ifdef __cplusplus

class DECLSPEC_UUID("A72267A7-2C84-4DA5-A8F9-784FBA6820B5")
SynDisplay2;
#endif

EXTERN_C const CLSID CLSID_SynPlugin;

#ifdef __cplusplus

class DECLSPEC_UUID("B7A9DB83-64AA-4930-B171-82B792125782")
SynPlugin;
#endif
#endif /* __SynTPEnhLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


