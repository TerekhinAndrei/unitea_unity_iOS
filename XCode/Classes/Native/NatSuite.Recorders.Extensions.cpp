#include "pch-cpp.hpp"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<Unity.Collections.NativeArray`1<System.Byte>>
struct Action_1_tC6D38157DECEAAD91322362C36F77954D4314270;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// NatSuite.Recorders.Inputs.CropTextureInput
struct CropTextureInput_t108C1FE23A0E42FFC5509181F53A24D52347A293;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Exception
struct Exception_t;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// NatSuite.Rendering.GLESReadback
struct GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F;
// NatSuite.Recorders.Inputs.GLESTextureInput
struct GLESTextureInput_tF671854D86DE5D6FF4963F15EEA713A022CF2F6B;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// NatSuite.Recorders.IMediaRecorder
struct IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A;
// NatSuite.Recorders.Inputs.ITextureInput
struct ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// NatSuite.Recorders.Inputs.MTLTextureInput
struct MTLTextureInput_tB60446934475A4735E9736AA0E9D7DF5C7D489B6;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NatSuite.Recorders.Inputs.WatermarkTextureInput
struct WatermarkTextureInput_t4C38BDB39243FDC8AE7A6E62DACFDB71DD7764C0;
// NatSuite.Recorders.Inputs.GLESTextureInput/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC6D38157DECEAAD91322362C36F77954D4314270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral28BBC4BDE4FD330B45DC7DD7CC37F01B777452E1;
IL2CPP_EXTERN_C String_t* _stringLiteral8DCBB6BF3ADCD4FBF9C46845AF7E3343D7A5710C;
IL2CPP_EXTERN_C String_t* _stringLiteral99FC79C3136C445C075C1FDE2A64F39D8880A899;
IL2CPP_EXTERN_C String_t* _stringLiteralA84AAC06C811071EBDB5E774DFCCBBE6AD2CA5E5;
IL2CPP_EXTERN_C String_t* _stringLiteralAABFBBA72F0F6E955D53871DAD97A57666E691CD;
IL2CPP_EXTERN_C String_t* _stringLiteralC348E798875D1A6CF77EDB15F734D4DF651CB4BA;
IL2CPP_EXTERN_C String_t* _stringLiteralD431696B0851E3D91432C3BEE28E210E0959AE0D;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_m22E57267C1B6AF994F2DC7304DBDDE465D850A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_m0A7E9110313EA34E81DE3700E7681FA75D96C8C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GLESTextureInput__ctor_mA078856A5AF84F857D006E2C18D97DA21E24B42D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MTLTextureInput__ctor_m9614A93506624609DAA30A393290DFE9AF4DD242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFinishWritingU3Ed__0_MoveNext_m6800B9252F1837B7D2936749295A31F6BC8A39E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m4113BDFCE94A8298ADB1C61BCAC35F7246A74AD0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA425B5FCD8A47AD859F12107424C91C7A791A4FF 
{
};
struct Il2CppArrayBounds;

// NatSuite.Recorders.Inputs.GLESTextureInput
struct GLESTextureInput_tF671854D86DE5D6FF4963F15EEA713A022CF2F6B  : public RuntimeObject
{
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.GLESTextureInput::recorder
	RuntimeObject* ___recorder_0;
	// NatSuite.Rendering.GLESReadback NatSuite.Recorders.Inputs.GLESTextureInput::readback
	GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* ___readback_1;
};

// NatSuite.Recorders.Inputs.MTLTextureInput
struct MTLTextureInput_tB60446934475A4735E9736AA0E9D7DF5C7D489B6  : public RuntimeObject
{
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.MTLTextureInput::recorder
	RuntimeObject* ___recorder_0;
	// System.IDisposable NatSuite.Recorders.Inputs.MTLTextureInput::readback
	RuntimeObject* ___readback_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NatSuite.Recorders.RecorderExtensions
struct RecorderExtensions_t0CC5C6F7F42E706F481DE62C04B09C4B5BD10207  : public RuntimeObject
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
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

// NatSuite.Recorders.Inputs.GLESTextureInput/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E  : public RuntimeObject
{
	// NatSuite.Recorders.Inputs.GLESTextureInput NatSuite.Recorders.Inputs.GLESTextureInput/<>c__DisplayClass1_0::<>4__this
	GLESTextureInput_tF671854D86DE5D6FF4963F15EEA713A022CF2F6B* ___U3CU3E4__this_0;
	// System.Int64 NatSuite.Recorders.Inputs.GLESTextureInput/<>c__DisplayClass1_0::timestamp
	int64_t ___timestamp_1;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
};

// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// Unity.Mathematics.float2
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	// System.Single Unity.Mathematics.float2::x
	float ___x_0;
	// System.Single Unity.Mathematics.float2::y
	float ___y_1;
};

struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	// Unity.Mathematics.float2 Unity.Mathematics.float2::zero
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero_2;
};

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;
};

struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___s_defaultResultTask_0;
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

// NatSuite.Recorders.Inputs.CropTextureInput
struct CropTextureInput_t108C1FE23A0E42FFC5509181F53A24D52347A293  : public RuntimeObject
{
	// UnityEngine.RectInt NatSuite.Recorders.Inputs.CropTextureInput::rect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___rect_0;
	// NatSuite.Recorders.Inputs.AspectMode NatSuite.Recorders.Inputs.CropTextureInput::aspectMode
	int32_t ___aspectMode_1;
	// NatSuite.Recorders.Inputs.ITextureInput NatSuite.Recorders.Inputs.CropTextureInput::input
	RuntimeObject* ___input_2;
	// UnityEngine.Material NatSuite.Recorders.Inputs.CropTextureInput::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// UnityEngine.Vector2 NatSuite.Recorders.Inputs.CropTextureInput::frameSizeInv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___frameSizeInv_4;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
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

// NatSuite.Recorders.Inputs.WatermarkTextureInput
struct WatermarkTextureInput_t4C38BDB39243FDC8AE7A6E62DACFDB71DD7764C0  : public RuntimeObject
{
	// UnityEngine.Texture NatSuite.Recorders.Inputs.WatermarkTextureInput::watermark
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___watermark_0;
	// UnityEngine.RectInt NatSuite.Recorders.Inputs.WatermarkTextureInput::rect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___rect_1;
	// NatSuite.Recorders.Inputs.AspectMode NatSuite.Recorders.Inputs.WatermarkTextureInput::aspectMode
	int32_t ___aspectMode_2;
	// NatSuite.Recorders.Inputs.ITextureInput NatSuite.Recorders.Inputs.WatermarkTextureInput::input
	RuntimeObject* ___input_3;
	// UnityEngine.Material NatSuite.Recorders.Inputs.WatermarkTextureInput::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_4;
	// UnityEngine.Vector2 NatSuite.Recorders.Inputs.WatermarkTextureInput::frameSizeInv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___frameSizeInv_5;
};

// Unity.Mathematics.float3x3
struct float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3x3::c0
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c0_0;
	// Unity.Mathematics.float3 Unity.Mathematics.float3x3::c1
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c1_1;
	// Unity.Mathematics.float3 Unity.Mathematics.float3x3::c2
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c2_2;
};

struct float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79_StaticFields
{
	// Unity.Mathematics.float3x3 Unity.Mathematics.float3x3::identity
	float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___identity_3;
	// Unity.Mathematics.float3x3 Unity.Mathematics.float3x3::zero
	float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___zero_4;
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// NatSuite.Rendering.GLESReadback
struct GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.AndroidJavaObject NatSuite.Rendering.GLESReadback::readback
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___readback_4;
	// UnityEngine.AndroidJavaClass NatSuite.Rendering.GLESReadback::clazz
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___clazz_5;
	// UnityEngine.RenderTexture NatSuite.Rendering.GLESReadback::frameBuffer
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___frameBuffer_6;
	// System.IntPtr NatSuite.Rendering.GLESReadback::readbackTexture
	intptr_t ___readbackTexture_7;
	// System.Int32 NatSuite.Rendering.GLESReadback::bufferSize
	int32_t ___bufferSize_8;
	// System.IntPtr NatSuite.Rendering.GLESReadback::classPtr
	intptr_t ___classPtr_9;
	// System.IntPtr NatSuite.Rendering.GLESReadback::readBackMethodID
	intptr_t ___readBackMethodID_10;
	// System.IntPtr NatSuite.Rendering.GLESReadback::baseAddressMethodID
	intptr_t ___baseAddressMethodID_11;
	// UnityEngine.jvalue[] NatSuite.Rendering.GLESReadback::readBackParameters
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___readBackParameters_12;
	// UnityEngine.jvalue[] NatSuite.Rendering.GLESReadback::baseAddressParameter
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___baseAddressParameter_13;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0
struct U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1 
{
	// System.Int32 NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0::<>t__builder
	AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E ___U3CU3Et__builder_1;
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0::recorder
	RuntimeObject* ___recorder_2;
	// System.String NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0::recordingName
	String_t* ___recordingName_3;
	// System.Boolean NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0::overwrite
	bool ___overwrite_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_5;
};

// System.Action`1<Unity.Collections.NativeArray`1<System.Byte>>
struct Action_1_tC6D38157DECEAAD91322362C36F77954D4314270  : public MulticastDelegate_t
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_mDD28E8C63DE90F8FEE07B5F19F8F1018E538E8E8_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_mA075EF4BAC2AFE380D54FE953C35E06D8CC1DC02_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Collections.NativeArray`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8ECD8F09105531961905916F93FB17B456C6B2C0_gshared (Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeBufferPointerWithoutChecks<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method) ;

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Create()
inline AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_m0A7E9110313EA34E81DE3700E7681FA75D96C8C1 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_mDD28E8C63DE90F8FEE07B5F19F8F1018E538E8E8_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_m22E57267C1B6AF994F2DC7304DBDDE465D850A7B (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___awaiter0, U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_mA075EF4BAC2AFE380D54FE953C35E06D8CC1DC02_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___fileName0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.FileInfo::get_Directory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* FileInfo_get_Directory_m17FDB04561FFB59BF0EAF22E92A6A8BAD3572EE6 (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.IO.FileAttributes System.IO.File::GetAttributes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t File_GetAttributes_mA6F7E4345FF27BF66C1EB8F2AE3BF03ACF4868CA (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.Directory::Delete(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Directory_Delete_mB5C70379DEFE9B8AA95F67BAE04233E60CEF09F4 (String_t* ___path0, bool ___recursive1, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.Directory::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Directory_Move_mA9C7ED31B0223C808C52AC0AF5F4476305DB5D31 (String_t* ___sourceDirName0, String_t* ___destDirName1, const RuntimeMethod* method) ;
// System.Void System.IO.File::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Move_mBC9450111E0144A55D893A720F19E612D658AC37 (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__0_MoveNext_m6800B9252F1837B7D2936749295A31F6BC8A39E6 (U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__0_SetStateMachine_mAC73CE2AC18B0F8A33F8609FC12681C38A398C73 (U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___xMin0, int32_t ___yMin1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Inputs.CropTextureInput::CommitFrame(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropTextureInput_CommitFrame_m38E1E66FF5227774C04EFBD82DDC7A9ECC6846B5 (CropTextureInput_t108C1FE23A0E42FFC5509181F53A24D52347A293* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// Unity.Mathematics.float2 Unity.Mathematics.math::float2(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA math_float2_m24A922BBF741AF168DD4591FC8C4CF9E67A85BAE_inline (float ___x0, float ___y1, const RuntimeMethod* method) ;
// Unity.Mathematics.float2 Unity.Mathematics.float2::op_Division(Unity.Mathematics.float2,Unity.Mathematics.float2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Division_mA1BE4D539CEEC02DE7F3C3C35060D3CEF1CBEDDA_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___lhs0, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___rhs1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// Unity.Mathematics.float3x3 Unity.Mathematics.math::float3x3(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 math_float3x3_m63BD623B75D81DD4349E93172851DA6CAB8D899F_inline (float ___m000, float ___m011, float ___m022, float ___m103, float ___m114, float ___m125, float ___m206, float ___m217, float ___m228, const RuntimeMethod* method) ;
// Unity.Mathematics.float3x3 Unity.Mathematics.math::inverse(Unity.Mathematics.float3x3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 math_inverse_m19A75AE9AE2D85777635A150E0319767633FD10C (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___m0, const RuntimeMethod* method) ;
// Unity.Mathematics.float3x3 Unity.Mathematics.math::mul(Unity.Mathematics.float3x3,Unity.Mathematics.float3x3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 math_mul_m0C1D080B5BFCAB1FD107CDB500C283E77247F87D_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___a0, float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545 (const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.GLESReadback::.ctor(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLESReadback__ctor_m6011A0E7B9592657B9686AF42ECE597B280E4979 (GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* __this, int32_t ___width0, int32_t ___height1, bool ___multithreading2, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Inputs.GLESTextureInput/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mF38B6A4B6FCB375BB910BFA1426DC3C93704A471 (U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Collections.NativeArray`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8ECD8F09105531961905916F93FB17B456C6B2C0 (Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC6D38157DECEAAD91322362C36F77954D4314270*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8ECD8F09105531961905916F93FB17B456C6B2C0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void NatSuite.Rendering.GLESReadback::Request(UnityEngine.Texture,System.Action`1<Unity.Collections.NativeArray`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLESReadback_Request_m7823B636F21209935398DABAF3A51D426510075B (GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* ___handler1, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.GLESReadback::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLESReadback_Dispose_mD5C8AEB6F256B8A01D1D4335ED155318D214B9A2 (GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* __this, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeBufferPointerWithoutChecks<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_gshared)(___nativeArray0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.RectInt::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A RectInt_get_position_m537BE53F3B4DA27BA48F230A13FBF901945AC0E6 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2Int::op_Implicit(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Int_op_Implicit_m5B9FB268943E6CAB6E40E13D30BA49A9AC7D2059_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Translate_mF3EDFC59C9E51DC0C0A483F6E44A4930D62E4091 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.RectInt::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A RectInt_get_size_mB039AB397BD0A60329D9FC6BF4096601647C204D (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Matrix4x4::Inverse3DAffine(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_Inverse3DAffine_m7A7796EE699A2228A709611D11364541DE768AE6 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___input0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___result1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3x3::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3x3__ctor_m3AB31C9B587ABDCF15C8BF0E3A5B0158996A75ED_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79* __this, float ___m000, float ___m011, float ___m022, float ___m103, float ___m114, float ___m125, float ___m206, float ___m217, float ___m228, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Multiply(Unity.Mathematics.float3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___lhs0, float ___rhs1, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Addition(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___lhs0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___rhs1, const RuntimeMethod* method) ;
// Unity.Mathematics.float3x3 Unity.Mathematics.math::float3x3(Unity.Mathematics.float3,Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 math_float3x3_m9EFCC44816C0612E9EE86D0ADD54D38C0B2BDAFF_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c00, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c11, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c22, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3x3::.ctor(Unity.Mathematics.float3,Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3x3__ctor_mA652DC011B892B36A8216646B51B2014F89CE93E_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c00, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c11, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c22, const RuntimeMethod* method) ;
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
// System.Threading.Tasks.Task`1<System.String> NatSuite.Recorders.RecorderExtensions::FinishWriting(NatSuite.Recorders.IMediaRecorder,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* RecorderExtensions_FinishWriting_m7AF6E58B42638FC73CFC1BF8940368E4CF0A613F (RuntimeObject* ___recorder0, String_t* ___recordingName1, bool ___overwrite2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_m0A7E9110313EA34E81DE3700E7681FA75D96C8C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D(AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		RuntimeObject* L_1 = ___recorder0;
		(&V_0)->___recorder_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___recorder_2), (void*)L_1);
		String_t* L_2 = ___recordingName1;
		(&V_0)->___recordingName_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___recordingName_3), (void*)L_2);
		bool L_3 = ___overwrite2;
		(&V_0)->___overwrite_4 = L_3;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_m0A7E9110313EA34E81DE3700E7681FA75D96C8C1(L_4, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_m0A7E9110313EA34E81DE3700E7681FA75D96C8C1_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E(L_5, AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		return L_6;
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
// System.Void NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__0_MoveNext_m6800B9252F1837B7D2936749295A31F6BC8A39E6 (U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_m22E57267C1B6AF994F2DC7304DBDDE465D850A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B8_0 = 0;
	IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* G_B19_0 = NULL;
	IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* G_B18_0 = NULL;
	IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* G_B20_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0049_1;
			}
		}
		{
			// var src = await recorder.FinishWriting();
			RuntimeObject* L_2 = __this->___recorder_2;
			NullCheck(L_2);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_3;
			L_3 = InterfaceFuncInvoker0< Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* >::Invoke(5 /* System.Threading.Tasks.Task`1<System.String> NatSuite.Recorders.IMediaRecorder::FinishWriting() */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_2);
			NullCheck(L_3);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_4;
			L_4 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_3, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_5 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_5), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0066_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___U3CU3E1__state_0 = L_6;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_7 = V_5;
			__this->___U3CU3Eu__1_5 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_8 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_m22E57267C1B6AF994F2DC7304DBDDE465D850A7B(L_8, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1_m22E57267C1B6AF994F2DC7304DBDDE465D850A7B_RuntimeMethod_var);
			goto IL_012c;
		}

IL_0049_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_9 = __this->___U3CU3Eu__1_5;
			V_5 = L_9;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_10 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0066_1:
		{
			String_t* L_12;
			L_12 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_5), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			V_2 = L_12;
			// var dst = Path.Combine(new FileInfo(src).Directory.FullName, recordingName);
			String_t* L_13 = V_2;
			FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_14 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
			NullCheck(L_14);
			FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_14, L_13, NULL);
			NullCheck(L_14);
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_15;
			L_15 = FileInfo_get_Directory_m17FDB04561FFB59BF0EAF22E92A6A8BAD3572EE6(L_14, NULL);
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_15);
			String_t* L_17 = __this->___recordingName_3;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_18;
			L_18 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_16, L_17, NULL);
			V_3 = L_18;
			// var directory = File.GetAttributes(src).HasFlag(FileAttributes.Directory); // src and dst are same type
			String_t* L_19 = V_2;
			int32_t L_20;
			L_20 = File_GetAttributes_mA6F7E4345FF27BF66C1EB8F2AE3BF03ACF4868CA(L_19, NULL);
			int32_t L_21 = L_20;
			int32_t L_22 = ((int32_t)16);
			bool L_23 = il2cpp_codegen_enum_has_flag((int32_t)L_21, (int32_t)L_22);
			V_4 = L_23;
			// var exists = File.Exists(dst) || Directory.Exists(dst);
			String_t* L_24 = V_3;
			bool L_25;
			L_25 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_24, NULL);
			if (L_25)
			{
				goto IL_00b3_1;
			}
		}
		{
			String_t* L_26 = V_3;
			bool L_27;
			L_27 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_26, NULL);
			G_B8_0 = ((int32_t)(L_27));
			goto IL_00b4_1;
		}

IL_00b3_1:
		{
			G_B8_0 = 1;
		}

IL_00b4_1:
		{
			// if (exists && overwrite)
			bool L_28 = __this->___overwrite_4;
			if (!((int32_t)(G_B8_0&(int32_t)L_28)))
			{
				goto IL_00d0_1;
			}
		}
		{
			// if (directory)
			bool L_29 = V_4;
			if (!L_29)
			{
				goto IL_00ca_1;
			}
		}
		{
			// Directory.Delete(dst, true);
			String_t* L_30 = V_3;
			Directory_Delete_mB5C70379DEFE9B8AA95F67BAE04233E60CEF09F4(L_30, (bool)1, NULL);
			goto IL_00d0_1;
		}

IL_00ca_1:
		{
			// File.Delete(dst);
			String_t* L_31 = V_3;
			File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_31, NULL);
		}

IL_00d0_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				// if (directory)
				bool L_32 = V_4;
				if (!L_32)
				{
					goto IL_00de_2;
				}
			}
			{
				// Directory.Move(src, dst);
				String_t* L_33 = V_2;
				String_t* L_34 = V_3;
				Directory_Move_mA9C7ED31B0223C808C52AC0AF5F4476305DB5D31(L_33, L_34, NULL);
				goto IL_00e5_2;
			}

IL_00de_2:
			{
				// File.Move(src, dst);
				String_t* L_35 = V_2;
				String_t* L_36 = V_3;
				File_Move_mBC9450111E0144A55D893A720F19E612D658AC37(L_35, L_36, NULL);
			}

IL_00e5_2:
			{
				// }
				goto IL_00fb_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e7_1;
			}
			throw e;
		}

CATCH_00e7_1:
		{// begin catch(System.IO.IOException)
			{
				// if (directory)
				bool L_37 = V_4;
				G_B18_0 = ((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*));
				if (!L_37)
				{
					G_B19_0 = ((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*));
					goto IL_00f4_1;
				}
			}
			{
				// Directory.Delete(src, true);
				String_t* L_38 = V_2;
				Directory_Delete_mB5C70379DEFE9B8AA95F67BAE04233E60CEF09F4(L_38, (bool)1, NULL);
				G_B20_0 = G_B18_0;
				goto IL_00fa_1;
			}

IL_00f4_1:
			{
				// File.Delete(src);
				String_t* L_39 = V_2;
				File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_39, NULL);
				G_B20_0 = G_B19_0;
			}

IL_00fa_1:
			{
				// throw ex;
				IL2CPP_RAISE_MANAGED_EXCEPTION(G_B20_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFinishWritingU3Ed__0_MoveNext_m6800B9252F1837B7D2936749295A31F6BC8A39E6_RuntimeMethod_var)));
			}
		}// end catch (depth: 2)

IL_00fb_1:
		{
			// return dst;
			String_t* L_40 = V_3;
			V_1 = L_40;
			goto IL_0118;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ff;
		}
		throw e;
	}

CATCH_00ff:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_41 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_42 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C(L_41, L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_012c;
	}// end catch (depth: 1)

IL_0118:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_43 = (&__this->___U3CU3Et__builder_1);
		String_t* L_44 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E(L_43, L_44, AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
	}

IL_012c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFinishWritingU3Ed__0_MoveNext_m6800B9252F1837B7D2936749295A31F6BC8A39E6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1*>(__this + _offset);
	U3CFinishWritingU3Ed__0_MoveNext_m6800B9252F1837B7D2936749295A31F6BC8A39E6(_thisAdjusted, method);
}
// System.Void NatSuite.Recorders.RecorderExtensions/<FinishWriting>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__0_SetStateMachine_mAC73CE2AC18B0F8A33F8609FC12681C38A398C73 (U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFinishWritingU3Ed__0_SetStateMachine_mAC73CE2AC18B0F8A33F8609FC12681C38A398C73_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFinishWritingU3Ed__0_tCC65200D35F6855E553167C0B22CDBDB3BAA5FE1*>(__this + _offset);
	U3CFinishWritingU3Ed__0_SetStateMachine_mAC73CE2AC18B0F8A33F8609FC12681C38A398C73(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.Inputs.CropTextureInput::.ctor(NatSuite.Recorders.Inputs.ITextureInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropTextureInput__ctor_m3319371BC2FEEA046FD3C7E4661498FF94FEE455 (CropTextureInput_t108C1FE23A0E42FFC5509181F53A24D52347A293* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC348E798875D1A6CF77EDB15F734D4DF651CB4BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CropTextureInput (ITextureInput input) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.input = input;
		RuntimeObject* L_0 = ___input0;
		__this->___input_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_2), (void*)L_0);
		// this.material = new Material(Shader.Find(@"Hidden/NCPX/CropFilter"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1;
		L_1 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralC348E798875D1A6CF77EDB15F734D4DF651CB4BA, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_2, L_1, NULL);
		__this->___material_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_3), (void*)L_2);
		// this.frameSizeInv = new Vector2(1f / input.frameSize.width, 1f/ input.frameSize.height);
		RuntimeObject* L_3 = ___input0;
		NullCheck(L_3);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_4;
		L_4 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = L_4.___Item1_0;
		RuntimeObject* L_6 = ___input0;
		NullCheck(L_6);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_7;
		L_7 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_6);
		int32_t L_8 = L_7.___Item2_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((float)((1.0f)/((float)L_5))), ((float)((1.0f)/((float)L_8))), /*hidden argument*/NULL);
		__this->___frameSizeInv_4 = L_9;
		// this.rect = new RectInt(0, 0, input.frameSize.width, input.frameSize.height);
		RuntimeObject* L_10 = ___input0;
		NullCheck(L_10);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_11;
		L_11 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_10);
		int32_t L_12 = L_11.___Item1_0;
		RuntimeObject* L_13 = ___input0;
		NullCheck(L_13);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_14;
		L_14 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_13);
		int32_t L_15 = L_14.___Item2_1;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_16;
		memset((&L_16), 0, sizeof(L_16));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_16), 0, 0, L_12, L_15, /*hidden argument*/NULL);
		__this->___rect_0 = L_16;
		// this.aspectMode = 0;
		__this->___aspectMode_1 = 0;
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CropTextureInput::CommitFrame(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropTextureInput_CommitFrame_m7426FCAAE1B31AAA05A39269B6F2AEFAE3338BE0 (CropTextureInput_t108C1FE23A0E42FFC5509181F53A24D52347A293* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	{
		// var result = RenderTexture.GetTemporary(texture.width, texture.height, 0, RenderTextureFormat.ARGB32);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_1, L_3, 0, 0, NULL);
		V_0 = L_4;
		// CommitFrame(texture, result);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = ___texture0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_0;
		CropTextureInput_CommitFrame_m38E1E66FF5227774C04EFBD82DDC7A9ECC6846B5(__this, L_5, L_6, NULL);
		// input.CommitFrame(result, timestamp);
		RuntimeObject* L_7 = __this->___input_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = V_0;
		int64_t L_9 = ___timestamp1;
		NullCheck(L_7);
		InterfaceActionInvoker2< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int64_t >::Invoke(1 /* System.Void NatSuite.Recorders.Inputs.ITextureInput::CommitFrame(UnityEngine.Texture,System.Int64) */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		// RenderTexture.ReleaseTemporary(result);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_10, NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CropTextureInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropTextureInput_Dispose_m94CF33BE7DBB7513D6E091E3F0A3D21C28CC72A3 (CropTextureInput_t108C1FE23A0E42FFC5509181F53A24D52347A293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// input.Dispose();
		RuntimeObject* L_0 = __this->___input_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_0);
		// Material.Destroy(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___material_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.CropTextureInput::NatSuite.Recorders.Inputs.ITextureInput.get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D CropTextureInput_NatSuite_Recorders_Inputs_ITextureInput_get_frameSize_mF5E0E8FB1A78E0F823AB47A643AEEB649A1FD795 (CropTextureInput_t108C1FE23A0E42FFC5509181F53A24D52347A293* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (int, int) ITextureInput.frameSize => input.frameSize;
		RuntimeObject* L_0 = __this->___input_2;
		NullCheck(L_0);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_1;
		L_1 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void NatSuite.Recorders.Inputs.CropTextureInput::CommitFrame(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropTextureInput_CommitFrame_m38E1E66FF5227774C04EFBD82DDC7A9ECC6846B5 (CropTextureInput_t108C1FE23A0E42FFC5509181F53A24D52347A293* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_3;
	memset((&V_3), 0, sizeof(V_3));
	float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var (width, height) = input.frameSize;
		RuntimeObject* L_0 = __this->___input_2;
		NullCheck(L_0);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_1;
		L_1 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_0);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_2 = L_1;
		int32_t L_3 = L_2.___Item1_0;
		V_0 = L_3;
		int32_t L_4 = L_2.___Item2_1;
		V_1 = L_4;
		// var cropOffs = float2(rect.xMin, rect.yMin) / float2(width, height);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_5 = (&__this->___rect_0);
		int32_t L_6;
		L_6 = RectInt_get_xMin_mA5FB5AF1133380E080CF750D21327DE27EADEE1B(L_5, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_7 = (&__this->___rect_0);
		int32_t L_8;
		L_8 = RectInt_get_yMin_m6914C2254158DF797E20E381626DC08A2700147B(L_7, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_9;
		L_9 = math_float2_m24A922BBF741AF168DD4591FC8C4CF9E67A85BAE_inline(((float)L_6), ((float)L_8), NULL);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_12;
		L_12 = math_float2_m24A922BBF741AF168DD4591FC8C4CF9E67A85BAE_inline(((float)L_10), ((float)L_11), NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_13;
		L_13 = float2_op_Division_mA1BE4D539CEEC02DE7F3C3C35060D3CEF1CBEDDA_inline(L_9, L_12, NULL);
		V_2 = L_13;
		// var cropSize = float2(rect.width, rect.height) / float2(width, height);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_14 = (&__this->___rect_0);
		int32_t L_15;
		L_15 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7(L_14, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_16 = (&__this->___rect_0);
		int32_t L_17;
		L_17 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C(L_16, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_18;
		L_18 = math_float2_m24A922BBF741AF168DD4591FC8C4CF9E67A85BAE_inline(((float)L_15), ((float)L_17), NULL);
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_21;
		L_21 = math_float2_m24A922BBF741AF168DD4591FC8C4CF9E67A85BAE_inline(((float)L_19), ((float)L_20), NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_22;
		L_22 = float2_op_Division_mA1BE4D539CEEC02DE7F3C3C35060D3CEF1CBEDDA_inline(L_18, L_21, NULL);
		V_3 = L_22;
		// var A = float3x3(
		//     1f, 0f, 1f,
		//     0f, 1f, 1f,
		//     1f, 1f, 1f
		// );
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_23;
		L_23 = math_float3x3_m63BD623B75D81DD4349E93172851DA6CAB8D899F_inline((1.0f), (0.0f), (1.0f), (0.0f), (1.0f), (1.0f), (1.0f), (1.0f), (1.0f), NULL);
		V_4 = L_23;
		// var B = float3x3(
		//     cropOffs.x + cropSize.x, cropOffs.x, cropOffs.x + cropSize.x,
		//     cropOffs.y, cropOffs.y + cropSize.y, cropOffs.y + cropSize.y,
		//     1f, 1f, 1f
		// );
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_24 = V_2;
		float L_25 = L_24.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_26 = V_3;
		float L_27 = L_26.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_28 = V_2;
		float L_29 = L_28.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_30 = V_2;
		float L_31 = L_30.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_32 = V_3;
		float L_33 = L_32.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_34 = V_2;
		float L_35 = L_34.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_36 = V_2;
		float L_37 = L_36.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_38 = V_3;
		float L_39 = L_38.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_40 = V_2;
		float L_41 = L_40.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_42 = V_3;
		float L_43 = L_42.___y_1;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_44;
		L_44 = math_float3x3_m63BD623B75D81DD4349E93172851DA6CAB8D899F_inline(((float)il2cpp_codegen_add(L_25, L_27)), L_29, ((float)il2cpp_codegen_add(L_31, L_33)), L_35, ((float)il2cpp_codegen_add(L_37, L_39)), ((float)il2cpp_codegen_add(L_41, L_43)), (1.0f), (1.0f), (1.0f), NULL);
		// var T = mul(B, inverse(A));
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_45 = V_4;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_46;
		L_46 = math_inverse_m19A75AE9AE2D85777635A150E0319767633FD10C(L_45, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_47;
		L_47 = math_mul_m0C1D080B5BFCAB1FD107CDB500C283E77247F87D_inline(L_44, L_46, NULL);
		// Debug.Log(T);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_48 = L_47;
		RuntimeObject* L_49 = Box(float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79_il2cpp_TypeInfo_var, &L_48);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_49, NULL);
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
// System.Void NatSuite.Recorders.Inputs.GLESTextureInput::.ctor(NatSuite.Recorders.IMediaRecorder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLESTextureInput__ctor_mA078856A5AF84F857D006E2C18D97DA21E24B42D (GLESTextureInput_tF671854D86DE5D6FF4963F15EEA713A022CF2F6B* __this, RuntimeObject* ___recorder0, bool ___multithreading1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GLESTextureInput (IMediaRecorder recorder, bool multithreading = false) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (Application.platform != RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_001a;
		}
	}
	{
		// throw new InvalidOperationException(@"GLESTextureInput can only be used on Android");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAABFBBA72F0F6E955D53871DAD97A57666E691CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GLESTextureInput__ctor_mA078856A5AF84F857D006E2C18D97DA21E24B42D_RuntimeMethod_var)));
	}

IL_001a:
	{
		// if (SystemInfo.graphicsDeviceType != GraphicsDeviceType.OpenGLES3)
		int32_t L_2;
		L_2 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)11))))
		{
			goto IL_002e;
		}
	}
	{
		// throw new InvalidOperationException(@"GLESTextureInput can only be used with OpenGL ES3");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DCBB6BF3ADCD4FBF9C46845AF7E3343D7A5710C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GLESTextureInput__ctor_mA078856A5AF84F857D006E2C18D97DA21E24B42D_RuntimeMethod_var)));
	}

IL_002e:
	{
		// this.recorder = recorder;
		RuntimeObject* L_4 = ___recorder0;
		__this->___recorder_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recorder_0), (void*)L_4);
		// this.readback = new GLESReadback(recorder.frameSize.width, recorder.frameSize.height, multithreading);
		RuntimeObject* L_5 = ___recorder0;
		NullCheck(L_5);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_6;
		L_6 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = L_6.___Item1_0;
		RuntimeObject* L_8 = ___recorder0;
		NullCheck(L_8);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_9;
		L_9 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_8);
		int32_t L_10 = L_9.___Item2_1;
		bool L_11 = ___multithreading1;
		GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_12 = (GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F*)il2cpp_codegen_object_new(GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		GLESReadback__ctor_m6011A0E7B9592657B9686AF42ECE597B280E4979(L_12, L_7, L_10, L_11, NULL);
		__this->___readback_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___readback_1), (void*)L_12);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.GLESTextureInput::CommitFrame(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLESTextureInput_CommitFrame_mF206C86A6B00C20218933CA22DBAFD79584F3BF6 (GLESTextureInput_tF671854D86DE5D6FF4963F15EEA713A022CF2F6B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC6D38157DECEAAD91322362C36F77954D4314270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m4113BDFCE94A8298ADB1C61BCAC35F7246A74AD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E* L_0 = (U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_mF38B6A4B6FCB375BB910BFA1426DC3C93704A471(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E* L_2 = V_0;
		int64_t L_3 = ___timestamp1;
		NullCheck(L_2);
		L_2->___timestamp_1 = L_3;
		// public unsafe void CommitFrame (Texture texture, long timestamp) => readback.Request(
		//     texture,
		//     pixelBuffer => recorder?.CommitFrame(
		//         NativeArrayUnsafeUtility.GetUnsafeBufferPointerWithoutChecks(pixelBuffer),
		//         timestamp
		//     )
		// );
		GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_4 = __this->___readback_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = ___texture0;
		U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E* L_6 = V_0;
		Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* L_7 = (Action_1_tC6D38157DECEAAD91322362C36F77954D4314270*)il2cpp_codegen_object_new(Action_1_tC6D38157DECEAAD91322362C36F77954D4314270_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m8ECD8F09105531961905916F93FB17B456C6B2C0(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m4113BDFCE94A8298ADB1C61BCAC35F7246A74AD0_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		GLESReadback_Request_m7823B636F21209935398DABAF3A51D426510075B(L_4, L_5, L_7, NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.GLESTextureInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLESTextureInput_Dispose_m05835B25F548036228907B17B976FB7459842B19 (GLESTextureInput_tF671854D86DE5D6FF4963F15EEA713A022CF2F6B* __this, const RuntimeMethod* method) 
{
	{
		// recorder = default;
		__this->___recorder_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recorder_0), (void*)(RuntimeObject*)NULL);
		// readback.Dispose();
		GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_0 = __this->___readback_1;
		NullCheck(L_0);
		GLESReadback_Dispose_mD5C8AEB6F256B8A01D1D4335ED155318D214B9A2(L_0, NULL);
		// }
		return;
	}
}
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.GLESTextureInput::NatSuite.Recorders.Inputs.ITextureInput.get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D GLESTextureInput_NatSuite_Recorders_Inputs_ITextureInput_get_frameSize_m31049FBE7262D7DC931BD274A2C7CB9FB35DA387 (GLESTextureInput_tF671854D86DE5D6FF4963F15EEA713A022CF2F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (int, int) ITextureInput.frameSize => recorder.frameSize;
		RuntimeObject* L_0 = __this->___recorder_0;
		NullCheck(L_0);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_1;
		L_1 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Void NatSuite.Recorders.Inputs.GLESTextureInput/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mF38B6A4B6FCB375BB910BFA1426DC3C93704A471 (U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.GLESTextureInput/<>c__DisplayClass1_0::<CommitFrame>b__0(Unity.Collections.NativeArray`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m4113BDFCE94A8298ADB1C61BCAC35F7246A74AD0 (U3CU3Ec__DisplayClass1_0_t41E3E3918E47D03EFB7EE618D241DE7C08F8967E* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___pixelBuffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// pixelBuffer => recorder?.CommitFrame(
		//     NativeArrayUnsafeUtility.GetUnsafeBufferPointerWithoutChecks(pixelBuffer),
		//     timestamp
		// )
		GLESTextureInput_tF671854D86DE5D6FF4963F15EEA713A022CF2F6B* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___recorder_0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3 = ___pixelBuffer0;
		void* L_4;
		L_4 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D(L_3, NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_RuntimeMethod_var);
		int64_t L_5 = __this->___timestamp_1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< void*, int64_t >::Invoke(2 /* System.Void NatSuite.Recorders.IMediaRecorder::CommitFrame(System.Void*,System.Int64) */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, G_B2_0, L_4, L_5);
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
// System.Void NatSuite.Recorders.Inputs.MTLTextureInput::.ctor(NatSuite.Recorders.IMediaRecorder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLTextureInput__ctor_m9614A93506624609DAA30A393290DFE9AF4DD242 (MTLTextureInput_tB60446934475A4735E9736AA0E9D7DF5C7D489B6* __this, RuntimeObject* ___recorder0, bool ___multithreading1, const RuntimeMethod* method) 
{
	{
		// public MTLTextureInput (IMediaRecorder recorder, bool multithreading = false) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (Application.platform != RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_0019;
		}
	}
	{
		// throw new InvalidOperationException(@"MTLTextureInput can only be used on iOS");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA84AAC06C811071EBDB5E774DFCCBBE6AD2CA5E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MTLTextureInput__ctor_m9614A93506624609DAA30A393290DFE9AF4DD242_RuntimeMethod_var)));
	}

IL_0019:
	{
		// if (SystemInfo.graphicsDeviceType != GraphicsDeviceType.Metal)
		int32_t L_2;
		L_2 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_002d;
		}
	}
	{
		// throw new InvalidOperationException(@"MTLTextureInput can only be used with Metal");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99FC79C3136C445C075C1FDE2A64F39D8880A899)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MTLTextureInput__ctor_m9614A93506624609DAA30A393290DFE9AF4DD242_RuntimeMethod_var)));
	}

IL_002d:
	{
		// this.recorder = recorder;
		RuntimeObject* L_4 = ___recorder0;
		__this->___recorder_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recorder_0), (void*)L_4);
		// this.readback = null; //new MTLReadback(recorder.frameSize.width, recorder.frameSize.height, multithreading);
		__this->___readback_1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___readback_1), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.MTLTextureInput::CommitFrame(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLTextureInput_CommitFrame_m5E1BFBF721FA732EE5E139C1C014BA99004664B5 (MTLTextureInput_tB60446934475A4735E9736AA0E9D7DF5C7D489B6* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.MTLTextureInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLTextureInput_Dispose_m74F5CF9E403502158955C275F678FD40CEB124C8 (MTLTextureInput_tB60446934475A4735E9736AA0E9D7DF5C7D489B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// recorder = default;
		__this->___recorder_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recorder_0), (void*)(RuntimeObject*)NULL);
		// readback.Dispose();
		RuntimeObject* L_0 = __this->___readback_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.MTLTextureInput::NatSuite.Recorders.Inputs.ITextureInput.get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D MTLTextureInput_NatSuite_Recorders_Inputs_ITextureInput_get_frameSize_m32EC29428F7442C296A2D82AAB5CB14E4F2B588A (MTLTextureInput_tB60446934475A4735E9736AA0E9D7DF5C7D489B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (int, int) ITextureInput.frameSize => recorder.frameSize;
		RuntimeObject* L_0 = __this->___recorder_0;
		NullCheck(L_0);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_1;
		L_1 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Void NatSuite.Recorders.Inputs.WatermarkTextureInput::.ctor(NatSuite.Recorders.Inputs.ITextureInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WatermarkTextureInput__ctor_m73D17462F8E341B467DED15E3D3ECC253530A980 (WatermarkTextureInput_t4C38BDB39243FDC8AE7A6E62DACFDB71DD7764C0* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD431696B0851E3D91432C3BEE28E210E0959AE0D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WatermarkTextureInput (ITextureInput input) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.input = input;
		RuntimeObject* L_0 = ___input0;
		__this->___input_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_3), (void*)L_0);
		// this.material = new Material(Shader.Find(@"Hidden/NCPX/WatermarkFilter"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1;
		L_1 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralD431696B0851E3D91432C3BEE28E210E0959AE0D, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_2, L_1, NULL);
		__this->___material_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_4), (void*)L_2);
		// this.frameSizeInv = new Vector2(1f / input.frameSize.width, 1f / input.frameSize.height);
		RuntimeObject* L_3 = ___input0;
		NullCheck(L_3);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_4;
		L_4 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = L_4.___Item1_0;
		RuntimeObject* L_6 = ___input0;
		NullCheck(L_6);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_7;
		L_7 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_6);
		int32_t L_8 = L_7.___Item2_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((float)((1.0f)/((float)L_5))), ((float)((1.0f)/((float)L_8))), /*hidden argument*/NULL);
		__this->___frameSizeInv_5 = L_9;
		// this.rect = new RectInt(0, 0, input.frameSize.width, input.frameSize.height);
		RuntimeObject* L_10 = ___input0;
		NullCheck(L_10);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_11;
		L_11 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_10);
		int32_t L_12 = L_11.___Item1_0;
		RuntimeObject* L_13 = ___input0;
		NullCheck(L_13);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_14;
		L_14 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_13);
		int32_t L_15 = L_14.___Item2_1;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_16;
		memset((&L_16), 0, sizeof(L_16));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_16), 0, 0, L_12, L_15, /*hidden argument*/NULL);
		__this->___rect_1 = L_16;
		// this.aspectMode = 0;
		__this->___aspectMode_2 = 0;
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.WatermarkTextureInput::CommitFrame(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WatermarkTextureInput_CommitFrame_m5EED6626F9E399C82FB650874E1B75684184E653 (WatermarkTextureInput_t4C38BDB39243FDC8AE7A6E62DACFDB71DD7764C0* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28BBC4BDE4FD330B45DC7DD7CC37F01B777452E1);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	float G_B4_0 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	{
		// if (watermark) {
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___watermark_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0166;
		}
	}
	{
		// var result = RenderTexture.GetTemporary(texture.width, texture.height, 0, RenderTextureFormat.ARGB32);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___texture0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6;
		L_6 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_3, L_5, 0, 0, NULL);
		V_0 = L_6;
		// Graphics.Blit(texture, result);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = ___texture0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_7, L_8, NULL);
		// var offset = Matrix4x4.Translate(Vector2.Scale(rect.position, frameSizeInv));
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_9 = (&__this->___rect_1);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10;
		L_10 = RectInt_get_position_m537BE53F3B4DA27BA48F230A13FBF901945AC0E6(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2Int_op_Implicit_m5B9FB268943E6CAB6E40E13D30BA49A9AC7D2059_inline(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___frameSizeInv_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = Matrix4x4_Translate_mF3EDFC59C9E51DC0C0A483F6E44A4930D62E4091(L_14, NULL);
		// var dstAspect = (float)result.width / result.height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		V_1 = ((float)(((float)L_17)/((float)L_19)));
		// var watermarkAspect = (float)watermark.width / watermark.height;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_20 = __this->___watermark_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_22 = __this->___watermark_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_22);
		V_2 = ((float)(((float)L_21)/((float)L_23)));
		// var aspect = Matrix4x4.Scale(new Vector3(1f, dstAspect, 1f)) * Matrix4x4.Scale(new Vector3(1f, 1f / watermarkAspect, 1f));
		float L_24 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), (1.0f), L_24, (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		L_26 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_25, NULL);
		float L_27 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), (1.0f), ((float)((1.0f)/L_27)), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_29;
		L_29 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_28, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30;
		L_30 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_26, L_29, NULL);
		V_3 = L_30;
		// var axisScale = Vector2.Scale(rect.size, frameSizeInv);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_31 = (&__this->___rect_1);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_32;
		L_32 = RectInt_get_size_mB039AB397BD0A60329D9FC6BF4096601647C204D(L_31, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2Int_op_Implicit_m5B9FB268943E6CAB6E40E13D30BA49A9AC7D2059_inline(L_32, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = __this->___frameSizeInv_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline(L_33, L_34, NULL);
		V_4 = L_35;
		// var scaleFactor = aspectMode == AspectMode.Fill ? Mathf.Max(axisScale.x, axisScale.y) : Mathf.Min(axisScale.x, axisScale.y);
		int32_t L_36 = __this->___aspectMode_2;
		G_B2_0 = L_15;
		if ((((int32_t)L_36) == ((int32_t)1)))
		{
			G_B3_0 = L_15;
			goto IL_00eb;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_4;
		float L_38 = L_37.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_4;
		float L_40 = L_39.___y_1;
		float L_41;
		L_41 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_38, L_40, NULL);
		G_B4_0 = L_41;
		G_B4_1 = G_B2_0;
		goto IL_00fe;
	}

IL_00eb:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_4;
		float L_43 = L_42.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_4;
		float L_45 = L_44.___y_1;
		float L_46;
		L_46 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_43, L_45, NULL);
		G_B4_0 = L_46;
		G_B4_1 = G_B3_0;
	}

IL_00fe:
	{
		// var scale = Matrix4x4.Scale(new Vector3(scaleFactor, scaleFactor, 1f));
		float L_47 = G_B4_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_47, L_47, (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_49;
		L_49 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_48, NULL);
		V_5 = L_49;
		// var forward = offset * aspect * scale;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_50 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_51;
		L_51 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(G_B4_1, L_50, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_52 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_53;
		L_53 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_51, L_52, NULL);
		// var inverse = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_54;
		L_54 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		V_6 = L_54;
		// if (!Matrix4x4.Inverse3DAffine(forward, ref inverse))
		bool L_55;
		L_55 = Matrix4x4_Inverse3DAffine_m7A7796EE699A2228A709611D11364541DE768AE6(L_53, (&V_6), NULL);
		if (L_55)
		{
			goto IL_012e;
		}
	}
	{
		// return;
		return;
	}

IL_012e:
	{
		// material.SetMatrix("_Transform", inverse);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56 = __this->___material_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_57 = V_6;
		NullCheck(L_56);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_56, _stringLiteral28BBC4BDE4FD330B45DC7DD7CC37F01B777452E1, L_57, NULL);
		// Graphics.Blit(watermark, result, material);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_58 = __this->___watermark_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60 = __this->___material_4;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_58, L_59, L_60, NULL);
		// input.CommitFrame(result, timestamp);
		RuntimeObject* L_61 = __this->___input_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62 = V_0;
		int64_t L_63 = ___timestamp1;
		NullCheck(L_61);
		InterfaceActionInvoker2< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int64_t >::Invoke(1 /* System.Void NatSuite.Recorders.Inputs.ITextureInput::CommitFrame(UnityEngine.Texture,System.Int64) */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_61, L_62, L_63);
		// RenderTexture.ReleaseTemporary(result);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_64 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_64, NULL);
		return;
	}

IL_0166:
	{
		// input.CommitFrame(texture, timestamp);
		RuntimeObject* L_65 = __this->___input_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_66 = ___texture0;
		int64_t L_67 = ___timestamp1;
		NullCheck(L_65);
		InterfaceActionInvoker2< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int64_t >::Invoke(1 /* System.Void NatSuite.Recorders.Inputs.ITextureInput::CommitFrame(UnityEngine.Texture,System.Int64) */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_65, L_66, L_67);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.WatermarkTextureInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WatermarkTextureInput_Dispose_m05F296AC4D0A8271091218E2D4EF1A37AD47E069 (WatermarkTextureInput_t4C38BDB39243FDC8AE7A6E62DACFDB71DD7764C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// input.Dispose();
		RuntimeObject* L_0 = __this->___input_3;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_0);
		// Material.Destroy(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___material_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.WatermarkTextureInput::NatSuite.Recorders.Inputs.ITextureInput.get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D WatermarkTextureInput_NatSuite_Recorders_Inputs_ITextureInput_get_frameSize_mB2FFC6CACE3864D9691CC61B830EABA81887D698 (WatermarkTextureInput_t4C38BDB39243FDC8AE7A6E62DACFDB71DD7764C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (int, int) ITextureInput.frameSize => input.frameSize;
		RuntimeObject* L_0 = __this->___input_3;
		NullCheck(L_0);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_1;
		L_1 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA math_float2_m24A922BBF741AF168DD4591FC8C4CF9E67A85BAE_inline (float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		// public static float2 float2(float x, float y) { return new float2(x, y); }
		float L_0 = ___x0;
		float L_1 = ___y1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2;
		memset((&L_2), 0, sizeof(L_2));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Division_mA1BE4D539CEEC02DE7F3C3C35060D3CEF1CBEDDA_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___lhs0, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float2 operator / (float2 lhs, float2 rhs) { return new float2 (lhs.x / rhs.x, lhs.y / rhs.y); }
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8;
		memset((&L_8), 0, sizeof(L_8));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 math_float3x3_m63BD623B75D81DD4349E93172851DA6CAB8D899F_inline (float ___m000, float ___m011, float ___m022, float ___m103, float ___m114, float ___m125, float ___m206, float ___m217, float ___m228, const RuntimeMethod* method) 
{
	{
		// return new float3x3(m00, m01, m02,
		//                     m10, m11, m12,
		//                     m20, m21, m22);
		float L_0 = ___m000;
		float L_1 = ___m011;
		float L_2 = ___m022;
		float L_3 = ___m103;
		float L_4 = ___m114;
		float L_5 = ___m125;
		float L_6 = ___m206;
		float L_7 = ___m217;
		float L_8 = ___m228;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3x3__ctor_m3AB31C9B587ABDCF15C8BF0E3A5B0158996A75ED_inline((&L_9), L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 math_mul_m0C1D080B5BFCAB1FD107CDB500C283E77247F87D_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___a0, float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___b1, const RuntimeMethod* method) 
{
	{
		// return float3x3(
		//     a.c0 * b.c0.x + a.c1 * b.c0.y + a.c2 * b.c0.z,
		//     a.c0 * b.c1.x + a.c1 * b.c1.y + a.c2 * b.c1.z,
		//     a.c0 * b.c2.x + a.c1 * b.c2.y + a.c2 * b.c2.z);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_0 = ___a0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = L_0.___c0_0;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_2 = ___b1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = L_2.___c0_0;
		float L_4 = L_3.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5;
		L_5 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_1, L_4, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_6 = ___a0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = L_6.___c1_1;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_8 = ___b1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9 = L_8.___c0_0;
		float L_10 = L_9.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_11;
		L_11 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_7, L_10, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		L_12 = float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline(L_5, L_11, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_13 = ___a0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14 = L_13.___c2_2;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_15 = ___b1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_16 = L_15.___c0_0;
		float L_17 = L_16.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18;
		L_18 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_14, L_17, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_19;
		L_19 = float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline(L_12, L_18, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_20 = ___a0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_21 = L_20.___c0_0;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_22 = ___b1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_23 = L_22.___c1_1;
		float L_24 = L_23.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_25;
		L_25 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_21, L_24, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_26 = ___a0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_27 = L_26.___c1_1;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_28 = ___b1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_29 = L_28.___c1_1;
		float L_30 = L_29.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_31;
		L_31 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_27, L_30, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32;
		L_32 = float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline(L_25, L_31, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_33 = ___a0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_34 = L_33.___c2_2;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_35 = ___b1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_36 = L_35.___c1_1;
		float L_37 = L_36.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_38;
		L_38 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_34, L_37, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_39;
		L_39 = float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline(L_32, L_38, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_40 = ___a0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_41 = L_40.___c0_0;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_42 = ___b1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_43 = L_42.___c2_2;
		float L_44 = L_43.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_45;
		L_45 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_41, L_44, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_46 = ___a0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_47 = L_46.___c1_1;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_48 = ___b1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_49 = L_48.___c2_2;
		float L_50 = L_49.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_51;
		L_51 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_47, L_50, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_52;
		L_52 = float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline(L_45, L_51, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_53 = ___a0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_54 = L_53.___c2_2;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_55 = ___b1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_56 = L_55.___c2_2;
		float L_57 = L_56.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_58;
		L_58 = float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline(L_54, L_57, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_59;
		L_59 = float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline(L_52, L_58, NULL);
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_60;
		L_60 = math_float3x3_m9EFCC44816C0612E9EE86D0ADD54D38C0B2BDAFF_inline(L_19, L_39, L_59, NULL);
		return L_60;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Int_op_Implicit_m5B9FB268943E6CAB6E40E13D30BA49A9AC7D2059_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___v0), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___v0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), ((float)L_0), ((float)L_1), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3x3__ctor_m3AB31C9B587ABDCF15C8BF0E3A5B0158996A75ED_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79* __this, float ___m000, float ___m011, float ___m022, float ___m103, float ___m114, float ___m125, float ___m206, float ___m217, float ___m228, const RuntimeMethod* method) 
{
	{
		// this.c0 = new float3(m00, m10, m20);
		float L_0 = ___m000;
		float L_1 = ___m103;
		float L_2 = ___m206;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		memset((&L_3), 0, sizeof(L_3));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___c0_0 = L_3;
		// this.c1 = new float3(m01, m11, m21);
		float L_4 = ___m011;
		float L_5 = ___m114;
		float L_6 = ___m217;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7;
		memset((&L_7), 0, sizeof(L_7));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_7), L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->___c1_1 = L_7;
		// this.c2 = new float3(m02, m12, m22);
		float L_8 = ___m022;
		float L_9 = ___m125;
		float L_10 = ___m228;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_11;
		memset((&L_11), 0, sizeof(L_11));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->___c2_2 = L_11;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m6E5DC552C8B0F9A180298BD9197FF47B14E0EA81_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___lhs0, float ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float3 operator * (float3 lhs, float rhs) { return new float3 (lhs.x * rhs, lhs.y * rhs, lhs.z * rhs); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		float L_2 = ___rhs1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___lhs0;
		float L_4 = L_3.___y_1;
		float L_5 = ___rhs1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___lhs0;
		float L_7 = L_6.___z_2;
		float L_8 = ___rhs1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Addition_mFFCF4F7457594F5EFB0678C0DE90AAD3D3F6947B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___lhs0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float3 operator + (float3 lhs, float3 rhs) { return new float3 (lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___lhs0;
		float L_9 = L_8.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 math_float3x3_m9EFCC44816C0612E9EE86D0ADD54D38C0B2BDAFF_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c00, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c11, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c22, const RuntimeMethod* method) 
{
	{
		// public static float3x3 float3x3(float3 c0, float3 c1, float3 c2) { return new float3x3(c0, c1, c2); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___c00;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___c11;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___c22;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_3;
		memset((&L_3), 0, sizeof(L_3));
		float3x3__ctor_mA652DC011B892B36A8216646B51B2014F89CE93E_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3x3__ctor_mA652DC011B892B36A8216646B51B2014F89CE93E_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c00, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c11, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c22, const RuntimeMethod* method) 
{
	{
		// this.c0 = c0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___c00;
		__this->___c0_0 = L_0;
		// this.c1 = c1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___c11;
		__this->___c1_1 = L_1;
		// this.c2 = c2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___c22;
		__this->___c2_2 = L_2;
		// }
		return;
	}
}
