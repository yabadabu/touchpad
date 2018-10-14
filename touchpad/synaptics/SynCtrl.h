

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Thu May 17 19:24:26 2012
 */
/* Compiler settings for .\SynCtrl.idl:
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

#ifndef __SynCtrl_h__
#define __SynCtrl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISynAPICtrl_FWD_DEFINED__
#define __ISynAPICtrl_FWD_DEFINED__
typedef interface ISynAPICtrl ISynAPICtrl;
#endif 	/* __ISynAPICtrl_FWD_DEFINED__ */


#ifndef __ISynDeviceCtrl_FWD_DEFINED__
#define __ISynDeviceCtrl_FWD_DEFINED__
typedef interface ISynDeviceCtrl ISynDeviceCtrl;
#endif 	/* __ISynDeviceCtrl_FWD_DEFINED__ */


#ifndef __ISynPacketCtrl_FWD_DEFINED__
#define __ISynPacketCtrl_FWD_DEFINED__
typedef interface ISynPacketCtrl ISynPacketCtrl;
#endif 	/* __ISynPacketCtrl_FWD_DEFINED__ */


#ifndef __ISynGroupCtrl_FWD_DEFINED__
#define __ISynGroupCtrl_FWD_DEFINED__
typedef interface ISynGroupCtrl ISynGroupCtrl;
#endif 	/* __ISynGroupCtrl_FWD_DEFINED__ */


#ifndef __ISynDisplayCtrl_FWD_DEFINED__
#define __ISynDisplayCtrl_FWD_DEFINED__
typedef interface ISynDisplayCtrl ISynDisplayCtrl;
#endif 	/* __ISynDisplayCtrl_FWD_DEFINED__ */


#ifndef ___ISynAPICtrlEvents_FWD_DEFINED__
#define ___ISynAPICtrlEvents_FWD_DEFINED__
typedef interface _ISynAPICtrlEvents _ISynAPICtrlEvents;
#endif 	/* ___ISynAPICtrlEvents_FWD_DEFINED__ */


#ifndef __SynAPICtrl_FWD_DEFINED__
#define __SynAPICtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynAPICtrl SynAPICtrl;
#else
typedef struct SynAPICtrl SynAPICtrl;
#endif /* __cplusplus */

#endif 	/* __SynAPICtrl_FWD_DEFINED__ */


#ifndef __SynPacketCtrl_FWD_DEFINED__
#define __SynPacketCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynPacketCtrl SynPacketCtrl;
#else
typedef struct SynPacketCtrl SynPacketCtrl;
#endif /* __cplusplus */

#endif 	/* __SynPacketCtrl_FWD_DEFINED__ */


#ifndef __SynGroupCtrl_FWD_DEFINED__
#define __SynGroupCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynGroupCtrl SynGroupCtrl;
#else
typedef struct SynGroupCtrl SynGroupCtrl;
#endif /* __cplusplus */

#endif 	/* __SynGroupCtrl_FWD_DEFINED__ */


#ifndef ___ISynDeviceCtrlEvents_FWD_DEFINED__
#define ___ISynDeviceCtrlEvents_FWD_DEFINED__
typedef interface _ISynDeviceCtrlEvents _ISynDeviceCtrlEvents;
#endif 	/* ___ISynDeviceCtrlEvents_FWD_DEFINED__ */


#ifndef __SynDeviceCtrl_FWD_DEFINED__
#define __SynDeviceCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynDeviceCtrl SynDeviceCtrl;
#else
typedef struct SynDeviceCtrl SynDeviceCtrl;
#endif /* __cplusplus */

#endif 	/* __SynDeviceCtrl_FWD_DEFINED__ */


#ifndef ___ISynDisplayCtrlEvents_FWD_DEFINED__
#define ___ISynDisplayCtrlEvents_FWD_DEFINED__
typedef interface _ISynDisplayCtrlEvents _ISynDisplayCtrlEvents;
#endif 	/* ___ISynDisplayCtrlEvents_FWD_DEFINED__ */


#ifndef __SynDisplayCtrl_FWD_DEFINED__
#define __SynDisplayCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class SynDisplayCtrl SynDisplayCtrl;
#else
typedef struct SynDisplayCtrl SynDisplayCtrl;
#endif /* __cplusplus */

#endif 	/* __SynDisplayCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_SynCtrl_0000 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_SynCtrl_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_SynCtrl_0000_v0_0_s_ifspec;

#ifndef __ISynAPICtrl_INTERFACE_DEFINED__
#define __ISynAPICtrl_INTERFACE_DEFINED__

/* interface ISynAPICtrl */
/* [helpstring][oleautomation][nonextensible][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_ISynAPICtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5C66C161-9F39-42E2-A0E8-B0787560F058")
    ISynAPICtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindDevice( 
            enum SynConnectionType eConnectionType,
            enum SynDeviceType eDeviceType,
            /* [in] */ LONG lLast,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLongProperty( 
            enum SynAPIProperty eProperty,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLongProperty( 
            enum SynAPIProperty eProperty,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStringProperty( 
            enum SynAPIStringProperty eProperty,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HardwareBroadcast( 
            LONG lAction) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PersistState( 
            LONG lStateFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RestoreState( 
            LONG lStateFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deactivate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindDeviceEx( 
            enum SynConnectionType eConnectionType,
            enum SynDeviceType eDeviceType,
            /* [in] */ LONG lLast,
            BOOL bMatchConnectionType,
            BOOL bMatchDeviceType,
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynAPICtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynAPICtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynAPICtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynAPICtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISynAPICtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISynAPICtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISynAPICtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISynAPICtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ISynAPICtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindDevice )( 
            ISynAPICtrl * This,
            enum SynConnectionType eConnectionType,
            enum SynDeviceType eDeviceType,
            /* [in] */ LONG lLast,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLongProperty )( 
            ISynAPICtrl * This,
            enum SynAPIProperty eProperty,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLongProperty )( 
            ISynAPICtrl * This,
            enum SynAPIProperty eProperty,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStringProperty )( 
            ISynAPICtrl * This,
            enum SynAPIStringProperty eProperty,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HardwareBroadcast )( 
            ISynAPICtrl * This,
            LONG lAction);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISynAPICtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PersistState )( 
            ISynAPICtrl * This,
            LONG lStateFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RestoreState )( 
            ISynAPICtrl * This,
            LONG lStateFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Deactivate )( 
            ISynAPICtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindDeviceEx )( 
            ISynAPICtrl * This,
            enum SynConnectionType eConnectionType,
            enum SynDeviceType eDeviceType,
            /* [in] */ LONG lLast,
            BOOL bMatchConnectionType,
            BOOL bMatchDeviceType,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ISynAPICtrlVtbl;

    interface ISynAPICtrl
    {
        CONST_VTBL struct ISynAPICtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynAPICtrl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynAPICtrl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynAPICtrl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynAPICtrl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISynAPICtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISynAPICtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISynAPICtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISynAPICtrl_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define ISynAPICtrl_FindDevice(This,eConnectionType,eDeviceType,lLast,pVal)	\
    (This)->lpVtbl -> FindDevice(This,eConnectionType,eDeviceType,lLast,pVal)

#define ISynAPICtrl_GetLongProperty(This,eProperty,pVal)	\
    (This)->lpVtbl -> GetLongProperty(This,eProperty,pVal)

#define ISynAPICtrl_SetLongProperty(This,eProperty,newVal)	\
    (This)->lpVtbl -> SetLongProperty(This,eProperty,newVal)

#define ISynAPICtrl_GetStringProperty(This,eProperty,pVal)	\
    (This)->lpVtbl -> GetStringProperty(This,eProperty,pVal)

#define ISynAPICtrl_HardwareBroadcast(This,lAction)	\
    (This)->lpVtbl -> HardwareBroadcast(This,lAction)

#define ISynAPICtrl_Activate(This)	\
    (This)->lpVtbl -> Activate(This)

#define ISynAPICtrl_PersistState(This,lStateFlags)	\
    (This)->lpVtbl -> PersistState(This,lStateFlags)

#define ISynAPICtrl_RestoreState(This,lStateFlags)	\
    (This)->lpVtbl -> RestoreState(This,lStateFlags)

#define ISynAPICtrl_Deactivate(This)	\
    (This)->lpVtbl -> Deactivate(This)

#define ISynAPICtrl_FindDeviceEx(This,eConnectionType,eDeviceType,lLast,bMatchConnectionType,bMatchDeviceType,pVal)	\
    (This)->lpVtbl -> FindDeviceEx(This,eConnectionType,eDeviceType,lLast,bMatchConnectionType,bMatchDeviceType,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynAPICtrl_Initialize_Proxy( 
    ISynAPICtrl * This);


void __RPC_STUB ISynAPICtrl_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynAPICtrl_FindDevice_Proxy( 
    ISynAPICtrl * This,
    enum SynConnectionType eConnectionType,
    enum SynDeviceType eDeviceType,
    /* [in] */ LONG lLast,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynAPICtrl_FindDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynAPICtrl_GetLongProperty_Proxy( 
    ISynAPICtrl * This,
    enum SynAPIProperty eProperty,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynAPICtrl_GetLongProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynAPICtrl_SetLongProperty_Proxy( 
    ISynAPICtrl * This,
    enum SynAPIProperty eProperty,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynAPICtrl_SetLongProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynAPICtrl_GetStringProperty_Proxy( 
    ISynAPICtrl * This,
    enum SynAPIStringProperty eProperty,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISynAPICtrl_GetStringProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynAPICtrl_HardwareBroadcast_Proxy( 
    ISynAPICtrl * This,
    LONG lAction);


void __RPC_STUB ISynAPICtrl_HardwareBroadcast_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynAPICtrl_Activate_Proxy( 
    ISynAPICtrl * This);


void __RPC_STUB ISynAPICtrl_Activate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynAPICtrl_PersistState_Proxy( 
    ISynAPICtrl * This,
    LONG lStateFlags);


void __RPC_STUB ISynAPICtrl_PersistState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynAPICtrl_RestoreState_Proxy( 
    ISynAPICtrl * This,
    LONG lStateFlags);


void __RPC_STUB ISynAPICtrl_RestoreState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynAPICtrl_Deactivate_Proxy( 
    ISynAPICtrl * This);


void __RPC_STUB ISynAPICtrl_Deactivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynAPICtrl_FindDeviceEx_Proxy( 
    ISynAPICtrl * This,
    enum SynConnectionType eConnectionType,
    enum SynDeviceType eDeviceType,
    /* [in] */ LONG lLast,
    BOOL bMatchConnectionType,
    BOOL bMatchDeviceType,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynAPICtrl_FindDeviceEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynAPICtrl_INTERFACE_DEFINED__ */


#ifndef __ISynDeviceCtrl_INTERFACE_DEFINED__
#define __ISynDeviceCtrl_INTERFACE_DEFINED__

/* interface ISynDeviceCtrl */
/* [helpstring][oleautomation][nonextensible][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_ISynDeviceCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8317C718-98AB-484A-A12F-EDEB48C8B39F")
    ISynDeviceCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Select( 
            LONG lDeviceHandle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLongProperty( 
            enum SynDeviceProperty eProperty,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLongProperty( 
            enum SynDeviceProperty eProperty,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStringProperty( 
            enum SynDeviceProperty eProperty,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadPacket( 
            /* [in] */ ISynPacketCtrl *pPacket,
            /* [retval][out] */ LONG *lAvailable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ForceMotion( 
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ForcePacket( 
            ISynPacketCtrl *pPacket) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Acquire( 
            LONG lFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Unacquire( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deactivate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLongPropertyDefault( 
            enum SynDeviceProperty eProperty,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BulkTransaction( 
            LONG ulWriteLength,
            /* [out][in] */ SAFEARRAY * *write,
            LONG ulReadLength,
            /* [out][in] */ SAFEARRAY * *read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DiagnosticTransaction( 
            LONG ulWriteLength,
            /* [out][in] */ SAFEARRAY * *write,
            LONG ulReadLength,
            /* [out][in] */ SAFEARRAY * *read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAddressableProperty( 
            enum SynDeviceProperty eProperty,
            /* [in] */ LONG lAddress,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAddressableProperty( 
            enum SynDeviceProperty eProperty,
            /* [in] */ LONG lAddress,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ForceMotionWithWheel( 
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState,
            LONG lDeltaWheel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadGroup( 
            /* [in] */ ISynGroupCtrl *pGroup,
            /* [retval][out] */ LONG *lAvailable) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynDeviceCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynDeviceCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynDeviceCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynDeviceCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISynDeviceCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISynDeviceCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISynDeviceCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISynDeviceCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            ISynDeviceCtrl * This,
            LONG lDeviceHandle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLongProperty )( 
            ISynDeviceCtrl * This,
            enum SynDeviceProperty eProperty,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLongProperty )( 
            ISynDeviceCtrl * This,
            enum SynDeviceProperty eProperty,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStringProperty )( 
            ISynDeviceCtrl * This,
            enum SynDeviceProperty eProperty,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadPacket )( 
            ISynDeviceCtrl * This,
            /* [in] */ ISynPacketCtrl *pPacket,
            /* [retval][out] */ LONG *lAvailable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ForceMotion )( 
            ISynDeviceCtrl * This,
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ForcePacket )( 
            ISynDeviceCtrl * This,
            ISynPacketCtrl *pPacket);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Acquire )( 
            ISynDeviceCtrl * This,
            LONG lFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Unacquire )( 
            ISynDeviceCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISynDeviceCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Deactivate )( 
            ISynDeviceCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLongPropertyDefault )( 
            ISynDeviceCtrl * This,
            enum SynDeviceProperty eProperty,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BulkTransaction )( 
            ISynDeviceCtrl * This,
            LONG ulWriteLength,
            /* [out][in] */ SAFEARRAY * *write,
            LONG ulReadLength,
            /* [out][in] */ SAFEARRAY * *read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DiagnosticTransaction )( 
            ISynDeviceCtrl * This,
            LONG ulWriteLength,
            /* [out][in] */ SAFEARRAY * *write,
            LONG ulReadLength,
            /* [out][in] */ SAFEARRAY * *read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAddressableProperty )( 
            ISynDeviceCtrl * This,
            enum SynDeviceProperty eProperty,
            /* [in] */ LONG lAddress,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAddressableProperty )( 
            ISynDeviceCtrl * This,
            enum SynDeviceProperty eProperty,
            /* [in] */ LONG lAddress,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ForceMotionWithWheel )( 
            ISynDeviceCtrl * This,
            LONG lDeltaX,
            LONG lDeltaY,
            LONG lButtonState,
            LONG lDeltaWheel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadGroup )( 
            ISynDeviceCtrl * This,
            /* [in] */ ISynGroupCtrl *pGroup,
            /* [retval][out] */ LONG *lAvailable);
        
        END_INTERFACE
    } ISynDeviceCtrlVtbl;

    interface ISynDeviceCtrl
    {
        CONST_VTBL struct ISynDeviceCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynDeviceCtrl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynDeviceCtrl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynDeviceCtrl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynDeviceCtrl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISynDeviceCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISynDeviceCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISynDeviceCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISynDeviceCtrl_Select(This,lDeviceHandle)	\
    (This)->lpVtbl -> Select(This,lDeviceHandle)

#define ISynDeviceCtrl_GetLongProperty(This,eProperty,pVal)	\
    (This)->lpVtbl -> GetLongProperty(This,eProperty,pVal)

#define ISynDeviceCtrl_SetLongProperty(This,eProperty,newVal)	\
    (This)->lpVtbl -> SetLongProperty(This,eProperty,newVal)

#define ISynDeviceCtrl_GetStringProperty(This,eProperty,pVal)	\
    (This)->lpVtbl -> GetStringProperty(This,eProperty,pVal)

#define ISynDeviceCtrl_LoadPacket(This,pPacket,lAvailable)	\
    (This)->lpVtbl -> LoadPacket(This,pPacket,lAvailable)

#define ISynDeviceCtrl_ForceMotion(This,lDeltaX,lDeltaY,lButtonState)	\
    (This)->lpVtbl -> ForceMotion(This,lDeltaX,lDeltaY,lButtonState)

#define ISynDeviceCtrl_ForcePacket(This,pPacket)	\
    (This)->lpVtbl -> ForcePacket(This,pPacket)

#define ISynDeviceCtrl_Acquire(This,lFlags)	\
    (This)->lpVtbl -> Acquire(This,lFlags)

#define ISynDeviceCtrl_Unacquire(This)	\
    (This)->lpVtbl -> Unacquire(This)

#define ISynDeviceCtrl_Activate(This)	\
    (This)->lpVtbl -> Activate(This)

#define ISynDeviceCtrl_Deactivate(This)	\
    (This)->lpVtbl -> Deactivate(This)

#define ISynDeviceCtrl_GetLongPropertyDefault(This,eProperty,pVal)	\
    (This)->lpVtbl -> GetLongPropertyDefault(This,eProperty,pVal)

#define ISynDeviceCtrl_BulkTransaction(This,ulWriteLength,write,ulReadLength,read)	\
    (This)->lpVtbl -> BulkTransaction(This,ulWriteLength,write,ulReadLength,read)

#define ISynDeviceCtrl_DiagnosticTransaction(This,ulWriteLength,write,ulReadLength,read)	\
    (This)->lpVtbl -> DiagnosticTransaction(This,ulWriteLength,write,ulReadLength,read)

#define ISynDeviceCtrl_GetAddressableProperty(This,eProperty,lAddress,pVal)	\
    (This)->lpVtbl -> GetAddressableProperty(This,eProperty,lAddress,pVal)

#define ISynDeviceCtrl_SetAddressableProperty(This,eProperty,lAddress,newVal)	\
    (This)->lpVtbl -> SetAddressableProperty(This,eProperty,lAddress,newVal)

#define ISynDeviceCtrl_ForceMotionWithWheel(This,lDeltaX,lDeltaY,lButtonState,lDeltaWheel)	\
    (This)->lpVtbl -> ForceMotionWithWheel(This,lDeltaX,lDeltaY,lButtonState,lDeltaWheel)

#define ISynDeviceCtrl_LoadGroup(This,pGroup,lAvailable)	\
    (This)->lpVtbl -> LoadGroup(This,pGroup,lAvailable)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_Select_Proxy( 
    ISynDeviceCtrl * This,
    LONG lDeviceHandle);


void __RPC_STUB ISynDeviceCtrl_Select_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_GetLongProperty_Proxy( 
    ISynDeviceCtrl * This,
    enum SynDeviceProperty eProperty,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynDeviceCtrl_GetLongProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_SetLongProperty_Proxy( 
    ISynDeviceCtrl * This,
    enum SynDeviceProperty eProperty,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynDeviceCtrl_SetLongProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_GetStringProperty_Proxy( 
    ISynDeviceCtrl * This,
    enum SynDeviceProperty eProperty,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISynDeviceCtrl_GetStringProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_LoadPacket_Proxy( 
    ISynDeviceCtrl * This,
    /* [in] */ ISynPacketCtrl *pPacket,
    /* [retval][out] */ LONG *lAvailable);


void __RPC_STUB ISynDeviceCtrl_LoadPacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_ForceMotion_Proxy( 
    ISynDeviceCtrl * This,
    LONG lDeltaX,
    LONG lDeltaY,
    LONG lButtonState);


void __RPC_STUB ISynDeviceCtrl_ForceMotion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_ForcePacket_Proxy( 
    ISynDeviceCtrl * This,
    ISynPacketCtrl *pPacket);


void __RPC_STUB ISynDeviceCtrl_ForcePacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_Acquire_Proxy( 
    ISynDeviceCtrl * This,
    LONG lFlags);


void __RPC_STUB ISynDeviceCtrl_Acquire_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_Unacquire_Proxy( 
    ISynDeviceCtrl * This);


void __RPC_STUB ISynDeviceCtrl_Unacquire_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_Activate_Proxy( 
    ISynDeviceCtrl * This);


void __RPC_STUB ISynDeviceCtrl_Activate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_Deactivate_Proxy( 
    ISynDeviceCtrl * This);


void __RPC_STUB ISynDeviceCtrl_Deactivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_GetLongPropertyDefault_Proxy( 
    ISynDeviceCtrl * This,
    enum SynDeviceProperty eProperty,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynDeviceCtrl_GetLongPropertyDefault_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_BulkTransaction_Proxy( 
    ISynDeviceCtrl * This,
    LONG ulWriteLength,
    /* [out][in] */ SAFEARRAY * *write,
    LONG ulReadLength,
    /* [out][in] */ SAFEARRAY * *read);


void __RPC_STUB ISynDeviceCtrl_BulkTransaction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_DiagnosticTransaction_Proxy( 
    ISynDeviceCtrl * This,
    LONG ulWriteLength,
    /* [out][in] */ SAFEARRAY * *write,
    LONG ulReadLength,
    /* [out][in] */ SAFEARRAY * *read);


void __RPC_STUB ISynDeviceCtrl_DiagnosticTransaction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_GetAddressableProperty_Proxy( 
    ISynDeviceCtrl * This,
    enum SynDeviceProperty eProperty,
    /* [in] */ LONG lAddress,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynDeviceCtrl_GetAddressableProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_SetAddressableProperty_Proxy( 
    ISynDeviceCtrl * This,
    enum SynDeviceProperty eProperty,
    /* [in] */ LONG lAddress,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynDeviceCtrl_SetAddressableProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_ForceMotionWithWheel_Proxy( 
    ISynDeviceCtrl * This,
    LONG lDeltaX,
    LONG lDeltaY,
    LONG lButtonState,
    LONG lDeltaWheel);


void __RPC_STUB ISynDeviceCtrl_ForceMotionWithWheel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDeviceCtrl_LoadGroup_Proxy( 
    ISynDeviceCtrl * This,
    /* [in] */ ISynGroupCtrl *pGroup,
    /* [retval][out] */ LONG *lAvailable);


void __RPC_STUB ISynDeviceCtrl_LoadGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynDeviceCtrl_INTERFACE_DEFINED__ */


#ifndef __ISynPacketCtrl_INTERFACE_DEFINED__
#define __ISynPacketCtrl_INTERFACE_DEFINED__

/* interface ISynPacketCtrl */
/* [helpstring][oleautomation][nonextensible][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_ISynPacketCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f9765b3b-73d0-4a8f-b321-a66206a7780a")
    ISynPacketCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLongProperty( 
            enum SynPacketProperty eProperty,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLongProperty( 
            enum SynPacketProperty eProperty,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AssociatedDeviceHandle( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AssociatedDeviceHandle( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SequenceNumber( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SequenceNumber( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimeStamp( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimeStamp( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XRaw( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XRaw( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YRaw( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YRaw( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZRaw( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZRaw( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZYRaw( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZYRaw( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_W( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_W( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Z( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Z( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XDelta( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XDelta( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YDelta( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YDelta( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZDelta( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZDelta( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XMickeys( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XMickeys( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YMickeys( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YMickeys( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FingerState( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FingerState( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtendedState( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExtendedState( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ButtonState( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ButtonState( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZXRaw( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZXRaw( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Copy( 
            ISynPacketCtrl *pFrom) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FingerIndex( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FingerIndex( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FilterIndex( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FilterIndex( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PacketGroupNumber( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PacketGroupNumber( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SubType( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SubType( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtendedState2( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExtendedState2( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZForce( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZForce( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZImage( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZImage( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynPacketCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynPacketCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynPacketCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynPacketCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISynPacketCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISynPacketCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISynPacketCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISynPacketCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLongProperty )( 
            ISynPacketCtrl * This,
            enum SynPacketProperty eProperty,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLongProperty )( 
            ISynPacketCtrl * This,
            enum SynPacketProperty eProperty,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssociatedDeviceHandle )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AssociatedDeviceHandle )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SequenceNumber )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SequenceNumber )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeStamp )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimeStamp )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XRaw )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XRaw )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YRaw )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YRaw )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZRaw )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZRaw )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZYRaw )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZYRaw )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_W )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_W )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_X )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Y )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Y )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Z )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Z )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XDelta )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XDelta )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YDelta )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YDelta )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZDelta )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZDelta )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XMickeys )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XMickeys )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YMickeys )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YMickeys )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FingerState )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FingerState )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedState )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtendedState )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ButtonState )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ButtonState )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZXRaw )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZXRaw )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            ISynPacketCtrl * This,
            ISynPacketCtrl *pFrom);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FingerIndex )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FingerIndex )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilterIndex )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FilterIndex )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PacketGroupNumber )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PacketGroupNumber )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubType )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubType )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedState2 )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtendedState2 )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZForce )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZForce )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZImage )( 
            ISynPacketCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZImage )( 
            ISynPacketCtrl * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } ISynPacketCtrlVtbl;

    interface ISynPacketCtrl
    {
        CONST_VTBL struct ISynPacketCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynPacketCtrl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynPacketCtrl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynPacketCtrl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynPacketCtrl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISynPacketCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISynPacketCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISynPacketCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISynPacketCtrl_GetLongProperty(This,eProperty,pVal)	\
    (This)->lpVtbl -> GetLongProperty(This,eProperty,pVal)

#define ISynPacketCtrl_SetLongProperty(This,eProperty,newVal)	\
    (This)->lpVtbl -> SetLongProperty(This,eProperty,newVal)

#define ISynPacketCtrl_get_AssociatedDeviceHandle(This,pVal)	\
    (This)->lpVtbl -> get_AssociatedDeviceHandle(This,pVal)

#define ISynPacketCtrl_put_AssociatedDeviceHandle(This,newVal)	\
    (This)->lpVtbl -> put_AssociatedDeviceHandle(This,newVal)

#define ISynPacketCtrl_get_SequenceNumber(This,pVal)	\
    (This)->lpVtbl -> get_SequenceNumber(This,pVal)

#define ISynPacketCtrl_put_SequenceNumber(This,newVal)	\
    (This)->lpVtbl -> put_SequenceNumber(This,newVal)

#define ISynPacketCtrl_get_TimeStamp(This,pVal)	\
    (This)->lpVtbl -> get_TimeStamp(This,pVal)

#define ISynPacketCtrl_put_TimeStamp(This,newVal)	\
    (This)->lpVtbl -> put_TimeStamp(This,newVal)

#define ISynPacketCtrl_get_XRaw(This,pVal)	\
    (This)->lpVtbl -> get_XRaw(This,pVal)

#define ISynPacketCtrl_put_XRaw(This,newVal)	\
    (This)->lpVtbl -> put_XRaw(This,newVal)

#define ISynPacketCtrl_get_YRaw(This,pVal)	\
    (This)->lpVtbl -> get_YRaw(This,pVal)

#define ISynPacketCtrl_put_YRaw(This,newVal)	\
    (This)->lpVtbl -> put_YRaw(This,newVal)

#define ISynPacketCtrl_get_ZRaw(This,pVal)	\
    (This)->lpVtbl -> get_ZRaw(This,pVal)

#define ISynPacketCtrl_put_ZRaw(This,newVal)	\
    (This)->lpVtbl -> put_ZRaw(This,newVal)

#define ISynPacketCtrl_get_ZYRaw(This,pVal)	\
    (This)->lpVtbl -> get_ZYRaw(This,pVal)

#define ISynPacketCtrl_put_ZYRaw(This,newVal)	\
    (This)->lpVtbl -> put_ZYRaw(This,newVal)

#define ISynPacketCtrl_get_W(This,pVal)	\
    (This)->lpVtbl -> get_W(This,pVal)

#define ISynPacketCtrl_put_W(This,newVal)	\
    (This)->lpVtbl -> put_W(This,newVal)

#define ISynPacketCtrl_get_X(This,pVal)	\
    (This)->lpVtbl -> get_X(This,pVal)

#define ISynPacketCtrl_put_X(This,newVal)	\
    (This)->lpVtbl -> put_X(This,newVal)

#define ISynPacketCtrl_get_Y(This,pVal)	\
    (This)->lpVtbl -> get_Y(This,pVal)

#define ISynPacketCtrl_put_Y(This,newVal)	\
    (This)->lpVtbl -> put_Y(This,newVal)

#define ISynPacketCtrl_get_Z(This,pVal)	\
    (This)->lpVtbl -> get_Z(This,pVal)

#define ISynPacketCtrl_put_Z(This,newVal)	\
    (This)->lpVtbl -> put_Z(This,newVal)

#define ISynPacketCtrl_get_XDelta(This,pVal)	\
    (This)->lpVtbl -> get_XDelta(This,pVal)

#define ISynPacketCtrl_put_XDelta(This,newVal)	\
    (This)->lpVtbl -> put_XDelta(This,newVal)

#define ISynPacketCtrl_get_YDelta(This,pVal)	\
    (This)->lpVtbl -> get_YDelta(This,pVal)

#define ISynPacketCtrl_put_YDelta(This,newVal)	\
    (This)->lpVtbl -> put_YDelta(This,newVal)

#define ISynPacketCtrl_get_ZDelta(This,pVal)	\
    (This)->lpVtbl -> get_ZDelta(This,pVal)

#define ISynPacketCtrl_put_ZDelta(This,newVal)	\
    (This)->lpVtbl -> put_ZDelta(This,newVal)

#define ISynPacketCtrl_get_XMickeys(This,pVal)	\
    (This)->lpVtbl -> get_XMickeys(This,pVal)

#define ISynPacketCtrl_put_XMickeys(This,newVal)	\
    (This)->lpVtbl -> put_XMickeys(This,newVal)

#define ISynPacketCtrl_get_YMickeys(This,pVal)	\
    (This)->lpVtbl -> get_YMickeys(This,pVal)

#define ISynPacketCtrl_put_YMickeys(This,newVal)	\
    (This)->lpVtbl -> put_YMickeys(This,newVal)

#define ISynPacketCtrl_get_FingerState(This,pVal)	\
    (This)->lpVtbl -> get_FingerState(This,pVal)

#define ISynPacketCtrl_put_FingerState(This,newVal)	\
    (This)->lpVtbl -> put_FingerState(This,newVal)

#define ISynPacketCtrl_get_ExtendedState(This,pVal)	\
    (This)->lpVtbl -> get_ExtendedState(This,pVal)

#define ISynPacketCtrl_put_ExtendedState(This,newVal)	\
    (This)->lpVtbl -> put_ExtendedState(This,newVal)

#define ISynPacketCtrl_get_ButtonState(This,pVal)	\
    (This)->lpVtbl -> get_ButtonState(This,pVal)

#define ISynPacketCtrl_put_ButtonState(This,newVal)	\
    (This)->lpVtbl -> put_ButtonState(This,newVal)

#define ISynPacketCtrl_get_ZXRaw(This,pVal)	\
    (This)->lpVtbl -> get_ZXRaw(This,pVal)

#define ISynPacketCtrl_put_ZXRaw(This,newVal)	\
    (This)->lpVtbl -> put_ZXRaw(This,newVal)

#define ISynPacketCtrl_Copy(This,pFrom)	\
    (This)->lpVtbl -> Copy(This,pFrom)

#define ISynPacketCtrl_get_FingerIndex(This,pVal)	\
    (This)->lpVtbl -> get_FingerIndex(This,pVal)

#define ISynPacketCtrl_put_FingerIndex(This,newVal)	\
    (This)->lpVtbl -> put_FingerIndex(This,newVal)

#define ISynPacketCtrl_get_FilterIndex(This,pVal)	\
    (This)->lpVtbl -> get_FilterIndex(This,pVal)

#define ISynPacketCtrl_put_FilterIndex(This,newVal)	\
    (This)->lpVtbl -> put_FilterIndex(This,newVal)

#define ISynPacketCtrl_get_PacketGroupNumber(This,pVal)	\
    (This)->lpVtbl -> get_PacketGroupNumber(This,pVal)

#define ISynPacketCtrl_put_PacketGroupNumber(This,newVal)	\
    (This)->lpVtbl -> put_PacketGroupNumber(This,newVal)

#define ISynPacketCtrl_get_SubType(This,pVal)	\
    (This)->lpVtbl -> get_SubType(This,pVal)

#define ISynPacketCtrl_put_SubType(This,newVal)	\
    (This)->lpVtbl -> put_SubType(This,newVal)

#define ISynPacketCtrl_get_ExtendedState2(This,pVal)	\
    (This)->lpVtbl -> get_ExtendedState2(This,pVal)

#define ISynPacketCtrl_put_ExtendedState2(This,newVal)	\
    (This)->lpVtbl -> put_ExtendedState2(This,newVal)

#define ISynPacketCtrl_get_ZForce(This,pVal)	\
    (This)->lpVtbl -> get_ZForce(This,pVal)

#define ISynPacketCtrl_put_ZForce(This,newVal)	\
    (This)->lpVtbl -> put_ZForce(This,newVal)

#define ISynPacketCtrl_get_ZImage(This,pVal)	\
    (This)->lpVtbl -> get_ZImage(This,pVal)

#define ISynPacketCtrl_put_ZImage(This,newVal)	\
    (This)->lpVtbl -> put_ZImage(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_GetLongProperty_Proxy( 
    ISynPacketCtrl * This,
    enum SynPacketProperty eProperty,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_GetLongProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_SetLongProperty_Proxy( 
    ISynPacketCtrl * This,
    enum SynPacketProperty eProperty,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_SetLongProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_AssociatedDeviceHandle_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_AssociatedDeviceHandle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_AssociatedDeviceHandle_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_AssociatedDeviceHandle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_SequenceNumber_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_SequenceNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_SequenceNumber_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_SequenceNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_TimeStamp_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_TimeStamp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_TimeStamp_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_TimeStamp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_XRaw_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_XRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_XRaw_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_XRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_YRaw_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_YRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_YRaw_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_YRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_ZRaw_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_ZRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_ZRaw_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_ZRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_ZYRaw_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_ZYRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_ZYRaw_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_ZYRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_W_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_W_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_W_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_W_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_X_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_X_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_X_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_X_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_Y_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_Y_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_Y_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_Y_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_Z_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_Z_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_Z_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_Z_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_XDelta_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_XDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_XDelta_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_XDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_YDelta_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_YDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_YDelta_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_YDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_ZDelta_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_ZDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_ZDelta_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_ZDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_XMickeys_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_XMickeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_XMickeys_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_XMickeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_YMickeys_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_YMickeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_YMickeys_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_YMickeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_FingerState_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_FingerState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_FingerState_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_FingerState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_ExtendedState_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_ExtendedState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_ExtendedState_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_ExtendedState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_ButtonState_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_ButtonState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_ButtonState_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_ButtonState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_ZXRaw_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_ZXRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_ZXRaw_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_ZXRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_Copy_Proxy( 
    ISynPacketCtrl * This,
    ISynPacketCtrl *pFrom);


void __RPC_STUB ISynPacketCtrl_Copy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_FingerIndex_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_FingerIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_FingerIndex_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_FingerIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_FilterIndex_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_FilterIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_FilterIndex_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_FilterIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_PacketGroupNumber_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_PacketGroupNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_PacketGroupNumber_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_PacketGroupNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_SubType_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_SubType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_SubType_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_SubType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_ExtendedState2_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_ExtendedState2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_ExtendedState2_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_ExtendedState2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_ZForce_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_ZForce_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_ZForce_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_ZForce_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_get_ZImage_Proxy( 
    ISynPacketCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynPacketCtrl_get_ZImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynPacketCtrl_put_ZImage_Proxy( 
    ISynPacketCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynPacketCtrl_put_ZImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynPacketCtrl_INTERFACE_DEFINED__ */


#ifndef __ISynGroupCtrl_INTERFACE_DEFINED__
#define __ISynGroupCtrl_INTERFACE_DEFINED__

/* interface ISynGroupCtrl */
/* [helpstring][oleautomation][nonextensible][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_ISynGroupCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("65013F44-CD6B-42d3-880D-D856A173D55D")
    ISynGroupCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLongProperty( 
            enum SynGroupProperty eProperty,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLongProperty( 
            enum SynGroupProperty eProperty,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLongPropertyByIndex( 
            enum SynGroupProperty eProperty,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLongPropertyByIndex( 
            enum SynGroupProperty eProperty,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPacketByIndex( 
            /* [in] */ LONG lIndex,
            /* [in] */ ISynPacketCtrl *pPacket) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPacketByIndex( 
            /* [in] */ LONG lIndex,
            /* [in] */ ISynPacketCtrl *pPacket) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceHandle( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceHandle( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GroupNumber( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GroupNumber( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ForceRaw( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ForceRaw( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AssociatedDeviceHandle( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AssociatedDeviceHandle( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SequenceNumber( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SequenceNumber( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimeStamp( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimeStamp( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XRaw( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XRaw( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YRaw( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YRaw( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZRaw( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZRaw( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZYRaw( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZYRaw( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_W( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_W( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_X( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_X( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Y( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Y( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Z( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Z( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XDelta( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XDelta( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YDelta( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YDelta( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZDelta( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZDelta( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_XMickeys( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_XMickeys( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_YMickeys( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_YMickeys( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FingerState( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FingerState( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtendedState( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExtendedState( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ButtonState( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ButtonState( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZXRaw( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZXRaw( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FingerIndex( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FingerIndex( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FilterIndex( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FilterIndex( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PacketGroupNumber( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PacketGroupNumber( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SubType( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SubType( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtendedState2( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExtendedState2( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZForce( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZForce( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ZImage( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ZImage( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Force( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Force( 
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynGroupCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynGroupCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynGroupCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynGroupCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISynGroupCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISynGroupCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISynGroupCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISynGroupCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLongProperty )( 
            ISynGroupCtrl * This,
            enum SynGroupProperty eProperty,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLongProperty )( 
            ISynGroupCtrl * This,
            enum SynGroupProperty eProperty,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLongPropertyByIndex )( 
            ISynGroupCtrl * This,
            enum SynGroupProperty eProperty,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLongPropertyByIndex )( 
            ISynGroupCtrl * This,
            enum SynGroupProperty eProperty,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPacketByIndex )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ ISynPacketCtrl *pPacket);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPacketByIndex )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ ISynPacketCtrl *pPacket);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceHandle )( 
            ISynGroupCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceHandle )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GroupNumber )( 
            ISynGroupCtrl * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GroupNumber )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ForceRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ForceRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssociatedDeviceHandle )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AssociatedDeviceHandle )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SequenceNumber )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SequenceNumber )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeStamp )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimeStamp )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZYRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZYRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_W )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_W )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_X )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Y )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Y )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Z )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Z )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XDelta )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XDelta )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YDelta )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YDelta )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZDelta )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZDelta )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XMickeys )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XMickeys )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YMickeys )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YMickeys )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FingerState )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FingerState )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedState )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtendedState )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ButtonState )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ButtonState )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZXRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZXRaw )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FingerIndex )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FingerIndex )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilterIndex )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FilterIndex )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PacketGroupNumber )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PacketGroupNumber )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubType )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubType )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedState2 )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtendedState2 )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZForce )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZForce )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ZImage )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZImage )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Force )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Force )( 
            ISynGroupCtrl * This,
            /* [in] */ LONG lIndex,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } ISynGroupCtrlVtbl;

    interface ISynGroupCtrl
    {
        CONST_VTBL struct ISynGroupCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynGroupCtrl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynGroupCtrl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynGroupCtrl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynGroupCtrl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISynGroupCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISynGroupCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISynGroupCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISynGroupCtrl_GetLongProperty(This,eProperty,pVal)	\
    (This)->lpVtbl -> GetLongProperty(This,eProperty,pVal)

#define ISynGroupCtrl_SetLongProperty(This,eProperty,newVal)	\
    (This)->lpVtbl -> SetLongProperty(This,eProperty,newVal)

#define ISynGroupCtrl_GetLongPropertyByIndex(This,eProperty,lIndex,pVal)	\
    (This)->lpVtbl -> GetLongPropertyByIndex(This,eProperty,lIndex,pVal)

#define ISynGroupCtrl_SetLongPropertyByIndex(This,eProperty,lIndex,newVal)	\
    (This)->lpVtbl -> SetLongPropertyByIndex(This,eProperty,lIndex,newVal)

#define ISynGroupCtrl_GetPacketByIndex(This,lIndex,pPacket)	\
    (This)->lpVtbl -> GetPacketByIndex(This,lIndex,pPacket)

#define ISynGroupCtrl_SetPacketByIndex(This,lIndex,pPacket)	\
    (This)->lpVtbl -> SetPacketByIndex(This,lIndex,pPacket)

#define ISynGroupCtrl_get_DeviceHandle(This,pVal)	\
    (This)->lpVtbl -> get_DeviceHandle(This,pVal)

#define ISynGroupCtrl_put_DeviceHandle(This,newVal)	\
    (This)->lpVtbl -> put_DeviceHandle(This,newVal)

#define ISynGroupCtrl_get_GroupNumber(This,pVal)	\
    (This)->lpVtbl -> get_GroupNumber(This,pVal)

#define ISynGroupCtrl_put_GroupNumber(This,newVal)	\
    (This)->lpVtbl -> put_GroupNumber(This,newVal)

#define ISynGroupCtrl_get_ForceRaw(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_ForceRaw(This,lIndex,pVal)

#define ISynGroupCtrl_put_ForceRaw(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_ForceRaw(This,lIndex,newVal)

#define ISynGroupCtrl_get_AssociatedDeviceHandle(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_AssociatedDeviceHandle(This,lIndex,pVal)

#define ISynGroupCtrl_put_AssociatedDeviceHandle(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_AssociatedDeviceHandle(This,lIndex,newVal)

#define ISynGroupCtrl_get_SequenceNumber(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_SequenceNumber(This,lIndex,pVal)

#define ISynGroupCtrl_put_SequenceNumber(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_SequenceNumber(This,lIndex,newVal)

#define ISynGroupCtrl_get_TimeStamp(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_TimeStamp(This,lIndex,pVal)

#define ISynGroupCtrl_put_TimeStamp(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_TimeStamp(This,lIndex,newVal)

#define ISynGroupCtrl_get_XRaw(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_XRaw(This,lIndex,pVal)

#define ISynGroupCtrl_put_XRaw(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_XRaw(This,lIndex,newVal)

#define ISynGroupCtrl_get_YRaw(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_YRaw(This,lIndex,pVal)

#define ISynGroupCtrl_put_YRaw(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_YRaw(This,lIndex,newVal)

#define ISynGroupCtrl_get_ZRaw(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_ZRaw(This,lIndex,pVal)

#define ISynGroupCtrl_put_ZRaw(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_ZRaw(This,lIndex,newVal)

#define ISynGroupCtrl_get_ZYRaw(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_ZYRaw(This,lIndex,pVal)

#define ISynGroupCtrl_put_ZYRaw(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_ZYRaw(This,lIndex,newVal)

#define ISynGroupCtrl_get_W(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_W(This,lIndex,pVal)

#define ISynGroupCtrl_put_W(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_W(This,lIndex,newVal)

#define ISynGroupCtrl_get_X(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_X(This,lIndex,pVal)

#define ISynGroupCtrl_put_X(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_X(This,lIndex,newVal)

#define ISynGroupCtrl_get_Y(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_Y(This,lIndex,pVal)

#define ISynGroupCtrl_put_Y(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_Y(This,lIndex,newVal)

#define ISynGroupCtrl_get_Z(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_Z(This,lIndex,pVal)

#define ISynGroupCtrl_put_Z(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_Z(This,lIndex,newVal)

#define ISynGroupCtrl_get_XDelta(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_XDelta(This,lIndex,pVal)

#define ISynGroupCtrl_put_XDelta(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_XDelta(This,lIndex,newVal)

#define ISynGroupCtrl_get_YDelta(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_YDelta(This,lIndex,pVal)

#define ISynGroupCtrl_put_YDelta(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_YDelta(This,lIndex,newVal)

#define ISynGroupCtrl_get_ZDelta(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_ZDelta(This,lIndex,pVal)

#define ISynGroupCtrl_put_ZDelta(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_ZDelta(This,lIndex,newVal)

#define ISynGroupCtrl_get_XMickeys(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_XMickeys(This,lIndex,pVal)

#define ISynGroupCtrl_put_XMickeys(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_XMickeys(This,lIndex,newVal)

#define ISynGroupCtrl_get_YMickeys(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_YMickeys(This,lIndex,pVal)

#define ISynGroupCtrl_put_YMickeys(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_YMickeys(This,lIndex,newVal)

#define ISynGroupCtrl_get_FingerState(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_FingerState(This,lIndex,pVal)

#define ISynGroupCtrl_put_FingerState(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_FingerState(This,lIndex,newVal)

#define ISynGroupCtrl_get_ExtendedState(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_ExtendedState(This,lIndex,pVal)

#define ISynGroupCtrl_put_ExtendedState(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_ExtendedState(This,lIndex,newVal)

#define ISynGroupCtrl_get_ButtonState(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_ButtonState(This,lIndex,pVal)

#define ISynGroupCtrl_put_ButtonState(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_ButtonState(This,lIndex,newVal)

#define ISynGroupCtrl_get_ZXRaw(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_ZXRaw(This,lIndex,pVal)

#define ISynGroupCtrl_put_ZXRaw(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_ZXRaw(This,lIndex,newVal)

#define ISynGroupCtrl_get_FingerIndex(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_FingerIndex(This,lIndex,pVal)

#define ISynGroupCtrl_put_FingerIndex(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_FingerIndex(This,lIndex,newVal)

#define ISynGroupCtrl_get_FilterIndex(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_FilterIndex(This,lIndex,pVal)

#define ISynGroupCtrl_put_FilterIndex(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_FilterIndex(This,lIndex,newVal)

#define ISynGroupCtrl_get_PacketGroupNumber(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_PacketGroupNumber(This,lIndex,pVal)

#define ISynGroupCtrl_put_PacketGroupNumber(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_PacketGroupNumber(This,lIndex,newVal)

#define ISynGroupCtrl_get_SubType(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_SubType(This,lIndex,pVal)

#define ISynGroupCtrl_put_SubType(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_SubType(This,lIndex,newVal)

#define ISynGroupCtrl_get_ExtendedState2(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_ExtendedState2(This,lIndex,pVal)

#define ISynGroupCtrl_put_ExtendedState2(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_ExtendedState2(This,lIndex,newVal)

#define ISynGroupCtrl_get_ZForce(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_ZForce(This,lIndex,pVal)

#define ISynGroupCtrl_put_ZForce(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_ZForce(This,lIndex,newVal)

#define ISynGroupCtrl_get_ZImage(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_ZImage(This,lIndex,pVal)

#define ISynGroupCtrl_put_ZImage(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_ZImage(This,lIndex,newVal)

#define ISynGroupCtrl_get_Force(This,lIndex,pVal)	\
    (This)->lpVtbl -> get_Force(This,lIndex,pVal)

#define ISynGroupCtrl_put_Force(This,lIndex,newVal)	\
    (This)->lpVtbl -> put_Force(This,lIndex,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_GetLongProperty_Proxy( 
    ISynGroupCtrl * This,
    enum SynGroupProperty eProperty,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_GetLongProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_SetLongProperty_Proxy( 
    ISynGroupCtrl * This,
    enum SynGroupProperty eProperty,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_SetLongProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_GetLongPropertyByIndex_Proxy( 
    ISynGroupCtrl * This,
    enum SynGroupProperty eProperty,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_GetLongPropertyByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_SetLongPropertyByIndex_Proxy( 
    ISynGroupCtrl * This,
    enum SynGroupProperty eProperty,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_SetLongPropertyByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_GetPacketByIndex_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ ISynPacketCtrl *pPacket);


void __RPC_STUB ISynGroupCtrl_GetPacketByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_SetPacketByIndex_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ ISynPacketCtrl *pPacket);


void __RPC_STUB ISynGroupCtrl_SetPacketByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_DeviceHandle_Proxy( 
    ISynGroupCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_DeviceHandle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_DeviceHandle_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_DeviceHandle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_GroupNumber_Proxy( 
    ISynGroupCtrl * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_GroupNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_GroupNumber_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_GroupNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_ForceRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_ForceRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_ForceRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_ForceRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_AssociatedDeviceHandle_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_AssociatedDeviceHandle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_AssociatedDeviceHandle_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_AssociatedDeviceHandle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_SequenceNumber_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_SequenceNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_SequenceNumber_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_SequenceNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_TimeStamp_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_TimeStamp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_TimeStamp_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_TimeStamp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_XRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_XRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_XRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_XRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_YRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_YRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_YRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_YRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_ZRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_ZRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_ZRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_ZRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_ZYRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_ZYRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_ZYRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_ZYRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_W_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_W_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_W_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_W_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_X_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_X_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_X_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_X_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_Y_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_Y_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_Y_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_Y_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_Z_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_Z_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_Z_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_Z_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_XDelta_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_XDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_XDelta_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_XDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_YDelta_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_YDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_YDelta_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_YDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_ZDelta_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_ZDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_ZDelta_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_ZDelta_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_XMickeys_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_XMickeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_XMickeys_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_XMickeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_YMickeys_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_YMickeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_YMickeys_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_YMickeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_FingerState_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_FingerState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_FingerState_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_FingerState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_ExtendedState_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_ExtendedState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_ExtendedState_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_ExtendedState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_ButtonState_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_ButtonState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_ButtonState_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_ButtonState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_ZXRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_ZXRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_ZXRaw_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_ZXRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_FingerIndex_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_FingerIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_FingerIndex_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_FingerIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_FilterIndex_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_FilterIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_FilterIndex_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_FilterIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_PacketGroupNumber_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_PacketGroupNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_PacketGroupNumber_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_PacketGroupNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_SubType_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_SubType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_SubType_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_SubType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_ExtendedState2_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_ExtendedState2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_ExtendedState2_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_ExtendedState2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_ZForce_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_ZForce_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_ZForce_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_ZForce_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_ZImage_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_ZImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_ZImage_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_ZImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_get_Force_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynGroupCtrl_get_Force_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISynGroupCtrl_put_Force_Proxy( 
    ISynGroupCtrl * This,
    /* [in] */ LONG lIndex,
    /* [in] */ LONG newVal);


void __RPC_STUB ISynGroupCtrl_put_Force_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynGroupCtrl_INTERFACE_DEFINED__ */


#ifndef __ISynDisplayCtrl_INTERFACE_DEFINED__
#define __ISynDisplayCtrl_INTERFACE_DEFINED__

/* interface ISynDisplayCtrl */
/* [helpstring][oleautomation][nonextensible][hidden][dual][uuid][object] */ 


EXTERN_C const IID IID_ISynDisplayCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("338CF912-683E-438E-9641-76AAD2D62E22")
    ISynDisplayCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLongProperty( 
            enum SynDisplayProperty eProperty,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLongProperty( 
            enum SynDisplayProperty eProperty,
            LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Select( 
            LONG lDeviceHandle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Flush( 
            enum SynFlushMethod eMethod) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Acquire( 
            enum SynDisplayAquisitionMethod eMethod) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Unacquire( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendPicture( 
            IDispatch *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PixelX( 
            LONG lTouchX,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PixelY( 
            LONG lTouchY,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TouchX( 
            LONG lPixelX,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TouchY( 
            LONG lPixelY,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Deactivate( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynDisplayCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynDisplayCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynDisplayCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynDisplayCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISynDisplayCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISynDisplayCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISynDisplayCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISynDisplayCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLongProperty )( 
            ISynDisplayCtrl * This,
            enum SynDisplayProperty eProperty,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLongProperty )( 
            ISynDisplayCtrl * This,
            enum SynDisplayProperty eProperty,
            LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            ISynDisplayCtrl * This,
            LONG lDeviceHandle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Flush )( 
            ISynDisplayCtrl * This,
            enum SynFlushMethod eMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Acquire )( 
            ISynDisplayCtrl * This,
            enum SynDisplayAquisitionMethod eMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Unacquire )( 
            ISynDisplayCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SendPicture )( 
            ISynDisplayCtrl * This,
            IDispatch *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PixelX )( 
            ISynDisplayCtrl * This,
            LONG lTouchX,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PixelY )( 
            ISynDisplayCtrl * This,
            LONG lTouchY,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TouchX )( 
            ISynDisplayCtrl * This,
            LONG lPixelX,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TouchY )( 
            ISynDisplayCtrl * This,
            LONG lPixelY,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ISynDisplayCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Deactivate )( 
            ISynDisplayCtrl * This);
        
        END_INTERFACE
    } ISynDisplayCtrlVtbl;

    interface ISynDisplayCtrl
    {
        CONST_VTBL struct ISynDisplayCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynDisplayCtrl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynDisplayCtrl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynDisplayCtrl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynDisplayCtrl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISynDisplayCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISynDisplayCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISynDisplayCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISynDisplayCtrl_GetLongProperty(This,eProperty,pVal)	\
    (This)->lpVtbl -> GetLongProperty(This,eProperty,pVal)

#define ISynDisplayCtrl_SetLongProperty(This,eProperty,newVal)	\
    (This)->lpVtbl -> SetLongProperty(This,eProperty,newVal)

#define ISynDisplayCtrl_Select(This,lDeviceHandle)	\
    (This)->lpVtbl -> Select(This,lDeviceHandle)

#define ISynDisplayCtrl_Flush(This,eMethod)	\
    (This)->lpVtbl -> Flush(This,eMethod)

#define ISynDisplayCtrl_Acquire(This,eMethod)	\
    (This)->lpVtbl -> Acquire(This,eMethod)

#define ISynDisplayCtrl_Unacquire(This)	\
    (This)->lpVtbl -> Unacquire(This)

#define ISynDisplayCtrl_SendPicture(This,pVal)	\
    (This)->lpVtbl -> SendPicture(This,pVal)

#define ISynDisplayCtrl_get_PixelX(This,lTouchX,pVal)	\
    (This)->lpVtbl -> get_PixelX(This,lTouchX,pVal)

#define ISynDisplayCtrl_get_PixelY(This,lTouchY,pVal)	\
    (This)->lpVtbl -> get_PixelY(This,lTouchY,pVal)

#define ISynDisplayCtrl_get_TouchX(This,lPixelX,pVal)	\
    (This)->lpVtbl -> get_TouchX(This,lPixelX,pVal)

#define ISynDisplayCtrl_get_TouchY(This,lPixelY,pVal)	\
    (This)->lpVtbl -> get_TouchY(This,lPixelY,pVal)

#define ISynDisplayCtrl_Activate(This)	\
    (This)->lpVtbl -> Activate(This)

#define ISynDisplayCtrl_Deactivate(This)	\
    (This)->lpVtbl -> Deactivate(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_GetLongProperty_Proxy( 
    ISynDisplayCtrl * This,
    enum SynDisplayProperty eProperty,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynDisplayCtrl_GetLongProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_SetLongProperty_Proxy( 
    ISynDisplayCtrl * This,
    enum SynDisplayProperty eProperty,
    LONG newVal);


void __RPC_STUB ISynDisplayCtrl_SetLongProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_Select_Proxy( 
    ISynDisplayCtrl * This,
    LONG lDeviceHandle);


void __RPC_STUB ISynDisplayCtrl_Select_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_Flush_Proxy( 
    ISynDisplayCtrl * This,
    enum SynFlushMethod eMethod);


void __RPC_STUB ISynDisplayCtrl_Flush_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_Acquire_Proxy( 
    ISynDisplayCtrl * This,
    enum SynDisplayAquisitionMethod eMethod);


void __RPC_STUB ISynDisplayCtrl_Acquire_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_Unacquire_Proxy( 
    ISynDisplayCtrl * This);


void __RPC_STUB ISynDisplayCtrl_Unacquire_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_SendPicture_Proxy( 
    ISynDisplayCtrl * This,
    IDispatch *pVal);


void __RPC_STUB ISynDisplayCtrl_SendPicture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_get_PixelX_Proxy( 
    ISynDisplayCtrl * This,
    LONG lTouchX,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynDisplayCtrl_get_PixelX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_get_PixelY_Proxy( 
    ISynDisplayCtrl * This,
    LONG lTouchY,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynDisplayCtrl_get_PixelY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_get_TouchX_Proxy( 
    ISynDisplayCtrl * This,
    LONG lPixelX,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynDisplayCtrl_get_TouchX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_get_TouchY_Proxy( 
    ISynDisplayCtrl * This,
    LONG lPixelY,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB ISynDisplayCtrl_get_TouchY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_Activate_Proxy( 
    ISynDisplayCtrl * This);


void __RPC_STUB ISynDisplayCtrl_Activate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISynDisplayCtrl_Deactivate_Proxy( 
    ISynDisplayCtrl * This);


void __RPC_STUB ISynDisplayCtrl_Deactivate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynDisplayCtrl_INTERFACE_DEFINED__ */



#ifndef __SYNCTRLLib_LIBRARY_DEFINED__
#define __SYNCTRLLib_LIBRARY_DEFINED__

/* library SYNCTRLLib */
/* [helpstring][version][uuid] */ 


enum SynRequiredVersion
    {	SE_RequiredDriverVersion	= 0x70c0900,
	SE_RequiredSynCOMDllVersion	= 0x70c0900
    } ;

enum SynAPIProperty
    {	SP_First	= 0x10000000,
	SP_Version	= SP_First + 1,
	SP_SynComDllVersion	= SP_Version,
	SP_MaxDevices	= SP_SynComDllVersion + 1,
	SP_DevicesPresent	= SP_MaxDevices + 1,
	SP_DriverVersion	= SP_DevicesPresent + 1,
	SP_RequiredDriverVersion	= SP_DriverVersion + 1,
	SP_ForeignDevicesPresent	= SP_RequiredDriverVersion + 1,
	SP_APILast	= SP_First + 0x100
    } ;

enum SynDeviceProperty
    {	SP_DeviceFirst	= SP_APILast,
	SP_Handle	= SP_DeviceFirst + 1,
	SP_DeviceType	= SP_Handle + 1,
	SP_ConnectionType	= SP_DeviceType + 1,
	SP_FWVersion	= SP_ConnectionType + 1,
	SP_Geometry	= SP_FWVersion + 1,
	SP_SensorType	= SP_Geometry + 1,
	SP_ProductType	= SP_SensorType + 1,
	SP_ASICType	= SP_ProductType + 2,
	SP_ReportRate	= SP_ASICType + 4,
	SP_Gestures	= SP_ReportRate + 1,
	SP_SecondaryGestures	= SP_Gestures + 1,
	SP_EdgeMotionOptions	= SP_SecondaryGestures + 1,
	SP_EdgeMotionSpeed	= SP_EdgeMotionOptions + 1,
	SP_MotionRotationAngle	= SP_EdgeMotionSpeed + 1,
	SP_XDPI	= SP_MotionRotationAngle + 1,
	SP_YDPI	= SP_XDPI + 1,
	SP_XLoSensor	= SP_YDPI + 1,
	SP_YLoSensor	= SP_XLoSensor + 1,
	SP_XHiSensor	= SP_YLoSensor + 1,
	SP_YHiSensor	= SP_XHiSensor + 1,
	SP_XLoRim	= SP_YHiSensor + 1,
	SP_YLoRim	= SP_XLoRim + 1,
	SP_XHiRim	= SP_YLoRim + 1,
	SP_YHiRim	= SP_XHiRim + 1,
	SP_XLoBorder	= SP_YHiRim + 1,
	SP_YLoBorder	= SP_XLoBorder + 1,
	SP_XHiBorder	= SP_YLoBorder + 1,
	SP_YHiBorder	= SP_XHiBorder + 1,
	SP_YLoBorderVScroll	= SP_YHiBorder + 1,
	SP_YHiBorderVScroll	= SP_YLoBorderVScroll + 1,
	SP_XLoWideBorder	= SP_YHiBorderVScroll + 1,
	SP_YLoWideBorder	= SP_XLoWideBorder + 1,
	SP_XHiWideBorder	= SP_YLoWideBorder + 1,
	SP_YHiWideBorder	= SP_XHiWideBorder + 1,
	SP_ZMaximum	= SP_YHiWideBorder + 1,
	SP_ZTouchThreshold	= SP_ZMaximum + 1,
	SP_TopLeftCornerWidth	= SP_ZTouchThreshold + 1,
	SP_TopLeftCornerHeight	= SP_TopLeftCornerWidth + 1,
	SP_TopRightCornerWidth	= SP_TopLeftCornerHeight + 1,
	SP_TopRightCornerHeight	= SP_TopRightCornerWidth + 1,
	SP_BottomRightCornerWidth	= SP_TopRightCornerHeight + 1,
	SP_BottomRightCornerHeight	= SP_BottomRightCornerWidth + 1,
	SP_BottomLeftCornerWidth	= SP_BottomRightCornerHeight + 1,
	SP_BottomLeftCornerHeight	= SP_BottomLeftCornerWidth + 1,
	SP_TopLeftCornerAction	= SP_BottomLeftCornerHeight + 1,
	SP_TopRightCornerAction	= SP_TopLeftCornerAction + 1,
	SP_BottomRightCornerAction	= SP_TopRightCornerAction + 1,
	SP_BottomLeftCornerAction	= SP_BottomRightCornerAction + 1,
	SP_LeftButtonAction	= SP_BottomLeftCornerAction + 1,
	SP_RightButtonAction	= SP_LeftButtonAction + 1,
	SP_HasBothButtonFeature	= SP_RightButtonAction + 1,
	SP_MiddleButtonAction	= SP_HasBothButtonFeature + 1,
	SP_UpButtonAction	= SP_MiddleButtonAction + 1,
	SP_DownButtonAction	= SP_UpButtonAction + 1,
	SP_Ex1ButtonAction	= SP_DownButtonAction + 1,
	SP_Ex2ButtonAction	= SP_Ex1ButtonAction + 1,
	SP_Ex3ButtonAction	= SP_Ex2ButtonAction + 1,
	SP_Ex4ButtonAction	= SP_Ex3ButtonAction + 1,
	SP_Ex5ButtonAction	= SP_Ex4ButtonAction + 1,
	SP_Ex6ButtonAction	= SP_Ex5ButtonAction + 1,
	SP_Ex7ButtonAction	= SP_Ex6ButtonAction + 1,
	SP_Ex8ButtonAction	= SP_Ex7ButtonAction + 1,
	SP_ExtendedButtons	= SP_Ex8ButtonAction + 1,
	SP_HasMiddleButton	= SP_ExtendedButtons + 1,
	SP_HasUpDownButtons	= SP_HasMiddleButton + 1,
	SP_IsMultiFingerCapable	= SP_HasUpDownButtons + 1,
	SP_IsPenCapable	= SP_IsMultiFingerCapable + 1,
	SP_IsVScroll	= SP_IsPenCapable + 1,
	SP_IsHScroll	= SP_IsVScroll + 1,
	SP_IsWEMode	= SP_IsHScroll + 1,
	SP_IsLowReportRate	= SP_IsWEMode + 1,
	SP_IsHighReportRate	= SP_IsLowReportRate + 1,
	SP_IsTapEnabled	= SP_IsHighReportRate + 1,
	SP_IsDragEnabled	= SP_IsTapEnabled + 1,
	SP_IsDragLockEnabled	= SP_IsDragEnabled + 1,
	SP_IsCornerTapEnabled	= SP_IsDragLockEnabled + 1,
	SP_IsEdgeMotionEnabled	= SP_IsCornerTapEnabled + 1,
	SP_IsEdgeMotionDragEnabled	= SP_IsEdgeMotionEnabled + 1,
	SP_IsEdgeMotionMoveEnabled	= SP_IsEdgeMotionDragEnabled + 1,
	SP_IsReleaseToSelectEnabled	= SP_IsEdgeMotionMoveEnabled + 1,
	SP_IsMiddleTapToHelpEnabled	= SP_IsReleaseToSelectEnabled + 1,
	SP_IsMiddleButtonBlockEnabled	= SP_IsMiddleTapToHelpEnabled + 1,
	SP_IsPressureDragEnabled	= SP_IsMiddleButtonBlockEnabled + 1,
	SP_Is3ButtonEnabled	= SP_IsPressureDragEnabled + 1,
	SP_IsPressureEdgeMotionEnabled	= SP_Is3ButtonEnabled + 1,
	SP_IsMiddleButtonLock	= SP_IsPressureEdgeMotionEnabled + 1,
	SP_Button4Action	= SP_IsMiddleButtonLock + 1,
	SP_Button5Action	= SP_Button4Action + 1,
	SP_DisablePDIfExtPresent	= SP_Button5Action + 16,
	SP_VerticalScrollingFlags	= SP_DisablePDIfExtPresent + 1,
	SP_HorizontalScrollingFlags	= SP_VerticalScrollingFlags + 1,
	SP_DisplayFlags	= SP_HorizontalScrollingFlags + 1,
	SP_ModelId	= SP_DisplayFlags + 1,
	SP_DisableState	= SP_ModelId + 1,
	SP_NumLEDs	= SP_DisableState + 1,
	SP_Pid	= SP_NumLEDs + 1,
	SP_IsBtnSensitivity	= SP_Pid + 1,
	SP_BtnSensitivity	= SP_IsBtnSensitivity + 1,
	SP_IlluminationState	= SP_BtnSensitivity + 1,
	SP_HasMultiFingerReport	= SP_IlluminationState + 1,
	SP_IsMultiFingerReportEnabled	= SP_HasMultiFingerReport + 1,
	SP_IsClearPad	= SP_IsMultiFingerReportEnabled + 1,
	SP_HasMultiFingerPacketsGrouped	= SP_IsClearPad + 1,
	SP_PinchFlags	= SP_HasMultiFingerPacketsGrouped + 1,
	SP_Slider0Flags	= SP_PinchFlags + 1,
	SP_Slider1Flags	= SP_Slider0Flags + 1,
	SP_VerticalScrollRegionWidth	= SP_Slider1Flags + 1,
	SP_VerticalScrollSpeed	= SP_VerticalScrollRegionWidth + 1,
	SP_HorizontalScrollRegionHeight	= SP_VerticalScrollSpeed + 1,
	SP_HorizontalScrollSpeed	= SP_HorizontalScrollRegionHeight + 1,
	SP_GlobalScrollingModes	= SP_HorizontalScrollSpeed + 1,
	SP_PalmThreshold	= SP_GlobalScrollingModes + 1,
	SP_2FVerticalScrollingFlags	= SP_PalmThreshold + 1,
	SP_2FHorizontalScrollingFlags	= SP_2FVerticalScrollingFlags + 1,
	SP_SuppressTapping	= SP_2FHorizontalScrollingFlags + 1,
	SP_2FingerVerticalScrollSpeed	= SP_SuppressTapping + 1,
	SP_2FingerHorizontalScrollSpeed	= SP_2FingerVerticalScrollSpeed + 1,
	SP_HasCoverGesture	= SP_2FingerHorizontalScrollSpeed + 1,
	SP_IsFingerStateReportEnabled	= SP_HasCoverGesture + 1,
	SP_IsEdgeTapFilteringEnabled	= SP_IsFingerStateReportEnabled + 1,
	SP_IsOriginationZoneEnabled	= SP_IsEdgeTapFilteringEnabled + 1,
	SP_IsButtonTapFilteringEnabled	= SP_IsOriginationZoneEnabled + 1,
	SP_EdgeTapZoneTopLeft	= SP_IsButtonTapFilteringEnabled + 1,
	SP_EdgeTapZoneWidthHeight	= SP_EdgeTapZoneTopLeft + 1,
	SP_ButtonTapZoneTopLeft	= SP_EdgeTapZoneWidthHeight + 1,
	SP_ButtonTapZoneWidthHeight	= SP_ButtonTapZoneTopLeft + 1,
	SP_OriginationZoneTopLeft	= SP_ButtonTapZoneWidthHeight + 1,
	SP_OriginationZoneWidthHeight	= SP_OriginationZoneTopLeft + 1,
	SP_IlluminationEnabledState	= SP_OriginationZoneWidthHeight + 1,
	SP_IlluminationBrightnessState	= SP_IlluminationEnabledState + 1,
	SP_2FingerTapAction	= SP_IlluminationBrightnessState + 1,
	SP_3FingerStrokeUp	= SP_2FingerTapAction + 1,
	SP_3FingerStrokeDown	= SP_3FingerStrokeUp + 1,
	SP_TwoFingerDoubleTapState	= SP_3FingerStrokeDown + 1,
	SP_HasTwoFingerDoubleTap	= SP_TwoFingerDoubleTapState + 1,
	SP_ChiralScrolling	= SP_HasTwoFingerDoubleTap + 1,
	SP_1FingerPressButtonAction	= SP_ChiralScrolling + 1,
	SP_2FingerPressButtonAction	= SP_1FingerPressButtonAction + 1,
	SP_3FingerPressButtonAction	= SP_2FingerPressButtonAction + 1,
	SP_WorkspaceSwitch	= SP_3FingerPressButtonAction + 1,
	SP_EnableActiveStick	= SP_WorkspaceSwitch + 1,
	SP_ActiveStickTimeOut	= SP_EnableActiveStick + 1,
	SP_IsTheaterPad	= SP_ActiveStickTimeOut + 1,
	SP_DeviceMode	= SP_IsTheaterPad + 1,
	SP_TouchPadLightingEnabled	= SP_DeviceMode + 1,
	SP_ProfileDirtyFlag	= SP_TouchPadLightingEnabled + 1,
	SP_BoardNumber	= SP_ProfileDirtyFlag + 1,
	SP_SaveDeviceDisableState	= SP_BoardNumber + 1,
	SP_NumMaxReportedFingers	= SP_SaveDeviceDisableState + 1,
	SP_SSLeftButtonZoneFlags	= SP_NumMaxReportedFingers + 1,
	SP_SSLeftButtonZoneL	= SP_SSLeftButtonZoneFlags + 1,
	SP_SSLeftButtonZoneR	= SP_SSLeftButtonZoneL + 1,
	SP_SSLeftButtonZoneT	= SP_SSLeftButtonZoneR + 1,
	SP_SSLeftButtonZoneB	= SP_SSLeftButtonZoneT + 1,
	SP_SSRightButtonZoneFlags	= SP_SSLeftButtonZoneB + 1,
	SP_SSRightButtonZoneL	= SP_SSRightButtonZoneFlags + 1,
	SP_SSRightButtonZoneR	= SP_SSRightButtonZoneL + 1,
	SP_SSRightButtonZoneT	= SP_SSRightButtonZoneR + 1,
	SP_SSRightButtonZoneB	= SP_SSRightButtonZoneT + 1,
	SP_SSMiddleButtonZoneFlags	= SP_SSRightButtonZoneB + 1,
	SP_SSMiddleButtonZoneL	= SP_SSMiddleButtonZoneFlags + 1,
	SP_SSMiddleButtonZoneR	= SP_SSMiddleButtonZoneL + 1,
	SP_SSMiddleButtonZoneT	= SP_SSMiddleButtonZoneR + 1,
	SP_SSMiddleButtonZoneB	= SP_SSMiddleButtonZoneT + 1,
	SP_MultiFingerGestures	= SP_SSMiddleButtonZoneB + 1,
	SP_IsGroupReportEnabled	= SP_MultiFingerGestures + 1,
	SP_HasPacketGroupProcessing	= SP_IsGroupReportEnabled + 1,
	SP_TouchPadSubType	= SP_HasPacketGroupProcessing + 1,
	SP_IsLEDZoneDoubleTapEnableDisableTPEnabled	= SP_TouchPadSubType + 1,
	SP_NumForceSensors	= SP_IsLEDZoneDoubleTapEnableDisableTPEnabled + 1,
	SP_AcquireUnacquireGestures	= SP_NumForceSensors + 1,
	SP_DeviceStatus	= SP_AcquireUnacquireGestures + 1,
	SP_DeviceLast	= SP_DeviceFirst + 0x200
    } ;

enum SynPacketProperty
    {	SP_PacketFirst	= SP_DeviceLast,
	SP_AssociatedDeviceHandle	= SP_PacketFirst + 1,
	SP_SequenceNumber	= SP_AssociatedDeviceHandle + 1,
	SP_TimeStamp	= SP_SequenceNumber + 1,
	SP_XRaw	= SP_TimeStamp + 1,
	SP_ZXRaw	= SP_XRaw,
	SP_YRaw	= SP_ZXRaw + 1,
	SP_ZRaw	= SP_YRaw + 1,
	SP_ZYRaw	= SP_ZRaw + 1,
	SP_W	= SP_ZYRaw + 1,
	SP_X	= SP_W + 1,
	SP_Y	= SP_X + 1,
	SP_Z	= SP_Y + 1,
	SP_XDelta	= SP_Z + 1,
	SP_YDelta	= SP_XDelta + 1,
	SP_ZDelta	= SP_YDelta + 1,
	SP_XMickeys	= SP_ZDelta + 1,
	SP_YMickeys	= SP_XMickeys + 1,
	SP_AnachronisticState	= SP_YMickeys + 1,
	SP_FingerState	= SP_AnachronisticState + 1,
	SP_ExtendedState	= SP_FingerState + 1,
	SP_ButtonState	= SP_ExtendedState + 1,
	SP_ExtraFingerState	= SP_ButtonState + 1,
	SP_WheelDelta	= SP_ExtraFingerState + 1,
	SP_FingerIndex	= SP_WheelDelta + 1,
	SP_FilterIndex	= SP_FingerIndex + 1,
	SP_PacketGroupNumber	= SP_FilterIndex + 1,
	SP_SubType	= SP_PacketGroupNumber + 1,
	SP_ExtendedState2	= SP_SubType + 1,
	SP_ZForce	= SP_ExtendedState2 + 1,
	SP_ZImage	= SP_ZForce + 1,
	SP_PacketLast	= SP_PacketFirst + 0xe0
    } ;

enum SynGroupProperty
    {	SP_GroupFirst	= SP_PacketLast,
	SP_DeviceHandle	= SP_GroupFirst + 1,
	SP_GroupNumber	= SP_DeviceHandle + 1,
	SP_ForceRaw	= SP_GroupNumber + 1,
	SP_Force	= SP_ForceRaw + 1,
	SP_GroupLast	= SP_GroupFirst + 0x20
    } ;

enum SynDisplayProperty
    {	SP_DisplayFirst	= SP_GroupLast,
	SP_BackLightState	= SP_DisplayFirst + 1,
	SP_DisplayRows	= SP_BackLightState + 1,
	SP_DisplayColumns	= SP_DisplayRows + 1,
	SP_DisplayOwned	= SP_DisplayColumns + 1,
	SP_BackLightOnOffOnce	= SP_DisplayOwned + 1,
	SP_DisplayLast	= SP_DisplayFirst + 0x100
    } ;

enum SynAPIStringProperty
    {	SP_StringFirst	= SP_DisplayLast,
	SP_APIStringFirst	= SP_StringFirst,
	SP_VersionString	= SP_APIStringFirst + 1,
	SP_APIStringLast	= SP_APIStringFirst + 0x100
    } ;

enum SynDeviceStringProperty
    {	SP_DeviceStringFirst	= SP_APIStringLast,
	SP_ModelString	= SP_DeviceStringFirst + 1,
	SP_PnPID	= SP_ModelString + 1,
	SP_ShortName	= SP_PnPID + 1,
	SP_ProductSubclassConfigKey	= SP_ShortName + 1,
	SP_DeviceStringLast	= SP_DeviceStringFirst + 0x100,
	SP_StringLast	= SP_DeviceStringLast
    } ;

enum SynNonPlugInAction
    {	SE_ActionNone	= 0xffffff00,
	SE_ActionPrimary	= 0xffffff01,
	SE_ActionSecondary	= 0xffffff02,
	SE_ActionAuxilliary	= 0xffffff04,
	SE_ActionButton4	= 0xffffff08,
	SE_ActionButton5	= 0xffffff10,
	SE_ActionMask	= 0xff
    } ;

enum SynPlugInAction
    {	SE_StartButton	= 0,
	SE_MinimizeApp	= 1,
	SE_RestoreApp	= 2,
	SE_MaximizeApp	= 3,
	SE_RunApp	= 5,
	SE_ScrollLock	= 6,
	SE_ScrollUp	= 7,
	SE_ScrollDown	= 8,
	SE_ScrollLeft	= 9,
	SE_ScrollRight	= 10,
	SE_NoAction	= 11,
	SE_Gesture	= 12,
	SE_DoubleClick	= 13,
	SE_BrowseBack	= 14,
	SE_BrowseForward	= 15,
	SE_BrowseURL	= 16,
	SE_BrowseReload	= 17,
	SE_BrowseStop	= 18,
	SE_PageUp	= 19,
	SE_PageDown	= 20,
	SE_MouseCP	= 21,
	SE_CloseApp	= 22,
	SE_ArrowUp	= 23,
	SE_ArrowDown	= 24,
	SE_ArrowLeft	= 25,
	SE_ArrowRight	= 26,
	SE_StickScroll	= 27,
	SE_KeyboardMacro	= 28,
	SE_StickMagnify	= 30,
	SE_AVPlay	= 31,
	SE_AVStop	= 32,
	SE_AVBack	= 33,
	SE_AVForward	= 34,
	SE_ToggleDeviceOnOff	= 35,
	SE_Launch_Email	= 36,
	SE_Launch_Browser	= 37,
	SE_Print	= 38,
	SE_ButtonModeOn	= 39,
	SE_ButtonModeOff	= 40,
	SE_ButtonToggle	= 71,
	SE_VolUp	= 41,
	SE_VolDown	= 42,
	SE_VolMute	= 43,
	SE_Launch_MediaPlayer	= 44,
	SE_Record	= 45,
	SE_WindowsSearch	= 46,
	SE_ScrollLockMomentary	= 47,
	SE_ButtonModeMomentary	= 48,
	SE_ChangeRegistryValue	= 49,
	SE_SendWindowMessage	= 50,
	SE_BrowserHome	= 51,
	SE_NewMailMessage	= 52,
	SE_GetSendMail	= 53,
	SE_ReplyToMail	= 54,
	SE_ForwardMail	= 55,
	SE_MouseMacro	= 57,
	SE_MinimizeAllWindows	= 56,
	SE_Escape	= 58,
	SE_Enter	= 59,
	SE_WmAppVolumeUp	= 60,
	SE_WmAppVolumeDown	= 61,
	SE_WmAppVolumeMute	= 62,
	SE_MSExcelAppRotateCW	= 63,
	SE_MSExcelAppRotateCCW	= 64,
	SE_MSWordAppRotateCW	= 65,
	SE_MSWordAppRotateCCW	= 66,
	SE_MSPowerPointAppRotateCW	= 67,
	SE_MSPowerPointAppRotateCCW	= 68,
	SE_BlackScreen	= 69,
	SE_LockComputer	= 70,
	SE_ActivateScrybe	= 72
    } ;

enum SynDeviceType
    {	SE_DeviceAny	= 0,
	SE_DeviceUnknown	= SE_DeviceAny,
	SE_DeviceMouse	= SE_DeviceUnknown + 1,
	SE_DeviceTouchPad	= SE_DeviceMouse + 1,
	SE_DeviceWheelMouse	= SE_DeviceTouchPad + 1,
	SE_DeviceIBMCompatibleStick	= SE_DeviceWheelMouse + 1,
	SE_DeviceStyk	= SE_DeviceIBMCompatibleStick + 1,
	SE_DeviceFiveButtonWheelMouse	= SE_DeviceStyk + 1,
	SE_DevicecPad	= SE_DeviceFiveButtonWheelMouse + 1,
	SE_DeviceControlBar	= SE_DevicecPad + 1,
	SE_DeviceRGBControlBar	= SE_DeviceControlBar + 1,
	SE_DeviceUnAuthenticatedTouchPad	= SE_DeviceRGBControlBar + 1,
	SE_DeviceNGIPS2Legacy	= SE_DeviceUnAuthenticatedTouchPad + 1,
	SE_DeviceTouchDisplay	= SE_DevicecPad,
	SE_DeviceTouchScreen	= SE_DeviceTouchPad
    } ;

enum SynConnectionType
    {	SE_ConnectionAny	= 0,
	SE_ConnectionCOM	= SE_ConnectionAny + 1,
	SE_ConnectionPS2	= SE_ConnectionCOM + 1,
	SE_ConnectionUSB	= SE_ConnectionPS2 + 1,
	SE_ConnectionSMB	= SE_ConnectionUSB + 1,
	SE_ConnectionI2C	= SE_ConnectionSMB + 1,
	SE_ConnectionUnknown	= SE_ConnectionAny
    } ;

enum SynNotificationReason
    {	SE_Configuration_Changed	= 0x1,
	SE_DeviceRemoved	= 0x2,
	SE_DeviceAdded	= 0x4,
	SE_InternalPS2DeviceDisabled	= 0x8,
	SE_InternalPS2DeviceInCompatibilityMode	= 0x10,
	SE_ForeignDeviceChanged	= 0x100,
	SE_DeviceModeChanged	= 0x400
    } ;

enum SynButtonFlags
    {	SF_ButtonLeft	= 0x1,
	SF_ButtonRight	= 0x2,
	SF_ButtonMiddle	= 0x4,
	SF_ButtonUp	= 0x10,
	SF_ButtonDown	= 0x20,
	SF_Button4	= 0x40,
	SF_Button5	= 0x80,
	SF_ButtonExtended1	= 0x100,
	SF_ButtonExtended2	= 0x200,
	SF_ButtonExtended3	= 0x400,
	SF_ButtonExtended4	= 0x800,
	SF_ButtonExtended5	= 0x1000,
	SF_ButtonExtended6	= 0x2000,
	SF_ButtonExtended7	= 0x4000,
	SF_ButtonExtended8	= 0x8000,
	SF_ButtonExtendedAll	= 0xff00,
	SF_ButtonReportedLeft	= 0x10000,
	SF_ButtonReportedRight	= 0x20000,
	SF_ButtonReportedMiddle	= 0x40000,
	SF_ButtonReported4	= 0x80000,
	SF_ButtonReported5	= 0x1000000,
	SF_ButtonVirtualLeft	= 0x100000,
	SF_ButtonVirtualRight	= 0x200000,
	SF_ButtonVirtualMiddle	= 0x400000,
	SF_ButtonVirtual4	= 0x800000,
	SF_ButtonVirtual5	= 0x2000000,
	SF_ButtonAnyVirtual	= 0x2f00000,
	SF_ButtonAnyReported	= 0x10f0000,
	SF_ButtonAnyPhysical	= 0xffff,
	SF_ButtonAnyExtended	= 0xff00,
	SF_ButtonAny	= 0x3ffffff
    } ;

enum SynWheelFlags
    {	SF_WheelHorizontal	= 0x1,
	SF_WheelSmall	= 0x2
    } ;

enum SynScrollingFlags
    {	SF_ScrollingEnabled	= 0x1,
	SF_ScrollingEdgeMotion	= 0x2,
	SF_ScrollingMomentum	= 0x4,
	SF_ScrollingUnderPointer	= 0x8,
	SF_ScrollingReversed	= 0x40,
	SF_ScrollingAxisSwapped	= 0x80
    } ;

enum SynHardwareBroadcastFlags
    {	SF_Detect	= 0,
	SF_Configure	= SF_Detect + 1
    } ;

enum SynPersistFlags
    {	SF_PersistMachine	= 0
    } ;

enum SynFingerFlags
    {	SF_FingerProx	= 0x200,
	SF_FingerTouch	= 0x400,
	SF_FingerHeavy	= 0x800,
	SF_FingerPress	= 0x1000,
	SF_FingerPresent	= 0x2000,
	SF_FingerPossTap	= 0x4000,
	SF_FingerStylus	= 0x8000,
	SF_FingerTap	= 0x10000,
	SF_FingerDrag	= 0x20000,
	SF_FingerDragLock	= 0x40000,
	SF_FingerPrimGest	= 0x80000,
	SF_FingerSecGest	= 0x100000,
	SF_FingerAuxGest	= 0x200000,
	SF_FingerMotion	= 0x400000,
	SF_FingerMoving	= 0x800000,
	SF_FingerTopLeftTap	= 0x1000000,
	SF_FingerTopRightTap	= 0x2000000,
	SF_FingerBottomLeftTap	= 0x4000000,
	SF_FingerBottomRightTap	= 0x8000000,
	SF_FingerTap2	= 0x40000000,
	SF_FingerTap3	= 0x80000000,
	SF_FingerAllCorner	= 0xf000000,
	SF_FingerAllTap	= 0xcf000000,
	SF_FingerAsButton	= 0xcf380000,
	SF_FingerAllGest	= 0xcf3f1000,
	SF_FingerAll	= 0xcffffe00
    } ;

enum SynStateFlags
    {	SF_StateFinger	= 0x2000
    } ;

enum SynExtendedStateFlags
    {	SF_StateScrollFinger	= 0x100,
	SF_Momentum	= 0x10000,
	SF_NearKeyPress	= 0x20000,
	SF_NearHighPalmW	= 0x200000
    } ;

enum SynExtendedFingerFlags
    {	SF_CurrentFingerCountMask	= 0xff,
	SF_StrokeFingerCountMask	= 0xff00,
	SF_PrimaryFingerContactIDMask	= 0xff0000,
	SF_SecondaryFingerContactIDMask	= 0xff000000,
	SF_CurrentFingerCountBit	= 0,
	SF_StrokeFingerCountBit	= 8,
	SF_PrimaryFingerContactIDBit	= 16,
	SF_SecondaryFingerContactIDBit	= 24
    } ;

enum SynDisplayFlags
    {	SF_DisplayNone	= 0,
	SF_DisplayPresent	= 0x1
    } ;

enum SynFlushMethod
    {	SE_FlushSynchronous	= 0,
	SE_FlushAsynchronous	= SE_FlushSynchronous + 1
    } ;

enum SynDisplayAquisitionMethod
    {	SE_AcquireCooperative	= 0,
	SE_AcquireExclusive	= SE_AcquireCooperative + 1,
	SE_AcquirePassive	= SE_AcquireExclusive + 1
    } ;

enum SynDisplayMessage
    {	SE_AcquisitionLost	= 0x1,
	SE_AcquisitionGained	= 0x2,
	SE_BackgroundImageChanged	= 0x3
    } ;

enum SynGestures
    {	SF_GestureTap	= 0x1,
	SF_GesturePressToSelect	= 0x1,
	SF_GestureDrag	= 0x2,
	SF_GestureDragLock	= 0x4,
	SF_GesturePressureDrag	= 0x8,
	SF_GestureReleaseToSelect	= 0x10,
	SF_GestureMiddleTapToHelp	= 0x20,
	SF_GestureMiddleButtonLock	= 0x40,
	SF_GestureMiddleButtonBlock	= 0x80,
	SF_GestureTapSuppress	= 0x100,
	SF_GestureTapMask	= 0x7,
	SF_GestureAll	= 0x1ff
    } ;

enum SynActions
    {	SF_ActionNone	= 0,
	SF_ActionPrimary	= 0x1,
	SF_ActionSecondary	= 0x2,
	SF_ActionAuxilliary	= 0x4,
	SF_ActionAll	= 0x7
    } ;

enum SynAcquisitionFlags
    {	SF_AcquireAll	= 0,
	SF_AcquireMotionOnly	= 0x1,
	SF_AcquireWheelOnly	= 0x2,
	SF_AcquireTapAndMotionOnly	= 0x3
    } ;

enum SynIlluminationState
    {	SE_Illumination_Off	= 0,
	SE_Illumination_On	= SE_Illumination_Off + 1
    } ;

enum SynIlluminationGroup
    {	SE_Illumination_All_LEDs	= 0,
	SE_Illumination_Pulsing_LED	= 1,
	SE_Illumination_Button_LED	= 2,
	SE_Illumination_Group_Offset	= 8,
	SE_Illumination_Group_Mask	= 0xff00
    } ;

enum SynIlluminationEnabledState
    {	SE_Illumination_Disabled	= 0,
	SE_Illumination_Enabled	= 1,
	SE_Illumination_State_Mask	= 0xff
    } ;

enum SynIlluminationBrightnessState
    {	SE_Illumination_Half_Brightness	= 1,
	SE_Illumination_Full_Brightness	= 2
    } ;

enum SynValidateProperty
    {	SP_Read	= 0,
	SP_Write	= 0x1,
	SP_ReadWrite	= 0x2
    } ;

enum SynNotificationFromApps
    {	SF_Workspace_Leave	= 1,
	SF_Workspace_Enter	= 2
    } ;

enum SynDeviceMode
    {	SE_ModePointing	= 0,
	SE_ModeButton	= 1
    } ;

enum SynZoneID
    {	SE_ZoneID_None	= 0,
	SE_ZoneID_TopLeft	= 0x1000000,
	SE_ZoneID_TopRight	= 0x2000000,
	SE_ZoneID_BottomLeft	= 0x4000000,
	SE_ZoneID_BottomRight	= 0x8000000,
	SE_ZoneID_LeftButton	= 0x1,
	SE_ZoneID_RightButton	= 0x2,
	SE_ZoneID_MiddleButton	= 0x4,
	SE_ZoneID_UpButton	= 0x10000000,
	SE_ZoneID_DownButton	= 0x20000000,
	SE_ZoneID_3FingerPress	= 0x80000,
	SE_ZoneID_OmniModeCorner	= 0x800
    } ;

enum SynProfileCommand
    {	SE_ProfileLoad	= 1,
	SE_ProfileSave	= SE_ProfileLoad + 1,
	SE_ProfileCheckDirtyFlag	= SE_ProfileSave + 1
    } ;

enum SynProfileCommandResult
    {	SE_ProfileCommandOK	= 1,
	SE_ProfileCommandFailed	= SE_ProfileCommandOK + 1,
	SE_ProfileUnknownCommand	= SE_ProfileCommandFailed + 1,
	SE_ProfileReadError	= SE_ProfileUnknownCommand + 1,
	SE_ProfileWriteError	= SE_ProfileReadError + 1,
	SE_ProfileIsDirty	= SE_ProfileWriteError + 1,
	SE_ProfileIsNotDirty	= SE_ProfileIsDirty + 1
    } ;

enum SynGestureActionNotifyFlag
    {	SF_GestureActionNotify_None	= 0,
	SF_GestureActionNotify_Scroll	= 0x1,
	SF_GestureActionNotify_Zoom	= 0x2,
	SF_GestureActionNotify_Rotate	= 0x4,
	SF_GestureActionNotify_Single	= 0x10
    } ;

enum SynGestureActionNotifyFlagEx
    {	SF_GestureActionNotify_AlwaysNotified_Disabled	= 0,
	SF_GestureActionNotify_AlwaysNotified_Enabled	= 0x1
    } ;

enum SynGestureActionEvent
    {	SE_GestureAction_Undefined	= -1,
	SE_Cancel_Gesture	= 0,
	SE_Gesture_Scroll	= 1000,
	SE_Gesture_Zoom	= 1001,
	SE_Gesture_Rotate	= 1002,
	SE_Action_ScrollUp	= 1,
	SE_Action_ScrollDown	= 2,
	SE_Action_ScrollLeft	= 3,
	SE_Action_ScrollRight	= 4,
	SE_Action_PageUp	= 5,
	SE_Action_PageDown	= 6,
	SE_Action_ArrowUp	= 7,
	SE_Action_ArrowDown	= 8,
	SE_Action_ArrowLeft	= 9,
	SE_Action_ArrowRight	= 10,
	SE_Action_PlayPause	= 11,
	SE_Action_Stop	= 12,
	SE_Action_Next	= 13,
	SE_Action_Previous	= 14
    } ;

enum SynGestureActionSubType
    {	SF_GestureActionSubType_None	= 0,
	SF_GestureActionSubType_Scroll_Horizontal	= 0x1,
	SF_GestureActionSubType_Scroll_Vertical	= 0x2
    } ;

enum SynMultiFingerGestureFlags
    {	SF_UnacquireAllGestures	= 0,
	SF_OneFingerScrolling	= 0x1,
	SF_TwoFingerScrolling	= 0x2,
	SF_TwoFingerFlick	= 0x4,
	SF_Rotate	= 0x8,
	SF_Pinch	= 0x10,
	SF_ThreeFingerFlick	= 0x20,
	SF_ThreeFingerPress	= 0x40,
	SF_FourFingerFlick	= 0x80,
	SF_NotifySingleAction	= 0x100,
	SF_TwoFingerTap	= 0x200,
	SF_ThreeFingerTap	= 0x400,
	SF_FourFingerTap	= 0x800,
	SF_MultiFingerGestures	= 0x1000,
	SF_EdgeSwipeTop	= 0x2000,
	SF_EdgeSwipeLeft	= 0x4000,
	SF_EdgeSwipeRight	= 0x8000,
	SF_EdgeSwipeBottom	= 0x10000,
	SF_MultiFingerGesturesMask	= 0xffff
    } ;

enum SynTouchPadSubType
    {	SE_TouchPad	= 0,
	SE_ClickPad	= 0x1,
	SE_LuxPad	= 0x2
    } ;

EXTERN_C const IID LIBID_SYNCTRLLib;

#ifndef ___ISynAPICtrlEvents_DISPINTERFACE_DEFINED__
#define ___ISynAPICtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ISynAPICtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__ISynAPICtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("093E1E71-478B-43A0-8A02-3E3074B081E0")
    _ISynAPICtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ISynAPICtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ISynAPICtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ISynAPICtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ISynAPICtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ISynAPICtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ISynAPICtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ISynAPICtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ISynAPICtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _ISynAPICtrlEventsVtbl;

    interface _ISynAPICtrlEvents
    {
        CONST_VTBL struct _ISynAPICtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISynAPICtrlEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _ISynAPICtrlEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _ISynAPICtrlEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _ISynAPICtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _ISynAPICtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _ISynAPICtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _ISynAPICtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ISynAPICtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SynAPICtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("F418EBA0-6A10-4482-AC2B-2D10C807073A")
SynAPICtrl;
#endif

EXTERN_C const CLSID CLSID_SynPacketCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("a220a2df-406f-4d68-9b62-995669ae0c92")
SynPacketCtrl;
#endif

EXTERN_C const CLSID CLSID_SynGroupCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("856BEFCE-E5DD-47bf-B274-B17FA9DFE7D2")
SynGroupCtrl;
#endif

#ifndef ___ISynDeviceCtrlEvents_DISPINTERFACE_DEFINED__
#define ___ISynDeviceCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ISynDeviceCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__ISynDeviceCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("67FE52E0-3DD2-4BBF-9DA2-D795317F6531")
    _ISynDeviceCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ISynDeviceCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ISynDeviceCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ISynDeviceCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ISynDeviceCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ISynDeviceCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ISynDeviceCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ISynDeviceCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ISynDeviceCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _ISynDeviceCtrlEventsVtbl;

    interface _ISynDeviceCtrlEvents
    {
        CONST_VTBL struct _ISynDeviceCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISynDeviceCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _ISynDeviceCtrlEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _ISynDeviceCtrlEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _ISynDeviceCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _ISynDeviceCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _ISynDeviceCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _ISynDeviceCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ISynDeviceCtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SynDeviceCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("2060435E-AB52-49E1-A2EA-5D31645887CF")
SynDeviceCtrl;
#endif

#ifndef ___ISynDisplayCtrlEvents_DISPINTERFACE_DEFINED__
#define ___ISynDisplayCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ISynDisplayCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__ISynDisplayCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("763FF858-421F-4E12-B5A5-C63B9285AF57")
    _ISynDisplayCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ISynDisplayCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ISynDisplayCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ISynDisplayCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ISynDisplayCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ISynDisplayCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ISynDisplayCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ISynDisplayCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ISynDisplayCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _ISynDisplayCtrlEventsVtbl;

    interface _ISynDisplayCtrlEvents
    {
        CONST_VTBL struct _ISynDisplayCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISynDisplayCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _ISynDisplayCtrlEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _ISynDisplayCtrlEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _ISynDisplayCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _ISynDisplayCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _ISynDisplayCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _ISynDisplayCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ISynDisplayCtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SynDisplayCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("206D8F65-689B-40D0-8F07-8D974CD8884B")
SynDisplayCtrl;
#endif
#endif /* __SYNCTRLLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


