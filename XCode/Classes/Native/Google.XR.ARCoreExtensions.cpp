﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915;
// System.Action`2<System.String,System.Boolean>
struct Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>
struct List_1_t54955D954398D6C34C95F0A09188E388BD45008A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track>
struct List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData>
struct List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Predicate`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>
struct Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Google.XR.ARCoreExtensions.Internal.IDependentModule[]
struct IDependentModuleU5BU5D_t19014E5FDBFED9F67AFE2BAA9EA1B78ADEC0486E;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Google.XR.ARCoreExtensions.Track[]
struct TrackU5BU5D_tA7D85F392CDB454F5E06A70A97F7817A72237D0F;
// Google.XR.ARCoreExtensions.TrackData[]
struct TrackDataU5BU5D_tE97C9DAC39E71B4A20E5B540F030217F8ED5EFA8;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.XR.ARSubsystems.XRCameraConfiguration[]
struct XRCameraConfigurationU5BU5D_t7E84AA3EA55630F4F6576518F6F2605880F6F9E2;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// Google.XR.ARCoreExtensions.ARCloudAnchor
struct ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E;
// Google.XR.ARCoreExtensions.ARCloudReferencePoint
struct ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41;
// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3;
// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD;
// Google.XR.ARCoreExtensions.ARCoreRecordingConfig
struct ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E;
// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// Google.XR.ARCoreExtensions.ARPlaybackManager
struct ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322;
// Google.XR.ARCoreExtensions.ARRecordingManager
struct ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// Google.XR.ARCoreExtensions.Internal.AnchorApi
struct AnchorApi_t55C1D2F6158211CCB505572BA1EA56ABF34F36DF;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager
struct AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Google.XR.ARCoreExtensions.Internal.AuthenticationModule
struct AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Google.XR.ARCoreExtensions.Internal.CameraConfigApi
struct CameraConfigApi_tEF3FDDB8C966E9EB90E060446C70C63916C2FCDB;
// Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi
struct CameraConfigFilterApi_t3C84CE14B4E0652C75DEABC24BDE5E019770DB0B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Google.XR.ARCoreExtensions.Internal.ConfigApi
struct ConfigApi_t1A6497658C71B0EA6BACFABDB87BD234D11FF132;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.XR.ARCoreExtensions.Internal.DependentModuleBase
struct DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310;
// Google.XR.ARCoreExtensions.Internal.DependentModulesManager
struct DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66;
// Google.XR.ARCoreExtensions.Internal.DllImportNoop
struct DllImportNoop_tCB72716B56408EF7AE37752B03A13D21A83CF6C2;
// Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute
struct DynamicHelpAttribute_t7D9FB92D3342CA44B7356C6F94244481F49249C1;
// Google.XR.ARCoreExtensions.Internal.EarthApi
struct EarthApi_t8FAD9F89CD581A6DAC431F3C02A07C9CA0B757E8;
// Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute
struct EnumFlagsAttribute_t6D593B26A9415914EEC9DCD3445DEC81165A844C;
// Google.XR.ARCoreExtensions.Internal.FrameApi
struct FrameApi_t17B086D952A7A21EADCCC4A8EE6F52927EA4A2D2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi
struct GeospatialPoseApi_t785335EDEB4F6467CABBFB1785AE16F80D0D2A29;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Google.XR.ARCoreExtensions.Internal.HelpAttribute
struct HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Google.XR.ARCoreExtensions.Internal.IDependentModule
struct IDependentModule_tBFB4DFFF7BF43EE43DD3A4F7F5B5880BE8FD72FA;
// Google.XR.ARCoreExtensions.Internal.IOSSupportManager
struct IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A;
// Google.XR.ARCoreExtensions.Internal.LocationModule
struct LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Google.XR.ARCoreExtensions.Internal.PoseApi
struct PoseApi_t49D6EDB0A429731C6B0812EDC82892DA48439CDC;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// Google.XR.ARCoreExtensions.Internal.RecordingConfigApi
struct RecordingConfigApi_t52219373F6E79F76D5B718A240654B21C8BDA156;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// Google.XR.ARCoreExtensions.Internal.RuntimeConfig
struct RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Google.XR.ARCoreExtensions.Internal.SessionApi
struct SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// Google.XR.ARCoreExtensions.Internal.TrackApi
struct TrackApi_t14CBF0BC5E9113ABD42A06918FF8D24783E1A01C;
// Google.XR.ARCoreExtensions.Internal.TrackDataApi
struct TrackDataApi_tA7C86CD3D6CA282213F3F79D1812481573104385;
// Google.XR.ARCoreExtensions.Internal.TrackDataListApi
struct TrackDataListApi_tCB05EA6967051184ACF68C9F7D7B1EE52A170392;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// Google.XR.ARCoreExtensions.VersionInfo
struct VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076;
// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct Provider_tC76B85B1D0C70B70C5FC6B9E92C0C2C5EF31A26C;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiPlaybackStatus_tD81C6E023F517EB4648A1623047E708DBB571C6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiRecordingStatus_tBCCB8BE528051E12A270A86A8237C86219C0F10F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialMode_t46A5F0F24B98DBC4804841E68DA5AEF97ACEFC7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t54955D954398D6C34C95F0A09188E388BD45008A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral031F60CF721A8A1B2B79305C20C082EB5FE848A3;
IL2CPP_EXTERN_C String_t* _stringLiteral11F5D367D5442F75EC3D557B5C723227E469C539;
IL2CPP_EXTERN_C String_t* _stringLiteral163E615278B2AE83873F54F03D93170DAB900F53;
IL2CPP_EXTERN_C String_t* _stringLiteral192E7D1560CDB49DFEBEFBCED49E8537C1ADA5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral1FC29683F6E19781A0897EEB405C7FEA0CAB7A50;
IL2CPP_EXTERN_C String_t* _stringLiteral20EE5966E8B0157C0C6AD196A7753C5285981C4C;
IL2CPP_EXTERN_C String_t* _stringLiteral245880CA750529601C4FF228E2CF3A8ECA5C242B;
IL2CPP_EXTERN_C String_t* _stringLiteral29A2492D1543FEE511091AC0BCB1C2325329CC20;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9F0CE6F09D40E3E2188659A1979CAB154E7F9F;
IL2CPP_EXTERN_C String_t* _stringLiteral3E36046B96D80329B0519BF055E3C17934B46792;
IL2CPP_EXTERN_C String_t* _stringLiteral4AB6AED1D1A9735B4C548FE92C2A4516197E877C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D245519C02FC2DAAFDBB89D9EE851632CD173B6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral597CF650E368D8FFF2EEA95AFA7307F106D1A7DE;
IL2CPP_EXTERN_C String_t* _stringLiteral59C23871107D241BF9D160CD46876D62583516A3;
IL2CPP_EXTERN_C String_t* _stringLiteral5B13EAD05D03F70A5E4B127342469A013FE345E8;
IL2CPP_EXTERN_C String_t* _stringLiteral5C831849415D472ACDAD3625736030C927879A25;
IL2CPP_EXTERN_C String_t* _stringLiteral5CDB321BE5801415692A2A84196FB89319361331;
IL2CPP_EXTERN_C String_t* _stringLiteral64A8D649E5D82BC94046D4614BEB89162A2C9A75;
IL2CPP_EXTERN_C String_t* _stringLiteral64AE57C4A1D5795E1348D838B9F774F70790F43B;
IL2CPP_EXTERN_C String_t* _stringLiteral709DBA267E69E34DE784F99499679069BB3F16AC;
IL2CPP_EXTERN_C String_t* _stringLiteral7375F56C4C2FFEEE70F781C2A409295F6DDE79DE;
IL2CPP_EXTERN_C String_t* _stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860;
IL2CPP_EXTERN_C String_t* _stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87;
IL2CPP_EXTERN_C String_t* _stringLiteral7E9A55BD5677C2B3434A29B3959A7ADB01DC2679;
IL2CPP_EXTERN_C String_t* _stringLiteral86A44329ED3FC05608086EDA5D34229E1DE304F7;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral899FED050775F167B273CB31245A56C36C4BAE41;
IL2CPP_EXTERN_C String_t* _stringLiteral8E99BC28F79DF64079057E43A8E4347F9DAD5356;
IL2CPP_EXTERN_C String_t* _stringLiteral97737379DB2CF719EFFC9E4F6C55519041321878;
IL2CPP_EXTERN_C String_t* _stringLiteral9E19FCBA0D3246AD1DC84E716BD5D9A7817B3D8B;
IL2CPP_EXTERN_C String_t* _stringLiteralA45A103534B0BA25A4EC4BBC7CA2C36983D4C42C;
IL2CPP_EXTERN_C String_t* _stringLiteralA6DA909F119A763D12E195D67835E0D67252C45E;
IL2CPP_EXTERN_C String_t* _stringLiteralB74BE110B2F9A30187194FC17F1EE846327FF92B;
IL2CPP_EXTERN_C String_t* _stringLiteralB856C54E196101464C3ED9F7883597180C9FC255;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6D3D4D29E5DDD25AA66877ECD85907DE001485;
IL2CPP_EXTERN_C String_t* _stringLiteralBC97C2FBB5C80543B8895530F2123C3D6F58ACCB;
IL2CPP_EXTERN_C String_t* _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC60447D061F1F50D0498C07584BD7B0199D414;
IL2CPP_EXTERN_C String_t* _stringLiteralE72C6333E41274633A472EB00E664E60390F9953;
IL2CPP_EXTERN_C String_t* _stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB;
IL2CPP_EXTERN_C String_t* _stringLiteralFA6625D3A1AECCE03CF6A02FC4F922183297BFE0;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFB6CCA9FBB351C07165F2A4278DD99B4969FAE12;
IL2CPP_EXTERN_C String_t* _stringLiteralFBF791BC4E29217DF89E7DCBF6C32D5FF5C440C0;
IL2CPP_EXTERN_C String_t* _stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOSSupportManager_OnFrameUpdate_m28CCEF93F31D72910AF7B463D7144B855ED527BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindAll_m2E02969CD611EA3C239606E970D1A305F98D2E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE24EB3C85EDB11272ACA422006A17D2B288E786B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_m4A245DFB34D4441FAB40F919D346300387FDD414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CGetModulesU3Eb__0_m91FC6AF1AAD8D36F9FB1847F2D6338669340684E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBE755C7D2729C4D7C24A0F4FD0341F51F7FC9007 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>
struct List_1_t54955D954398D6C34C95F0A09188E388BD45008A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IDependentModuleU5BU5D_t19014E5FDBFED9F67AFE2BAA9EA1B78ADEC0486E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t54955D954398D6C34C95F0A09188E388BD45008A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IDependentModuleU5BU5D_t19014E5FDBFED9F67AFE2BAA9EA1B78ADEC0486E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track>
struct List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TrackU5BU5D_tA7D85F392CDB454F5E06A70A97F7817A72237D0F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TrackU5BU5D_tA7D85F392CDB454F5E06A70A97F7817A72237D0F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData>
struct List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TrackDataU5BU5D_tE97C9DAC39E71B4A20E5B540F030217F8ED5EFA8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TrackDataU5BU5D_tE97C9DAC39E71B4A20E5B540F030217F8ED5EFA8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRCameraConfigurationU5BU5D_t7E84AA3EA55630F4F6576518F6F2605880F6F9E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRCameraConfigurationU5BU5D_t7E84AA3EA55630F4F6576518F6F2605880F6F9E2* ___s_emptyArray_5;
};

// Google.XR.ARCoreExtensions.ARAnchorManagerExtensions
struct ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394  : public RuntimeObject
{
};

struct ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields
{
	// System.String Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::_cloudAnchorName
	String_t* ____cloudAnchorName_0;
	// System.String Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::_geospatialAnchorName
	String_t* ____geospatialAnchorName_1;
};

// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions
struct ARCoreHandleExtensions_tD8AE534A01C773947EB1A0EEA94E1161AA55F284  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.AnchorApi
struct AnchorApi_t55C1D2F6158211CCB505572BA1EA56ABF34F36DF  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// Google.XR.ARCoreExtensions.Internal.ApiConstants
struct ApiConstants_t7D7F3438150129CA27EF34DD2A160E82939C273B  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.CachedData
struct CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E  : public RuntimeObject
{
};

struct CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Google.XR.ARCoreExtensions.Internal.CachedData::_cachedData
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____cachedData_0;
};

// Google.XR.ARCoreExtensions.Internal.CameraConfigApi
struct CameraConfigApi_tEF3FDDB8C966E9EB90E060446C70C63916C2FCDB  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi
struct CameraConfigFilterApi_t3C84CE14B4E0652C75DEABC24BDE5E019770DB0B  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.ConfigApi
struct ConfigApi_t1A6497658C71B0EA6BACFABDB87BD234D11FF132  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.DependentModuleBase
struct DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.DependentModulesManager
struct DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66  : public RuntimeObject
{
};

struct DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_StaticFields
{
	// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule> Google.XR.ARCoreExtensions.Internal.DependentModulesManager::_modules
	List_1_t54955D954398D6C34C95F0A09188E388BD45008A* ____modules_0;
};

// Google.XR.ARCoreExtensions.Internal.EarthApi
struct EarthApi_t8FAD9F89CD581A6DAC431F3C02A07C9CA0B757E8  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.FrameApi
struct FrameApi_t17B086D952A7A21EADCCC4A8EE6F52927EA4A2D2  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi
struct GeospatialPoseApi_t785335EDEB4F6467CABBFB1785AE16F80D0D2A29  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.PoseApi
struct PoseApi_t49D6EDB0A429731C6B0812EDC82892DA48439CDC  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.RecordingConfigApi
struct RecordingConfigApi_t52219373F6E79F76D5B718A240654B21C8BDA156  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.SessionApi
struct SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// Google.XR.ARCoreExtensions.Internal.TrackApi
struct TrackApi_t14CBF0BC5E9113ABD42A06918FF8D24783E1A01C  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.TrackDataApi
struct TrackDataApi_tA7C86CD3D6CA282213F3F79D1812481573104385  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.TrackDataListApi
struct TrackDataListApi_tCB05EA6967051184ACF68C9F7D7B1EE52A170392  : public RuntimeObject
{
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Google.XR.ARCoreExtensions.VersionInfo
struct VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7  : public RuntimeObject
{
};

struct VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_StaticFields
{
	// System.String Google.XR.ARCoreExtensions.VersionInfo::Version
	String_t* ___Version_0;
};

// Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions
struct XRCameraConfigurationExtensions_t7B9ACCC462CC2E32D7BDAB7865FC9446C11E0237  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.XRCameraFrameExtensions
struct XRCameraFrameExtensions_tA7BDFAFD8CE4454657C413FA6645FD6A9B531F06  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0::modulesEnabled
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___modulesEnabled_0;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemWithProvider_3_tEC32E35ABA7D3B7D5B9459E6752E697305F3E1FB  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tC76B85B1D0C70B70C5FC6B9E92C0C2C5EF31A26C* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// Google.XR.ARCoreExtensions.Internal.ApiPose
struct ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 
{
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qx
	float ___Qx_0;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qy
	float ___Qy_1;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qz
	float ___Qz_2;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Qw
	float ___Qw_3;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::X
	float ___X_4;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Y
	float ___Y_5;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiPose::Z
	float ___Z_6;
};

// Google.XR.ARCoreExtensions.Internal.ApiQuaternion
struct ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 
{
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiQuaternion::Qx
	float ___Qx_0;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiQuaternion::Qy
	float ___Qy_1;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiQuaternion::Qz
	float ___Qz_2;
	// System.Single Google.XR.ARCoreExtensions.Internal.ApiQuaternion::Qw
	float ___Qw_3;
};

// Google.XR.ARCoreExtensions.Internal.AuthenticationModule
struct AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291  : public DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Google.XR.ARCoreExtensions.Internal.DllImportNoop
struct DllImportNoop_tCB72716B56408EF7AE37752B03A13D21A83CF6C2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Google.XR.ARCoreExtensions.GeospatialPose
struct GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C 
{
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Altitude
	double ___Altitude_2;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Heading
	double ___Heading_3;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HeadingAccuracy
	double ___HeadingAccuracy_4;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HorizontalAccuracy
	double ___HorizontalAccuracy_5;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::VerticalAccuracy
	double ___VerticalAccuracy_6;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Google.XR.ARCoreExtensions.Internal.JarArtifact
struct JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1 
{
	// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::Group
	String_t* ___Group_0;
	// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::Artifact
	String_t* ___Artifact_1;
	// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::Version
	String_t* ___Version_2;
	// System.String[] Google.XR.ARCoreExtensions.Internal.JarArtifact::PackageIds
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___PackageIds_3;
};
// Native definition for P/Invoke marshalling of Google.XR.ARCoreExtensions.Internal.JarArtifact
struct JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_pinvoke
{
	char* ___Group_0;
	char* ___Artifact_1;
	char* ___Version_2;
	char** ___PackageIds_3;
};
// Native definition for COM marshalling of Google.XR.ARCoreExtensions.Internal.JarArtifact
struct JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_com
{
	Il2CppChar* ___Group_0;
	Il2CppChar* ___Artifact_1;
	Il2CppChar* ___Version_2;
	Il2CppChar** ___PackageIds_3;
};

// Google.XR.ARCoreExtensions.Internal.LocationModule
struct LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90  : public DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310
{
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;
};

// Google.XR.ARCoreExtensions.TrackData
struct TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44 
{
	// System.Int64 Google.XR.ARCoreExtensions.TrackData::FrameTimestamp
	int64_t ___FrameTimestamp_0;
	// System.Byte[] Google.XR.ARCoreExtensions.TrackData::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_1;
};
// Native definition for P/Invoke marshalling of Google.XR.ARCoreExtensions.TrackData
struct TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_pinvoke
{
	int64_t ___FrameTimestamp_0;
	Il2CppSafeArray/*NONE*/* ___Data_1;
};
// Native definition for COM marshalling of Google.XR.ARCoreExtensions.TrackData
struct TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_com
{
	int64_t ___FrameTimestamp_0;
	Il2CppSafeArray/*NONE*/* ___Data_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.XR.ARSubsystems.XRCameraParams
struct XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 
{
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZNear
	float ___m_ZNear_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZFar
	float ___m_ZFar_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenWidth
	float ___m_ScreenWidth_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenHeight
	float ___m_ScreenHeight_3;
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenOrientation
	int32_t ___m_ScreenOrientation_4;
};

// Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi
struct ExternApi_t306B75119DCB037FC62A0D359E7ACE50698F4CBD 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t306B75119DCB037FC62A0D359E7ACE50698F4CBD__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.CameraConfigApi/ExternApi
struct ExternApi_t28F81FC1184941953EA5DA1DDAABB2E215441A59 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t28F81FC1184941953EA5DA1DDAABB2E215441A59__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi/ExternApi
struct ExternApi_t7B0E4DDC4AA9DC164268ADB294D270DBAE998A8C 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t7B0E4DDC4AA9DC164268ADB294D270DBAE998A8C__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi
struct ExternApi_t1BCEB7D36F686886B22BA3007485AA26EB888A59 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t1BCEB7D36F686886B22BA3007485AA26EB888A59__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi
struct ExternApi_tE4E404A57BDBA92C8918A8B07208056F78A32B28 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tE4E404A57BDBA92C8918A8B07208056F78A32B28__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.FrameApi/ExternApi
struct ExternApi_t4F0586BD06A4774928F79F4ACDF0C2E1737D16C9 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t4F0586BD06A4774928F79F4ACDF0C2E1737D16C9__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi
struct ExternApi_t18FAFBEF645F789F552DA3EDD9904DB363B26E2C 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t18FAFBEF645F789F552DA3EDD9904DB363B26E2C__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi
struct ExternApi_t34B2D0D9A8D7932D5448E2C32AD773B8B6BF867D 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_t34B2D0D9A8D7932D5448E2C32AD773B8B6BF867D__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi
struct ExternApi_tD86A33FB8C6104C81A085391AC6C79FE1596A796 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tD86A33FB8C6104C81A085391AC6C79FE1596A796__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.RecordingConfigApi/ExternApi
struct ExternApi_tA2E73CB97E672B68DBA992672F91757CE943B2C6 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tA2E73CB97E672B68DBA992672F91757CE943B2C6__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi
struct ExternApi_tDB9309FC648BC5010D1D14217A4DDCAF447D35F5 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tDB9309FC648BC5010D1D14217A4DDCAF447D35F5__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.TrackApi/ExternApi
struct ExternApi_tBCC331512FDB7156DE67EB32C03020D358479CDD 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tBCC331512FDB7156DE67EB32C03020D358479CDD__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.TrackDataApi/ExternApi
struct ExternApi_tE24204F5C3E6D7DA6274BCF05C94DB8099CEE437 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tE24204F5C3E6D7DA6274BCF05C94DB8099CEE437__padding[1];
	};
};

// Google.XR.ARCoreExtensions.Internal.TrackDataListApi/ExternApi
struct ExternApi_tB13CC4A26F27E8DD4C6A746B62A5A7D0ADC520F9 
{
	union
	{
		struct
		{
		};
		uint8_t ExternApi_tB13CC4A26F27E8DD4C6A746B62A5A7D0ADC520F9__padding[1];
	};
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute
struct DynamicHelpAttribute_t7D9FB92D3342CA44B7356C6F94244481F49249C1  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute::CheckingFunction
	String_t* ___CheckingFunction_0;
};

// Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute
struct EnumFlagsAttribute_t6D593B26A9415914EEC9DCD3445DEC81165A844C  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Type Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute::EnumType
	Type_t* ___EnumType_0;
};

// Google.XR.ARCoreExtensions.Internal.HelpAttribute
struct HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Google.XR.ARCoreExtensions.Internal.HelpAttribute::HelpMessage
	String_t* ___HelpMessage_0;
	// Google.XR.ARCoreExtensions.Internal.HelpAttribute/HelpMessageType Google.XR.ARCoreExtensions.Internal.HelpAttribute::MessageType
	int32_t ___MessageType_1;
};

// Google.XR.ARCoreExtensions.Internal.IOSSupportManager
struct IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A  : public RuntimeObject
{
	// System.Boolean Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_isEnabled
	bool ____isEnabled_2;
	// System.String Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_iosCloudServicesApiKey
	String_t* ____iosCloudServicesApiKey_3;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_cachedConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ____cachedConfig_4;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_sessionHandle
	intptr_t ____sessionHandle_5;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_frameHandle
	intptr_t ____frameHandle_6;
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_arKitSession
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ____arKitSession_7;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_cameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ____cameraManager_8;
};

struct IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields
{
	// Google.XR.ARCoreExtensions.Internal.IOSSupportManager Google.XR.ARCoreExtensions.Internal.IOSSupportManager::_instance
	IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* ____instance_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Google.XR.ARCoreExtensions.Track
struct Track_t33BB000657D179174087DA9A156530F0DF0B90DC 
{
	// System.Guid Google.XR.ARCoreExtensions.Track::Id
	Guid_t ___Id_0;
	// System.Byte[] Google.XR.ARCoreExtensions.Track::Metadata
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Metadata_1;
	// System.String Google.XR.ARCoreExtensions.Track::MimeType
	String_t* ___MimeType_2;
};
// Native definition for P/Invoke marshalling of Google.XR.ARCoreExtensions.Track
struct Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_pinvoke
{
	Guid_t ___Id_0;
	Il2CppSafeArray/*NONE*/* ___Metadata_1;
	char* ___MimeType_2;
};
// Native definition for COM marshalling of Google.XR.ARCoreExtensions.Track
struct Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_com
{
	Guid_t ___Id_0;
	Il2CppSafeArray/*NONE*/* ___Metadata_1;
	Il2CppChar* ___MimeType_2;
};

// Google.XR.ARCoreExtensions.Internal.Translators
struct Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE  : public RuntimeObject
{
};

struct Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields
{
	// UnityEngine.Matrix4x4 Google.XR.ARCoreExtensions.Internal.Translators::_unityWorldToGLWorld
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____unityWorldToGLWorld_0;
	// UnityEngine.Matrix4x4 Google.XR.ARCoreExtensions.Internal.Translators::_unityWorldToGLWorldInverse
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____unityWorldToGLWorldInverse_1;
	// UnityEngine.Quaternion Google.XR.ARCoreExtensions.Internal.Translators::_unityWorldToGLWorldRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____unityWorldToGLWorldRotation_2;
	// UnityEngine.Quaternion Google.XR.ARCoreExtensions.Internal.Translators::_glWorldToUnityWorldRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____glWorldToUnityWorldRotation_3;
};

// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 
{
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_NativeConfigurationHandle
	intptr_t ___m_NativeConfigurationHandle_2;
	// UnityEngine.XR.ARSubsystems.Supported UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_DepthSensorSupported
	int32_t ___m_DepthSensorSupported_3;
};

// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140  : public SubsystemWithProvider_3_tEC32E35ABA7D3B7D5B9459E6752E697305F3E1FB
{
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/AnchorNativePointerStruct
struct AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9 
{
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/AnchorNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/AnchorNativePointerStruct::AnchorHandle
	intptr_t ___AnchorHandle_1;
};

// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/FrameNativePointerStruct
struct FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA 
{
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/FrameNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/FrameNativePointerStruct::FrameHandle
	intptr_t ___FrameHandle_1;
};

// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/PlaneNativePointerStruct
struct PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5 
{
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/PlaneNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/PlaneNativePointerStruct::PlaneHandle
	intptr_t ___PlaneHandle_1;
};

// Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/SessionNativePointerStruct
struct SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD 
{
	// System.Int32 Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/SessionNativePointerStruct::Version
	int32_t ___Version_0;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions/SessionNativePointerStruct::SessionHandle
	intptr_t ___SessionHandle_1;
};

// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 
{
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager
struct AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
};

struct AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields
{
	// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_instance
	AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* ____instance_7;
	// System.Collections.Generic.List`1<System.String> Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_permissionNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____permissionNames_8;
	// System.Action`2<System.String,System.Boolean> Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_permissionRequest
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* ____permissionRequest_9;
	// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_activity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____activity_10;
	// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::_permissionService
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____permissionService_11;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.XR.ARSubsystems.Configuration
struct Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 
{
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRCameraFrame
struct XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 
{
	// System.Int64 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TimestampNs
	int64_t ___m_TimestampNs_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageBrightness
	float ___m_AverageBrightness_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageColorTemperature
	float ___m_AverageColorTemperature_2;
	// UnityEngine.Color UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ColorCorrection
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorCorrection_3;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ProjectionMatrix_4;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_DisplayMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_DisplayMatrix_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraFrame::m_NativePtr
	intptr_t ___m_NativePtr_7;
	// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties UnityEngine.XR.ARSubsystems.XRCameraFrame::m_Properties
	int32_t ___m_Properties_8;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageIntensityInLumens
	float ___m_AverageIntensityInLumens_9;
	// System.Double UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ExposureDuration
	double ___m_ExposureDuration_10;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ExposureOffset
	float ___m_ExposureOffset_11;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightIntensityLumens
	float ___m_MainLightIntensityLumens_12;
	// UnityEngine.Color UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_MainLightColor_13;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_MainLightDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MainLightDirection_14;
	// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AmbientSphericalHarmonics
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___m_AmbientSphericalHarmonics_15;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XRCameraFrame::m_CameraGrain
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_CameraGrain_16;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_NoiseIntensity
	float ___m_NoiseIntensity_17;
};

// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.Boolean>
struct Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A  : public MulticastDelegate_t
{
};

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>
struct Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___value_1;
};

// System.Predicate`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>
struct Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC 
{
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_pinvoke
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_com
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Google.XR.ARCoreExtensions.CameraConfigTargetFps Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::TargetCameraFramerate
	int32_t ___TargetCameraFramerate_4;
	// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::DepthSensorUsage
	int32_t ___DepthSensorUsage_5;
	// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::StereoCameraUsage
	int32_t ___StereoCameraUsage_6;
};

// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Google.XR.ARCoreExtensions.CloudAnchorMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CloudAnchorMode
	int32_t ___CloudAnchorMode_4;
	// Google.XR.ARCoreExtensions.GeospatialMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::GeospatialMode
	int32_t ___GeospatialMode_5;
};

// Google.XR.ARCoreExtensions.ARCoreRecordingConfig
struct ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Google.XR.ARCoreExtensions.ARCoreRecordingConfig::AutoStopOnPause
	bool ___AutoStopOnPause_4;
	// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track> Google.XR.ARCoreExtensions.ARCoreRecordingConfig::Tracks
	List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42* ___Tracks_5;
	// System.Uri Google.XR.ARCoreExtensions.ARCoreRecordingConfig::Mp4DatasetUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___Mp4DatasetUri_6;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Google.XR.ARCoreExtensions.Internal.RuntimeConfig
struct RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Google.XR.ARCoreExtensions.Internal.RuntimeConfig::IOSCloudServicesApiKey
	String_t* ___IOSCloudServicesApiKey_5;
	// System.Collections.Generic.List`1<System.String> Google.XR.ARCoreExtensions.Internal.RuntimeConfig::ModulesEnabled
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ModulesEnabled_6;
};

struct RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields
{
	// Google.XR.ARCoreExtensions.Internal.RuntimeConfig Google.XR.ARCoreExtensions.Internal.RuntimeConfig::Instance
	RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* ___Instance_4;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399  : public SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526
{
	// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::<currentConfiguration>k__BackingField
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___U3CcurrentConfigurationU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_DefaultConfigurationChooser_5;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_ConfigurationChooser_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	RuntimeObject* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// Google.XR.ARCoreExtensions.ARCloudAnchor
struct ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARCloudAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.ARCoreExtensions::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.ARCoreExtensions::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.ARCoreExtensions::CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___CameraManager_6;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::ARCoreExtensionsConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___ARCoreExtensionsConfig_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::CameraConfigFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___CameraConfigFilter_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent Google.XR.ARCoreExtensions.ARCoreExtensions::OnChooseXRCameraConfiguration
	OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* ___OnChooseXRCameraConfiguration_9;
};

struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields
{
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::<_instance>k__BackingField
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___U3C_instanceU3Ek__BackingField_10;
};

// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// Google.XR.ARCoreExtensions.ARPlaybackManager
struct ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.XR.ARCoreExtensions.ARRecordingManager
struct ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
};

struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// Google.XR.ARCoreExtensions.ARCloudReferencePoint
struct ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2  : public ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E
{
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA_gshared (List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42* __this, const RuntimeMethod* method) ;
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_gshared (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___arg10, bool ___arg21, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* List_1_FindAll_m87FB5AB35229967D01B9DF933BF70D470B32F0AF_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;

// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::get__instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline (const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.ARCoreExtensions::get_currentARCoreSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARFoundation.ARAnchor::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARAnchor_get_nativePtr_mBE82BAA63BB9C836B5AAECBC8B61F855B352196F (ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* __this, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::AnchorHandle(UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_AnchorHandle_mB44E99B6F08027D9ECF4356680436DC6DC5DADBF (ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___anchor0, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_m7252E775C394A594259E35D68E46F2353DA6D86F_inline (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Google.XR.ARCoreExtensions.ARCloudAnchor>()
inline ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::SetAnchorHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428_inline (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, intptr_t ___anchorHandle0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_mAD8574B4125D28BC990B2A4B9670E967C8D53EB1_inline (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t ___ttlDays2, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::SetAuthToken(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi_SetAuthToken_m870B737CD7E18DB9C3AC8D9741AA442BC2F7E02C (intptr_t ___sessionHandle0, String_t* ___authToken1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Google.XR.ARCoreExtensions.ARCloudReferencePoint>()
inline ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::ResolveCloudAnchor(System.IntPtr,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SessionApi_ResolveCloudAnchor_m3B3972F96B2BFA8161A54FC75EBAFA5672E55D8B_inline (intptr_t ___sessionHandle0, String_t* ___cloudAnchorId1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.FeatureMapQuality Google.XR.ARCoreExtensions.Internal.SessionApi::EstimateFeatureMapQualityForHosting(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_EstimateFeatureMapQualityForHosting_m2F38D06AA72F85C8876A8738F8F8AA78DE4B50BB (intptr_t ___sessionHandle0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::AcquireEarth(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SessionApi_AcquireEarth_mFA813CC8F28A9902A85E30F5EF67A5FFE754EA39_inline (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.EarthApi::AddAnchor(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t EarthApi_AddAnchor_m4A68B212EE3E400EFC1751E192ED271E4CE0D949_inline (intptr_t ___sessionHandle0, intptr_t ___earthHandle1, double ___latitude2, double ___longitude3, double ___altitude4, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation5, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Google.XR.ARCoreExtensions.ARGeospatialAnchor>()
inline ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.ARGeospatialAnchor::SetAnchorHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGeospatialAnchor_SetAnchorHandle_m7A00833D3785EB965C5FAC878B215AFD8AF1DD1D_inline (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, intptr_t ___anchorHandle0, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorId(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnchorApi_GetCloudAnchorId_m7A22E3AE874B8DB439747969D3EA31FD8E7ECDFC (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetCloudAnchorState_m2D08EEA9DEE423DD29BD91D54E8440B5ED751F17 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.Internal.Translators::ToCloudAnchorState(Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToCloudAnchorState_m38EFAEA4D09F9AC0C61706C3B09F4C950880561B (int32_t ___state0, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiTrackingState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetTrackingState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetTrackingState_m2799510F362CF558900966C48BF5C6EE834AD51C (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.Internal.Translators::ToTrackingState(Google.XR.ARCoreExtensions.Internal.ApiTrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToTrackingState_mFE007F0722633E9F4CBEBA85B24F56B368F8C222 (int32_t ___state0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.AnchorApi::GetAnchorPose(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 AnchorApi_GetAnchorPose_m1EBA7247174B63B25B99004033BBEA40ACE19258 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// UnityEngine.Pose Google.XR.ARCoreExtensions.Internal.Translators::ToUnityPose(Google.XR.ARCoreExtensions.Internal.ApiPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Translators_ToUnityPose_mED7D86C244B4224216E092FDB0AC9638310BB44A (ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 ___apiPose0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Detach_m5498C4126B9257B6BEDD1A29FCC6999B542D5D66 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Release_mCB91E8690A5A0D90C2692251141D42431B7323B8 (intptr_t ___anchorHandle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCloudAnchor_get_cloudAnchorId_m6FDB722F7EEE144D07B8B9D3AEFA91D2F76FA159 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_cloudAnchorState_mC6DCF3C4639DA8237A8DDAF3575E3F79B7344F57 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARCloudAnchor_get_trackableId_m94BAB72AA7B0F34A79E25221FCE4F7C4DE8CC391 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudAnchor::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARCloudAnchor_get_pose_mECFB9DA480A24A52F7CBB4867DCAB06A708B6C9E_inline (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_trackingState_m3BF7EBDAD9EB87B52EA8B8788EFA6E535A58875D (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_Update_m4F966223BCFBB91AE7E5A9ED25CD69D48D104E08 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor__ctor_mAFDC33D113DBD9DDEA8BB56C4523486501532EA9 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.IOSSupportManager Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* IOSSupportManager_get_Instance_m9EBEA0E17E0E9E80692685B9392D36BB02280A4C (const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_ARCoreSessionHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t IOSSupportManager_get_ARCoreSessionHandle_m67CADC8436E54993C15C8F6E59EF98A0C58A39E7_inline (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::set__instance(Google.XR.ARCoreExtensions.ARCoreExtensions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARCoreExtensions_set__instance_m79B718E5C94885E0E19C08E487AEBA71691EBFD4_inline (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___value0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::UpdateARSession(UnityEngine.XR.ARFoundation.ARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_UpdateARSession_m844B9FA1A479F18D5BE1729CB87DC3FD3DFB32E4 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___session0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::UpdateCameraManager(UnityEngine.XR.ARFoundation.ARCameraManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_UpdateCameraManager_m0CD95D7B0F82863DDD86F974DED3D70FECA46D62 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___cameraManager0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::SetEnabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IOSSupportManager_SetEnabled_m55B1AAE70525F1BE09B5F3022B60E4FF99C39C55_inline (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, bool ___enabled0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData_Reset_mCAEE7CD452F0E57EF970BE384EA3A23AA5BE2467 (const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ResetInstanceAndSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_ResetInstanceAndSession_m2F1CEC6981E7E758FD2F86C77E629B6E162D8FAD (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.HelpAttribute::.ctor(System.String,Google.XR.ARCoreExtensions.Internal.HelpAttribute/HelpMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5 (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* __this, String_t* ___helpMessage0, int32_t ___messageType1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m3FA03DBF8CFF6584BCD22BCFDD257AED8DEB5872 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Equality_mD7D7AAB7023C0873B37D8B8C7195BEF34002A194 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri10, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri21, const RuntimeMethod* method) ;
// System.Boolean System.Uri::get_IsFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsFile_m760E384ED177DC9197D5010B763F64196552DF5F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_AbsolutePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Track>::.ctor()
inline void List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA (List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42*, const RuntimeMethod*))List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA_gshared)(__this, method);
}
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.Internal.EarthApi::GetEarthState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EarthApi_GetEarthState_m6BC8C9672EEFE49C0DF6BA545A5B5BBBAC6D22C8 (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.Internal.EarthApi::GetEarthTrackingState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EarthApi_GetEarthTrackingState_m7B98827AB1AB75158CEFC85D4B6B873F5617240A (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi::TryGetCameraGeospatialPose(System.IntPtr,Google.XR.ARCoreExtensions.GeospatialPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthApi_TryGetCameraGeospatialPose_m3C7F8DCE4183C084F9EA6B321B9769BF6E377621 (intptr_t ___sessionHandle0, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* ___geospatialPose1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.Internal.SessionApi::IsGeospatialModeSupported(System.IntPtr,Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_IsGeospatialModeSupported_m72BA9E4AAAF1E469167F40296FE9B4997C052A5A (intptr_t ___sessionHandle0, int32_t ___mode1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetPlaybackStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetPlaybackStatus_mCDAD7875B2CA30489FB8ADE168642442708591E4 (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_subsystem()
inline XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline (SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5* __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* (*) (SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5*, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.SessionApi::SetPlaybackDataset(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_SetPlaybackDataset_m2DBDA7412481C663E5014DF9DDD13CD6D9862D7D (intptr_t ___sessionHandle0, String_t* ___datasetFilepath1, const RuntimeMethod* method) ;
// System.String System.Uri::get_AbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.SessionApi::SetPlaybackDatasetUri(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_SetPlaybackDatasetUri_mAED9FB5AB92AB49C209CE30DF4EA27032E0AF510 (intptr_t ___sessionHandle0, String_t* ___datasetUri1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData>::.ctor()
inline void List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51*, const RuntimeMethod*))List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_zNear(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zNear_m13DFECBAE558037DEBE998F3EFF2E1C6372EE6E0_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_zFar(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zFar_mA528373BCB66A9DE2A393512B883B932AB02D600_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_screenWidth(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenWidth_mA367A9BD005F2F052549E9B509F4D41F276CA021_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_screenHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenHeight_m7F6C7A3B7F3D7AEBE074A19FF20EF3DDACB79DE9_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraParams::set_screenOrientation(UnityEngine.ScreenOrientation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenOrientation_m9AA6D552ED0B67E9560CDF2C775FC27AA7A83A07_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, int32_t ___value0, const RuntimeMethod* method) ;
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>::get_subsystem()
inline XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_inline (SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B* __this, const RuntimeMethod* method)
{
	return ((  XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* (*) (SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B*, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::TryGetLatestFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystem_TryGetLatestFrame_m0C289061CF62517D75F72DF57CDAB1B1DCEF1B58 (XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* __this, XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 ___cameraParams0, XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531* ___frame1, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.XR.ARSubsystems.XRCameraFrame::get_timestampNs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t XRCameraFrame_get_timestampNs_m93571F53415C7DC6195854F3297E95D2E55A4DFB_inline (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraFrame::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraFrame_get_nativePtr_m4DED9CE0A7333F6A1E5C4932A6C98A8A0DD9E62D_inline (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531* __this, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::FrameHandle(UnityEngine.XR.ARSubsystems.XRCameraFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_FrameHandle_mD1DB4141E98081077FCB0431ECBDE99ACEB7B31B (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 ___frame0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData> Google.XR.ARCoreExtensions.Internal.FrameApi::GetUpdatedTrackData(System.IntPtr,System.IntPtr,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* FrameApi_GetUpdatedTrackData_m434EFF523E181A6BCB371753398C4623585F4752 (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, Guid_t ___trackId2, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetRecordingStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetRecordingStatus_mEEAC9CF8EE9646C013BF26C0A1F7B0067C4F540B (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StartRecording(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StartRecording_mA90651F44A778C2C8E9358AA6EE67A63B24AFE17 (intptr_t ___sessionHandle0, ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* ___config1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StopRecording(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StopRecording_mB277630DA1B16A36CC58CB942628C2BE6EC60F7F (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.FrameApi::RecordTrackData(System.IntPtr,System.IntPtr,System.Guid,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameApi_RecordTrackData_m76D9177D8231F5DEA2F8C7132F1A242EA7233BD5 (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, Guid_t ___trackId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data3, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::get_nativeConfigurationHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.CameraConfigFacingDirection Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFacingDirection(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetFacingDirection_m309700663346BA958898F583144B81FF6FB4B723 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_zero_mF92C338E9CB9434105090E675E04D20A29649553_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetTextureDimensions(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CameraConfigApi_GetTextureDimensions_m41544BA6861B516EF679F6493C9313E83BB63192 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFPSRange(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CameraConfigApi_GetFPSRange_m07794E7F1E4E08602418096D1A23C9D2177CEA46 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetDepthSensorUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetDepthSensorUsage_mDE1B64C2E2A3AC07E584840E85BBF44B4F405BFE (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetStereoCameraUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetStereoCameraUsage_m68F3D156F29FFC37E6953F613A33F921F29334C1 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Google.XR.ARCoreExtensions.Internal.FrameApi::TransformCoordinates2d(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCoordinates2dType,Google.XR.ARCoreExtensions.Internal.ApiCoordinates2dType,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FrameApi_TransformCoordinates2d_m1427719BDFE152912E4AC86E3D08DE7A0F6D7417 (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, int32_t ___inputType2, int32_t ___outputType3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvIn4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetPermissionsService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetPermissionsService_mD299203251A62204C633CB7E0FEB8429AEEEB083 (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetUnityActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetUnityActivity_mAB0B080B83CF4E2A694F3C4C7EBBBF9B53C65646 (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::IsPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidPermissionsManager_IsPermissionGranted_m3F51F714BF43773FD805E294F4603FACF2B4A47F (String_t* ___permissionName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Action`2<System.String,System.Boolean>::Invoke(T1,T2)
inline void Action_2_Invoke_m6EBB68A4E442B0057E106C998DA0B6F8BB077EF9_inline (Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* __this, String_t* ___arg10, bool ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A*, String_t*, bool, const RuntimeMethod*))Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* AndroidPermissionsManager_GetInstance_m174FD5803186DE4A45A0A669EE3F7E807C59A58E (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionResult(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionResult_mFEAE45FB0BF4B1525BDCF3AC3B44A44DFF1D0448 (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, String_t* ___permissionName0, bool ___granted1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager__ctor_m82E71A4B12DD734C97114EAF40EFF5DC3DFA645F (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARFoundation.ARPlane::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARPlane_get_nativePtr_m0227A663EF6E1CC15D6A5BE2BF3D5EC21BCFFA25 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
inline void Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m75BB524F68EF97B74686AE0DDF5F9883F5C2FA1C (U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>::.ctor()
inline void List_1__ctor_mE24EB3C85EDB11272ACA422006A17D2B288E786B (List_1_t54955D954398D6C34C95F0A09188E388BD45008A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t54955D954398D6C34C95F0A09188E388BD45008A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.LocationModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationModule__ctor_m135935A0B75FEFD5BC77E83B634934915D2CC7FD (LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>::Add(T)
inline void List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_inline (List_1_t54955D954398D6C34C95F0A09188E388BD45008A* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t54955D954398D6C34C95F0A09188E388BD45008A*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.AuthenticationModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModule__ctor_mF8151687B9E8A468C81CB9778C7FDDCB53FA5DC7 (AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m4878EA8D197763D9264830236A4E73BC9BB22916 (Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule>::FindAll(System.Predicate`1<T>)
inline List_1_t54955D954398D6C34C95F0A09188E388BD45008A* List_1_FindAll_m2E02969CD611EA3C239606E970D1A305F98D2E11 (List_1_t54955D954398D6C34C95F0A09188E388BD45008A* __this, Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F* ___match0, const RuntimeMethod* method)
{
	return ((  List_1_t54955D954398D6C34C95F0A09188E388BD45008A* (*) (List_1_t54955D954398D6C34C95F0A09188E388BD45008A*, Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F*, const RuntimeMethod*))List_1_FindAll_m87FB5AB35229967D01B9DF933BF70D470B32F0AF_gshared)(__this, ___match0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.DependentModuleBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependentModuleBase__ctor_mBC3C199A26A24884133B0388DAC634E7D88A1058 (DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310* __this, const RuntimeMethod* method) ;
// System.Boolean Google.XR.ARCoreExtensions.Internal.LocationModule::UseLocation(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationModule_UseLocation_mB961F6E70EAF22368496BBC1128FD9DF57BE4C3E (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___sessionConfig0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.JarArtifact::.ctor(System.String,System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JarArtifact__ctor_m664D9BA283DF6FD08EE71B45E711A114873BA65E (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___packages3, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.JarArtifact::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JarArtifact__ctor_mE9787B9E9346F063FE56235D4EFF2D5D0BD15B5E (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JarArtifact_get_Key_m86A1E2711CA7442FBFDBB6C0C90144149D63BE93 (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JarArtifact_ToString_m0F084C2B0972CAE0B16888FA12900CC834AFB184 (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager__ctor_m5F9060770B2F4936349E37FA3A27ECAA4BCF8281 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::CreateARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_CreateARCoreSession_m5F7A18E2DA33EA4EA68FDBCAA5A3F83EC7574752 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ResetARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_ResetARCoreSession_mEED51FA0A1FA15BE50DD5A14A0FEAB9C3B819C21 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.FrameApi::ReleaseFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameApi_ReleaseFrame_mBD586EA487F9AFF025004CF0B5ABE1AEAAB7D062 (intptr_t ___frameHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_destroy_m79588E91F398D1916FFB8E5CD5F33E2541036931 (intptr_t ___session0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_create(System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_create_mE5E5BFD542B1873F6D3D3BE754B0242EB3BB4694 (String_t* ___apiKey0, String_t* ___bundleIdentifier1, intptr_t* ___sessionHandle2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_updateAndAcquireArFrame(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_updateAndAcquireArFrame_m4EAA4F9B1F502DDFA36528653BEDBB43E5EAA1CD (intptr_t ___sessionHandle0, intptr_t ___arkitFrameHandle1, intptr_t* ___arFrame2, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<Google.XR.ARCoreExtensions.ARCoreExtensionsConfig>()
inline ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_m4A245DFB34D4441FAB40F919D346300387FDD414 (const RuntimeMethod* method)
{
	return ((  ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CopyFrom(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig_CopyFrom_m5A59CD27FC92FC881121EA7203CFEB0A90C0FCBA (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___otherConfig0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi::ConfigureSession(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigApi_ConfigureSession_mA9BBBE680C620E309D4AB5F5281965AD57761E18 (intptr_t ___sessionHandle0, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___config1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Internal.ApiPose::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiPose_ToString_m9EC12CEE22B649689E2C35251229B9999DC75352 (ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* __this, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Internal.ApiQuaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiQuaternion_ToString_mE54526AC4A7CB69539421B9405D5AADA45908B8A (ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* __this, const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_mBFA5AA3E7D32C04685330EF8799B2989689F5DC1 (intptr_t ___sessionHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getPose(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getPose_m39CBC6572494928C2B9BBB391008C049A792C75E (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t ___pose2, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.PoseApi::ExtractPoseValue(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 PoseApi_ExtractPoseValue_mF6C2B7C10A8219C5E5C7B4F1C3401BF491BF8B67 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseApi_Destroy_m94D782D941548CE9B1B11A4A3AB29F4222B19274 (intptr_t ___poseHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getTrackingState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getTrackingState_mA679D120F552B4B19208D7840AC9D83B0400ECDC (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___trackingState2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_detach_m7EB5DAB66D28A0DE19B57194BBF3092D0860546C (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_release_m2AE335E89DDEAA2FDA9AE66EA2C1BEF37B4CEDC2 (intptr_t ___anchorHandle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_create(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_create_m6DBE2F7C8CCE79D7E393FAEBC90463EBC154FEB2 (intptr_t ___sessionHandle0, intptr_t* ___configHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi::UpdateSessionConfig(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigApi_UpdateSessionConfig_m4E822D0FD8CCE121837E04A14B703947A3E63C49 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___config2, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArSession_configure(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_configure_m5040EF7675981DD5804B09308E482D98C161C509 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_destroy_m90766C435AE9247F543A80B9FD224CAE4352FEDF (intptr_t ___configHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.FrameApi/ExternApi::ArFrame_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArFrame_release_m5F8A666137E6380228BFECB5F8B461F3B966751E (intptr_t ___frameHandle0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingResult_mD3B3E3139047EDF78838E1117606F0FBB09DCDDE (int32_t ___apiArStatus0, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_mA457D5C309445046182ACE8F3E0596C975A472C0 (intptr_t ___sessionHandle0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.Translators::ToApiPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 Translators_ToApiPose_mAEDF4015BD35F51F6975ADB221313EA4E7FF2E94 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___unityPose0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_create(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_create_mCF48C1AA5796C20E620A209C70049767B8AC2515 (intptr_t ___sessionHandle0, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* ___apiPose1, intptr_t* ___poseHandle2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_destroy_m5207ED5D6821FBA6A45C31C4E83BCC5761DD8B29 (intptr_t ___poseHandle0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_getPoseRaw(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_getPoseRaw_m6A6972C620578ABB7DD963B9566CC342E5C286B0 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* ___apiPose2, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_setAuthToken(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_setAuthToken_mFBC804DD6054A421B067EA62CB5EFE2CD229CF8F (intptr_t ___sessionHandle0, String_t* ___authToken1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingStatus(Google.XR.ARCoreExtensions.Internal.ApiRecordingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingStatus_mD30D1A42E4D8F8E0692964254B3C54CB33ADC91C (int32_t ___apiStatus0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackStatus(Google.XR.ARCoreExtensions.Internal.ApiPlaybackStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackStatus_mD878E75B15221C139DBF210C35AA5A87093A7456 (int32_t ___apiStatus0, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackResult_mF0141086E69ED5D59F1E0280A93CC86ED8E5C2AD (int32_t ___apiArStatus0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_create(char*, char*, intptr_t*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_updateAndAcquireArFrame(intptr_t, intptr_t, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArSession_destroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArString_release(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_getPose(intptr_t, intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_getTrackingState(intptr_t, intptr_t, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_detach(intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArAnchor_release(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArConfig_create(intptr_t, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArConfig_destroy(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ArSession_configure(intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArFrame_release(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArPose_create(intptr_t, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99*, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArPose_destroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL ArPose_getPoseRaw(intptr_t, intptr_t, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99*);
IL2CPP_EXTERN_C void DEFAULT_CALL ArSession_setAuthToken(intptr_t, char*);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.ARCloudAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::HostCloudAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* ARAnchorManagerExtensions_HostCloudAnchor_mF0BCB1C7FF09CA44793A81E65419DEDAC7151F40 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___anchor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* V_1 = NULL;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     anchor == null || anchor.nativePtr == IntPtr.Zero ||
		//     anchor.AnchorHandle() == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_4 = ___anchor1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0043;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_6 = ___anchor1;
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARAnchor_get_nativePtr_mBE82BAA63BB9C836B5AAECBC8B61F855B352196F(L_6, NULL);
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_9;
		L_9 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_0043;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_10 = ___anchor1;
		intptr_t L_11;
		L_11 = ARCoreHandleExtensions_AnchorHandle_mB44E99B6F08027D9ECF4356680436DC6DC5DADBF(L_10, NULL);
		intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_13;
		L_13 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		// return null;
		return (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
	}

IL_0045:
	{
		// IntPtr cloudAnchorHandle = SessionApi.HostCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     anchor.AnchorHandle());
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_14;
		L_14 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_14);
		intptr_t L_15;
		L_15 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_14, NULL);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_16 = ___anchor1;
		intptr_t L_17;
		L_17 = ARCoreHandleExtensions_AnchorHandle_mB44E99B6F08027D9ECF4356680436DC6DC5DADBF(L_16, NULL);
		intptr_t L_18;
		L_18 = SessionApi_HostCloudAnchor_m7252E775C394A594259E35D68E46F2353DA6D86F_inline(L_15, L_17, NULL);
		V_0 = L_18;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_19 = V_0;
		intptr_t L_20 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_21;
		L_21 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_006a;
		}
	}
	{
		// return null;
		return (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
	}

IL_006a:
	{
		// ARCloudAnchor cloudAnchor =
		//     (new GameObject(_cloudAnchorName)).AddComponent<ARCloudAnchor>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_22 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_23, L_22, NULL);
		NullCheck(L_23);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_24;
		L_24 = GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9(L_23, GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		V_1 = L_24;
		// if (cloudAnchor)
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_25 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_25, NULL);
		if (!L_26)
		{
			goto IL_0089;
		}
	}
	{
		// cloudAnchor.SetAnchorHandle(cloudAnchorHandle);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_27 = V_1;
		intptr_t L_28 = V_0;
		NullCheck(L_27);
		ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428_inline(L_27, L_28, NULL);
	}

IL_0089:
	{
		// cloudAnchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_29 = V_1;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_31;
		L_31 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_31);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_32 = L_31->___SessionOrigin_5;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_32, NULL);
		NullCheck(L_30);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_30, L_33, (bool)0, NULL);
		// return cloudAnchor;
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_34 = V_1;
		return L_34;
	}
}
// Google.XR.ARCoreExtensions.ARCloudAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::HostCloudAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.XR.ARFoundation.ARAnchor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* ARAnchorManagerExtensions_HostCloudAnchor_m5FA64181A9588BAFC61659000D8D0E90A4AA4C20 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___anchor1, int32_t ___ttlDays2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C831849415D472ACDAD3625736030C927879A25);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* V_1 = NULL;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     anchor == null || anchor.nativePtr == IntPtr.Zero ||
		//     anchor.AnchorHandle() == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_4 = ___anchor1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0043;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_6 = ___anchor1;
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARAnchor_get_nativePtr_mBE82BAA63BB9C836B5AAECBC8B61F855B352196F(L_6, NULL);
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_9;
		L_9 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_0043;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_10 = ___anchor1;
		intptr_t L_11;
		L_11 = ARCoreHandleExtensions_AnchorHandle_mB44E99B6F08027D9ECF4356680436DC6DC5DADBF(L_10, NULL);
		intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_13;
		L_13 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		// return null;
		return (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
	}

IL_0045:
	{
		// if (ttlDays <= 0 || ttlDays > 365)
		int32_t L_14 = ___ttlDays2;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_15 = ___ttlDays2;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)365))))
		{
			goto IL_006c;
		}
	}

IL_0051:
	{
		// Debug.LogErrorFormat("Failed to host a Cloud Anchor with invalid TTL {0}. " +
		//     "The lifetime of the anchor in days must be positive, " +
		//     "the maximum allowed value is 1 when using an API Key to authenticate with " +
		//     "the ARCore Cloud Anchor service, otherwise the maximum allowed value is 365.",
		//     ttlDays);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		int32_t L_18 = ___ttlDays2;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral5C831849415D472ACDAD3625736030C927879A25, L_17, NULL);
		// return null;
		return (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
	}

IL_006c:
	{
		// IntPtr cloudAnchorHandle = SessionApi.HostCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     anchor.AnchorHandle(), ttlDays);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_21;
		L_21 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_21);
		intptr_t L_22;
		L_22 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_21, NULL);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_23 = ___anchor1;
		intptr_t L_24;
		L_24 = ARCoreHandleExtensions_AnchorHandle_mB44E99B6F08027D9ECF4356680436DC6DC5DADBF(L_23, NULL);
		int32_t L_25 = ___ttlDays2;
		intptr_t L_26;
		L_26 = SessionApi_HostCloudAnchor_mAD8574B4125D28BC990B2A4B9670E967C8D53EB1_inline(L_22, L_24, L_25, NULL);
		V_0 = L_26;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_27 = V_0;
		intptr_t L_28 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_29;
		L_29 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_0092;
		}
	}
	{
		// return null;
		return (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
	}

IL_0092:
	{
		// ARCloudAnchor cloudAnchor =
		//     new GameObject(_cloudAnchorName).AddComponent<ARCloudAnchor>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_30 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_31, L_30, NULL);
		NullCheck(L_31);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_32;
		L_32 = GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9(L_31, GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		V_1 = L_32;
		// if (cloudAnchor)
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		if (!L_34)
		{
			goto IL_00b1;
		}
	}
	{
		// cloudAnchor.SetAnchorHandle(cloudAnchorHandle);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_35 = V_1;
		intptr_t L_36 = V_0;
		NullCheck(L_35);
		ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428_inline(L_35, L_36, NULL);
	}

IL_00b1:
	{
		// cloudAnchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_37 = V_1;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_39;
		L_39 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_39);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_40 = L_39->___SessionOrigin_5;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_40, NULL);
		NullCheck(L_38);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_38, L_41, (bool)0, NULL);
		// return cloudAnchor;
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_42 = V_1;
		return L_42;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::SetAuthToken(UnityEngine.XR.ARFoundation.ARAnchorManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARAnchorManagerExtensions_SetAuthToken_m65EB99D69CEB587279B3C79EC9C954851C9254D8 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, String_t* ___authToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A8D649E5D82BC94046D4614BEB89162A2C9A75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E9A55BD5677C2B3434A29B3959A7ADB01DC2679);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// if (!string.IsNullOrEmpty(RuntimeConfig.Instance.IOSCloudServicesApiKey))
		RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* L_4 = ((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_4);
		String_t* L_5 = L_4->___IOSCloudServicesApiKey_5;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.LogError(
		//     "Cannot set token in applications built using the 'API Key' " +
		//     "authentication strategy. To use it, check Edit > Project Settings " +
		//     "> XR Plug-in Management > ARCore Extensions > iOS Support Enabled and " +
		//     "set iOS Authentication Strategy to Authentication Token.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral64A8D649E5D82BC94046D4614BEB89162A2C9A75, NULL);
		// return;
		return;
	}

IL_0033:
	{
		// if (string.IsNullOrEmpty(authToken))
		String_t* L_7 = ___authToken1;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// Debug.LogError("Cannot set empty token in applications.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral7E9A55BD5677C2B3434A29B3959A7ADB01DC2679, NULL);
		// return;
		return;
	}

IL_0046:
	{
		// SessionApi.SetAuthToken(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, authToken);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_9;
		L_9 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_9);
		intptr_t L_10;
		L_10 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_9, NULL);
		String_t* L_11 = ___authToken1;
		SessionApi_SetAuthToken_m870B737CD7E18DB9C3AC8D9741AA442BC2F7E02C(L_10, L_11, NULL);
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.ARCloudReferencePoint Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddCloudReferencePoint(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* ARAnchorManagerExtensions_AddCloudReferencePoint_mA2705EA6514B82E572D3A296AA060B03139ED446 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___referencePointManager0, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___referencePoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* V_1 = NULL;
	{
		// IntPtr cloudAnchorHandle = SessionApi.HostCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     referencePoint.AnchorHandle());
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2 = ___referencePoint1;
		intptr_t L_3;
		L_3 = ARCoreHandleExtensions_AnchorHandle_mB44E99B6F08027D9ECF4356680436DC6DC5DADBF(L_2, NULL);
		intptr_t L_4;
		L_4 = SessionApi_HostCloudAnchor_m7252E775C394A594259E35D68E46F2353DA6D86F_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_5 = V_0;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_7;
		L_7 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0025;
		}
	}
	{
		// return null;
		return (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2*)NULL;
	}

IL_0025:
	{
		// ARCloudReferencePoint cloudReferencePoint =
		//     (new GameObject(_cloudAnchorName)).AddComponent<ARCloudReferencePoint>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_8 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_9, L_8, NULL);
		NullCheck(L_9);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_10;
		L_10 = GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA(L_9, GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA_RuntimeMethod_var);
		V_1 = L_10;
		// if (cloudReferencePoint)
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_0044;
		}
	}
	{
		// cloudReferencePoint.SetAnchorHandle(cloudAnchorHandle);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_13 = V_1;
		intptr_t L_14 = V_0;
		NullCheck(L_13);
		ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428_inline(L_13, L_14, NULL);
	}

IL_0044:
	{
		// cloudReferencePoint.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_15 = V_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_17;
		L_17 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_17);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_18 = L_17->___SessionOrigin_5;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_18, NULL);
		NullCheck(L_16);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_16, L_19, (bool)0, NULL);
		// return cloudReferencePoint;
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_20 = V_1;
		return L_20;
	}
}
// Google.XR.ARCoreExtensions.ARCloudAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::ResolveCloudAnchorId(UnityEngine.XR.ARFoundation.ARAnchorManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* ARAnchorManagerExtensions_ResolveCloudAnchorId_mAF9133E27CD4092AE58D2A5889C4D4F186F591F0 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, String_t* ___cloudAnchorId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* V_1 = NULL;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     string.IsNullOrEmpty(cloudAnchorId))
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_4 = ___cloudAnchorId1;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		// return null;
		return (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
	}

IL_0020:
	{
		// IntPtr cloudAnchorHandle = SessionApi.ResolveCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cloudAnchorId);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_6;
		L_6 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_6, NULL);
		String_t* L_8 = ___cloudAnchorId1;
		intptr_t L_9;
		L_9 = SessionApi_ResolveCloudAnchor_m3B3972F96B2BFA8161A54FC75EBAFA5672E55D8B_inline(L_7, L_8, NULL);
		V_0 = L_9;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_10 = V_0;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_12;
		L_12 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		// return null;
		return (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E*)NULL;
	}

IL_0040:
	{
		// ARCloudAnchor cloudAnchor =
		//     (new GameObject(_cloudAnchorName)).AddComponent<ARCloudAnchor>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_13 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_14, L_13, NULL);
		NullCheck(L_14);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_15;
		L_15 = GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9(L_14, GameObject_AddComponent_TisARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E_mF7EFF39E1BDCF55EEBDB7A8A56BBFDD35EDD1AC9_RuntimeMethod_var);
		V_1 = L_15;
		// if (cloudAnchor)
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_16, NULL);
		if (!L_17)
		{
			goto IL_005f;
		}
	}
	{
		// cloudAnchor.SetAnchorHandle(cloudAnchorHandle);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_18 = V_1;
		intptr_t L_19 = V_0;
		NullCheck(L_18);
		ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428_inline(L_18, L_19, NULL);
	}

IL_005f:
	{
		// cloudAnchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_20 = V_1;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_22;
		L_22 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_22);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_23 = L_22->___SessionOrigin_5;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_23, NULL);
		NullCheck(L_21);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_21, L_24, (bool)0, NULL);
		// return cloudAnchor;
		ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* L_25 = V_1;
		return L_25;
	}
}
// Google.XR.ARCoreExtensions.ARCloudReferencePoint Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::ResolveCloudReferenceId(UnityEngine.XR.ARFoundation.ARAnchorManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* ARAnchorManagerExtensions_ResolveCloudReferenceId_m8DF0BA0D24CBC8916939F85EBFF8A141C1C00D7C (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___referencePointManager0, String_t* ___cloudReferenceId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* V_1 = NULL;
	{
		// IntPtr cloudAnchorHandle = SessionApi.ResolveCloudAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cloudReferenceId);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		String_t* L_2 = ___cloudReferenceId1;
		intptr_t L_3;
		L_3 = SessionApi_ResolveCloudAnchor_m3B3972F96B2BFA8161A54FC75EBAFA5672E55D8B_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// if (cloudAnchorHandle == IntPtr.Zero)
		intptr_t L_4 = V_0;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		// return null;
		return (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2*)NULL;
	}

IL_0020:
	{
		// ARCloudReferencePoint cloudReferencePoint =
		//     (new GameObject(_cloudAnchorName)).AddComponent<ARCloudReferencePoint>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_7 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_8, L_7, NULL);
		NullCheck(L_8);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_9;
		L_9 = GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA(L_8, GameObject_AddComponent_TisARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2_mC45DF17AC195D44D634A37B52E8FBB58F009FFEA_RuntimeMethod_var);
		V_1 = L_9;
		// if (cloudReferencePoint)
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		// cloudReferencePoint.SetAnchorHandle(cloudAnchorHandle);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_12 = V_1;
		intptr_t L_13 = V_0;
		NullCheck(L_12);
		ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428_inline(L_12, L_13, NULL);
	}

IL_003f:
	{
		// cloudReferencePoint.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_14 = V_1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_16;
		L_16 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_16);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_17 = L_16->___SessionOrigin_5;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_17, NULL);
		NullCheck(L_15);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_15, L_18, (bool)0, NULL);
		// return cloudReferencePoint;
		ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* L_19 = V_1;
		return L_19;
	}
}
// Google.XR.ARCoreExtensions.FeatureMapQuality Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::EstimateFeatureMapQualityForHosting(UnityEngine.XR.ARFoundation.ARAnchorManager,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARAnchorManagerExtensions_EstimateFeatureMapQualityForHosting_mBF4C02CDCDE546B5F1FC60EB3F5B192B6EC464D8 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return FeatureMapQuality.Insufficient;
		return (int32_t)(0);
	}

IL_0018:
	{
		// return SessionApi.EstimateFeatureMapQualityForHosting(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, pose);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = ___pose1;
		int32_t L_7;
		L_7 = SessionApi_EstimateFeatureMapQualityForHosting_m2F38D06AA72F85C8876A8738F8F8AA78DE4B50BB(L_5, L_6, NULL);
		return L_7;
	}
}
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F5D367D5442F75EC3D557B5C723227E469C539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB856C54E196101464C3ED9F7883597180C9FC255);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_2 = NULL;
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return null;
		return (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL;
	}

IL_0018:
	{
		// IntPtr earthHandle = SessionApi.AcquireEarth(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		intptr_t L_6;
		L_6 = SessionApi_AcquireEarth_mFA813CC8F28A9902A85E30F5EF67A5FFE754EA39_inline(L_5, NULL);
		V_0 = L_6;
		// if (earthHandle == IntPtr.Zero)
		intptr_t L_7 = V_0;
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_9;
		L_9 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		// Debug.LogError("Failed to acquire earth.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB856C54E196101464C3ED9F7883597180C9FC255, NULL);
		// return null;
		return (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL;
	}

IL_0041:
	{
		// IntPtr anchorHandle = EarthApi.AddAnchor(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     earthHandle, latitude, longitude, altitude, eunRotation);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_10;
		L_10 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_10);
		intptr_t L_11;
		L_11 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_10, NULL);
		intptr_t L_12 = V_0;
		double L_13 = ___latitude1;
		double L_14 = ___longitude2;
		double L_15 = ___altitude3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___eunRotation4;
		intptr_t L_17;
		L_17 = EarthApi_AddAnchor_m4A68B212EE3E400EFC1751E192ED271E4CE0D949_inline(L_11, L_12, L_13, L_14, L_15, L_16, NULL);
		V_1 = L_17;
		// if (anchorHandle == IntPtr.Zero)
		intptr_t L_18 = V_1;
		intptr_t L_19 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_20;
		L_20 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_0070;
		}
	}
	{
		// Debug.LogError("Failed to add geospatial anchor.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral11F5D367D5442F75EC3D557B5C723227E469C539, NULL);
		// return null;
		return (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571*)NULL;
	}

IL_0070:
	{
		// ARGeospatialAnchor anchor =
		//     new GameObject(_geospatialAnchorName).AddComponent<ARGeospatialAnchor>();
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		String_t* L_21 = ((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____geospatialAnchorName_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_22, L_21, NULL);
		NullCheck(L_22);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_23;
		L_23 = GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C(L_22, GameObject_AddComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m2134D011CD19962D87C35F311EB7EE6121AC1D6C_RuntimeMethod_var);
		V_2 = L_23;
		// if (anchor)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_24 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_24, NULL);
		if (!L_25)
		{
			goto IL_008f;
		}
	}
	{
		// anchor.SetAnchorHandle(anchorHandle);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_26 = V_2;
		intptr_t L_27 = V_1;
		NullCheck(L_26);
		ARGeospatialAnchor_SetAnchorHandle_m7A00833D3785EB965C5FAC878B215AFD8AF1DD1D_inline(L_26, L_27, NULL);
	}

IL_008f:
	{
		// anchor.transform.SetParent(
		//     ARCoreExtensions._instance.SessionOrigin.trackablesParent, false);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_28 = V_2;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_30;
		L_30 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_30);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_31 = L_30->___SessionOrigin_5;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_31, NULL);
		NullCheck(L_29);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_29, L_32, (bool)0, NULL);
		// return anchor;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_33 = V_2;
		return L_33;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARAnchorManagerExtensions__cctor_mB233AACCE9740A3D197ACD8D1F1FBFF8E7E723E4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7375F56C4C2FFEEE70F781C2A409295F6DDE79DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC60447D061F1F50D0498C07584BD7B0199D414);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string _cloudAnchorName = "ARCloudAnchor";
		((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0 = _stringLiteralCDC60447D061F1F50D0498C07584BD7B0199D414;
		Il2CppCodeGenWriteBarrier((void**)(&((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____cloudAnchorName_0), (void*)_stringLiteralCDC60447D061F1F50D0498C07584BD7B0199D414);
		// private static readonly string _geospatialAnchorName = "ARGeospatialAnchor";
		((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____geospatialAnchorName_1 = _stringLiteral7375F56C4C2FFEEE70F781C2A409295F6DDE79DE;
		Il2CppCodeGenWriteBarrier((void**)(&((ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_StaticFields*)il2cpp_codegen_static_fields_for(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var))->____geospatialAnchorName_1), (void*)_stringLiteral7375F56C4C2FFEEE70F781C2A409295F6DDE79DE);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCloudAnchor_get_cloudAnchorId_m6FDB722F7EEE144D07B8B9D3AEFA91D2F76FA159 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_4 = __this->____anchorHandle_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
		// return null;
		return (String_t*)NULL;
	}

IL_002a:
	{
		// return AnchorApi.GetCloudAnchorId(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9 = __this->____anchorHandle_4;
		String_t* L_10;
		L_10 = AnchorApi_GetCloudAnchorId_m7A22E3AE874B8DB439747969D3EA31FD8E7ECDFC(L_8, L_9, NULL);
		return L_10;
	}
}
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.ARCloudAnchor::get_cloudAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_cloudAnchorState_mC6DCF3C4639DA8237A8DDAF3575E3F79B7344F57 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_4 = __this->____anchorHandle_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
		// return CloudAnchorState.None;
		return (int32_t)(0);
	}

IL_002a:
	{
		// return AnchorApi.GetCloudAnchorState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle).ToCloudAnchorState();
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9 = __this->____anchorHandle_4;
		int32_t L_10;
		L_10 = AnchorApi_GetCloudAnchorState_m2D08EEA9DEE423DD29BD91D54E8440B5ED751F17(L_8, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Translators_ToCloudAnchorState_m38EFAEA4D09F9AC0C61706C3B09F4C950880561B(L_10, NULL);
		return L_11;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARCloudAnchor_get_trackableId_m94BAB72AA7B0F34A79E25221FCE4F7C4DE8CC391 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	{
		// return new TrackableId(0, (ulong)_anchorHandle);
		intptr_t L_0 = __this->____anchorHandle_4;
		int64_t L_1;
		L_1 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_0, NULL);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5((&L_2), ((int64_t)0), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudAnchor::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARCloudAnchor_get_pose_mECFB9DA480A24A52F7CBB4867DCAB06A708B6C9E (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	{
		// return _pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____pose_5;
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.ARCloudAnchor::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudAnchor_get_trackingState_m3BF7EBDAD9EB87B52EA8B8788EFA6E535A58875D (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_4 = __this->____anchorHandle_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
		// return TrackingState.None;
		return (int32_t)(0);
	}

IL_002a:
	{
		// return AnchorApi.GetTrackingState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle).ToTrackingState();
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9 = __this->____anchorHandle_4;
		int32_t L_10;
		L_10 = AnchorApi_GetTrackingState_m2799510F362CF558900966C48BF5C6EE834AD51C(L_8, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Translators_ToTrackingState_mFE007F0722633E9F4CBEBA85B24F56B368F8C222(L_10, NULL);
		return L_11;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.ARCloudAnchor::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCloudAnchor_get_nativePtr_m3C263EC961BB8258ADDFD9B6C78BE7C066FAA3F5 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	{
		// return _anchorHandle;
		intptr_t L_0 = __this->____anchorHandle_4;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_Update_m4F966223BCFBB91AE7E5A9ED25CD69D48D104E08 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_4 = __this->____anchorHandle_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0029;
		}
	}

IL_0028:
	{
		// return;
		return;
	}

IL_0029:
	{
		// ApiPose apiPose = AnchorApi.GetAnchorPose(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9 = __this->____anchorHandle_4;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_10;
		L_10 = AnchorApi_GetAnchorPose_m1EBA7247174B63B25B99004033BBEA40ACE19258(L_8, L_9, NULL);
		V_0 = L_10;
		// _pose = apiPose.ToUnityPose();
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		L_12 = Translators_ToUnityPose_mED7D86C244B4224216E092FDB0AC9638310BB44A(L_11, NULL);
		__this->____pose_5 = L_12;
		// transform.localPosition = _pose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_14 = (&__this->____pose_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___position_0;
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_15, NULL);
		// transform.localRotation = _pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = (&__this->____pose_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17->___rotation_1;
		NullCheck(L_16);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_18, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_OnDestroy_mADCFC5DF57AFBB9261CEB409D0287D52952A27AC (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle != IntPtr.Zero &&
		//     _anchorHandle != IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		intptr_t L_4 = __this->____anchorHandle_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		// AnchorApi.Detach(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9 = __this->____anchorHandle_4;
		AnchorApi_Detach_m5498C4126B9257B6BEDD1A29FCC6999B542D5D66(L_8, L_9, NULL);
		// AnchorApi.Release(_anchorHandle);
		intptr_t L_10 = __this->____anchorHandle_4;
		AnchorApi_Release_mCB91E8690A5A0D90C2692251141D42431B7323B8(L_10, NULL);
		// _anchorHandle = IntPtr.Zero;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____anchorHandle_4 = L_11;
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::SetAnchorHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, intptr_t ___anchorHandle0, const RuntimeMethod* method) 
{
	{
		// _anchorHandle = anchorHandle;
		intptr_t L_0 = ___anchorHandle0;
		__this->____anchorHandle_4 = L_0;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudAnchor__ctor_mAFDC33D113DBD9DDEA8BB56C4523486501532EA9 (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_cloudReferenceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCloudReferencePoint_get_cloudReferenceId_mE2956D89B766D3CD82E461ABDCA89C1ADE82378C (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	{
		// return cloudAnchorId;
		String_t* L_0;
		L_0 = ARCloudAnchor_get_cloudAnchorId_m6FDB722F7EEE144D07B8B9D3AEFA91D2F76FA159(__this, NULL);
		return L_0;
	}
}
// Google.XR.ARCoreExtensions.CloudReferenceState Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_cloudReferenceState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudReferencePoint_get_cloudReferenceState_m20FCDA23E2EC687F47A2DA9FCD2667302E54AA88 (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	{
		// return (CloudReferenceState)cloudAnchorState;
		int32_t L_0;
		L_0 = ARCloudAnchor_get_cloudAnchorState_mC6DCF3C4639DA8237A8DDAF3575E3F79B7344F57(__this, NULL);
		return (int32_t)(L_0);
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARCloudReferencePoint_get_trackableId_m356D424603D31C1C250939E18D35B8E47B5BC78A (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	{
		// return base.trackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0;
		L_0 = ARCloudAnchor_get_trackableId_m94BAB72AA7B0F34A79E25221FCE4F7C4DE8CC391(__this, NULL);
		return L_0;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARCloudReferencePoint_get_pose_m3802DA62177FA51202593C32AF8B5338EB47D18D (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	{
		// return base.pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = ARCloudAnchor_get_pose_mECFB9DA480A24A52F7CBB4867DCAB06A708B6C9E_inline(__this, NULL);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.ARCloudReferencePoint::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCloudReferencePoint_get_trackingState_m950C385BE519333AA58BA8A5F10077F43A0E7830 (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	{
		// return base.trackingState;
		int32_t L_0;
		L_0 = ARCloudAnchor_get_trackingState_m3BF7EBDAD9EB87B52EA8B8788EFA6E535A58875D(__this, NULL);
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudReferencePoint::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudReferencePoint_Update_m6F4882E76C9CDF38472E7B9E77CC6533D7A5CCCE (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	{
		// base.Update();
		ARCloudAnchor_Update_m4F966223BCFBB91AE7E5A9ED25CD69D48D104E08(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCloudReferencePoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudReferencePoint__ctor_m73189C5F3F3E88724B1E319C56001AD463AAB306 (ARCloudReferencePoint_tA78859DC915C36430B4813BA7F807C75A6F32DB2* __this, const RuntimeMethod* method) 
{
	{
		ARCloudAnchor__ctor_mAFDC33D113DBD9DDEA8BB56C4523486501532EA9(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::get__instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0 = ((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::set__instance(Google.XR.ARCoreExtensions.ARCoreExtensions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_set__instance_m79B718E5C94885E0E19C08E487AEBA71691EBFD4 (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0 = ___value0;
		((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.ARCoreExtensions::get_currentARCoreSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9F0CE6F09D40E3E2188659A1979CAB154E7F9F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null || _instance.Session == null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_2;
		L_2 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_2);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_3 = L_2->___Session_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}

IL_001f:
	{
		// Debug.LogError("ARCore Extensions not found or not configured. Please " +
		//     "include an ARCore Extensions game object in your scene. " +
		//     "GameObject -> XR -> ARCore Extensions");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3D9F0CE6F09D40E3E2188659A1979CAB154E7F9F, NULL);
		// return IntPtr.Zero;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_5;
	}

IL_002f:
	{
		// return IOSSupportManager.Instance.ARCoreSessionHandle;
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_6;
		L_6 = IOSSupportManager_get_Instance_m9EBEA0E17E0E9E80692685B9392D36BB02280A4C(NULL);
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = IOSSupportManager_get_ARCoreSessionHandle_m67CADC8436E54993C15C8F6E59EF98A0C58A39E7_inline(L_6, NULL);
		return L_7;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_Awake_m462E93532CE1134F8D3820B4D045FCE4F6EF8A9B (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB74BE110B2F9A30187194FC17F1EE846327FF92B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// Debug.LogError("ARCore Extensions is already initialized. You may only " +
		//     "have one instance in your scene at a time.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB74BE110B2F9A30187194FC17F1EE846327FF92B, NULL);
	}

IL_0016:
	{
		// _instance = this;
		ARCoreExtensions_set__instance_m79B718E5C94885E0E19C08E487AEBA71691EBFD4_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_Start_mD04C7D4673192D172926C02041EEB473910DC861 (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	{
		// IOSSupportManager.Instance.UpdateARSession(Session);
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0;
		L_0 = IOSSupportManager_get_Instance_m9EBEA0E17E0E9E80692685B9392D36BB02280A4C(NULL);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_1 = __this->___Session_4;
		NullCheck(L_0);
		IOSSupportManager_UpdateARSession_m844B9FA1A479F18D5BE1729CB87DC3FD3DFB32E4(L_0, L_1, NULL);
		// IOSSupportManager.Instance.UpdateCameraManager(CameraManager);
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_2;
		L_2 = IOSSupportManager_get_Instance_m9EBEA0E17E0E9E80692685B9392D36BB02280A4C(NULL);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_3 = __this->___CameraManager_6;
		NullCheck(L_2);
		IOSSupportManager_UpdateCameraManager_m0CD95D7B0F82863DDD86F974DED3D70FECA46D62(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_OnEnable_mF4D459AA504573AA538902B493D3A3437A3B73D4 (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IOSSupportManager.Instance.SetEnabled(true);
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0;
		L_0 = IOSSupportManager_get_Instance_m9EBEA0E17E0E9E80692685B9392D36BB02280A4C(NULL);
		NullCheck(L_0);
		IOSSupportManager_SetEnabled_m55B1AAE70525F1BE09B5F3022B60E4FF99C39C55_inline(L_0, (bool)1, NULL);
		// CachedData.Reset();
		il2cpp_codegen_runtime_class_init_inline(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		CachedData_Reset_mCAEE7CD452F0E57EF970BE384EA3A23AA5BE2467(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_OnDisable_m6AA1E86685AA43C51A56805BD77B1CB80FE5F59D (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IOSSupportManager.Instance.SetEnabled(false);
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0;
		L_0 = IOSSupportManager_get_Instance_m9EBEA0E17E0E9E80692685B9392D36BB02280A4C(NULL);
		NullCheck(L_0);
		IOSSupportManager_SetEnabled_m55B1AAE70525F1BE09B5F3022B60E4FF99C39C55_inline(L_0, (bool)0, NULL);
		// CachedData.Reset();
		il2cpp_codegen_runtime_class_init_inline(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		CachedData_Reset_mCAEE7CD452F0E57EF970BE384EA3A23AA5BE2467(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_OnDestroy_m6874CF48D40D0D5F03001DF524A2D654C2CD6E30 (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IOSSupportManager.Instance.ResetInstanceAndSession();
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0;
		L_0 = IOSSupportManager_get_Instance_m9EBEA0E17E0E9E80692685B9392D36BB02280A4C(NULL);
		NullCheck(L_0);
		IOSSupportManager_ResetInstanceAndSession_m2F1CEC6981E7E758FD2F86C77E629B6E162D8FAD(L_0, NULL);
		// if (_instance)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_1;
		L_1 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// _instance = null;
		ARCoreExtensions_set__instance_m79B718E5C94885E0E19C08E487AEBA71691EBFD4_inline((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41*)NULL, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions_Update_mD9AC1AD31D56E839D4454AE2C62E13F464DEA87A (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensions__ctor_m7C53C39B890BD8F468DB8EB21934E061D2EEE67C (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_Multicast(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* currentDelegate = reinterpret_cast<OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___supportedConfigurations0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenInst(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	NullCheck(___supportedConfigurations0);
	typedef int32_t (*FunctionPointerType) (List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___supportedConfigurations0, method);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenStatic(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___supportedConfigurations0, method);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenStaticInvoker(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* >::Invoke(__this->___method_ptr_0, method, NULL, ___supportedConfigurations0);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_ClosedStaticInvoker(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___supportedConfigurations0);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenVirtual(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	NullCheck(___supportedConfigurations0);
	return VirtualFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___supportedConfigurations0);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenInterface(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	NullCheck(___supportedConfigurations0);
	return InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___supportedConfigurations0);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenGenericVirtual(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	NullCheck(___supportedConfigurations0);
	return GenericVirtualFuncInvoker0< int32_t >::Invoke(method, ___supportedConfigurations0);
}
int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenGenericInterface(OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method)
{
	NullCheck(___supportedConfigurations0);
	return GenericInterfaceFuncInvoker0< int32_t >::Invoke(method, ___supportedConfigurations0);
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChooseXRCameraConfigurationEvent__ctor_m24A508C72ACF7BDAC17898F07AE863770AA50836 (OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE_Multicast;
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::Invoke(System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnChooseXRCameraConfigurationEvent_Invoke_mDB70C031AC17FC442C79EE660DEB47C3D48DB6AE (OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___supportedConfigurations0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::BeginInvoke(System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnChooseXRCameraConfigurationEvent_BeginInvoke_m0EC24DB8125C1AEEBE2181403F9629F1347C5630 (OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, List_1_tFF08A2523E521C3E49E0B9D5E3A1BD7B023601E8* ___supportedConfigurations0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___supportedConfigurations0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnChooseXRCameraConfigurationEvent_EndInvoke_mE71DBEDF777B55D0B5EA842FF75DAA25ACAE610A (OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.Internal.HelpAttribute Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetTargetCameraFramerateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* ARCoreExtensionsCameraConfigFilter_GetTargetCameraFramerateInfo_mDE966A6395026119B735CAE24A7F2A9E19FA6E37 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((TargetCameraFramerate & CameraConfigTargetFps.Target30FPS) == 0)
		int32_t L_0 = __this->___TargetCameraFramerate_4;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_002a;
		}
	}
	{
		// if (TargetCameraFramerate == 0)
		int32_t L_1 = __this->___TargetCameraFramerate_4;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return new HelpAttribute(
		//     "No options are selected, " +
		//     "there will be no camera configs and this app will fail to run.",
		//     HelpAttribute.HelpMessageType.Error);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_2 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_2, _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A, 3, NULL);
		return L_2;
	}

IL_001e:
	{
		// return new HelpAttribute(
		//     "Target30FPS is not selected, this may cause no camera config be available " +
		//     "for this filter and the app may not run on all devices.",
		//     HelpAttribute.HelpMessageType.Warning);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_3 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_3, _stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D, 2, NULL);
		return L_3;
	}

IL_002a:
	{
		// return null;
		return (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)NULL;
	}
}
// Google.XR.ARCoreExtensions.Internal.HelpAttribute Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetDepthSensorUsageInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* ARCoreExtensionsCameraConfigFilter_GetDepthSensorUsageInfo_m80F4380705229A3F945A8B089F5CFB610C6D8505 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((DepthSensorUsage & CameraConfigDepthSensorUsage.DoNotUse) == 0)
		int32_t L_0 = __this->___DepthSensorUsage_5;
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_002a;
		}
	}
	{
		// if (DepthSensorUsage == 0)
		int32_t L_1 = __this->___DepthSensorUsage_5;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return new HelpAttribute(
		//     "No options are selected, " +
		//     "there will be no camera configs and this app will fail to run.",
		//     HelpAttribute.HelpMessageType.Error);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_2 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_2, _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A, 3, NULL);
		return L_2;
	}

IL_001e:
	{
		// return new HelpAttribute(
		//     "DoNotUse is not selected, this may cause no camera config be available " +
		//     "for this filter and the app may not run on all devices.",
		//     HelpAttribute.HelpMessageType.Warning);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_3 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_3, _stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB, 2, NULL);
		return L_3;
	}

IL_002a:
	{
		// return null;
		return (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)NULL;
	}
}
// Google.XR.ARCoreExtensions.Internal.HelpAttribute Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetStereoCameraUsageInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* ARCoreExtensionsCameraConfigFilter_GetStereoCameraUsageInfo_mF6E4B3D1B553A0F4E57D6B3BF02A05FB7CA10FD9 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((StereoCameraUsage & CameraConfigStereoCameraUsage.DoNotUse) == 0)
		int32_t L_0 = __this->___StereoCameraUsage_6;
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_002a;
		}
	}
	{
		// if (StereoCameraUsage == 0)
		int32_t L_1 = __this->___StereoCameraUsage_6;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return new HelpAttribute(
		//     "No options are selected, " +
		//     "there will be no camera configs and this app will fail to run.",
		//     HelpAttribute.HelpMessageType.Error);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_2 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_2, _stringLiteralBD3569BDFBC50469D0C3FABBEAFDD8A8E342BA2A, 3, NULL);
		return L_2;
	}

IL_001e:
	{
		// return new HelpAttribute(
		//     "DoNotUse is not selected, this may cause no camera config be available " +
		//     "for this filter and the app may not run on all devices.",
		//     HelpAttribute.HelpMessageType.Warning);
		HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* L_3 = (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)il2cpp_codegen_object_new(HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5(L_3, _stringLiteralF320F794006FECA202C3952C5E0DF295E556CAEB, 2, NULL);
		return L_3;
	}

IL_002a:
	{
		// return null;
		return (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441*)NULL;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsCameraConfigFilter_OnValidate_mFFF090CD677954E3CE0617C8D3BF60CE1A3A6869 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AB6AED1D1A9735B4C548FE92C2A4516197E877C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral597CF650E368D8FFF2EEA95AFA7307F106D1A7DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral709DBA267E69E34DE784F99499679069BB3F16AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral899FED050775F167B273CB31245A56C36C4BAE41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA6625D3A1AECCE03CF6A02FC4F922183297BFE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((TargetCameraFramerate & CameraConfigTargetFps.Target30FPS) == 0)
		int32_t L_0 = __this->___TargetCameraFramerate_4;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_0026;
		}
	}
	{
		// if (TargetCameraFramerate == 0)
		int32_t L_1 = __this->___TargetCameraFramerate_4;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogError(
		//     "No options in Target Camera Framerate are selected, " +
		//     "there will be no camera configs and this app will fail to run.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral709DBA267E69E34DE784F99499679069BB3F16AC, NULL);
	}

IL_001c:
	{
		// Debug.LogWarning("Target30FPS is not selected, this may cause " +
		//    "no camera config be available for this filter and " +
		//    "the app may not run on all devices.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralFE7AB3DBB55D3370F16E743668C7E85F9D429C1D, NULL);
	}

IL_0026:
	{
		// if ((DepthSensorUsage & CameraConfigDepthSensorUsage.DoNotUse) == 0)
		int32_t L_2 = __this->___DepthSensorUsage_5;
		if (((int32_t)((int32_t)L_2&2)))
		{
			goto IL_004c;
		}
	}
	{
		// if (DepthSensorUsage == 0)
		int32_t L_3 = __this->___DepthSensorUsage_5;
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.LogError(
		//     "No options in Depth Sensor Usage are selected, " +
		//     "there will be no camera configs and this app will fail to run.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral4AB6AED1D1A9735B4C548FE92C2A4516197E877C, NULL);
	}

IL_0042:
	{
		// Debug.LogWarning(
		//     "DoNotUseDepthSensor is not selected, this may cause no camera config be " +
		//     "available for this filter and the app may not run on all devices.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral597CF650E368D8FFF2EEA95AFA7307F106D1A7DE, NULL);
	}

IL_004c:
	{
		// if ((StereoCameraUsage & CameraConfigStereoCameraUsage.DoNotUse) == 0)
		int32_t L_4 = __this->___StereoCameraUsage_6;
		if (((int32_t)((int32_t)L_4&2)))
		{
			goto IL_0072;
		}
	}
	{
		// if (StereoCameraUsage == 0)
		int32_t L_5 = __this->___StereoCameraUsage_6;
		if (L_5)
		{
			goto IL_0068;
		}
	}
	{
		// Debug.LogError(
		//     "No options in Stereo Camera Usage are selected, " +
		//     "there will be no camera configs and this app will fail to run.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral899FED050775F167B273CB31245A56C36C4BAE41, NULL);
	}

IL_0068:
	{
		// Debug.LogWarning(
		//     "DoNotUseStereoCamera is not selected, this may cause no camera config be " +
		//     "available for this filter and the app may not run on all devices.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralFA6625D3A1AECCE03CF6A02FC4F922183297BFE0, NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreExtensionsCameraConfigFilter_Equals_m503991851E55891C03FA5D74D585E3C756120046 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* V_0 = NULL;
	{
		// ARCoreExtensionsCameraConfigFilter otherFilter =
		//     other as ARCoreExtensionsCameraConfigFilter;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3*)IsInstClass((RuntimeObject*)L_0, ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3_il2cpp_TypeInfo_var));
		// if (otherFilter == null)
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// if (TargetCameraFramerate != otherFilter.TargetCameraFramerate ||
		//     StereoCameraUsage != otherFilter.StereoCameraUsage ||
		//     DepthSensorUsage != otherFilter.DepthSensorUsage)
		int32_t L_3 = __this->___TargetCameraFramerate_4;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___TargetCameraFramerate_4;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = __this->___StereoCameraUsage_6;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___StereoCameraUsage_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = __this->___DepthSensorUsage_5;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___DepthSensorUsage_5;
		if ((((int32_t)L_9) == ((int32_t)L_11)))
		{
			goto IL_003e;
		}
	}

IL_003c:
	{
		// return false;
		return (bool)0;
	}

IL_003e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCoreExtensionsCameraConfigFilter_GetHashCode_m6D6C86EE3583871CBD5C3F4356B1C4D002273E3F (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m3FA03DBF8CFF6584BCD22BCFDD257AED8DEB5872(__this, NULL);
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::CopyFrom(Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsCameraConfigFilter_CopyFrom_mE92DED10C229580E7F17A3773447EEE97677C3C4 (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___otherFilter0, const RuntimeMethod* method) 
{
	{
		// TargetCameraFramerate = otherFilter.TargetCameraFramerate;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_0 = ___otherFilter0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___TargetCameraFramerate_4;
		__this->___TargetCameraFramerate_4 = L_1;
		// DepthSensorUsage = otherFilter.DepthSensorUsage;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_2 = ___otherFilter0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___DepthSensorUsage_5;
		__this->___DepthSensorUsage_5 = L_3;
		// StereoCameraUsage = otherFilter.StereoCameraUsage;
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_4 = ___otherFilter0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___StereoCameraUsage_6;
		__this->___StereoCameraUsage_6 = L_5;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsCameraConfigFilter__ctor_mC3D3A31BB03CC0569A9280BAFF3693F522299F7A (ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* __this, const RuntimeMethod* method) 
{
	{
		// public CameraConfigTargetFps TargetCameraFramerate =
		//     CameraConfigTargetFps.Target30FPS | CameraConfigTargetFps.Target60FPS;
		__this->___TargetCameraFramerate_4 = 3;
		// public CameraConfigDepthSensorUsage DepthSensorUsage =
		//     CameraConfigDepthSensorUsage.RequireAndUse | CameraConfigDepthSensorUsage.DoNotUse;
		__this->___DepthSensorUsage_5 = 3;
		// public CameraConfigStereoCameraUsage StereoCameraUsage =
		//     CameraConfigStereoCameraUsage.RequireAndUse | CameraConfigStereoCameraUsage.DoNotUse;
		__this->___StereoCameraUsage_6 = 3;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::get_EnableCloudAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreExtensionsConfig_get_EnableCloudAnchors_mCBE4F23C040BE20537095AD108C85E1D54CC9B75 (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, const RuntimeMethod* method) 
{
	{
		// return CloudAnchorMode != CloudAnchorMode.Disabled;
		int32_t L_0 = __this->___CloudAnchorMode_4;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::set_EnableCloudAnchors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig_set_EnableCloudAnchors_mA65EC7960171683803876EB54BB6C6ED2FC25541 (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, bool ___value0, const RuntimeMethod* method) 
{
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* G_B2_0 = NULL;
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* G_B3_1 = NULL;
	{
		// CloudAnchorMode = value ? CloudAnchorMode.Enabled : CloudAnchorMode.Disabled;
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		NullCheck(G_B3_1);
		G_B3_1->___CloudAnchorMode_4 = G_B3_0;
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreExtensionsConfig_Equals_mFB0B8DE2CA800FD7A1945CD480AC2DB619A5AA9D (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* V_0 = NULL;
	{
		// ARCoreExtensionsConfig otherConfig = other as ARCoreExtensionsConfig;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD*)IsInstClass((RuntimeObject*)L_0, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_il2cpp_TypeInfo_var));
		// if (otherConfig == null ||
		//     GeospatialMode != otherConfig.GeospatialMode ||
		//     CloudAnchorMode != otherConfig.CloudAnchorMode)
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = __this->___GeospatialMode_5;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___GeospatialMode_5;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = __this->___CloudAnchorMode_4;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___CloudAnchorMode_4;
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_002e;
		}
	}

IL_002c:
	{
		// return false;
		return (bool)0;
	}

IL_002e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCoreExtensionsConfig_GetHashCode_mCE6686BF01651DFCC1EF587C885FB047FD7705DC (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m3FA03DBF8CFF6584BCD22BCFDD257AED8DEB5872(__this, NULL);
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CopyFrom(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig_CopyFrom_m5A59CD27FC92FC881121EA7203CFEB0A90C0FCBA (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___otherConfig0, const RuntimeMethod* method) 
{
	{
		// CloudAnchorMode = otherConfig.CloudAnchorMode;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_0 = ___otherConfig0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___CloudAnchorMode_4;
		__this->___CloudAnchorMode_4 = L_1;
		// GeospatialMode = otherConfig.GeospatialMode;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_2 = ___otherConfig0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___GeospatialMode_5;
		__this->___GeospatialMode_5 = L_3;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreExtensionsConfig__ctor_mD2069330D92B021E17D258A3026895F0969E9947 (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Google.XR.ARCoreExtensions.ARCoreRecordingConfig::get_Mp4DatasetFilepath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCoreRecordingConfig_get_Mp4DatasetFilepath_m3776003B59E36EF58C3DF8F9FF6D7662CD0963D6 (ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Mp4DatasetUri == null)
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___Mp4DatasetUri_6;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Uri_op_Equality_mD7D7AAB7023C0873B37D8B8C7195BEF34002A194(L_0, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0010:
	{
		// if (!Mp4DatasetUri.IsFile)
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = __this->___Mp4DatasetUri_6;
		NullCheck(L_2);
		bool L_3;
		L_3 = Uri_get_IsFile_m760E384ED177DC9197D5010B763F64196552DF5F(L_2, NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_001f:
	{
		// return Mp4DatasetUri.AbsolutePath;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = __this->___Mp4DatasetUri_6;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA(L_4, NULL);
		return L_5;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreRecordingConfig::set_Mp4DatasetFilepath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreRecordingConfig_set_Mp4DatasetFilepath_m23DDA971D55B4ACE347E344C55EC4F5A76FD2449 (ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Mp4DatasetUri = new Uri(value);
		String_t* L_0 = ___value0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_1, L_0, NULL);
		__this->___Mp4DatasetUri_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Mp4DatasetUri_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARCoreRecordingConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreRecordingConfig__ctor_m25B4BF303E90D1FA892E5DDC107F7854E08B3BC7 (ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool AutoStopOnPause = true;
		__this->___AutoStopOnPause_4 = (bool)1;
		// public List<Track> Tracks = new List<Track>();
		List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42* L_0 = (List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42*)il2cpp_codegen_object_new(List_1_t03FF7047D08B4F6AEB8FEA7E06EB6CF86B923E42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA(L_0, List_1__ctor_mC95C4F2B2F492EEBCBD1A20A0E6169EC0425CBDA_RuntimeMethod_var);
		__this->___Tracks_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tracks_5), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.AREarthManager::get_EarthState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return EarthState.ErrorInternal;
		return (int32_t)((-1));
	}

IL_0018:
	{
		// if (ARCoreExtensions._instance.ARCoreExtensionsConfig == null ||
		//     ARCoreExtensions._instance.ARCoreExtensionsConfig.GeospatialMode ==
		//     GeospatialMode.Disabled)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_5 = L_4->___ARCoreExtensionsConfig_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_8 = L_7->___ARCoreExtensionsConfig_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->___GeospatialMode_5;
		if (L_9)
		{
			goto IL_003e;
		}
	}

IL_003b:
	{
		// return EarthState.ErrorGeospatialModeDisabled;
		return (int32_t)(((int32_t)-2));
	}

IL_003e:
	{
		// return EarthApi.GetEarthState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_10;
		L_10 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_10);
		intptr_t L_11;
		L_11 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_10, NULL);
		int32_t L_12;
		L_12 = EarthApi_GetEarthState_m6BC8C9672EEFE49C0DF6BA545A5B5BBBAC6D22C8(L_11, NULL);
		return L_12;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.AREarthManager::get_EarthTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return TrackingState.None;
		return (int32_t)(0);
	}

IL_0018:
	{
		// return EarthApi.GetEarthTrackingState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		int32_t L_6;
		L_6 = EarthApi_GetEarthTrackingState_m7B98827AB1AB75158CEFC85D4B6B873F5617240A(L_5, NULL);
		return L_6;
	}
}
// Google.XR.ARCoreExtensions.GeospatialPose Google.XR.ARCoreExtensions.AREarthManager::get_CameraGeospatialPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var geospatialPose = new GeospatialPose();
		il2cpp_codegen_initobj((&V_0), sizeof(GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C));
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle != IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// EarthApi.TryGetCameraGeospatialPose(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, ref geospatialPose);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		EarthApi_TryGetCameraGeospatialPose_m3C7F8DCE4183C084F9EA6B321B9769BF6E377621(L_5, (&V_0), NULL);
	}

IL_002f:
	{
		// return geospatialPose;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_6 = V_0;
		return L_6;
	}
}
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.AREarthManager::IsGeospatialModeSupported(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return FeatureSupported.Unknown;
		return (int32_t)(1);
	}

IL_0018:
	{
		// return SessionApi.IsGeospatialModeSupported(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, mode);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		int32_t L_6 = ___mode0;
		int32_t L_7;
		L_7 = SessionApi_IsGeospatialModeSupported_m72BA9E4AAAF1E469167F40296FE9B4997C052A5A(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void Google.XR.ARCoreExtensions.AREarthManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AREarthManager__ctor_m86868AA75148F560BFE3CE098F98B4579AF0F1F9 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARGeospatialAnchor_get_trackableId_m8560D0B2C6E8D602B97A0B61EA92499AAD683939 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	{
		// return new TrackableId(0, (ulong)_anchorHandle);
		intptr_t L_0 = __this->____anchorHandle_4;
		int64_t L_1;
		L_1 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_0, NULL);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5((&L_2), ((int64_t)0), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARGeospatialAnchor_get_pose_mF31A1EE53F6BD2100006E1720000F5946A28AC2B (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	{
		// return _pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____pose_5;
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARGeospatialAnchor_get_trackingState_mD923B4E8BFB9C489DA720C1073095652B6E2CE59 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_4 = __this->____anchorHandle_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
		// return TrackingState.None;
		return (int32_t)(0);
	}

IL_002a:
	{
		// return AnchorApi.GetTrackingState(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle).ToTrackingState();
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9 = __this->____anchorHandle_4;
		int32_t L_10;
		L_10 = AnchorApi_GetTrackingState_m2799510F362CF558900966C48BF5C6EE834AD51C(L_8, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Translators_ToTrackingState_mFE007F0722633E9F4CBEBA85B24F56B368F8C222(L_10, NULL);
		return L_11;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARGeospatialAnchor_get_nativePtr_m2C14B2F86094291238B5368D8AC434E12DBE32BE (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	{
		// return _anchorHandle;
		intptr_t L_0 = __this->____anchorHandle_4;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARGeospatialAnchor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialAnchor_Update_m8D77A870A3390EA628066360DA574525FB9EF1C1 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     _anchorHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_4 = __this->____anchorHandle_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0029;
		}
	}

IL_0028:
	{
		// return;
		return;
	}

IL_0029:
	{
		// ApiPose apiPose = AnchorApi.GetAnchorPose(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9 = __this->____anchorHandle_4;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_10;
		L_10 = AnchorApi_GetAnchorPose_m1EBA7247174B63B25B99004033BBEA40ACE19258(L_8, L_9, NULL);
		V_0 = L_10;
		// _pose = apiPose.ToUnityPose();
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		L_12 = Translators_ToUnityPose_mED7D86C244B4224216E092FDB0AC9638310BB44A(L_11, NULL);
		__this->____pose_5 = L_12;
		// transform.localPosition = _pose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_14 = (&__this->____pose_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___position_0;
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_15, NULL);
		// transform.localRotation = _pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = (&__this->____pose_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17->___rotation_1;
		NullCheck(L_16);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_18, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARGeospatialAnchor::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialAnchor_OnDestroy_mCD0756C498B19EB6F39D9F3304BBA69261C4B040 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle != IntPtr.Zero &&
		//     _anchorHandle != IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		intptr_t L_4 = __this->____anchorHandle_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		// AnchorApi.Detach(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     _anchorHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9 = __this->____anchorHandle_4;
		AnchorApi_Detach_m5498C4126B9257B6BEDD1A29FCC6999B542D5D66(L_8, L_9, NULL);
		// AnchorApi.Release(_anchorHandle);
		intptr_t L_10 = __this->____anchorHandle_4;
		AnchorApi_Release_mCB91E8690A5A0D90C2692251141D42431B7323B8(L_10, NULL);
		// _anchorHandle = IntPtr.Zero;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____anchorHandle_4 = L_11;
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARGeospatialAnchor::SetAnchorHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialAnchor_SetAnchorHandle_m7A00833D3785EB965C5FAC878B215AFD8AF1DD1D (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, intptr_t ___anchorHandle0, const RuntimeMethod* method) 
{
	{
		// _anchorHandle = anchorHandle;
		intptr_t L_0 = ___anchorHandle0;
		__this->____anchorHandle_4 = L_0;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARGeospatialAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARGeospatialAnchor__ctor_m4E6B7E6C04566FF6A194F26DD7551B5295CC1C04 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.ARPlaybackManager::get_PlaybackStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlaybackManager_get_PlaybackStatus_m9959CEC8234921BA6910BD2C32544C00D471FC7B (ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return PlaybackStatus.None;
		return (int32_t)(0);
	}

IL_0018:
	{
		// return SessionApi.GetPlaybackStatus(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		int32_t L_6;
		L_6 = SessionApi_GetPlaybackStatus_mCDAD7875B2CA30489FB8ADE168642442708591E4(L_5, NULL);
		return L_6;
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.ARPlaybackManager::SetPlaybackDataset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlaybackManager_SetPlaybackDataset_m17E5E80B036F238B3F032AD87BBD81DA77B52078 (ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322* __this, String_t* ___datasetFilepath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero &&
		//     ARCoreExtensions._instance.Session.subsystem != null &&
		//     ARCoreExtensions._instance.Session.subsystem.nativePtr != null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_5 = L_4->___Session_4;
		NullCheck(L_5);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_6;
		L_6 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_5, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_8 = L_7->___Session_4;
		NullCheck(L_8);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_9;
		L_9 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_8, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_9);
		intptr_t L_10;
		L_10 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_9, NULL);
		// return PlaybackResult.SessionNotReady;
		return (int32_t)(1);
	}

IL_003e:
	{
		// return SessionApi.SetPlaybackDataset(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, datasetFilepath);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_11;
		L_11 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_11);
		intptr_t L_12;
		L_12 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_11, NULL);
		String_t* L_13 = ___datasetFilepath0;
		int32_t L_14;
		L_14 = SessionApi_SetPlaybackDataset_m2DBDA7412481C663E5014DF9DDD13CD6D9862D7D(L_12, L_13, NULL);
		return L_14;
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.ARPlaybackManager::SetPlaybackDatasetUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlaybackManager_SetPlaybackDatasetUri_mA268AC343155352ADDB506B880329AA5BF4C327F (ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___datasetUri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero &&
		//     ARCoreExtensions._instance.Session.subsystem != null &&
		//     ARCoreExtensions._instance.Session.subsystem.nativePtr != null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_5 = L_4->___Session_4;
		NullCheck(L_5);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_6;
		L_6 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_5, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_8 = L_7->___Session_4;
		NullCheck(L_8);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_9;
		L_9 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_8, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_9);
		intptr_t L_10;
		L_10 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_9, NULL);
		// return PlaybackResult.SessionNotReady;
		return (int32_t)(1);
	}

IL_003e:
	{
		// return SessionApi.SetPlaybackDatasetUri(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, datasetUri.AbsoluteUri);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_11;
		L_11 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_11);
		intptr_t L_12;
		L_12 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_11, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_13 = ___datasetUri0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_13, NULL);
		int32_t L_15;
		L_15 = SessionApi_SetPlaybackDatasetUri_mAED9FB5AB92AB49C209CE30DF4EA27032E0AF510(L_12, L_14, NULL);
		return L_15;
	}
}
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData> Google.XR.ARCoreExtensions.ARPlaybackManager::GetUpdatedTrackData(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* ARPlaybackManager_GetUpdatedTrackData_m75D90E9CBFDD3D38852698E16B314731EDED3D6A (ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322* __this, Guid_t ___trackId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral192E7D1560CDB49DFEBEFBCED49E8537C1ADA5E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CDB321BE5801415692A2A84196FB89319361331);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E19FCBA0D3246AD1DC84E716BD5D9A7817B3D8B);
		s_Il2CppMethodInitialized = true;
	}
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* V_0 = NULL;
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero &&
		//     ARCoreExtensions._instance.Session.subsystem != null &&
		//     ARCoreExtensions._instance.Session.subsystem.nativePtr != null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_5 = L_4->___Session_4;
		NullCheck(L_5);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_6;
		L_6 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_5, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_8 = L_7->___Session_4;
		NullCheck(L_8);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_9;
		L_9 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_8, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_9);
		intptr_t L_10;
		L_10 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_9, NULL);
		// Debug.LogWarning("Failed to fetch track data. The Session is not yet available. " +
		//                  "Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral5CDB321BE5801415692A2A84196FB89319361331, NULL);
		// return new List<TrackData>();
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_11 = (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51*)il2cpp_codegen_object_new(List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C(L_11, List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		return L_11;
	}

IL_004c:
	{
		// ARCameraManager cameraManager = ARCoreExtensions._instance.CameraManager;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_12;
		L_12 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_12);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_13 = L_12->___CameraManager_6;
		V_0 = L_13;
		// var cameraParams = new XRCameraParams
		// {
		//     zNear = cameraManager.GetComponent<Camera>().nearClipPlane,
		//     zFar = cameraManager.GetComponent<Camera>().farClipPlane,
		//     screenWidth = Screen.width,
		//     screenHeight = Screen.height,
		//     screenOrientation = Screen.orientation
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40));
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_14 = V_0;
		NullCheck(L_14);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_14, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_15);
		float L_16;
		L_16 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_15, NULL);
		XRCameraParams_set_zNear_m13DFECBAE558037DEBE998F3EFF2E1C6372EE6E0_inline((&V_3), L_16, NULL);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_17 = V_0;
		NullCheck(L_17);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18;
		L_18 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_17, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_18);
		float L_19;
		L_19 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_18, NULL);
		XRCameraParams_set_zFar_mA528373BCB66A9DE2A393512B883B932AB02D600_inline((&V_3), L_19, NULL);
		int32_t L_20;
		L_20 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		XRCameraParams_set_screenWidth_mA367A9BD005F2F052549E9B509F4D41F276CA021_inline((&V_3), ((float)L_20), NULL);
		int32_t L_21;
		L_21 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		XRCameraParams_set_screenHeight_m7F6C7A3B7F3D7AEBE074A19FF20EF3DDACB79DE9_inline((&V_3), ((float)L_21), NULL);
		int32_t L_22;
		L_22 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		XRCameraParams_set_screenOrientation_m9AA6D552ED0B67E9560CDF2C775FC27AA7A83A07_inline((&V_3), L_22, NULL);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_23 = V_3;
		V_1 = L_23;
		// if (!cameraManager.subsystem.TryGetLatestFrame(cameraParams, out XRCameraFrame frame))
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_24 = V_0;
		NullCheck(L_24);
		XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* L_25;
		L_25 = SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_inline(L_24, SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_26 = V_1;
		NullCheck(L_25);
		bool L_27;
		L_27 = XRCameraSubsystem_TryGetLatestFrame_m0C289061CF62517D75F72DF57CDAB1B1DCEF1B58(L_25, L_26, (&V_2), NULL);
		if (L_27)
		{
			goto IL_00cb;
		}
	}
	{
		// Debug.LogWarning("Failed to fetch track data. The current XRCameraFrame is not " +
		//                  "available. Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral9E19FCBA0D3246AD1DC84E716BD5D9A7817B3D8B, NULL);
		// return new List<TrackData>();
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_28 = (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51*)il2cpp_codegen_object_new(List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C(L_28, List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		return L_28;
	}

IL_00cb:
	{
		// if (frame.timestampNs == 0 || frame.nativePtr == IntPtr.Zero)
		int64_t L_29;
		L_29 = XRCameraFrame_get_timestampNs_m93571F53415C7DC6195854F3297E95D2E55A4DFB_inline((&V_2), NULL);
		if (!L_29)
		{
			goto IL_00e7;
		}
	}
	{
		intptr_t L_30;
		L_30 = XRCameraFrame_get_nativePtr_m4DED9CE0A7333F6A1E5C4932A6C98A8A0DD9E62D_inline((&V_2), NULL);
		intptr_t L_31 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_32;
		L_32 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_00f7;
		}
	}

IL_00e7:
	{
		// Debug.LogWarning("Failed to fetch track data. The current XRCameraFrame is not " +
		//                  "ready. Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral192E7D1560CDB49DFEBEFBCED49E8537C1ADA5E8, NULL);
		// return new List<TrackData>();
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_33 = (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51*)il2cpp_codegen_object_new(List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C(L_33, List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		return L_33;
	}

IL_00f7:
	{
		// return FrameApi.GetUpdatedTrackData(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, frame.FrameHandle(),
		//     trackId);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_34;
		L_34 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_34);
		intptr_t L_35;
		L_35 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_34, NULL);
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_36 = V_2;
		intptr_t L_37;
		L_37 = ARCoreHandleExtensions_FrameHandle_mD1DB4141E98081077FCB0431ECBDE99ACEB7B31B(L_36, NULL);
		Guid_t L_38 = ___trackId0;
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_39;
		L_39 = FrameApi_GetUpdatedTrackData_m434EFF523E181A6BCB371753398C4623585F4752(L_35, L_37, L_38, NULL);
		return L_39;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARPlaybackManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlaybackManager__ctor_m8AD73A5EC7B4308C5B4A1956D08392796846BF82 (ARPlaybackManager_t20912B3A9623EA3A25071238DDBB255949663322* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.ARRecordingManager::get_RecordingStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_get_RecordingStatus_mA1AC8470150C43DF233F26AB3F9074FDDF3312C9 (ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return RecordingStatus.None;
		return (int32_t)(0);
	}

IL_0018:
	{
		// return SessionApi.GetRecordingStatus(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		int32_t L_6;
		L_6 = SessionApi_GetRecordingStatus_mEEAC9CF8EE9646C013BF26C0A1F7B0067C4F540B(L_5, NULL);
		return L_6;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.ARRecordingManager::StartRecording(Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_StartRecording_m7F332E6E87C4BC49B9A5BAD45DBBC35E4E085F3E (ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881* __this, ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero &&
		//     ARCoreExtensions._instance.Session.subsystem != null &&
		//     ARCoreExtensions._instance.Session.subsystem.nativePtr != null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_5 = L_4->___Session_4;
		NullCheck(L_5);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_6;
		L_6 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_5, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_8 = L_7->___Session_4;
		NullCheck(L_8);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_9;
		L_9 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_8, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_9);
		intptr_t L_10;
		L_10 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_9, NULL);
		// return RecordingResult.SessionNotReady;
		return (int32_t)(1);
	}

IL_003e:
	{
		// return SessionApi.StartRecording(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, config);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_11;
		L_11 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_11);
		intptr_t L_12;
		L_12 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_11, NULL);
		ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* L_13 = ___config0;
		int32_t L_14;
		L_14 = SessionApi_StartRecording_mA90651F44A778C2C8E9358AA6EE67A63B24AFE17(L_12, L_13, NULL);
		return L_14;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.ARRecordingManager::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_StopRecording_m7A30DE730809F224D6E3832BE2A3CAC8A649FECD (ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return RecordingResult.SessionNotReady;
		return (int32_t)(1);
	}

IL_0018:
	{
		// return SessionApi.StopRecording(ARCoreExtensions._instance.currentARCoreSessionHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_4, NULL);
		int32_t L_6;
		L_6 = SessionApi_StopRecording_mB277630DA1B16A36CC58CB942628C2BE6EC60F7F(L_5, NULL);
		return L_6;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.ARRecordingManager::RecordTrackData(System.Guid,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRecordingManager_RecordTrackData_m9A593C2B134C6CE2ACECB552C1235CBA9A4F9A29 (ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881* __this, Guid_t ___trackId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20EE5966E8B0157C0C6AD196A7753C5285981C4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E36046B96D80329B0519BF055E3C17934B46792);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA45A103534B0BA25A4EC4BBC7CA2C36983D4C42C);
		s_Il2CppMethodInitialized = true;
	}
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* V_0 = NULL;
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero &&
		//     ARCoreExtensions._instance.Session.subsystem != null &&
		//     ARCoreExtensions._instance.Session.subsystem.nativePtr != null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4;
		L_4 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_4);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_5 = L_4->___Session_4;
		NullCheck(L_5);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_6;
		L_6 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_5, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_8 = L_7->___Session_4;
		NullCheck(L_8);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_9;
		L_9 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_8, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_9);
		intptr_t L_10;
		L_10 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_9, NULL);
		// Debug.LogWarning("Failed to record track data. The Session is not yet available. " +
		//                  "Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral3E36046B96D80329B0519BF055E3C17934B46792, NULL);
		// return RecordingResult.ErrorIllegalState;
		return (int32_t)(4);
	}

IL_0048:
	{
		// ARCameraManager cameraManager = ARCoreExtensions._instance.CameraManager;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_11;
		L_11 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_11);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_12 = L_11->___CameraManager_6;
		V_0 = L_12;
		// var cameraParams = new XRCameraParams
		// {
		//     zNear = cameraManager.GetComponent<Camera>().nearClipPlane,
		//     zFar = cameraManager.GetComponent<Camera>().farClipPlane,
		//     screenWidth = Screen.width,
		//     screenHeight = Screen.height,
		//     screenOrientation = Screen.orientation
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40));
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_13 = V_0;
		NullCheck(L_13);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_13, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_14);
		float L_15;
		L_15 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_14, NULL);
		XRCameraParams_set_zNear_m13DFECBAE558037DEBE998F3EFF2E1C6372EE6E0_inline((&V_3), L_15, NULL);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_16 = V_0;
		NullCheck(L_16);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_16, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_17);
		float L_18;
		L_18 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_17, NULL);
		XRCameraParams_set_zFar_mA528373BCB66A9DE2A393512B883B932AB02D600_inline((&V_3), L_18, NULL);
		int32_t L_19;
		L_19 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		XRCameraParams_set_screenWidth_mA367A9BD005F2F052549E9B509F4D41F276CA021_inline((&V_3), ((float)L_19), NULL);
		int32_t L_20;
		L_20 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		XRCameraParams_set_screenHeight_m7F6C7A3B7F3D7AEBE074A19FF20EF3DDACB79DE9_inline((&V_3), ((float)L_20), NULL);
		int32_t L_21;
		L_21 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		XRCameraParams_set_screenOrientation_m9AA6D552ED0B67E9560CDF2C775FC27AA7A83A07_inline((&V_3), L_21, NULL);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_22 = V_3;
		V_1 = L_22;
		// if (!cameraManager.subsystem.TryGetLatestFrame(cameraParams, out XRCameraFrame frame))
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_23 = V_0;
		NullCheck(L_23);
		XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* L_24;
		L_24 = SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_inline(L_23, SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_25 = V_1;
		NullCheck(L_24);
		bool L_26;
		L_26 = XRCameraSubsystem_TryGetLatestFrame_m0C289061CF62517D75F72DF57CDAB1B1DCEF1B58(L_24, L_25, (&V_2), NULL);
		if (L_26)
		{
			goto IL_00c3;
		}
	}
	{
		// Debug.LogWarning("Failed to record track data. The current XRCameraFrame is not " +
		//                  "available. Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral20EE5966E8B0157C0C6AD196A7753C5285981C4C, NULL);
		// return RecordingResult.ErrorIllegalState;
		return (int32_t)(4);
	}

IL_00c3:
	{
		// if (frame.timestampNs == 0 || frame.nativePtr == IntPtr.Zero)
		int64_t L_27;
		L_27 = XRCameraFrame_get_timestampNs_m93571F53415C7DC6195854F3297E95D2E55A4DFB_inline((&V_2), NULL);
		if (!L_27)
		{
			goto IL_00df;
		}
	}
	{
		intptr_t L_28;
		L_28 = XRCameraFrame_get_nativePtr_m4DED9CE0A7333F6A1E5C4932A6C98A8A0DD9E62D_inline((&V_2), NULL);
		intptr_t L_29 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_30;
		L_30 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_00eb;
		}
	}

IL_00df:
	{
		// Debug.LogWarning("Failed to record track data. The current XRCameraFrame is not " +
		//                  "ready. Try again later.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralA45A103534B0BA25A4EC4BBC7CA2C36983D4C42C, NULL);
		// return RecordingResult.ErrorRecordingFailed;
		return (int32_t)(3);
	}

IL_00eb:
	{
		// return FrameApi.RecordTrackData(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle, frame.FrameHandle(), trackId,
		//     data);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_31;
		L_31 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_31);
		intptr_t L_32;
		L_32 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_31, NULL);
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_33 = V_2;
		intptr_t L_34;
		L_34 = ARCoreHandleExtensions_FrameHandle_mD1DB4141E98081077FCB0431ECBDE99ACEB7B31B(L_33, NULL);
		Guid_t L_35 = ___trackId0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___data1;
		int32_t L_37;
		L_37 = FrameApi_RecordTrackData_m76D9177D8231F5DEA2F8C7132F1A242EA7233BD5(L_32, L_34, L_35, L_36, NULL);
		return L_37;
	}
}
// System.Void Google.XR.ARCoreExtensions.ARRecordingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARRecordingManager__ctor_mDCAB549E48AE1C8D00344B78F0DEABF220986850 (ARRecordingManager_t78993CB9F7521FB5CA777C9CABF0D835C2E5A881* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Track
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_pinvoke(const Track_t33BB000657D179174087DA9A156530F0DF0B90DC& unmarshaled, Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_pinvoke& marshaled)
{
	marshaled.___Id_0 = unmarshaled.___Id_0;
	marshaled.___Metadata_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Metadata_1);
	marshaled.___MimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.___MimeType_2);
}
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_pinvoke_back(const Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_pinvoke& marshaled, Track_t33BB000657D179174087DA9A156530F0DF0B90DC& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t unmarshaledId_temp_0;
	memset((&unmarshaledId_temp_0), 0, sizeof(unmarshaledId_temp_0));
	unmarshaledId_temp_0 = marshaled.___Id_0;
	unmarshaled.___Id_0 = unmarshaledId_temp_0;
	unmarshaled.___Metadata_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Metadata_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Metadata_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Metadata_1));
	unmarshaled.___MimeType_2 = il2cpp_codegen_marshal_string_result(marshaled.___MimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___MimeType_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___MimeType_2));
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Track
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_pinvoke_cleanup(Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Metadata_1);
	marshaled.___Metadata_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___MimeType_2);
	marshaled.___MimeType_2 = NULL;
}
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Track
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_com(const Track_t33BB000657D179174087DA9A156530F0DF0B90DC& unmarshaled, Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_com& marshaled)
{
	marshaled.___Id_0 = unmarshaled.___Id_0;
	marshaled.___Metadata_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Metadata_1);
	marshaled.___MimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___MimeType_2);
}
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_com_back(const Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_com& marshaled, Track_t33BB000657D179174087DA9A156530F0DF0B90DC& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t unmarshaledId_temp_0;
	memset((&unmarshaledId_temp_0), 0, sizeof(unmarshaledId_temp_0));
	unmarshaledId_temp_0 = marshaled.___Id_0;
	unmarshaled.___Id_0 = unmarshaledId_temp_0;
	unmarshaled.___Metadata_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Metadata_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Metadata_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Metadata_1));
	unmarshaled.___MimeType_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___MimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___MimeType_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___MimeType_2));
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Track
IL2CPP_EXTERN_C void Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshal_com_cleanup(Track_t33BB000657D179174087DA9A156530F0DF0B90DC_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Metadata_1);
	marshaled.___Metadata_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___MimeType_2);
	marshaled.___MimeType_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.TrackData
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_pinvoke(const TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44& unmarshaled, TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_pinvoke& marshaled)
{
	marshaled.___FrameTimestamp_0 = unmarshaled.___FrameTimestamp_0;
	marshaled.___Data_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Data_1);
}
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_pinvoke_back(const TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_pinvoke& marshaled, TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledFrameTimestamp_temp_0 = 0;
	unmarshaledFrameTimestamp_temp_0 = marshaled.___FrameTimestamp_0;
	unmarshaled.___FrameTimestamp_0 = unmarshaledFrameTimestamp_temp_0;
	unmarshaled.___Data_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_1));
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.TrackData
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_pinvoke_cleanup(TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Data_1);
	marshaled.___Data_1 = NULL;
}
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.TrackData
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_com(const TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44& unmarshaled, TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_com& marshaled)
{
	marshaled.___FrameTimestamp_0 = unmarshaled.___FrameTimestamp_0;
	marshaled.___Data_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Data_1);
}
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_com_back(const TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_com& marshaled, TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledFrameTimestamp_temp_0 = 0;
	unmarshaledFrameTimestamp_temp_0 = marshaled.___FrameTimestamp_0;
	unmarshaled.___FrameTimestamp_0 = unmarshaledFrameTimestamp_temp_0;
	unmarshaled.___Data_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Data_1));
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.TrackData
IL2CPP_EXTERN_C void TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshal_com_cleanup(TrackData_tC91DED8139E53EF68FB080DDA6A90A4817B51B44_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Data_1);
	marshaled.___Data_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.VersionInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfo__ctor_mB0D083F4C30FCD658BD93A986790865303C9F96B (VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.VersionInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionInfo__cctor_m4100833E022B2C557810D9096DF6DABCDE24C41A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral031F60CF721A8A1B2B79305C20C082EB5FE848A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string Version = "1.32.0";
		((VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_StaticFields*)il2cpp_codegen_static_fields_for(VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_il2cpp_TypeInfo_var))->___Version_0 = _stringLiteral031F60CF721A8A1B2B79305C20C082EB5FE848A3;
		Il2CppCodeGenWriteBarrier((void**)(&((VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_StaticFields*)il2cpp_codegen_static_fields_for(VersionInfo_t275F15D10F6759C62C4B16DF5CA7FF3F59EC9ED7_il2cpp_TypeInfo_var))->___Version_0), (void*)_stringLiteral031F60CF721A8A1B2B79305C20C082EB5FE848A3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.CameraConfigFacingDirection Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetFacingDirection(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraConfigurationExtensions_GetFacingDirection_m2332E7C05CA5765A08EF8C526F32324B1966938A (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___cameraConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     cameraConfig.nativeConfigurationHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_4;
		L_4 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		// return CameraConfigFacingDirection.Back;
		return (int32_t)(0);
	}

IL_002b:
	{
		// return CameraConfigApi.GetFacingDirection(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9;
		L_9 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		int32_t L_10;
		L_10 = CameraConfigApi_GetFacingDirection_m309700663346BA958898F583144B81FF6FB4B723(L_8, L_9, NULL);
		return L_10;
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetTextureDimensions(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRCameraConfigurationExtensions_GetTextureDimensions_mEBBBA99E820E972CB533CC14B8EB90ED6A9D481D (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___cameraConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     cameraConfig.nativeConfigurationHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_4;
		L_4 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}

IL_0029:
	{
		// return Vector2Int.zero;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7;
		L_7 = Vector2Int_get_zero_mF92C338E9CB9434105090E675E04D20A29649553_inline(NULL);
		return L_7;
	}

IL_002f:
	{
		// return CameraConfigApi.GetTextureDimensions(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_8;
		L_8 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_8);
		intptr_t L_9;
		L_9 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_8, NULL);
		intptr_t L_10;
		L_10 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_11;
		L_11 = CameraConfigApi_GetTextureDimensions_m41544BA6861B516EF679F6493C9313E83BB63192(L_9, L_10, NULL);
		return L_11;
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetFPSRange(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRCameraConfigurationExtensions_GetFPSRange_mAEEC24F4AAD1A077035CD10036D500638983FC9C (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___cameraConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     cameraConfig.nativeConfigurationHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_4;
		L_4 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}

IL_0029:
	{
		// return Vector2Int.zero;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7;
		L_7 = Vector2Int_get_zero_mF92C338E9CB9434105090E675E04D20A29649553_inline(NULL);
		return L_7;
	}

IL_002f:
	{
		// return CameraConfigApi.GetFPSRange(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_8;
		L_8 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_8);
		intptr_t L_9;
		L_9 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_8, NULL);
		intptr_t L_10;
		L_10 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_11;
		L_11 = CameraConfigApi_GetFPSRange_m07794E7F1E4E08602418096D1A23C9D2177CEA46(L_9, L_10, NULL);
		return L_11;
	}
}
// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetDepthSensorUsage(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraConfigurationExtensions_GetDepthSensorUsage_mB54EFB2859A12D50269B1BD86B4233E0ADF78A65 (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___cameraConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     cameraConfig.nativeConfigurationHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_4;
		L_4 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		// return CameraConfigDepthSensorUsage.DoNotUse;
		return (int32_t)(2);
	}

IL_002b:
	{
		// return CameraConfigApi.GetDepthSensorUsage(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9;
		L_9 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		int32_t L_10;
		L_10 = CameraConfigApi_GetDepthSensorUsage_mDE1B64C2E2A3AC07E584840E85BBF44B4F405BFE(L_8, L_9, NULL);
		return L_10;
	}
}
// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.XRCameraConfigurationExtensions::GetStereoCameraUsage(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraConfigurationExtensions_GetStereoCameraUsage_m11C6DCC339B7299D97873AB72D242384B6916B02 (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___cameraConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ARCoreExtensions._instance.currentARCoreSessionHandle == IntPtr.Zero ||
		//     cameraConfig.nativeConfigurationHandle == IntPtr.Zero)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_4;
		L_4 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		// return CameraConfigStereoCameraUsage.DoNotUse;
		return (int32_t)(2);
	}

IL_002b:
	{
		// return CameraConfigApi.GetStereoCameraUsage(
		//     ARCoreExtensions._instance.currentARCoreSessionHandle,
		//     cameraConfig.nativeConfigurationHandle);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7;
		L_7 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_7, NULL);
		intptr_t L_9;
		L_9 = XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline((&___cameraConfig0), NULL);
		int32_t L_10;
		L_10 = CameraConfigApi_GetStereoCameraUsage_m68F3D156F29FFC37E6953F613A33F921F29334C1(L_8, L_9, NULL);
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Matrix4x4 Google.XR.ARCoreExtensions.XRCameraFrameExtensions::GetImageDisplayMatrix(UnityEngine.XR.ARSubsystems.XRCameraFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 XRCameraFrameExtensions_GetImageDisplayMatrix_mF7B3823AFF62AA294209A6F7D42C82302CB62E5B (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 ___frame0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// IntPtr sessionHandle = ARCoreExtensions._instance.currentARCoreSessionHandle;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0;
		L_0 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARCoreExtensions_get_currentARCoreSessionHandle_mBEF2CE3F46A6B06E313CC6B9C8DAE85B4FD922BB(L_0, NULL);
		V_0 = L_1;
		// if (sessionHandle == IntPtr.Zero)
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// return Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		return L_5;
	}

IL_001e:
	{
		// Vector2 affineBasisX = new Vector2(1.0f, 1.0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), (1.0f), (1.0f), NULL);
		// Vector2 affineBasisY = new Vector2(0.0f, 0.0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (0.0f), (0.0f), NULL);
		// Vector2 affineOrigin = new Vector2(0.0f, 1.0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), (0.0f), (1.0f), NULL);
		// Vector2 transformedX = FrameApi.TransformCoordinates2d(
		//     sessionHandle, frame.FrameHandle(), ApiCoordinates2dType.ViewNormalized,
		//     ApiCoordinates2dType.ImageNormalized, ref affineBasisX);
		intptr_t L_6 = V_0;
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_7 = ___frame0;
		intptr_t L_8;
		L_8 = ARCoreHandleExtensions_FrameHandle_mD1DB4141E98081077FCB0431ECBDE99ACEB7B31B(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = FrameApi_TransformCoordinates2d_m1427719BDFE152912E4AC86E3D08DE7A0F6D7417(L_6, L_8, 8, 3, (&V_1), NULL);
		V_4 = L_9;
		// Vector2 transformedY = FrameApi.TransformCoordinates2d(
		//     sessionHandle, frame.FrameHandle(), ApiCoordinates2dType.ViewNormalized,
		//     ApiCoordinates2dType.ImageNormalized, ref affineBasisY);
		intptr_t L_10 = V_0;
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_11 = ___frame0;
		intptr_t L_12;
		L_12 = ARCoreHandleExtensions_FrameHandle_mD1DB4141E98081077FCB0431ECBDE99ACEB7B31B(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = FrameApi_TransformCoordinates2d_m1427719BDFE152912E4AC86E3D08DE7A0F6D7417(L_10, L_12, 8, 3, (&V_2), NULL);
		V_5 = L_13;
		// Vector2 transformedOrigin = FrameApi.TransformCoordinates2d(
		//     sessionHandle, frame.FrameHandle(), ApiCoordinates2dType.ViewNormalized,
		//     ApiCoordinates2dType.ImageNormalized, ref affineOrigin);
		intptr_t L_14 = V_0;
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_15 = ___frame0;
		intptr_t L_16;
		L_16 = ARCoreHandleExtensions_FrameHandle_mD1DB4141E98081077FCB0431ECBDE99ACEB7B31B(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = FrameApi_TransformCoordinates2d_m1427719BDFE152912E4AC86E3D08DE7A0F6D7417(L_14, L_16, 8, 3, (&V_3), NULL);
		V_6 = L_17;
		// Matrix4x4 imageMatrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18;
		L_18 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		V_7 = L_18;
		// imageMatrix[0, 0] = transformedX.x - transformedOrigin.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_4;
		float L_20 = L_19.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_6;
		float L_22 = L_21.___x_0;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 0, 0, ((float)il2cpp_codegen_subtract(L_20, L_22)), NULL);
		// imageMatrix[0, 1] = transformedX.y - transformedOrigin.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_4;
		float L_24 = L_23.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_6;
		float L_26 = L_25.___y_1;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 0, 1, ((float)il2cpp_codegen_subtract(L_24, L_26)), NULL);
		// imageMatrix[1, 0] = transformedY.x - transformedOrigin.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_5;
		float L_28 = L_27.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_6;
		float L_30 = L_29.___x_0;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 1, 0, ((float)il2cpp_codegen_subtract(L_28, L_30)), NULL);
		// imageMatrix[1, 1] = transformedY.y - transformedOrigin.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_5;
		float L_32 = L_31.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_6;
		float L_34 = L_33.___y_1;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 1, 1, ((float)il2cpp_codegen_subtract(L_32, L_34)), NULL);
		// imageMatrix[2, 0] = transformedOrigin.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_6;
		float L_36 = L_35.___x_0;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 2, 0, L_36, NULL);
		// imageMatrix[2, 1] = transformedOrigin.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_6;
		float L_38 = L_37.___y_1;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_7), 2, 1, L_38, NULL);
		// return imageMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_39 = V_7;
		return L_39;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager__ctor_m82E71A4B12DD734C97114EAF40EFF5DC3DFA645F (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163E615278B2AE83873F54F03D93170DAB900F53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidPermissionsManager() : base(
		//     "com.unity3d.plugin.UnityAndroidPermissions$IPermissionRequestResult")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral163E615278B2AE83873F54F03D93170DAB900F53, NULL);
		// }
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::IsPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidPermissionsManager_IsPermissionGranted_m3F51F714BF43773FD805E294F4603FACF2B4A47F (String_t* ___permissionName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform != RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return GetPermissionsService().Call<bool>(
		//     "IsPermissionGranted", GetUnityActivity(), permissionName);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidPermissionsManager_GetPermissionsService_mD299203251A62204C633CB7E0FEB8429AEEEB083(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidPermissionsManager_GetUnityActivity_mAB0B080B83CF4E2A694F3C4C7EBBBF9B53C65646(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___permissionName0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_1);
		bool L_7;
		L_7 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_1, _stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87, L_5, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::RequestPermission(System.String[],System.Action`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_RequestPermission_m917CA2D3F400827222C03C80B04507F3D434D822 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissionNames0, Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* ___onRequestFinished1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E99BC28F79DF64079057E43A8E4347F9DAD5356);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// List<string> ungrantedPermissions = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var permission in permissionNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___permissionNames0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_002d;
	}

IL_000c:
	{
		// foreach (var permission in permissionNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// if (!IsPermissionGranted(permission))
		String_t* L_6 = V_3;
		bool L_7;
		L_7 = AndroidPermissionsManager_IsPermissionGranted_m3F51F714BF43773FD805E294F4603FACF2B4A47F(L_6, NULL);
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		// ungrantedPermissions.Add(permission);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = V_0;
		String_t* L_9 = V_3;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, L_9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_0029;
	}

IL_0021:
	{
		// onRequestFinished(permission, true);
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_10 = ___onRequestFinished1;
		String_t* L_11 = V_3;
		NullCheck(L_10);
		Action_2_Invoke_m6EBB68A4E442B0057E106C998DA0B6F8BB077EF9_inline(L_10, L_11, (bool)1, NULL);
	}

IL_0029:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002d:
	{
		// foreach (var permission in permissionNames)
		int32_t L_13 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// if (ungrantedPermissions.Count == 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_15, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		return;
	}

IL_003c:
	{
		// if (_permissionNames != null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		if (!L_17)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.LogError("Attempted to make simultaneous Android permissions requests.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral8E99BC28F79DF64079057E43A8E4347F9DAD5356, NULL);
		// return;
		return;
	}

IL_004e:
	{
		// _permissionNames = ungrantedPermissions;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = V_0;
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8), (void*)L_18);
		// _permissionRequest = onRequestFinished;
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_19 = ___onRequestFinished1;
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionRequest_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionRequest_9), (void*)L_19);
		// GetPermissionsService().Call("RequestPermissionAsync", GetUnityActivity(),
		//     _permissionNames.ToArray(), GetInstance());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20;
		L_20 = AndroidPermissionsManager_GetPermissionsService_mD299203251A62204C633CB7E0FEB8429AEEEB083(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23;
		L_23 = AndroidPermissionsManager_GetUnityActivity_mAB0B080B83CF4E2A694F3C4C7EBBBF9B53C65646(NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_22;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		NullCheck(L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26;
		L_26 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_25, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_24;
		AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* L_28;
		L_28 = AndroidPermissionsManager_GetInstance_m174FD5803186DE4A45A0A669EE3F7E807C59A58E(NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_28);
		NullCheck(L_20);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_20, _stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF, L_27, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionGranted_mC348AFFF790E299E41CDDC09551D854FBA205090 (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, String_t* ___permissionName0, const RuntimeMethod* method) 
{
	{
		// OnPermissionResult(permissionName, true);
		String_t* L_0 = ___permissionName0;
		AndroidPermissionsManager_OnPermissionResult_mFEAE45FB0BF4B1525BDCF3AC3B44A44DFF1D0448(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionDenied(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionDenied_mB3BADF142268B9A3E03B43BB83773F2CF2FD52E7 (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, String_t* ___permissionName0, const RuntimeMethod* method) 
{
	{
		// OnPermissionResult(permissionName, false);
		String_t* L_0 = ___permissionName0;
		AndroidPermissionsManager_OnPermissionResult_mFEAE45FB0BF4B1525BDCF3AC3B44A44DFF1D0448(__this, L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnActivityResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnActivityResult_m29AC9A70F55B793E41E083B0D15EF08A5010B3A0 (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* AndroidPermissionsManager_GetInstance_m174FD5803186DE4A45A0A669EE3F7E807C59A58E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* L_0 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____instance_7;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _instance = new AndroidPermissionsManager();
		AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* L_1 = (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3*)il2cpp_codegen_object_new(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidPermissionsManager__ctor_m82E71A4B12DD734C97114EAF40EFF5DC3DFA645F(L_1, NULL);
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____instance_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____instance_7), (void*)L_1);
	}

IL_0011:
	{
		// return _instance;
		AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* L_2 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____instance_7;
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetUnityActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetUnityActivity_mAB0B080B83CF4E2A694F3C4C7EBBBF9B53C65646 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_activity == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____activity_10;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// AndroidJavaClass unityPlayer =
		//     new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// _activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____activity_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____activity_10), (void*)L_2);
	}

IL_0020:
	{
		// return _activity;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____activity_10;
		return L_3;
	}
}
// UnityEngine.AndroidJavaObject Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::GetPermissionsService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPermissionsManager_GetPermissionsService_mD299203251A62204C633CB7E0FEB8429AEEEB083 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_permissionService == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionService_11;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// _permissionService =
		//     new AndroidJavaObject("com.unity3d.plugin.UnityAndroidPermissions");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_2, _stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860, L_1, NULL);
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionService_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionService_11), (void*)L_2);
	}

IL_001b:
	{
		// return _permissionService;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionService_11;
		return L_3;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AndroidPermissionsManager::OnPermissionResult(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPermissionsManager_OnPermissionResult_mFEAE45FB0BF4B1525BDCF3AC3B44A44DFF1D0448 (AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3* __this, String_t* ___permissionName0, bool ___granted1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64AE57C4A1D5795E1348D838B9F774F70790F43B);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* G_B5_0 = NULL;
	Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* G_B4_0 = NULL;
	{
		// if (_permissionNames == null || !_permissionNames.Contains(permissionName))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		String_t* L_2 = ___permissionName0;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_1, L_2, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0029;
		}
	}

IL_0014:
	{
		// Debug.LogErrorFormat(
		//     "AndroidPermissionsManager received an unexpected permissions result {0}",
		//     permissionName);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		String_t* L_6 = ___permissionName0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral64AE57C4A1D5795E1348D838B9F774F70790F43B, L_5, NULL);
		// return;
		return;
	}

IL_0029:
	{
		// _permissionNames.Remove(permissionName);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		String_t* L_8 = ___permissionName0;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_7, L_8, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		// var onRequestFinished = _permissionRequest;
		Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A* L_10 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionRequest_9;
		// if (_permissionNames.Count == 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = ((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_11, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		G_B4_0 = L_10;
		if (L_12)
		{
			G_B5_0 = L_10;
			goto IL_0052;
		}
	}
	{
		// _permissionNames = null;
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionNames_8), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		// _permissionRequest = null;
		((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionRequest_9 = (Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_StaticFields*)il2cpp_codegen_static_fields_for(AndroidPermissionsManager_t1E3F6A6B34BA86F410535B413144B50DBD867CD3_il2cpp_TypeInfo_var))->____permissionRequest_9), (void*)(Action_2_t79388C33CD9A9EDFE5BE17BE73F59AB95415B00A*)NULL);
		G_B5_0 = G_B4_0;
	}

IL_0052:
	{
		// onRequestFinished(permissionName, granted);
		String_t* L_13 = ___permissionName0;
		bool L_14 = ___granted1;
		NullCheck(G_B5_0);
		Action_2_Invoke_m6EBB68A4E442B0057E106C998DA0B6F8BB077EF9_inline(G_B5_0, L_13, L_14, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::SessionHandle(UnityEngine.XR.ARFoundation.ARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_SessionHandle_m6DA6E1A334063152EC8E3B4D737ACE357C6BE903 (ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___session0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (session.subsystem == null || session.subsystem.nativePtr == null)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_0 = ___session0;
		NullCheck(L_0);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_1;
		L_1 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_0, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_2 = ___session0;
		NullCheck(L_2);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_3;
		L_3 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_2, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_3, NULL);
		goto IL_001c;
	}

IL_0016:
	{
		// return IntPtr.Zero;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_5;
	}

IL_001c:
	{
		// SessionNativePointerStruct info = (SessionNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         session.subsystem.nativePtr,
		//         typeof(SessionNativePointerStruct));
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_6 = ___session0;
		NullCheck(L_6);
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_7;
		L_7 = SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_inline(L_6, SubsystemLifecycleManager_3_get_subsystem_m9B5DE33187CA52706637F3BADD4F71C988E18FCF_RuntimeMethod_var);
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_11;
		L_11 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_8, L_10, NULL);
		// return info.SessionHandle;
		intptr_t L_12 = ((*(SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD*)((SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD*)(SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD*)UnBox(L_11, SessionNativePointerStruct_tABE95B10A6731E53F2101AD0CB1F7AEF6909E5AD_il2cpp_TypeInfo_var)))).___SessionHandle_1;
		return L_12;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::AnchorHandle(UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_AnchorHandle_mB44E99B6F08027D9ECF4356680436DC6DC5DADBF (ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___anchor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnchorNativePointerStruct info = (AnchorNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         anchor.nativePtr,
		//         typeof(AnchorNativePointerStruct));
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_0 = ___anchor0;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARAnchor_get_nativePtr_mBE82BAA63BB9C836B5AAECBC8B61F855B352196F(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		// return info.AnchorHandle;
		intptr_t L_5 = ((*(AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9*)((AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9*)(AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9*)UnBox(L_4, AnchorNativePointerStruct_t0BA0FCB28DB9B894D90CD93CE0E261AC967A1FE9_il2cpp_TypeInfo_var)))).___AnchorHandle_1;
		return L_5;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::PlaneHandle(UnityEngine.XR.ARFoundation.ARPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_PlaneHandle_mFB4F12A9CB145FBF79BA3A0E7309994ECB259D33 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___plane0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaneNativePointerStruct info = (PlaneNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         plane.nativePtr,
		//         typeof(PlaneNativePointerStruct));
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = ___plane0;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = ARPlane_get_nativePtr_m0227A663EF6E1CC15D6A5BE2BF3D5EC21BCFFA25(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		// return info.PlaneHandle;
		intptr_t L_5 = ((*(PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5*)((PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5*)(PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5*)UnBox(L_4, PlaneNativePointerStruct_tB08A4AA7FCB9F10805FDE88F2FE0AA05EFF36DF5_il2cpp_TypeInfo_var)))).___PlaneHandle_1;
		return L_5;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.ARCoreHandleExtensions::FrameHandle(UnityEngine.XR.ARSubsystems.XRCameraFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreHandleExtensions_FrameHandle_mD1DB4141E98081077FCB0431ECBDE99ACEB7B31B (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 ___frame0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FrameNativePointerStruct info = (FrameNativePointerStruct)
		//     Marshal.PtrToStructure(
		//         frame.nativePtr,
		//         typeof(FrameNativePointerStruct));
		intptr_t L_0;
		L_0 = XRCameraFrame_get_nativePtr_m4DED9CE0A7333F6A1E5C4932A6C98A8A0DD9E62D_inline((&___frame0), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_0, L_2, NULL);
		// return info.FrameHandle;
		intptr_t L_4 = ((*(FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA*)((FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA*)(FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA*)UnBox(L_3, FrameNativePointerStruct_t13E23971493EE58567306804B1ED3683D33D83AA_il2cpp_TypeInfo_var)))).___FrameHandle_1;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::SetCachedData(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData_SetCachedData_mBFBEC2A381DFDB7057A9223A131D9EDBCCA6A356 (String_t* ___dataName0, RuntimeObject* ___dataValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dataValue is IntPtr)
		RuntimeObject* L_0 = ___dataValue1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, IntPtr_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _cachedData[dataName] = dataValue;
		il2cpp_codegen_runtime_class_init_inline(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ((CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_StaticFields*)il2cpp_codegen_static_fields_for(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var))->____cachedData_0;
		String_t* L_2 = ___dataName0;
		RuntimeObject* L_3 = ___dataValue1;
		NullCheck(L_1);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_1, L_2, L_3, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData_Reset_mCAEE7CD452F0E57EF970BE384EA3A23AA5BE2467 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cachedData.Clear();
		il2cpp_codegen_runtime_class_init_inline(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_StaticFields*)il2cpp_codegen_static_fields_for(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var))->____cachedData_0;
		NullCheck(L_0);
		Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB(L_0, Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CachedData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData__cctor_m0F3FFB9C3208DB963CA6F14BD47E5F96128E5C3B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<string, object> _cachedData = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		((CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_StaticFields*)il2cpp_codegen_static_fields_for(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var))->____cachedData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_StaticFields*)il2cpp_codegen_static_fields_for(CachedData_t517940A3522E2E48FD4980E4E1536CDF84C0D07E_il2cpp_TypeInfo_var))->____cachedData_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String[] Google.XR.ARCoreExtensions.Internal.DependentModuleBase::GetRuntimePermissions(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DependentModuleBase_GetRuntimePermissions_mAA5BD1B98F7DC2B90005A02B4F380C03C752AF55 (DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310* __this, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___sessionConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Array.Empty<string>();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.DependentModuleBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependentModuleBase__ctor_mBC3C199A26A24884133B0388DAC634E7D88A1058 (DependentModuleBase_t49084DB96DDE7716EA68D141F62D9CAFD06C3310* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Internal.IDependentModule> Google.XR.ARCoreExtensions.Internal.DependentModulesManager::GetModules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t54955D954398D6C34C95F0A09188E388BD45008A* DependentModulesManager_GetModules_m0230FD0742B71F6663F00425F1D2E3C16879E143 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindAll_m2E02969CD611EA3C239606E970D1A305F98D2E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE24EB3C85EDB11272ACA422006A17D2B288E786B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t54955D954398D6C34C95F0A09188E388BD45008A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CGetModulesU3Eb__0_m91FC6AF1AAD8D36F9FB1847F2D6338669340684E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* V_0 = NULL;
	{
		// if (_modules == null)
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_0 = ((DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_StaticFields*)il2cpp_codegen_static_fields_for(DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var))->____modules_0;
		if (L_0)
		{
			goto IL_004e;
		}
	}
	{
		U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* L_1 = (U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		U3CU3Ec__DisplayClass1_0__ctor_m75BB524F68EF97B74686AE0DDF5F9883F5C2FA1C(L_1, NULL);
		V_0 = L_1;
		// List<IDependentModule> modules = new List<IDependentModule>()
		// {
		//     new LocationModule(),
		//     new AuthenticationModule(),
		// };
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_2 = (List_1_t54955D954398D6C34C95F0A09188E388BD45008A*)il2cpp_codegen_object_new(List_1_t54955D954398D6C34C95F0A09188E388BD45008A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mE24EB3C85EDB11272ACA422006A17D2B288E786B(L_2, List_1__ctor_mE24EB3C85EDB11272ACA422006A17D2B288E786B_RuntimeMethod_var);
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_3 = L_2;
		LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90* L_4 = (LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90*)il2cpp_codegen_object_new(LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		LocationModule__ctor_m135935A0B75FEFD5BC77E83B634934915D2CC7FD(L_4, NULL);
		NullCheck(L_3);
		List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_inline(L_3, L_4, List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_RuntimeMethod_var);
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_5 = L_3;
		AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291* L_6 = (AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291*)il2cpp_codegen_object_new(AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AuthenticationModule__ctor_mF8151687B9E8A468C81CB9778C7FDDCB53FA5DC7(L_6, NULL);
		NullCheck(L_5);
		List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_inline(L_5, L_6, List_1_Add_m18120550F58A72DC19C0BA311B8DCF0FC9D63F4A_RuntimeMethod_var);
		// List<string> modulesEnabled = RuntimeConfig.Instance.ModulesEnabled;
		U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* L_7 = V_0;
		RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* L_8 = ((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_8);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = L_8->___ModulesEnabled_6;
		NullCheck(L_7);
		L_7->___modulesEnabled_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___modulesEnabled_0), (void*)L_9);
		// _modules = modules.FindAll(
		//     module => modulesEnabled.Contains(module.GetType().Name));
		U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* L_10 = V_0;
		Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F* L_11 = (Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F*)il2cpp_codegen_object_new(Predicate_1_tC916E736DA3C11CFCA0702B31660C90E58D46D8F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Predicate_1__ctor_m4878EA8D197763D9264830236A4E73BC9BB22916(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CGetModulesU3Eb__0_m91FC6AF1AAD8D36F9FB1847F2D6338669340684E_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_12;
		L_12 = List_1_FindAll_m2E02969CD611EA3C239606E970D1A305F98D2E11(L_5, L_11, List_1_FindAll_m2E02969CD611EA3C239606E970D1A305F98D2E11_RuntimeMethod_var);
		((DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_StaticFields*)il2cpp_codegen_static_fields_for(DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var))->____modules_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_StaticFields*)il2cpp_codegen_static_fields_for(DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var))->____modules_0), (void*)L_12);
	}

IL_004e:
	{
		// return _modules;
		List_1_t54955D954398D6C34C95F0A09188E388BD45008A* L_13 = ((DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_StaticFields*)il2cpp_codegen_static_fields_for(DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66_il2cpp_TypeInfo_var))->____modules_0;
		return L_13;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.DependentModulesManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependentModulesManager__ctor_mD7BA4EAFF4033575EEC1848298773DC419D0AEA3 (DependentModulesManager_t92BC4C2E0D381F7F4AE98C7A9401FD3FD9E7EC66* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m75BB524F68EF97B74686AE0DDF5F9883F5C2FA1C (U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Internal.DependentModulesManager/<>c__DisplayClass1_0::<GetModules>b__0(Google.XR.ARCoreExtensions.Internal.IDependentModule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3CGetModulesU3Eb__0_m91FC6AF1AAD8D36F9FB1847F2D6338669340684E (U3CU3Ec__DisplayClass1_0_tC1E36C59F095EEC1A3CB7B76E814327990E56A32* __this, RuntimeObject* ___module0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// module => modulesEnabled.Contains(module.GetType().Name));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___modulesEnabled_0;
		RuntimeObject* L_1 = ___module0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		NullCheck(L_0);
		bool L_4;
		L_4 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_3, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.AuthenticationModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationModule__ctor_mF8151687B9E8A468C81CB9778C7FDDCB53FA5DC7 (AuthenticationModule_t0291D4F8B5E62C7C507ABF8514FF05E731951291* __this, const RuntimeMethod* method) 
{
	{
		DependentModuleBase__ctor_mBC3C199A26A24884133B0388DAC634E7D88A1058(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String[] Google.XR.ARCoreExtensions.Internal.LocationModule::GetRuntimePermissions(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* LocationModule_GetRuntimePermissions_mE5CD23DCDB7096319FB2C575CF2CC5333874E460 (LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90* __this, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___sessionConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UseLocation(sessionConfig))
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_0 = ___sessionConfig0;
		bool L_1;
		L_1 = LocationModule_UseLocation_mB961F6E70EAF22368496BBC1128FD9DF57BE4C3E(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return new string[]
		// {
		//     "android.permission.ACCESS_FINE_LOCATION",
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		return L_3;
	}

IL_0017:
	{
		// return Array.Empty<string>();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Internal.LocationModule::UseLocation(Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationModule_UseLocation_mB961F6E70EAF22368496BBC1128FD9DF57BE4C3E (ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___sessionConfig0, const RuntimeMethod* method) 
{
	{
		// if (sessionConfig.GeospatialMode != GeospatialMode.Disabled)
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_0 = ___sessionConfig0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___GeospatialMode_5;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.LocationModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationModule__ctor_m135935A0B75FEFD5BC77E83B634934915D2CC7FD (LocationModule_tB9B73D0387F4B6DC5D92D7EF586D4919EE3BCB90* __this, const RuntimeMethod* method) 
{
	{
		DependentModuleBase__ctor_mBC3C199A26A24884133B0388DAC634E7D88A1058(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Internal.JarArtifact
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_pinvoke(const JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1& unmarshaled, JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___PackageIds_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PackageIds' of type 'JarArtifact'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PackageIds_3Exception, NULL);
}
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_pinvoke_back(const JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_pinvoke& marshaled, JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1& unmarshaled)
{
	Exception_t* ___PackageIds_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PackageIds' of type 'JarArtifact'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PackageIds_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Internal.JarArtifact
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_pinvoke_cleanup(JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Internal.JarArtifact
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_com(const JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1& unmarshaled, JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_com& marshaled)
{
	Exception_t* ___PackageIds_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PackageIds' of type 'JarArtifact'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PackageIds_3Exception, NULL);
}
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_com_back(const JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_com& marshaled, JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1& unmarshaled)
{
	Exception_t* ___PackageIds_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PackageIds' of type 'JarArtifact'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PackageIds_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Internal.JarArtifact
IL2CPP_EXTERN_C void JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshal_com_cleanup(JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1_marshaled_com& marshaled)
{
}
// System.Void Google.XR.ARCoreExtensions.Internal.JarArtifact::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JarArtifact__ctor_mE9787B9E9346F063FE56235D4EFF2D5D0BD15B5E (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, const RuntimeMethod* method) 
{
	{
		// this(group, artifact, version, null)
		String_t* L_0 = ___group0;
		String_t* L_1 = ___artifact1;
		String_t* L_2 = ___version2;
		JarArtifact__ctor_m664D9BA283DF6FD08EE71B45E711A114873BA65E(__this, L_0, L_1, L_2, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void JarArtifact__ctor_mE9787B9E9346F063FE56235D4EFF2D5D0BD15B5E_AdjustorThunk (RuntimeObject* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, const RuntimeMethod* method)
{
	JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1*>(__this + _offset);
	JarArtifact__ctor_mE9787B9E9346F063FE56235D4EFF2D5D0BD15B5E(_thisAdjusted, ___group0, ___artifact1, ___version2, method);
}
// System.Void Google.XR.ARCoreExtensions.Internal.JarArtifact::.ctor(System.String,System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JarArtifact__ctor_m664D9BA283DF6FD08EE71B45E711A114873BA65E (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___packages3, const RuntimeMethod* method) 
{
	{
		// this()
		il2cpp_codegen_initobj(__this, sizeof(JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1));
		// Group = group;
		String_t* L_0 = ___group0;
		__this->___Group_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Group_0), (void*)L_0);
		// Artifact = artifact;
		String_t* L_1 = ___artifact1;
		__this->___Artifact_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Artifact_1), (void*)L_1);
		// Version = version;
		String_t* L_2 = ___version2;
		__this->___Version_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Version_2), (void*)L_2);
		// PackageIds = packages;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___packages3;
		__this->___PackageIds_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PackageIds_3), (void*)L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void JarArtifact__ctor_m664D9BA283DF6FD08EE71B45E711A114873BA65E_AdjustorThunk (RuntimeObject* __this, String_t* ___group0, String_t* ___artifact1, String_t* ___version2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___packages3, const RuntimeMethod* method)
{
	JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1*>(__this + _offset);
	JarArtifact__ctor_m664D9BA283DF6FD08EE71B45E711A114873BA65E(_thisAdjusted, ___group0, ___artifact1, ___version2, ___packages3, method);
}
// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JarArtifact_get_Key_m86A1E2711CA7442FBFDBB6C0C90144149D63BE93 (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Key => Group + ":" + Artifact + ":" + Version;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2 = __this->___Group_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5 = __this->___Artifact_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = __this->___Version_2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		String_t* L_9;
		L_9 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_7, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* JarArtifact_get_Key_m86A1E2711CA7442FBFDBB6C0C90144149D63BE93_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = JarArtifact_get_Key_m86A1E2711CA7442FBFDBB6C0C90144149D63BE93(_thisAdjusted, method);
	return _returnValue;
}
// System.String Google.XR.ARCoreExtensions.Internal.JarArtifact::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JarArtifact_ToString_m0F084C2B0972CAE0B16888FA12900CC834AFB184 (JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* __this, const RuntimeMethod* method) 
{
	{
		// return Key;
		String_t* L_0;
		L_0 = JarArtifact_get_Key_m86A1E2711CA7442FBFDBB6C0C90144149D63BE93(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* JarArtifact_ToString_m0F084C2B0972CAE0B16888FA12900CC834AFB184_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JarArtifact_t0E1D93467393006342BA46AA1C17056965697EA1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = JarArtifact_ToString_m0F084C2B0972CAE0B16888FA12900CC834AFB184(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.DllImportNoop::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllImportNoop__ctor_m41A01B82AB3EF4E808D1B363932D7E5B3A7786A9 (DllImportNoop_tCB72716B56408EF7AE37752B03A13D21A83CF6C2* __this, String_t* ___dllName0, const RuntimeMethod* method) 
{
	{
		// public DllImportNoop(string dllName)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.CloudAnchorState Google.XR.ARCoreExtensions.Internal.Translators::ToCloudAnchorState(Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToCloudAnchorState_m38EFAEA4D09F9AC0C61706C3B09F4C950880561B (int32_t ___state0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___state0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)-10))))
		{
			case 0:
			{
				goto IL_0054;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_004d;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_0049;
			}
			case 7:
			{
				goto IL_0057;
			}
			case 8:
			{
				goto IL_0047;
			}
			case 9:
			{
				goto IL_0045;
			}
			case 10:
			{
				goto IL_003f;
			}
			case 11:
			{
				goto IL_0041;
			}
			case 12:
			{
				goto IL_0043;
			}
		}
	}
	{
		goto IL_0057;
	}

IL_003f:
	{
		// return CloudAnchorState.None;
		return (int32_t)(0);
	}

IL_0041:
	{
		// return CloudAnchorState.TaskInProgress;
		return (int32_t)(1);
	}

IL_0043:
	{
		// return CloudAnchorState.Success;
		return (int32_t)(2);
	}

IL_0045:
	{
		// return CloudAnchorState.ErrorInternal;
		return (int32_t)(3);
	}

IL_0047:
	{
		// return CloudAnchorState.ErrorNotAuthorized;
		return (int32_t)(4);
	}

IL_0049:
	{
		// return CloudAnchorState.ErrorResourceExhausted;
		return (int32_t)(5);
	}

IL_004b:
	{
		// return CloudAnchorState.ErrorHostingDatasetProcessingFailed;
		return (int32_t)(6);
	}

IL_004d:
	{
		// return CloudAnchorState.ErrorResolvingCloudIdNotFound;
		return (int32_t)(7);
	}

IL_004f:
	{
		// return CloudAnchorState.ErrorResolvingPackageTooOld;
		return (int32_t)(8);
	}

IL_0051:
	{
		// return CloudAnchorState.ErrorResolvingPackageTooNew;
		return (int32_t)(((int32_t)9));
	}

IL_0054:
	{
		// return CloudAnchorState.ErrorHostingServiceUnavailable;
		return (int32_t)(((int32_t)10));
	}

IL_0057:
	{
		// return CloudAnchorState.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.Internal.Translators::ToTrackingState(Google.XR.ARCoreExtensions.Internal.ApiTrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToTrackingState_mFE007F0722633E9F4CBEBA85B24F56B368F8C222 (int32_t ___state0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___state0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___state0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1))) > ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_000f;
	}

IL_000b:
	{
		// return TrackingState.Tracking;
		return (int32_t)(2);
	}

IL_000d:
	{
		// return TrackingState.None;
		return (int32_t)(0);
	}

IL_000f:
	{
		// return TrackingState.None;
		return (int32_t)(0);
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.Translators::ToApiPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 Translators_ToApiPose_mAEDF4015BD35F51F6975ADB221313EA4E7FF2E94 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___unityPose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Matrix4x4 glWorld_T_glLocal =
		//     Matrix4x4.TRS(unityPose.position, unityPose.rotation, Vector3.one);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___unityPose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___unityPose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2.___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_1, L_3, L_4, NULL);
		V_0 = L_5;
		// Matrix4x4 unityWorld_T_unityLocal =
		//     _unityWorldToGLWorld * glWorld_T_glLocal * _unityWorldToGLWorldInverse;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8;
		L_8 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_6, L_7, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldInverse_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_8, L_9, NULL);
		V_1 = L_10;
		// Vector3 position = unityWorld_T_unityLocal.GetColumn(3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_11, NULL);
		V_2 = L_12;
		// Quaternion rotation = Quaternion.LookRotation(unityWorld_T_unityLocal.GetColumn(2),
		//     unityWorld_T_unityLocal.GetColumn(1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_13, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_14, L_16, NULL);
		V_3 = L_17;
		// apiPose.X = position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		float L_19 = L_18.___x_2;
		(&V_4)->___X_4 = L_19;
		// apiPose.Y = position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		float L_21 = L_20.___y_3;
		(&V_4)->___Y_5 = L_21;
		// apiPose.Z = position.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		float L_23 = L_22.___z_4;
		(&V_4)->___Z_6 = L_23;
		// apiPose.Qx = rotation.x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = V_3;
		float L_25 = L_24.___x_0;
		(&V_4)->___Qx_0 = L_25;
		// apiPose.Qy = rotation.y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = V_3;
		float L_27 = L_26.___y_1;
		(&V_4)->___Qy_1 = L_27;
		// apiPose.Qz = rotation.z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = V_3;
		float L_29 = L_28.___z_2;
		(&V_4)->___Qz_2 = L_29;
		// apiPose.Qw = rotation.w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_3;
		float L_31 = L_30.___w_3;
		(&V_4)->___Qw_3 = L_31;
		// return apiPose;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_32 = V_4;
		return L_32;
	}
}
// UnityEngine.Pose Google.XR.ARCoreExtensions.Internal.Translators::ToUnityPose(Google.XR.ARCoreExtensions.Internal.ApiPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Translators_ToUnityPose_mED7D86C244B4224216E092FDB0AC9638310BB44A (ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 ___apiPose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Matrix4x4 glWorld_T_glLocal =
		//     Matrix4x4.TRS(
		//         new Vector3(apiPose.X, apiPose.Y, apiPose.Z),
		//         new Quaternion(apiPose.Qx, apiPose.Qy, apiPose.Qz, apiPose.Qw), Vector3.one);
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_0 = ___apiPose0;
		float L_1 = L_0.___X_4;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_2 = ___apiPose0;
		float L_3 = L_2.___Y_5;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_4 = ___apiPose0;
		float L_5 = L_4.___Z_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_7 = ___apiPose0;
		float L_8 = L_7.___Qx_0;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_9 = ___apiPose0;
		float L_10 = L_9.___Qy_1;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_11 = ___apiPose0;
		float L_12 = L_11.___Qz_2;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_13 = ___apiPose0;
		float L_14 = L_13.___Qw_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_15), L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17;
		L_17 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_6, L_15, L_16, NULL);
		V_0 = L_17;
		// Matrix4x4 unityWorld_T_unityLocal =
		//     _unityWorldToGLWorld * glWorld_T_glLocal * _unityWorldToGLWorldInverse;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20;
		L_20 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_18, L_19, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldInverse_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22;
		L_22 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_20, L_21, NULL);
		V_1 = L_22;
		// Vector3 position = unityWorld_T_unityLocal.GetColumn(3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
		L_23 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_23, NULL);
		// Quaternion rotation = Quaternion.LookRotation(unityWorld_T_unityLocal.GetColumn(2),
		//     unityWorld_T_unityLocal.GetColumn(1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		L_25 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_25, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27;
		L_27 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&V_1), 1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_26, L_28, NULL);
		V_2 = L_29;
		// return new Pose(position, rotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_31), L_24, L_30, /*hidden argument*/NULL);
		return L_31;
	}
}
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingStatus(Google.XR.ARCoreExtensions.Internal.ApiRecordingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingStatus_mD30D1A42E4D8F8E0692964254B3C54CB33ADC91C (int32_t ___apiStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiRecordingStatus_tBCCB8BE528051E12A270A86A8237C86219C0F10F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A44329ED3FC05608086EDA5D34229E1DE304F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___apiStatus0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_0014;
			}
			case 2:
			{
				goto IL_0016;
			}
		}
	}
	{
		goto IL_001a;
	}

IL_0014:
	{
		// return RecordingStatus.OK;
		return (int32_t)(1);
	}

IL_0016:
	{
		// return RecordingStatus.IOError;
		return (int32_t)(2);
	}

IL_0018:
	{
		// return RecordingStatus.None;
		return (int32_t)(0);
	}

IL_001a:
	{
		// Debug.LogErrorFormat("Unrecognized ApiRecordingStatus value {0}", apiStatus);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___apiStatus0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(ApiRecordingStatus_tBCCB8BE528051E12A270A86A8237C86219C0F10F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral86A44329ED3FC05608086EDA5D34229E1DE304F7, L_2, NULL);
		// return RecordingStatus.None;
		return (int32_t)(0);
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.Translators::ToRecordingResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToRecordingResult_mD3B3E3139047EDF78838E1117606F0FBB09DCDDE (int32_t ___apiArStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245880CA750529601C4FF228E2CF3A8ECA5C242B);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___apiArStatus0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)-20))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___apiArStatus0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-23))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___apiArStatus0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-20))))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0020;
	}

IL_0011:
	{
		int32_t L_3 = ___apiArStatus0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = ___apiArStatus0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		// return RecordingResult.OK;
		return (int32_t)(0);
	}

IL_001a:
	{
		// return RecordingResult.ErrorIllegalState;
		return (int32_t)(4);
	}

IL_001c:
	{
		// return RecordingResult.ErrorInvalidArgument;
		return (int32_t)(2);
	}

IL_001e:
	{
		// return RecordingResult.ErrorRecordingFailed;
		return (int32_t)(3);
	}

IL_0020:
	{
		// Debug.LogErrorFormat(
		//     "Recording failed with unexpected status: {0}", apiArStatus);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		int32_t L_7 = ___apiArStatus0;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral245880CA750529601C4FF228E2CF3A8ECA5C242B, L_6, NULL);
		// return RecordingResult.ErrorRecordingFailed;
		return (int32_t)(3);
	}
}
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackStatus(Google.XR.ARCoreExtensions.Internal.ApiPlaybackStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackStatus_mD878E75B15221C139DBF210C35AA5A87093A7456 (int32_t ___apiStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiPlaybackStatus_tD81C6E023F517EB4648A1623047E708DBB571C6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D245519C02FC2DAAFDBB89D9EE851632CD173B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___apiStatus0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_001c;
			}
			case 3:
			{
				goto IL_001e;
			}
		}
	}
	{
		goto IL_0020;
	}

IL_0018:
	{
		// return PlaybackStatus.None;
		return (int32_t)(0);
	}

IL_001a:
	{
		// return PlaybackStatus.OK;
		return (int32_t)(1);
	}

IL_001c:
	{
		// return PlaybackStatus.IOError;
		return (int32_t)(2);
	}

IL_001e:
	{
		// return PlaybackStatus.FinishedSuccess;
		return (int32_t)(3);
	}

IL_0020:
	{
		// Debug.LogErrorFormat("Unrecognized ApiPlaybackStatus value {0}", apiStatus);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___apiStatus0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(ApiPlaybackStatus_tD81C6E023F517EB4648A1623047E708DBB571C6A_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral4D245519C02FC2DAAFDBB89D9EE851632CD173B6, L_2, NULL);
		// return PlaybackStatus.None;
		return (int32_t)(0);
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.Translators::ToPlaybackResult(Google.XR.ARCoreExtensions.Internal.ApiArStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToPlaybackResult_mF0141086E69ED5D59F1E0280A93CC86ED8E5C2AD (int32_t ___apiArStatus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBF791BC4E29217DF89E7DCBF6C32D5FF5C440C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___apiArStatus0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)-24))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___apiArStatus0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-25))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___apiArStatus0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-24))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0021;
	}

IL_0011:
	{
		int32_t L_3 = ___apiArStatus0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_4 = ___apiArStatus0;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		// return PlaybackResult.OK;
		return (int32_t)(0);
	}

IL_001b:
	{
		// return PlaybackResult.ErrorSessionNotPaused;
		return (int32_t)(2);
	}

IL_001d:
	{
		// return PlaybackResult.ErrorSessionUnsupported;
		return (int32_t)(3);
	}

IL_001f:
	{
		// return PlaybackResult.ErrorPlaybackFailed;
		return (int32_t)(4);
	}

IL_0021:
	{
		// Debug.LogErrorFormat(
		//     "Playback dataset failed with unexpected status: {0}", apiArStatus);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		int32_t L_7 = ___apiArStatus0;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteralFBF791BC4E29217DF89E7DCBF6C32D5FF5C440C0, L_6, NULL);
		// return PlaybackResult.ErrorPlaybackFailed;
		return (int32_t)(4);
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiGeospatialMode Google.XR.ARCoreExtensions.Internal.Translators::ToApiGeospatialMode(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Translators_ToApiGeospatialMode_m414142068E71C10A97CAEFFDB7084CF1A85BDDB8 (int32_t ___mode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialMode_t46A5F0F24B98DBC4804841E68DA5AEF97ACEFC7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6DA909F119A763D12E195D67835E0D67252C45E);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___mode0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___mode0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_000b;
		}
	}
	{
		// return ApiGeospatialMode.Enabled;
		return (int32_t)(2);
	}

IL_0009:
	{
		// return ApiGeospatialMode.Disabled;
		return (int32_t)(0);
	}

IL_000b:
	{
		// Debug.LogErrorFormat("Unrecognized GeospatialMode value: {0}", mode);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___mode0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(GeospatialMode_t46A5F0F24B98DBC4804841E68DA5AEF97ACEFC7B_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteralA6DA909F119A763D12E195D67835E0D67252C45E, L_3, NULL);
		// return ApiGeospatialMode.Disabled;
		return (int32_t)(0);
	}
}
// UnityEngine.Quaternion Google.XR.ARCoreExtensions.Internal.Translators::ToUnityQuaternion(Google.XR.ARCoreExtensions.Internal.ApiQuaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Translators_ToUnityQuaternion_m551576A1BC6B70693053A18B5BC03BF141E091B4 (ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 ___apiQuaternion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var glWorldQuaternion = new Quaternion(
		//     apiQuaternion.Qx, apiQuaternion.Qy, apiQuaternion.Qz, apiQuaternion.Qw);
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_0 = ___apiQuaternion0;
		float L_1 = L_0.___Qx_0;
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_2 = ___apiQuaternion0;
		float L_3 = L_2.___Qy_1;
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_4 = ___apiQuaternion0;
		float L_5 = L_4.___Qz_2;
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_6 = ___apiQuaternion0;
		float L_7 = L_6.___Qw_3;
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&V_0), L_1, L_3, L_5, L_7, NULL);
		// return _unityWorldToGLWorldRotation * glWorldQuaternion;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldRotation_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_8, L_9, NULL);
		return L_10;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiQuaternion Google.XR.ARCoreExtensions.Internal.Translators::ToApiQuaternion(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 Translators_ToApiQuaternion_m19583F5FB6E9910B7257D77FD16EBCC577324187 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Quaternion glWorldQuaternion = _glWorldToUnityWorldRotation * quaternion;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____glWorldToUnityWorldRotation_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___quaternion0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// var apiQuaternion = new ApiQuaternion();
		il2cpp_codegen_initobj((&V_1), sizeof(ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063));
		// apiQuaternion.Qx = glWorldQuaternion.x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		float L_4 = L_3.___x_0;
		(&V_1)->___Qx_0 = L_4;
		// apiQuaternion.Qy = glWorldQuaternion.y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		float L_6 = L_5.___y_1;
		(&V_1)->___Qy_1 = L_6;
		// apiQuaternion.Qz = glWorldQuaternion.z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		float L_8 = L_7.___z_2;
		(&V_1)->___Qz_2 = L_8;
		// apiQuaternion.Qw = glWorldQuaternion.w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		float L_10 = L_9.___w_3;
		(&V_1)->___Qw_3 = L_10;
		// return apiQuaternion;
		ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063 L_11 = V_1;
		return L_11;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.Translators::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translators__cctor_m0C7D22C076F5629862E5556EC015C61857F9E288 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Matrix4x4 _unityWorldToGLWorld
		//     = Matrix4x4.Scale(new Vector3(1, 1, -1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_0, NULL);
		((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0 = L_1;
		// private static readonly Matrix4x4 _unityWorldToGLWorldInverse
		//     = _unityWorldToGLWorld.inverse;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0), NULL);
		((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldInverse_1 = L_2;
		// private static readonly Quaternion _unityWorldToGLWorldRotation
		//     = Quaternion.LookRotation(
		//         _unityWorldToGLWorld.GetColumn(2), _unityWorldToGLWorld.GetColumn(1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0), 2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_3, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorld_0), 1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_4, L_6, NULL);
		((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldRotation_2 = L_7;
		// private static readonly Quaternion _glWorldToUnityWorldRotation
		//     = Quaternion.Inverse(_unityWorldToGLWorldRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____unityWorldToGLWorldRotation_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_8, NULL);
		((Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_StaticFields*)il2cpp_codegen_static_fields_for(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var))->____glWorldToUnityWorldRotation_3 = L_9;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.Internal.IOSSupportManager Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* IOSSupportManager_get_Instance_m9EBEA0E17E0E9E80692685B9392D36BB02280A4C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0 = ((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// _instance = new IOSSupportManager();
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_1 = (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A*)il2cpp_codegen_object_new(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IOSSupportManager__ctor_m5F9060770B2F4936349E37FA3A27ECAA4BCF8281(L_1, NULL);
		((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1), (void*)L_1);
		// _instance.CreateARCoreSession();
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_2 = ((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1;
		NullCheck(L_2);
		IOSSupportManager_CreateARCoreSession_m5F7A18E2DA33EA4EA68FDBCAA5A3F83EC7574752(L_2, NULL);
	}

IL_001b:
	{
		// return _instance;
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_3 = ((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1;
		return L_3;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_ARCoreSessionHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IOSSupportManager_get_ARCoreSessionHandle_m67CADC8436E54993C15C8F6E59EF98A0C58A39E7 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	{
		// return _sessionHandle;
		intptr_t L_0 = __this->____sessionHandle_5;
		return L_0;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.IOSSupportManager::get_ARCoreFrameHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IOSSupportManager_get_ARCoreFrameHandle_mE1946F5E1209F4FA74DCF1D338025DBCF6748392 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	{
		// return _frameHandle;
		intptr_t L_0 = __this->____frameHandle_6;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::SetEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_SetEnabled_m55B1AAE70525F1BE09B5F3022B60E4FF99C39C55 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, bool ___enabled0, const RuntimeMethod* method) 
{
	{
		// _isEnabled = enabled;
		bool L_0 = ___enabled0;
		__this->____isEnabled_2 = L_0;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::UpdateARSession(UnityEngine.XR.ARFoundation.ARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_UpdateARSession_m844B9FA1A479F18D5BE1729CB87DC3FD3DFB32E4 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___session0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (session == null)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_0 = ___session0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// ResetARCoreSession();
		IOSSupportManager_ResetARCoreSession_mEED51FA0A1FA15BE50DD5A14A0FEAB9C3B819C21(__this, NULL);
	}

IL_000f:
	{
		// _arKitSession = session;
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_2 = ___session0;
		__this->____arKitSession_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arKitSession_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::UpdateCameraManager(UnityEngine.XR.ARFoundation.ARCameraManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_UpdateCameraManager_m0CD95D7B0F82863DDD86F974DED3D70FECA46D62 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___cameraManager0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSSupportManager_OnFrameUpdate_m28CCEF93F31D72910AF7B463D7144B855ED527BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_cameraManager == cameraManager)
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->____cameraManager_8;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_1 = ___cameraManager0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (_cameraManager != null)
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_3 = __this->____cameraManager_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// cameraManager.frameReceived -= OnFrameUpdate;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_5 = ___cameraManager0;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_6 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_6, __this, (intptr_t)((void*)IOSSupportManager_OnFrameUpdate_m28CCEF93F31D72910AF7B463D7144B855ED527BD_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D(L_5, L_6, NULL);
	}

IL_002f:
	{
		// _cameraManager = cameraManager;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_7 = ___cameraManager0;
		__this->____cameraManager_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cameraManager_8), (void*)L_7);
		// if (_cameraManager != null)
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_8 = __this->____cameraManager_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		// _cameraManager.frameReceived += OnFrameUpdate;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_10 = __this->____cameraManager_8;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_11 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_11, __this, (intptr_t)((void*)IOSSupportManager_OnFrameUpdate_m28CCEF93F31D72910AF7B463D7144B855ED527BD_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1(L_10, L_11, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ResetARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_ResetARCoreSession_mEED51FA0A1FA15BE50DD5A14A0FEAB9C3B819C21 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FC29683F6E19781A0897EEB405C7FEA0CAB7A50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_sessionHandle != IntPtr.Zero)
		intptr_t L_0 = __this->____sessionHandle_5;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		// Debug.Log("Reset cross platform ARCoreSession.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1FC29683F6E19781A0897EEB405C7FEA0CAB7A50, NULL);
		// if (_frameHandle != IntPtr.Zero)
		intptr_t L_3 = __this->____frameHandle_6;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// FrameApi.ReleaseFrame(_frameHandle);
		intptr_t L_6 = __this->____frameHandle_6;
		FrameApi_ReleaseFrame_mBD586EA487F9AFF025004CF0B5ABE1AEAAB7D062(L_6, NULL);
		// _frameHandle = IntPtr.Zero;
		intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____frameHandle_6 = L_7;
	}

IL_0044:
	{
		// ExternApi.ArSession_destroy(_sessionHandle);
		intptr_t L_8 = __this->____sessionHandle_5;
		ExternApi_ArSession_destroy_m79588E91F398D1916FFB8E5CD5F33E2541036931(L_8, NULL);
		// _sessionHandle = IntPtr.Zero;
		intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____sessionHandle_5 = L_9;
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::ResetInstanceAndSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_ResetInstanceAndSession_m2F1CEC6981E7E758FD2F86C77E629B6E162D8FAD (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetARCoreSession();
		IOSSupportManager_ResetARCoreSession_mEED51FA0A1FA15BE50DD5A14A0FEAB9C3B819C21(__this, NULL);
		// if (_instance != null)
		IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* L_0 = ((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _instance = null;
		((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1 = (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_StaticFields*)il2cpp_codegen_static_fields_for(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A_il2cpp_TypeInfo_var))->____instance_1), (void*)(IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A*)NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::CreateARCoreSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_CreateARCoreSession_m5F7A18E2DA33EA4EA68FDBCAA5A3F83EC7574752 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC6D3D4D29E5DDD25AA66877ECD85907DE001485);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE72C6333E41274633A472EB00E664E60390F9953);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* G_B2_0 = NULL;
	IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* G_B3_1 = NULL;
	{
		// ResetARCoreSession();
		IOSSupportManager_ResetARCoreSession_mEED51FA0A1FA15BE50DD5A14A0FEAB9C3B819C21(__this, NULL);
		// _iosCloudServicesApiKey = RuntimeConfig.Instance == null ?
		//     string.Empty : RuntimeConfig.Instance.IOSCloudServicesApiKey;
		RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* L_0 = ((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0020;
		}
	}
	{
		RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* L_2 = ((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_2);
		String_t* L_3 = L_2->___IOSCloudServicesApiKey_5;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0020:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		G_B3_1->____iosCloudServicesApiKey_3 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____iosCloudServicesApiKey_3), (void*)G_B3_0);
		// Debug.Log("Creating a cross platform ARCore session with IOS Cloud Services API Key:" +
		//     _iosCloudServicesApiKey);
		String_t* L_5 = __this->____iosCloudServicesApiKey_3;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE72C6333E41274633A472EB00E664E60390F9953, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// var status = ExternApi.ArSession_create(
		//     _iosCloudServicesApiKey, null, ref _sessionHandle);
		String_t* L_7 = __this->____iosCloudServicesApiKey_3;
		intptr_t* L_8 = (&__this->____sessionHandle_5);
		int32_t L_9;
		L_9 = ExternApi_ArSession_create_mE5E5BFD542B1873F6D3D3BE754B0242EB3BB4694(L_7, (String_t*)NULL, L_8, NULL);
		V_0 = L_9;
		// if (status != ApiArStatus.Success)
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to create a cross platform ARCore session with " +
		//     "error: {0}.", status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteralBC6D3D4D29E5DDD25AA66877ECD85907DE001485, L_12, NULL);
		// return;
		return;
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::OnFrameUpdate(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager_OnFrameUpdate_m28CCEF93F31D72910AF7B463D7144B855ED527BD (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC ___frameEventArgs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_m4A245DFB34D4441FAB40F919D346300387FDD414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B13EAD05D03F70A5E4B127342469A013FE345E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97737379DB2CF719EFFC9E4F6C55519041321878);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC97C2FBB5C80543B8895530F2123C3D6F58ACCB);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!_isEnabled)
		bool L_0 = __this->____isEnabled_2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_sessionHandle == IntPtr.Zero)
		intptr_t L_1 = __this->____sessionHandle_5;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// if (_frameHandle != IntPtr.Zero)
		intptr_t L_4 = __this->____frameHandle_6;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// FrameApi.ReleaseFrame(_frameHandle);
		intptr_t L_7 = __this->____frameHandle_6;
		FrameApi_ReleaseFrame_mBD586EA487F9AFF025004CF0B5ABE1AEAAB7D062(L_7, NULL);
		// _frameHandle = IntPtr.Zero;
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____frameHandle_6 = L_8;
	}

IL_0044:
	{
		// if (_arKitSession != null && _cameraManager != null && _arKitSession.enabled)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_9 = __this->____arKitSession_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_01a9;
		}
	}
	{
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_11 = __this->____cameraManager_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_01a9;
		}
	}
	{
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_13 = __this->____arKitSession_7;
		NullCheck(L_13);
		bool L_14;
		L_14 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_13, NULL);
		if (!L_14)
		{
			goto IL_01a9;
		}
	}
	{
		// var cameraParams = new XRCameraParams
		// {
		//     zNear = _cameraManager.GetComponent<Camera>().nearClipPlane,
		//     zFar = _cameraManager.GetComponent<Camera>().farClipPlane,
		//     screenWidth = Screen.width,
		//     screenHeight = Screen.height,
		//     screenOrientation = Screen.orientation
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40));
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_15 = __this->____cameraManager_8;
		NullCheck(L_15);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16;
		L_16 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_15, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_16);
		float L_17;
		L_17 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_16, NULL);
		XRCameraParams_set_zNear_m13DFECBAE558037DEBE998F3EFF2E1C6372EE6E0_inline((&V_3), L_17, NULL);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_18 = __this->____cameraManager_8;
		NullCheck(L_18);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19;
		L_19 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_18, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_19);
		float L_20;
		L_20 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_19, NULL);
		XRCameraParams_set_zFar_mA528373BCB66A9DE2A393512B883B932AB02D600_inline((&V_3), L_20, NULL);
		int32_t L_21;
		L_21 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		XRCameraParams_set_screenWidth_mA367A9BD005F2F052549E9B509F4D41F276CA021_inline((&V_3), ((float)L_21), NULL);
		int32_t L_22;
		L_22 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		XRCameraParams_set_screenHeight_m7F6C7A3B7F3D7AEBE074A19FF20EF3DDACB79DE9_inline((&V_3), ((float)L_22), NULL);
		int32_t L_23;
		L_23 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		XRCameraParams_set_screenOrientation_m9AA6D552ED0B67E9560CDF2C775FC27AA7A83A07_inline((&V_3), L_23, NULL);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_24 = V_3;
		V_0 = L_24;
		// if (!_cameraManager.subsystem.TryGetLatestFrame(
		//         cameraParams, out XRCameraFrame frame))
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_25 = __this->____cameraManager_8;
		NullCheck(L_25);
		XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* L_26;
		L_26 = SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_inline(L_25, SubsystemLifecycleManager_3_get_subsystem_mAB9AF08EFAC1D5A00968D0165B0F765823A407BC_RuntimeMethod_var);
		XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40 L_27 = V_0;
		NullCheck(L_26);
		bool L_28;
		L_28 = XRCameraSubsystem_TryGetLatestFrame_m0C289061CF62517D75F72DF57CDAB1B1DCEF1B58(L_26, L_27, (&V_1), NULL);
		if (L_28)
		{
			goto IL_00f4;
		}
	}
	{
		// Debug.LogWarning("XRCamera's latest frame is not available now.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralBC97C2FBB5C80543B8895530F2123C3D6F58ACCB, NULL);
		// return;
		return;
	}

IL_00f4:
	{
		// if (frame.timestampNs == 0 || frame.FrameHandle() == IntPtr.Zero)
		int64_t L_29;
		L_29 = XRCameraFrame_get_timestampNs_m93571F53415C7DC6195854F3297E95D2E55A4DFB_inline((&V_1), NULL);
		if (!L_29)
		{
			goto IL_010f;
		}
	}
	{
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_30 = V_1;
		intptr_t L_31;
		L_31 = ARCoreHandleExtensions_FrameHandle_mD1DB4141E98081077FCB0431ECBDE99ACEB7B31B(L_30, NULL);
		intptr_t L_32 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_33;
		L_33 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_31, L_32, NULL);
		if (!L_33)
		{
			goto IL_011a;
		}
	}

IL_010f:
	{
		// Debug.LogWarning("ARKit Plugin Frame is not ready.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral97737379DB2CF719EFFC9E4F6C55519041321878, NULL);
		// return;
		return;
	}

IL_011a:
	{
		// var status = ExternApi.ArSession_updateAndAcquireArFrame(
		//     _sessionHandle, frame.FrameHandle(), ref _frameHandle);
		intptr_t L_34 = __this->____sessionHandle_5;
		XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531 L_35 = V_1;
		intptr_t L_36;
		L_36 = ARCoreHandleExtensions_FrameHandle_mD1DB4141E98081077FCB0431ECBDE99ACEB7B31B(L_35, NULL);
		intptr_t* L_37 = (&__this->____frameHandle_6);
		int32_t L_38;
		L_38 = ExternApi_ArSession_updateAndAcquireArFrame_m4EAA4F9B1F502DDFA36528653BEDBB43E5EAA1CD(L_34, L_36, L_37, NULL);
		V_2 = L_38;
		// if (status != ApiArStatus.Success)
		int32_t L_39 = V_2;
		if (!L_39)
		{
			goto IL_014f;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to update and acquire ARFrame with error: " +
		//     "{0}", status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_40;
		int32_t L_42 = V_2;
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral5B13EAD05D03F70A5E4B127342469A013FE345E8, L_41, NULL);
		// return;
		return;
	}

IL_014f:
	{
		// if (ARCoreExtensions._instance.ARCoreExtensionsConfig != null &&
		//     !ARCoreExtensions._instance.ARCoreExtensionsConfig.Equals(_cachedConfig))
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_45;
		L_45 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_45);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_46 = L_45->___ARCoreExtensionsConfig_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_46, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_47)
		{
			goto IL_01a9;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_48;
		L_48 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_48);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_49 = L_48->___ARCoreExtensionsConfig_7;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_50 = __this->____cachedConfig_4;
		NullCheck(L_49);
		bool L_51;
		L_51 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_49, L_50);
		if (L_51)
		{
			goto IL_01a9;
		}
	}
	{
		// _cachedConfig = ScriptableObject.CreateInstance<ARCoreExtensionsConfig>();
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_52;
		L_52 = ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_m4A245DFB34D4441FAB40F919D346300387FDD414(ScriptableObject_CreateInstance_TisARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD_m4A245DFB34D4441FAB40F919D346300387FDD414_RuntimeMethod_var);
		__this->____cachedConfig_4 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cachedConfig_4), (void*)L_52);
		// _cachedConfig.CopyFrom(ARCoreExtensions._instance.ARCoreExtensionsConfig);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_53 = __this->____cachedConfig_4;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_54;
		L_54 = ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline(NULL);
		NullCheck(L_54);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_55 = L_54->___ARCoreExtensionsConfig_7;
		NullCheck(L_53);
		ARCoreExtensionsConfig_CopyFrom_m5A59CD27FC92FC881121EA7203CFEB0A90C0FCBA(L_53, L_55, NULL);
		// ConfigApi.ConfigureSession(_sessionHandle, _cachedConfig);
		intptr_t L_56 = __this->____sessionHandle_5;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_57 = __this->____cachedConfig_4;
		ConfigApi_ConfigureSession_mA9BBBE680C620E309D4AB5F5281965AD57761E18(L_56, L_57, NULL);
	}

IL_01a9:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSSupportManager__ctor_m5F9060770B2F4936349E37FA3A27ECAA4BCF8281 (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _iosCloudServicesApiKey = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____iosCloudServicesApiKey_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____iosCloudServicesApiKey_3), (void*)L_0);
		// private IntPtr _sessionHandle = IntPtr.Zero;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____sessionHandle_5 = L_1;
		// private IntPtr _frameHandle = IntPtr.Zero;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____frameHandle_6 = L_2;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_create(System.String,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_create_mE5E5BFD542B1873F6D3D3BE754B0242EB3BB4694 (String_t* ___apiKey0, String_t* ___bundleIdentifier1, intptr_t* ___sessionHandle2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, intptr_t*);

	// Marshaling of parameter '___apiKey0' to native representation
	char* ____apiKey0_marshaled = NULL;
	____apiKey0_marshaled = il2cpp_codegen_marshal_string(___apiKey0);

	// Marshaling of parameter '___bundleIdentifier1' to native representation
	char* ____bundleIdentifier1_marshaled = NULL;
	____bundleIdentifier1_marshaled = il2cpp_codegen_marshal_string(___bundleIdentifier1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_create)(____apiKey0_marshaled, ____bundleIdentifier1_marshaled, ___sessionHandle2);

	// Marshaling cleanup of parameter '___apiKey0' native representation
	il2cpp_codegen_marshal_free(____apiKey0_marshaled);
	____apiKey0_marshaled = NULL;

	// Marshaling cleanup of parameter '___bundleIdentifier1' native representation
	il2cpp_codegen_marshal_free(____bundleIdentifier1_marshaled);
	____bundleIdentifier1_marshaled = NULL;

	return returnValue;
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_updateAndAcquireArFrame(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_updateAndAcquireArFrame_m4EAA4F9B1F502DDFA36528653BEDBB43E5EAA1CD (intptr_t ___sessionHandle0, intptr_t ___arkitFrameHandle1, intptr_t* ___arFrame2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_updateAndAcquireArFrame)(___sessionHandle0, ___arkitFrameHandle1, ___arFrame2);

	return returnValue;
}
// System.Void Google.XR.ARCoreExtensions.Internal.IOSSupportManager/ExternApi::ArSession_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_destroy_m79588E91F398D1916FFB8E5CD5F33E2541036931 (intptr_t ___session0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArSession_destroy)(___session0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.DynamicHelpAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicHelpAttribute__ctor_mD493B6B9447763F41B5630672AB1DB79D999D0DD (DynamicHelpAttribute_t7D9FB92D3342CA44B7356C6F94244481F49249C1* __this, String_t* ___checkingFunction0, const RuntimeMethod* method) 
{
	{
		// public DynamicHelpAttribute(string checkingFunction)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// CheckingFunction = checkingFunction;
		String_t* L_0 = ___checkingFunction0;
		__this->___CheckingFunction_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CheckingFunction_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.EnumFlagsAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumFlagsAttribute__ctor_mDD9EEC3C00D6DD3190DC5AFCD47A36984D7975B1 (EnumFlagsAttribute_t6D593B26A9415914EEC9DCD3445DEC81165A844C* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		// public EnumFlagsAttribute(System.Type type)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// EnumType = type;
		Type_t* L_0 = ___type0;
		__this->___EnumType_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EnumType_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.HelpAttribute::.ctor(System.String,Google.XR.ARCoreExtensions.Internal.HelpAttribute/HelpMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelpAttribute__ctor_mAED02D506561ECE44E42163E2889C686544F75A5 (HelpAttribute_tAA349EC2B5C0C4AAE8DB13F3FE34218A9AC7E441* __this, String_t* ___helpMessage0, int32_t ___messageType1, const RuntimeMethod* method) 
{
	{
		// public HelpAttribute(string helpMessage,
		//     HelpMessageType messageType = HelpMessageType.None)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// HelpMessage = helpMessage;
		String_t* L_0 = ___helpMessage0;
		__this->___HelpMessage_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HelpMessage_0), (void*)L_0);
		// MessageType = messageType;
		int32_t L_1 = ___messageType1;
		__this->___MessageType_1 = L_1;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.RuntimeConfig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_OnEnable_mD946D686E691FD78C5FB2ED8A61D490D338AA753 (RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.RuntimeConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig__ctor_mE9839C01FB954C811AD3A60978D06F954BD5EA1B (RuntimeConfig_tC6A2A9495F919EDF78422A606B5486F863B58F49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> ModulesEnabled = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___ModulesEnabled_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ModulesEnabled_6), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Google.XR.ARCoreExtensions.Internal.ApiPose::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiPose_ToString_m9EC12CEE22B649689E2C35251229B9999DC75352 (ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB6CCA9FBB351C07165F2A4278DD99B4969FAE12);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("qx: {0}, qy: {1}, qz: {2}, qw: {3}, x: {4}, y: {5}, z: {6}",
		//     Qx, Qy, Qz, Qw, X, Y, Z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		float L_2 = __this->___Qx_0;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		float L_6 = __this->___Qy_1;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		float L_10 = __this->___Qz_2;
		float L_11 = L_10;
		RuntimeObject* L_12 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14 = __this->___Qw_3;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		float L_18 = __this->___X_4;
		float L_19 = L_18;
		RuntimeObject* L_20 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		float L_22 = __this->___Y_5;
		float L_23 = L_22;
		RuntimeObject* L_24 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		float L_26 = __this->___Z_6;
		float L_27 = L_26;
		RuntimeObject* L_28 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralFB6CCA9FBB351C07165F2A4278DD99B4969FAE12, L_25, NULL);
		return L_29;
	}
}
IL2CPP_EXTERN_C  String_t* ApiPose_ToString_m9EC12CEE22B649689E2C35251229B9999DC75352_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ApiPose_ToString_m9EC12CEE22B649689E2C35251229B9999DC75352(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Google.XR.ARCoreExtensions.Internal.ApiQuaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiQuaternion_ToString_mE54526AC4A7CB69539421B9405D5AADA45908B8A (ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59C23871107D241BF9D160CD46876D62583516A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("qx: {0}, qy: {1}, qz: {2}, qw: {3}", Qx, Qy, Qz, Qw);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		float L_2 = __this->___Qx_0;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		float L_6 = __this->___Qy_1;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		float L_10 = __this->___Qz_2;
		float L_11 = L_10;
		RuntimeObject* L_12 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14 = __this->___Qw_3;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral59C23871107D241BF9D160CD46876D62583516A3, L_13, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C  String_t* ApiQuaternion_ToString_mE54526AC4A7CB69539421B9405D5AADA45908B8A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ApiQuaternion_ToString_mE54526AC4A7CB69539421B9405D5AADA45908B8A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorId(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnchorApi_GetCloudAnchorId_m7A22E3AE874B8DB439747969D3EA31FD8E7ECDFC (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	{
		// return null;
		return (String_t*)NULL;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetCloudAnchorState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetCloudAnchorState_m2D08EEA9DEE423DD29BD91D54E8440B5ED751F17 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	{
		// ApiCloudAnchorState cloudAnchorState = ApiCloudAnchorState.None;
		// return cloudAnchorState;
		return (int32_t)(0);
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.AnchorApi::GetAnchorPose(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 AnchorApi_GetAnchorPose_m1EBA7247174B63B25B99004033BBEA40ACE19258 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr poseHandle = PoseApi.Create(sessionHandle);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1;
		L_1 = PoseApi_Create_mBFA5AA3E7D32C04685330EF8799B2989689F5DC1(L_0, NULL);
		V_0 = L_1;
		// ExternApi.ArAnchor_getPose(sessionHandle, anchorHandle, poseHandle);
		intptr_t L_2 = ___sessionHandle0;
		intptr_t L_3 = ___anchorHandle1;
		intptr_t L_4 = V_0;
		ExternApi_ArAnchor_getPose_m39CBC6572494928C2B9BBB391008C049A792C75E(L_2, L_3, L_4, NULL);
		// ApiPose apiPose = PoseApi.ExtractPoseValue(sessionHandle, poseHandle);
		intptr_t L_5 = ___sessionHandle0;
		intptr_t L_6 = V_0;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_7;
		L_7 = PoseApi_ExtractPoseValue_mF6C2B7C10A8219C5E5C7B4F1C3401BF491BF8B67(L_5, L_6, NULL);
		// PoseApi.Destroy(poseHandle);
		intptr_t L_8 = V_0;
		PoseApi_Destroy_m94D782D941548CE9B1B11A4A3AB29F4222B19274(L_8, NULL);
		// return apiPose;
		return L_7;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiTrackingState Google.XR.ARCoreExtensions.Internal.AnchorApi::GetTrackingState(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorApi_GetTrackingState_m2799510F362CF558900966C48BF5C6EE834AD51C (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ApiTrackingState apiTrackingState = ApiTrackingState.Stopped;
		V_0 = 2;
		// ExternApi.ArAnchor_getTrackingState(sessionHandle, anchorHandle, ref apiTrackingState);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___anchorHandle1;
		ExternApi_ArAnchor_getTrackingState_mA679D120F552B4B19208D7840AC9D83B0400ECDC(L_0, L_1, (&V_0), NULL);
		// return apiTrackingState;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Detach_m5498C4126B9257B6BEDD1A29FCC6999B542D5D66 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	{
		// ExternApi.ArAnchor_detach(sessionHandle, anchorHandle);
		intptr_t L_0 = ___sessionHandle0;
		intptr_t L_1 = ___anchorHandle1;
		ExternApi_ArAnchor_detach_m7EB5DAB66D28A0DE19B57194BBF3092D0860546C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi_Release_mCB91E8690A5A0D90C2692251141D42431B7323B8 (intptr_t ___anchorHandle0, const RuntimeMethod* method) 
{
	{
		// ExternApi.ArAnchor_release(anchorHandle);
		intptr_t L_0 = ___anchorHandle0;
		ExternApi_ArAnchor_release_m2AE335E89DDEAA2FDA9AE66EA2C1BEF37B4CEDC2(L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorApi__ctor_m97F70392550B7468B36216302FA151A36DBF3EF3 (AnchorApi_t55C1D2F6158211CCB505572BA1EA56ABF34F36DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_acquireCloudAnchorId(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_acquireCloudAnchorId_mBADC66A3F0A70B7CF4387A45F9A55F80462F48E0 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t* ___hostingHandle2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_acquireCloudAnchorId(System.IntPtr,System.IntPtr,System.IntPtr&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getCloudAnchorState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getCloudAnchorState_mDAD4AF2243B230C340C71692C0FC3893EC0B95BE (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___cloudAnchorState2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getCloudAnchorState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorState&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArString_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArString_release_m1B1A8F90F5C6AB62AB7426BFC4AA7E5C64615763 (intptr_t ___stringHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArString_release)(___stringHandle0);

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getPose(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getPose_m39CBC6572494928C2B9BBB391008C049A792C75E (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t ___pose2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArAnchor_getPose)(___sessionHandle0, ___anchorHandle1, ___pose2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_getTrackingState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_getTrackingState_mA679D120F552B4B19208D7840AC9D83B0400ECDC (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t* ___trackingState2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArAnchor_getTrackingState)(___sessionHandle0, ___anchorHandle1, ___trackingState2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_detach(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_detach_m7EB5DAB66D28A0DE19B57194BBF3092D0860546C (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArAnchor_detach)(___sessionHandle0, ___anchorHandle1);

}
// System.Void Google.XR.ARCoreExtensions.Internal.AnchorApi/ExternApi::ArAnchor_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArAnchor_release_m2AE335E89DDEAA2FDA9AE66EA2C1BEF37B4CEDC2 (intptr_t ___anchorHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArAnchor_release)(___anchorHandle0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.CameraConfigFacingDirection Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFacingDirection(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetFacingDirection_m309700663346BA958898F583144B81FF6FB4B723 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) 
{
	{
		// CameraConfigFacingDirection facingDirection = CameraConfigFacingDirection.Back;
		// return facingDirection;
		return (int32_t)(0);
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetTextureDimensions(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CameraConfigApi_GetTextureDimensions_m41544BA6861B516EF679F6493C9313E83BB63192 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int width = 0;
		// int height = 0;
		V_0 = 0;
		// return new Vector2Int(width, height);
		int32_t L_0 = V_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_1), 0, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector2Int Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetFPSRange(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CameraConfigApi_GetFPSRange_m07794E7F1E4E08602418096D1A23C9D2177CEA46 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int minFps = 0;
		// int maxFps = 0;
		V_0 = 0;
		// return new Vector2Int(minFps, maxFps);
		int32_t L_0 = V_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_1), 0, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Google.XR.ARCoreExtensions.CameraConfigDepthSensorUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetDepthSensorUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetDepthSensorUsage_mDE1B64C2E2A3AC07E584840E85BBF44B4F405BFE (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) 
{
	{
		// int depth = (int)CameraConfigDepthSensorUsage.DoNotUse;
		// return (CameraConfigDepthSensorUsage)depth;
		return (int32_t)(2);
	}
}
// Google.XR.ARCoreExtensions.CameraConfigStereoCameraUsage Google.XR.ARCoreExtensions.Internal.CameraConfigApi::GetStereoCameraUsage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraConfigApi_GetStereoCameraUsage_m68F3D156F29FFC37E6953F613A33F921F29334C1 (intptr_t ___sessionHandle0, intptr_t ___cameraConfigHandle1, const RuntimeMethod* method) 
{
	{
		// int stereo = (int)CameraConfigStereoCameraUsage.DoNotUse;
		// return (CameraConfigStereoCameraUsage)stereo;
		return (int32_t)(2);
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraConfigApi__ctor_m2B66BAE79E707720B323BED0E34D41CBFC0FC6D5 (CameraConfigApi_tEF3FDDB8C966E9EB90E060446C70C63916C2FCDB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi::UpdateFilter(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraConfigFilterApi_UpdateFilter_m5171AE90317C0932BFD00B724FA51DFB5E367D2F (intptr_t ___sessionHandle0, intptr_t ___filterHandle1, ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___extensionsFilter2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (extensionsFilter != null)
		ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* L_0 = ___extensionsFilter2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.CameraConfigFilterApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraConfigFilterApi__ctor_mCF7B047CD1724061A55856385CB41CAAD5B85996 (CameraConfigFilterApi_t3C84CE14B4E0652C75DEABC24BDE5E019770DB0B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi::ConfigureSession(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigApi_ConfigureSession_mA9BBBE680C620E309D4AB5F5281965AD57761E18 (intptr_t ___sessionHandle0, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___config1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29A2492D1543FEE511091AC0BCB1C2325329CC20);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// IntPtr configHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_0;
		// ExternApi.ArConfig_create(sessionHandle, ref configHandle);
		intptr_t L_1 = ___sessionHandle0;
		ExternApi_ArConfig_create_m6DBE2F7C8CCE79D7E393FAEBC90463EBC154FEB2(L_1, (&V_0), NULL);
		// UpdateSessionConfig(sessionHandle, configHandle, config);
		intptr_t L_2 = ___sessionHandle0;
		intptr_t L_3 = V_0;
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_4 = ___config1;
		ConfigApi_UpdateSessionConfig_m4E822D0FD8CCE121837E04A14B703947A3E63C49(L_2, L_3, L_4, NULL);
		// ApiArStatus status = ExternApi.ArSession_configure(sessionHandle, configHandle);
		intptr_t L_5 = ___sessionHandle0;
		intptr_t L_6 = V_0;
		int32_t L_7;
		L_7 = ExternApi_ArSession_configure_m5040EF7675981DD5804B09308E482D98C161C509(L_5, L_6, NULL);
		V_1 = L_7;
		// if (status != ApiArStatus.Success)
		int32_t L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		// Debug.LogErrorFormat("Failed to configure the session with error: {0}.", status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(ApiArStatus_t6EF10EF07CAB9A771B24659E26914C8F492A37B3_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral29A2492D1543FEE511091AC0BCB1C2325329CC20, L_10, NULL);
	}

IL_003a:
	{
		// ExternApi.ArConfig_destroy(configHandle);
		intptr_t L_14 = V_0;
		ExternApi_ArConfig_destroy_m90766C435AE9247F543A80B9FD224CAE4352FEDF(L_14, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi::UpdateSessionConfig(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.ARCoreExtensionsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigApi_UpdateSessionConfig_m4E822D0FD8CCE121837E04A14B703947A3E63C49 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___config2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigApi__ctor_mB59925183F64EC707FCE4C3E815466660C9BA663 (ConfigApi_t1A6497658C71B0EA6BACFABDB87BD234D11FF132* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_create(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_create_m6DBE2F7C8CCE79D7E393FAEBC90463EBC154FEB2 (intptr_t ___sessionHandle0, intptr_t* ___configHandle1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArConfig_create)(___sessionHandle0, ___configHandle1);

}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_destroy_m90766C435AE9247F543A80B9FD224CAE4352FEDF (intptr_t ___configHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArConfig_destroy)(___configHandle0);

}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArSession_configure(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_configure_m5040EF7675981DD5804B09308E482D98C161C509 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ArSession_configure)(___sessionHandle0, ___configHandle1);

	return returnValue;
}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_setCloudAnchorMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_setCloudAnchorMode_m91FC9F9921F5CB4CB2C2E1BBEA24EC185D03D286 (intptr_t ___sessionHandle0, intptr_t ___configHandle1, int32_t ___mode2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_setCloudAnchorMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_getCloudAnchorMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_getCloudAnchorMode_m347F453E4774AF3CD7CCB6B01DC9F85AD29D641F (intptr_t ___sessionHandle0, intptr_t ___configHandle1, int32_t* ___mode2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_getCloudAnchorMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCloudAnchorMode&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_setGeospatialMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiGeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArConfig_setGeospatialMode_m8927D5CFE7CA427C02177256750F52E73C985399 (intptr_t ___sessionHandle0, intptr_t ___config1, int32_t ___mode2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.ConfigApi/ExternApi::ArConfig_setGeospatialMode(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiGeospatialMode)' has no implementation."), NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.Internal.EarthApi::GetEarthState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EarthApi_GetEarthState_m6BC8C9672EEFE49C0DF6BA545A5B5BBBAC6D22C8 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	{
		// var earthState = EarthState.ErrorInternal;
		// return earthState;
		return (int32_t)((-1));
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.Internal.EarthApi::GetEarthTrackingState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EarthApi_GetEarthTrackingState_m7B98827AB1AB75158CEFC85D4B6B873F5617240A (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var trackingState = ApiTrackingState.Stopped;
		// return trackingState.ToTrackingState();
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Translators_ToTrackingState_mFE007F0722633E9F4CBEBA85B24F56B368F8C222(2, NULL);
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi::TryGetCameraGeospatialPose(System.IntPtr,Google.XR.ARCoreExtensions.GeospatialPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthApi_TryGetCameraGeospatialPose_m3C7F8DCE4183C084F9EA6B321B9769BF6E377621 (intptr_t ___sessionHandle0, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* ___geospatialPose1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.EarthApi::AddAnchor(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EarthApi_AddAnchor_m4A68B212EE3E400EFC1751E192ED271E4CE0D949 (intptr_t ___sessionHandle0, intptr_t ___earthHandle1, double ___latitude2, double ___longitude3, double ___altitude4, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr anchorHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return anchorHandle;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthApi__ctor_m55B31BA7BE3901941FB72F4333015F922F0C542A (EarthApi_t8FAD9F89CD581A6DAC431F3C02A07C9CA0B757E8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getEarthState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.EarthState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArEarth_getEarthState_mCA48EC6C07F9444BFB318BB288017CAB0455A844 (intptr_t ___session0, intptr_t ___earth1, int32_t* ___out_state2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getEarthState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.EarthState&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getCameraGeospatialPose(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArEarth_getCameraGeospatialPose_mB4A9507177DEF0238DF90CC15156F8F32E35D6C4 (intptr_t ___sessionHandle0, intptr_t ___earthHandle1, intptr_t ___outGeospatialPoseHandle2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_getCameraGeospatialPose(System.IntPtr,System.IntPtr,System.IntPtr)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArTrackable_getTrackingState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArTrackable_getTrackingState_m8540C9C5C2D9F2504923D808521FA76CD3E953BC (intptr_t ___sessionHandle0, intptr_t ___trackableHandle1, int32_t* ___trackingState2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArTrackable_getTrackingState(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiTrackingState&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArTrackable_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArTrackable_release_m46085CFF50EF5FA7DAC07123514A3B66031D10D4 (intptr_t ___earthHandle0, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArTrackable_release(System.IntPtr)' has no implementation."), NULL);
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_acquireNewAnchor(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,Google.XR.ARCoreExtensions.Internal.ApiQuaternion&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArEarth_acquireNewAnchor_m620763BB9D513FF80E1730EBBB2C576B85C94D8E (intptr_t ___session0, intptr_t ___earth1, double ___latitude2, double ___longitude3, double ___altitude4, ApiQuaternion_t0C79F6327246335DA89CAD1C21E2346418473063* ___eus_quaternion_45, intptr_t* ___out_anchor6, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.EarthApi/ExternApi::ArEarth_acquireNewAnchor(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,Google.XR.ARCoreExtensions.Internal.ApiQuaternion&,System.IntPtr&)' has no implementation."), NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.FrameApi::ReleaseFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameApi_ReleaseFrame_mBD586EA487F9AFF025004CF0B5ABE1AEAAB7D062 (intptr_t ___frameHandle0, const RuntimeMethod* method) 
{
	{
		// ExternApi.ArFrame_release(frameHandle);
		intptr_t L_0 = ___frameHandle0;
		ExternApi_ArFrame_release_m5F8A666137E6380228BFECB5F8B461F3B966751E(L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Google.XR.ARCoreExtensions.Internal.FrameApi::TransformCoordinates2d(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiCoordinates2dType,Google.XR.ARCoreExtensions.Internal.ApiCoordinates2dType,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FrameApi_TransformCoordinates2d_m1427719BDFE152912E4AC86E3D08DE7A0F6D7417 (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, int32_t ___inputType2, int32_t ___outputType3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvIn4, const RuntimeMethod* method) 
{
	{
		// Vector2 uvOut = new Vector2(uvIn.x, uvIn.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___uvIn4;
		float L_1 = L_0->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___uvIn4;
		float L_3 = L_2->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		// return uvOut;
		return L_4;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.FrameApi::RecordTrackData(System.IntPtr,System.IntPtr,System.Guid,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameApi_RecordTrackData_m76D9177D8231F5DEA2F8C7132F1A242EA7233BD5 (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, Guid_t ___trackId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ApiArStatus status = ApiArStatus.ErrorFatal;
		// return status.ToRecordingResult();
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Translators_ToRecordingResult_mD3B3E3139047EDF78838E1117606F0FBB09DCDDE(((int32_t)-2), NULL);
		return L_0;
	}
}
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.TrackData> Google.XR.ARCoreExtensions.Internal.FrameApi::GetUpdatedTrackData(System.IntPtr,System.IntPtr,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* FrameApi_GetUpdatedTrackData_m434EFF523E181A6BCB371753398C4623585F4752 (intptr_t ___sessionHandle0, intptr_t ___frameHandle1, Guid_t ___trackId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<TrackData> trackDataList = new List<TrackData>();
		List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51* L_0 = (List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51*)il2cpp_codegen_object_new(List_1_t86041F1EA423A2DF3141B60BAEA9B14303EE4E51_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C(L_0, List_1__ctor_m8CC0973C1FEE29CED96AD54A66C11FF36C8F3B7C_RuntimeMethod_var);
		// return trackDataList;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.FrameApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameApi__ctor_m9D6802E1392F3D0002269A50874888CAC2EB233C (FrameApi_t17B086D952A7A21EADCCC4A8EE6F52927EA4A2D2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.FrameApi/ExternApi::ArFrame_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArFrame_release_m5F8A666137E6380228BFECB5F8B461F3B966751E (intptr_t ___frameHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArFrame_release)(___frameHandle0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GeospatialPoseApi_Create_mF0F31122AB11EE33E4FFB5F385440786AF558219 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr geospatialPoseHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return geospatialPoseHandle;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialPoseApi_Destroy_m1DBF1C88E5D3C09C1306E575DE0102BDC603CB3B (intptr_t ___geospatialPoseHandle0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi::GetGeospatialPose(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.GeospatialPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialPoseApi_GetGeospatialPose_mFA9FDCDE28D681BCB3465DAAC0B5589F1E4BF561 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C* ___pose2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialPoseApi__ctor_m5339921DBAAF91CF4E4D97AF52AE99BABC950C21 (GeospatialPoseApi_t785335EDEB4F6467CABBFB1785AE16F80D0D2A29* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_create(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_create_mEA0A81D8B23E16954D709884BEFC12AA21EDC272 (intptr_t ___sessionHandle0, intptr_t* ___outGeospatialPoseHandle1, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_create(System.IntPtr,System.IntPtr&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_destroy_mA1140028E6762655BEBB1F2E2FC28FCAF170518C (intptr_t ___geospatialPoseHandle0, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_destroy(System.IntPtr)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getLatitudeLongitude(System.IntPtr,System.IntPtr,System.Double&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getLatitudeLongitude_mBCF5D3A0BA6659805061452DC873A1149E11B7FB (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outLatitudeDegrees2, double* ___outLongitudeDegrees3, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getLatitudeLongitude(System.IntPtr,System.IntPtr,System.Double&,System.Double&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHorizontalAccuracy(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getHorizontalAccuracy_mCB0AE0F6E8409BC656D6AF5D4FA6133C9CA33EF4 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outHorizontalAccuracyMeters2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHorizontalAccuracy(System.IntPtr,System.IntPtr,System.Double&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getVerticalAccuracy(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getVerticalAccuracy_m572D6F32AF5F9D7032A8D28BD7B6824869A55F6A (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outVerticalAccuracyMeters2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getVerticalAccuracy(System.IntPtr,System.IntPtr,System.Double&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getAltitude(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getAltitude_m66E6AE03D0CB8CEA55FE7A9D13729F27F6433686 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outAltitudeMeters2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getAltitude(System.IntPtr,System.IntPtr,System.Double&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHeading(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getHeading_mCEB955E46101450574D6CD61461F32868CCD77AC (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outHeadingDegrees2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHeading(System.IntPtr,System.IntPtr,System.Double&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHeadingAccuracy(System.IntPtr,System.IntPtr,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArGeospatialPose_getHeadingAccuracy_mC9A389654AF008FDF70679755B2F14BFA7F98D04 (intptr_t ___sessionHandle0, intptr_t ___geospatialPoseHandle1, double* ___outHeadingAccuracyDegrees2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.GeospatialPoseApi/ExternApi::ArGeospatialPose_getHeadingAccuracy(System.IntPtr,System.IntPtr,System.Double&)' has no implementation."), NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_mBFA5AA3E7D32C04685330EF8799B2989689F5DC1 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Create(sessionHandle, Pose.identity);
		intptr_t L_0 = ___sessionHandle0;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		intptr_t L_2;
		L_2 = PoseApi_Create_mA457D5C309445046182ACE8F3E0596C975A472C0(L_0, L_1, NULL);
		return L_2;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.PoseApi::Create(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PoseApi_Create_mA457D5C309445046182ACE8F3E0596C975A472C0 (intptr_t ___sessionHandle0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ApiPose apiPose = pose.ToApiPose();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___pose1;
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_1;
		L_1 = Translators_ToApiPose_mAEDF4015BD35F51F6975ADB221313EA4E7FF2E94(L_0, NULL);
		V_0 = L_1;
		// IntPtr poseHandle = IntPtr.Zero;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_1 = L_2;
		// ExternApi.ArPose_create(
		//     sessionHandle,
		//     ref apiPose,
		//     ref poseHandle);
		intptr_t L_3 = ___sessionHandle0;
		ExternApi_ArPose_create_mCF48C1AA5796C20E620A209C70049767B8AC2515(L_3, (&V_0), (&V_1), NULL);
		// return poseHandle;
		intptr_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseApi_Destroy_m94D782D941548CE9B1B11A4A3AB29F4222B19274 (intptr_t ___poseHandle0, const RuntimeMethod* method) 
{
	{
		// ExternApi.ArPose_destroy(poseHandle);
		intptr_t L_0 = ___poseHandle0;
		ExternApi_ArPose_destroy_m5207ED5D6821FBA6A45C31C4E83BCC5761DD8B29(L_0, NULL);
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.Internal.ApiPose Google.XR.ARCoreExtensions.Internal.PoseApi::ExtractPoseValue(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 PoseApi_ExtractPoseValue_mF6C2B7C10A8219C5E5C7B4F1C3401BF491BF8B67 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ApiPose apiPose = Pose.identity.ToApiPose();
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_1;
		L_1 = Translators_ToApiPose_mAEDF4015BD35F51F6975ADB221313EA4E7FF2E94(L_0, NULL);
		V_0 = L_1;
		// ExternApi.ArPose_getPoseRaw(
		//     sessionHandle,
		//     poseHandle,
		//     ref apiPose);
		intptr_t L_2 = ___sessionHandle0;
		intptr_t L_3 = ___poseHandle1;
		ExternApi_ArPose_getPoseRaw_m6A6972C620578ABB7DD963B9566CC342E5C286B0(L_2, L_3, (&V_0), NULL);
		// return apiPose;
		ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99 L_4 = V_0;
		return L_4;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseApi__ctor_mDAF40A631DE7D4D3CCB9E1A77A193F717C24B551 (PoseApi_t49D6EDB0A429731C6B0812EDC82892DA48439CDC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_create(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_create_mCF48C1AA5796C20E620A209C70049767B8AC2515 (intptr_t ___sessionHandle0, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* ___apiPose1, intptr_t* ___poseHandle2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99*, intptr_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArPose_create)(___sessionHandle0, ___apiPose1, ___poseHandle2);

}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_destroy_m5207ED5D6821FBA6A45C31C4E83BCC5761DD8B29 (intptr_t ___poseHandle0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArPose_destroy)(___poseHandle0);

}
// System.Void Google.XR.ARCoreExtensions.Internal.PoseApi/ExternApi::ArPose_getPoseRaw(System.IntPtr,System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArPose_getPoseRaw_m6A6972C620578ABB7DD963B9566CC342E5C286B0 (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99* ___apiPose2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, ApiPose_tD5EE7B949DFBE0B9A0CD0DF92B5B34A96B22AF99*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArPose_getPoseRaw)(___sessionHandle0, ___poseHandle1, ___apiPose2);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.RecordingConfigApi::Create(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecordingConfigApi_Create_m5AB3238FC4A4FBFC07CB1EDB009DD46CD00D8A47 (intptr_t ___sessionHandle0, ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* ___config1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr configHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return configHandle;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingConfigApi_Destroy_mD63F76B467FDF9B110C530C29855970BF0ACB8B0 (intptr_t ___recordingConfigHandle0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.RecordingConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingConfigApi__ctor_mD41A38EE7A238832AD76E5CF1E0EAC11FB6CCA83 (RecordingConfigApi_t52219373F6E79F76D5B718A240654B21C8BDA156* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_m7252E775C394A594259E35D68E46F2353DA6D86F (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return cloudAnchorHandle;
		return L_0;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::HostCloudAnchor(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_mAD8574B4125D28BC990B2A4B9670E967C8D53EB1 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t ___ttlDays2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return cloudAnchorHandle;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::SetAuthToken(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi_SetAuthToken_m870B737CD7E18DB9C3AC8D9741AA442BC2F7E02C (intptr_t ___sessionHandle0, String_t* ___authToken1, const RuntimeMethod* method) 
{
	{
		// ExternApi.ArSession_setAuthToken(sessionHandle, authToken);
		intptr_t L_0 = ___sessionHandle0;
		String_t* L_1 = ___authToken1;
		ExternApi_ArSession_setAuthToken_mFBC804DD6054A421B067EA62CB5EFE2CD229CF8F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::ResolveCloudAnchor(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_ResolveCloudAnchor_m3B3972F96B2BFA8161A54FC75EBAFA5672E55D8B (intptr_t ___sessionHandle0, String_t* ___cloudAnchorId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return cloudAnchorHandle;
		return L_0;
	}
}
// Google.XR.ARCoreExtensions.FeatureMapQuality Google.XR.ARCoreExtensions.Internal.SessionApi::EstimateFeatureMapQualityForHosting(System.IntPtr,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_EstimateFeatureMapQualityForHosting_m2F38D06AA72F85C8876A8738F8F8AA78DE4B50BB (intptr_t ___sessionHandle0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) 
{
	{
		// int featureMapQuality = (int)FeatureMapQuality.Insufficient;
		// return (FeatureMapQuality)featureMapQuality;
		return (int32_t)(0);
	}
}
// Google.XR.ARCoreExtensions.RecordingStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetRecordingStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetRecordingStatus_mEEAC9CF8EE9646C013BF26C0A1F7B0067C4F540B (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ApiRecordingStatus apiStatus = ApiRecordingStatus.None;
		// return apiStatus.ToRecordingStatus();
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Translators_ToRecordingStatus_mD30D1A42E4D8F8E0692964254B3C54CB33ADC91C(0, NULL);
		return L_0;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StartRecording(System.IntPtr,Google.XR.ARCoreExtensions.ARCoreRecordingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StartRecording_mA90651F44A778C2C8E9358AA6EE67A63B24AFE17 (intptr_t ___sessionHandle0, ARCoreRecordingConfig_t8B1213AAD72BC49AD33B08BF83A833BE4B89A18E* ___config1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ApiArStatus status = ApiArStatus.ErrorFatal;
		// return status.ToRecordingResult();
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Translators_ToRecordingResult_mD3B3E3139047EDF78838E1117606F0FBB09DCDDE(((int32_t)-2), NULL);
		return L_0;
	}
}
// Google.XR.ARCoreExtensions.RecordingResult Google.XR.ARCoreExtensions.Internal.SessionApi::StopRecording(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_StopRecording_mB277630DA1B16A36CC58CB942628C2BE6EC60F7F (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ApiArStatus status = ApiArStatus.ErrorFatal;
		// return status.ToRecordingResult();
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Translators_ToRecordingResult_mD3B3E3139047EDF78838E1117606F0FBB09DCDDE(((int32_t)-2), NULL);
		return L_0;
	}
}
// Google.XR.ARCoreExtensions.PlaybackStatus Google.XR.ARCoreExtensions.Internal.SessionApi::GetPlaybackStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_GetPlaybackStatus_mCDAD7875B2CA30489FB8ADE168642442708591E4 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ApiPlaybackStatus apiStatus = ApiPlaybackStatus.None;
		// return apiStatus.ToPlaybackStatus();
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Translators_ToPlaybackStatus_mD878E75B15221C139DBF210C35AA5A87093A7456(0, NULL);
		return L_0;
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.SessionApi::SetPlaybackDataset(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_SetPlaybackDataset_m2DBDA7412481C663E5014DF9DDD13CD6D9862D7D (intptr_t ___sessionHandle0, String_t* ___datasetFilepath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ApiArStatus status = ApiArStatus.ErrorFatal;
		// return status.ToPlaybackResult();
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Translators_ToPlaybackResult_mF0141086E69ED5D59F1E0280A93CC86ED8E5C2AD(((int32_t)-2), NULL);
		return L_0;
	}
}
// Google.XR.ARCoreExtensions.PlaybackResult Google.XR.ARCoreExtensions.Internal.SessionApi::SetPlaybackDatasetUri(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_SetPlaybackDatasetUri_mAED9FB5AB92AB49C209CE30DF4EA27032E0AF510 (intptr_t ___sessionHandle0, String_t* ___datasetUri1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ApiArStatus status = ApiArStatus.ErrorFatal;
		// return status.ToPlaybackResult();
		il2cpp_codegen_runtime_class_init_inline(Translators_t9977B272B307812F8CEC22E453DD7FAE26E369BE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Translators_ToPlaybackResult_mF0141086E69ED5D59F1E0280A93CC86ED8E5C2AD(((int32_t)-2), NULL);
		return L_0;
	}
}
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.Internal.SessionApi::IsGeospatialModeSupported(System.IntPtr,Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SessionApi_IsGeospatialModeSupported_m72BA9E4AAAF1E469167F40296FE9B4997C052A5A (intptr_t ___sessionHandle0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		// FeatureSupported supported = FeatureSupported.Unknown;
		// return supported;
		return (int32_t)(1);
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.SessionApi::AcquireEarth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SessionApi_AcquireEarth_mFA813CC8F28A9902A85E30F5EF67A5FFE754EA39 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var earthHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return earthHandle;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionApi__ctor_mDAC3C950DAFCC94738BE62B42C08A1F1F2CCA296 (SessionApi_t924F4DD692726555B4B06A311C3FD826EA51A22D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchor(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_hostAndAcquireNewCloudAnchor_m30F557A9ECE27B0912F45D2ED60D36D1F7AA041C (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, intptr_t* ___cloudAnchorHandle2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchor(System.IntPtr,System.IntPtr,System.IntPtr&)' has no implementation."), NULL);
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_resolveAndAcquireNewCloudAnchor(System.IntPtr,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_resolveAndAcquireNewCloudAnchor_m81FA02921F3DDE61318847F21AC6B0D9AE0DA536 (intptr_t ___sessionHandle0, String_t* ___cloudAnchorId1, intptr_t* ___cloudAnchorHandle2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_resolveAndAcquireNewCloudAnchor(System.IntPtr,System.String,System.IntPtr&)' has no implementation."), NULL);
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchorWithTtl(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_hostAndAcquireNewCloudAnchorWithTtl_mBA066B990DFBFFBEADA0C638B01D587272D46D10 (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t ___ttlDays2, intptr_t* ___cloudAnchorHandle3, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_hostAndAcquireNewCloudAnchorWithTtl(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&)' has no implementation."), NULL);
}
// Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_estimateFeatureMapQualityForHosting(System.IntPtr,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExternApi_ArSession_estimateFeatureMapQualityForHosting_m4B63CEFA0ECBCC610E70A140E32F257E4CCBD66C (intptr_t ___sessionHandle0, intptr_t ___poseHandle1, int32_t* ___featureMapQuality2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'Google.XR.ARCoreExtensions.Internal.ApiArStatus Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_estimateFeatureMapQualityForHosting(System.IntPtr,System.IntPtr,System.Int32&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_isGeospatialModeSupported(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiGeospatialMode,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_isGeospatialModeSupported_m3DBEC55F6B3959873519D161CD40F6DE15224F07 (intptr_t ___sessionHandle0, int32_t ___mode1, int32_t* ___out_is_supported2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_isGeospatialModeSupported(System.IntPtr,Google.XR.ARCoreExtensions.Internal.ApiGeospatialMode,System.Int32&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_acquireEarth(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_acquireEarth_m24D1A5ED35A3498A2BD4F4C2984250C46B713207 (intptr_t ___sessionHandle0, intptr_t* ___earthHandle1, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_acquireEarth(System.IntPtr,System.IntPtr&)' has no implementation."), NULL);
}
// System.Void Google.XR.ARCoreExtensions.Internal.SessionApi/ExternApi::ArSession_setAuthToken(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternApi_ArSession_setAuthToken_mFBC804DD6054A421B067EA62CB5EFE2CD229CF8F (intptr_t ___sessionHandle0, String_t* ___authToken1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___authToken1' to native representation
	char* ____authToken1_marshaled = NULL;
	____authToken1_marshaled = il2cpp_codegen_marshal_string(___authToken1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ArSession_setAuthToken)(___sessionHandle0, ____authToken1_marshaled);

	// Marshaling cleanup of parameter '___authToken1' native representation
	il2cpp_codegen_marshal_free(____authToken1_marshaled);
	____authToken1_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.TrackApi::Create(System.IntPtr,Google.XR.ARCoreExtensions.Track)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TrackApi_Create_mC48F6DC15CB274ABBC81A5B2CF78ED2DB855DDC8 (intptr_t ___sessionHandle0, Track_t33BB000657D179174087DA9A156530F0DF0B90DC ___track1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr trackHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return trackHandle;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackApi_Destroy_mADAB3848D69B9DD4107AC16428DD7B55D241583B (intptr_t ___trackHandle0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackApi__ctor_m8C93432409B558B9DC9F7225937925071D24B69E (TrackApi_t14CBF0BC5E9113ABD42A06918FF8D24783E1A01C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 Google.XR.ARCoreExtensions.Internal.TrackDataApi::GetFrameTimestamp(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TrackDataApi_GetFrameTimestamp_m26B08CAF58307B3CB1EA75827909B3F254FF8AC9 (intptr_t ___sessionHandle0, intptr_t ___trackDataHandle1, const RuntimeMethod* method) 
{
	{
		// long timestamp = 0L;
		// return timestamp;
		return ((int64_t)0);
	}
}
// System.Byte[] Google.XR.ARCoreExtensions.Internal.TrackDataApi::GetData(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TrackDataApi_GetData_m67429E89A196B31AA04206BA39BF8B50651532A1 (intptr_t ___sessionHandle0, intptr_t ___trackDataHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// IntPtr dataPtr = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_0;
		// int size = 0;
		V_1 = 0;
		// byte[] data = new byte[size];
		int32_t L_1 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_2 = L_2;
		// if (size > 0)
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		// Marshal.Copy(dataPtr, data, 0, size);
		intptr_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		int32_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_4, L_5, 0, L_6, NULL);
	}

IL_001c:
	{
		// return data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		return L_7;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackDataApi::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackDataApi_Release_m354CECFD9187A73415A334CA89591093312D4891 (intptr_t ___trackDataHandle0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackDataApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackDataApi__ctor_m2215D8DECD11532D6CCF68F170922C938FB003BD (TrackDataApi_tA7C86CD3D6CA282213F3F79D1812481573104385* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Google.XR.ARCoreExtensions.Internal.TrackDataListApi::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TrackDataListApi_Create_m70CA08B95AA2882F2094E0F96A0E3C5987090E21 (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr handle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return handle;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackDataListApi::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackDataListApi_Destroy_mE42C79840F93F9FC7DD73F7F60C0200A89D9C68F (intptr_t ___listHandle0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.Internal.TrackDataListApi::GetCount(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackDataListApi_GetCount_m1715D8B1287FDE09F8EE478DA60D3EFD9CADBB06 (intptr_t ___sessionHandle0, intptr_t ___listHandle1, const RuntimeMethod* method) 
{
	{
		// int count = 0;
		// return count;
		return 0;
	}
}
// System.IntPtr Google.XR.ARCoreExtensions.Internal.TrackDataListApi::AcquireItem(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t TrackDataListApi_AcquireItem_m1498755DC6C2F060752CBBEB339FA3D40459FC56 (intptr_t ___sessionHandle0, intptr_t ___listHandle1, int32_t ___index2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr trackDataHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return trackDataHandle;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Internal.TrackDataListApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackDataListApi__ctor_mC0377162B3FE50A5BFC79ADFB7AAE77D564208DA (TrackDataListApi_tCB05EA6967051184ACF68C9F7D7B1EE52A170392* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ARCoreExtensions_get__instance_m3F53D4B7A61D068DEED88EC2A525EB03EFCC7B6B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0 = ((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_m7252E775C394A594259E35D68E46F2353DA6D86F_inline (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return cloudAnchorHandle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARCloudAnchor_SetAnchorHandle_m6AD95ABE1B68C9132E99BF2D5BFB8889D897C428_inline (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, intptr_t ___anchorHandle0, const RuntimeMethod* method) 
{
	{
		// _anchorHandle = anchorHandle;
		intptr_t L_0 = ___anchorHandle0;
		__this->____anchorHandle_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// public Transform trackablesParent { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackablesParentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SessionApi_HostCloudAnchor_mAD8574B4125D28BC990B2A4B9670E967C8D53EB1_inline (intptr_t ___sessionHandle0, intptr_t ___anchorHandle1, int32_t ___ttlDays2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return cloudAnchorHandle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SessionApi_ResolveCloudAnchor_m3B3972F96B2BFA8161A54FC75EBAFA5672E55D8B_inline (intptr_t ___sessionHandle0, String_t* ___cloudAnchorId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr cloudAnchorHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return cloudAnchorHandle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SessionApi_AcquireEarth_mFA813CC8F28A9902A85E30F5EF67A5FFE754EA39_inline (intptr_t ___sessionHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var earthHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return earthHandle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t EarthApi_AddAnchor_m4A68B212EE3E400EFC1751E192ED271E4CE0D949_inline (intptr_t ___sessionHandle0, intptr_t ___earthHandle1, double ___latitude2, double ___longitude3, double ___altitude4, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr anchorHandle = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		// return anchorHandle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARGeospatialAnchor_SetAnchorHandle_m7A00833D3785EB965C5FAC878B215AFD8AF1DD1D_inline (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, intptr_t ___anchorHandle0, const RuntimeMethod* method) 
{
	{
		// _anchorHandle = anchorHandle;
		intptr_t L_0 = ___anchorHandle0;
		__this->____anchorHandle_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARCloudAnchor_get_pose_mECFB9DA480A24A52F7CBB4867DCAB06A708B6C9E_inline (ARCloudAnchor_t9D49A17C405DB7AD116E9AFBD4865190886C1E9E* __this, const RuntimeMethod* method) 
{
	{
		// return _pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____pose_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t IOSSupportManager_get_ARCoreSessionHandle_m67CADC8436E54993C15C8F6E59EF98A0C58A39E7_inline (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, const RuntimeMethod* method) 
{
	{
		// return _sessionHandle;
		intptr_t L_0 = __this->____sessionHandle_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARCoreExtensions_set__instance_m79B718E5C94885E0E19C08E487AEBA71691EBFD4_inline (ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ARCoreExtensions _instance { get; private set; }
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_0 = ___value0;
		((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IOSSupportManager_SetEnabled_m55B1AAE70525F1BE09B5F3022B60E4FF99C39C55_inline (IOSSupportManager_tAF56A47BA3AAE741E15BAC2EC38295B4948AEC1A* __this, bool ___enabled0, const RuntimeMethod* method) 
{
	{
		// _isEnabled = enabled;
		bool L_0 = ___enabled0;
		__this->____isEnabled_2 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zNear_m13DFECBAE558037DEBE998F3EFF2E1C6372EE6E0_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ZNear = value;
		float L_0 = ___value0;
		__this->___m_ZNear_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_zFar_mA528373BCB66A9DE2A393512B883B932AB02D600_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ZFar = value;
		float L_0 = ___value0;
		__this->___m_ZFar_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenWidth_mA367A9BD005F2F052549E9B509F4D41F276CA021_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ScreenWidth = value;
		float L_0 = ___value0;
		__this->___m_ScreenWidth_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenHeight_m7F6C7A3B7F3D7AEBE074A19FF20EF3DDACB79DE9_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ScreenHeight = value;
		float L_0 = ___value0;
		__this->___m_ScreenHeight_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraParams_set_screenOrientation_m9AA6D552ED0B67E9560CDF2C775FC27AA7A83A07_inline (XRCameraParams_t2EBCCDA7FA502A7BDA940461C44C7817E5B44B40* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ScreenOrientation = value;
		int32_t L_0 = ___value0;
		__this->___m_ScreenOrientation_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t XRCameraFrame_get_timestampNs_m93571F53415C7DC6195854F3297E95D2E55A4DFB_inline (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531* __this, const RuntimeMethod* method) 
{
	{
		// public long timestampNs => m_TimestampNs;
		int64_t L_0 = __this->___m_TimestampNs_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraFrame_get_nativePtr_m4DED9CE0A7333F6A1E5C4932A6C98A8A0DD9E62D_inline (XRCameraFrame_t8F64F0595266C7D47FA9A4FE9C5933371026A531* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRCameraConfiguration_get_nativeConfigurationHandle_mD9C92AE35660E0441A296301336578BA11313155_inline (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativeConfigurationHandle => m_NativeConfigurationHandle;
		intptr_t L_0 = __this->___m_NativeConfigurationHandle_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_zero_mF92C338E9CB9434105090E675E04D20A29649553_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))->___s_Zero_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___column1;
		float L_2 = ___value2;
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(__this, ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, 4)))), L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) 
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CsubsystemU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___arg10, bool ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
