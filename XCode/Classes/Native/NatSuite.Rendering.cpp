#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<Unity.Collections.NativeArray`1<System.Byte>>
struct Action_1_tC6D38157DECEAAD91322362C36F77954D4314270;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
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
// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.AndroidJavaObject>
struct TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.AndroidJavaObject>
struct TaskFactory_1_t9391254180C70D75426075DE0FD8CE4A43F4A0BE;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.Task`1<UnityEngine.AndroidJavaObject>
struct Task_1_t906398BA3B2043F228499BE4D02F94FEE7584833;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
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
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// NatSuite.Rendering.GLESReadback
struct GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// NatSuite.Rendering.MTLReadback
struct MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// NatSuite.Rendering.GLESReadback/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E;
// NatSuite.Rendering.GLESReadback/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F;
// NatSuite.Rendering.MTLReadback/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A;
// NatSuite.Rendering.MTLReadback/ReadbackHandler
struct ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099;
// NatSuite.Rendering.RenderThread/UnityRenderingEventAndData
struct UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC6D38157DECEAAD91322362C36F77954D4314270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1A92D2E017272D64E27F9A8011C728224A07D9DC;
IL2CPP_EXTERN_C String_t* _stringLiteral51874ACF060C1DEC8A7B08F48AA555A8C6B9107A;
IL2CPP_EXTERN_C String_t* _stringLiteral58DB76806797E209F294B9E37FC3E3585F8AB455;
IL2CPP_EXTERN_C String_t* _stringLiteral70C1F5FFBE4B184089B8912731883EED976ABB78;
IL2CPP_EXTERN_C String_t* _stringLiteralA782209317C48E96A39C85D51CF1EA2FF3607747;
IL2CPP_EXTERN_C String_t* _stringLiteralBC986A53C33C74A9EBFEF526D6C081EDC0A9262E;
IL2CPP_EXTERN_C String_t* _stringLiteralD1B025461F5845CBB295E53521BB2D878B87BE44;
IL2CPP_EXTERN_C String_t* _stringLiteralD2DDACBC15AC21502F0AD009F1D6D2231945B642;
IL2CPP_EXTERN_C String_t* _stringLiteralD9EE5AF5B4EB10F18968FD4043D831AFE5F501EC;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m2016255DC65588893F234909457AB8CC84593E49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_mB86AF60EB27A75695DE2F6C063C41A69F121D8A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m56A8D93AF2AC109BCB2CDF6FFC851D35C1FED5DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_m78E0AAA11634A2FC3056D4BE05F5A8431206FE18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MTLReadback_OnReadback_m6377D27AD7536D159A3518C0667AA8D381C54A3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisUnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA_m95313327215A0122223FEF29635D0437172DDE81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderThread_OnRenderThreadInvoke_m9A9EABCB5FC6D2E4CF0C36DDD488CD48AEA65F8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m2193861AA694A8F205F1656EF277543768979311_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m06BCA924E56A24CC1CFE912AD8FA88E5FED6F01B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mB33331E5D369971C3144B7F15E3A38DE2B0C569B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m0800F6B7F8C5743AB132145C78B6C03E345DA5EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mA00C9188680EB5E9A8BFC1CBE10E15E2C4432E5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__0_m6B1921F677C2D6849468D4F6EE4D94E94B04E20A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__0_mEAFF778EFEF28A451746C9629659E9FE3835819D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__1_m5397809F052E01D3174D72ADB5827FD63F2ECFB4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2C46C7E1DACD55C5F76F31834FF953A13C1894BF 
{
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

// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.AndroidJavaObject>
struct TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t906398BA3B2043F228499BE4D02F94FEE7584833* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
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
struct Il2CppArrayBounds;

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

// NatSuite.Rendering.GLESReadback/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass NatSuite.Rendering.GLESReadback/<>c__DisplayClass0_0::egl
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___egl_0;
	// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.AndroidJavaObject> NatSuite.Rendering.GLESReadback/<>c__DisplayClass0_0::contextTask
	TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A* ___contextTask_1;
};

// NatSuite.Rendering.GLESReadback/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F  : public RuntimeObject
{
	// NatSuite.Rendering.GLESReadback NatSuite.Rendering.GLESReadback/<>c__DisplayClass1_0::<>4__this
	GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* ___U3CU3E4__this_0;
	// System.Action`1<Unity.Collections.NativeArray`1<System.Byte>> NatSuite.Rendering.GLESReadback/<>c__DisplayClass1_0::handler
	Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* ___handler_1;
};

// NatSuite.Rendering.MTLReadback/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A  : public RuntimeObject
{
	// NatSuite.Rendering.MTLReadback NatSuite.Rendering.MTLReadback/<>c__DisplayClass1_0::<>4__this
	MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* ___U3CU3E4__this_0;
	// System.Action`1<Unity.Collections.NativeArray`1<System.Byte>> NatSuite.Rendering.MTLReadback/<>c__DisplayClass1_0::handler
	Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* ___handler_1;
	// System.Action`1<System.IntPtr> NatSuite.Rendering.MTLReadback/<>c__DisplayClass1_0::wrapper
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___wrapper_2;
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

// System.Threading.Tasks.Task`1<UnityEngine.AndroidJavaObject>
struct Task_1_t906398BA3B2043F228499BE4D02F94FEE7584833  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_result_38;
};

struct Task_1_t906398BA3B2043F228499BE4D02F94FEE7584833_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t9391254180C70D75426075DE0FD8CE4A43F4A0BE* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_39;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB__padding[1];
	};
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A__padding[1];
	};
};

struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_StaticFields
{
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_sendOrPostCallbackRunAction_1;
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

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// NatSuite.Rendering.MTLReadback
struct MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090  : public RuntimeObject
{
	// System.IntPtr NatSuite.Rendering.MTLReadback::readback
	intptr_t ___readback_0;
	// UnityEngine.RenderTexture NatSuite.Rendering.MTLReadback::frameBuffer
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___frameBuffer_1;
	// System.IntPtr NatSuite.Rendering.MTLReadback::readbackTexture
	intptr_t ___readbackTexture_2;
	// System.Int32 NatSuite.Rendering.MTLReadback::bufferSize
	int32_t ___bufferSize_3;
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

// NatSuite.Rendering.RenderThread
struct RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B  : public RuntimeObject
{
};

struct RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_StaticFields
{
	// System.IntPtr NatSuite.Rendering.RenderThread::Callback
	intptr_t ___Callback_0;
};

// UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// NatSuite.Rendering.GLESReadback/<Dispose>d__2
struct U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA 
{
	// System.Int32 NatSuite.Rendering.GLESReadback/<Dispose>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder NatSuite.Rendering.GLESReadback/<Dispose>d__2::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// NatSuite.Rendering.GLESReadback NatSuite.Rendering.GLESReadback/<Dispose>d__2::<>4__this
	GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter NatSuite.Rendering.GLESReadback/<Dispose>d__2::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_3;
};

// NatSuite.Rendering.MTLReadback/<Dispose>d__2
struct U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889 
{
	// System.Int32 NatSuite.Rendering.MTLReadback/<Dispose>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder NatSuite.Rendering.MTLReadback/<Dispose>d__2::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// NatSuite.Rendering.MTLReadback NatSuite.Rendering.MTLReadback/<Dispose>d__2::<>4__this
	MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter NatSuite.Rendering.MTLReadback/<Dispose>d__2::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_3;
};

// System.Action`1<Unity.Collections.NativeArray`1<System.Byte>>
struct Action_1_tC6D38157DECEAAD91322362C36F77954D4314270  : public MulticastDelegate_t
{
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// NatSuite.Rendering.MTLReadback/ReadbackHandler
struct ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099  : public MulticastDelegate_t
{
};

// NatSuite.Rendering.RenderThread/UnityRenderingEventAndData
struct UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<NatSuite.Rendering.GLESReadback/<Dispose>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m56A8D93AF2AC109BCB2CDF6FFC851D35C1FED5DA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA* ___stateMachine0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Collections.NativeArray`1<System.Byte>>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBE184C5690DD1E53F7CCED93A6978DC744426EBB_gshared_inline (Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___obj0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,NatSuite.Rendering.GLESReadback/<Dispose>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m2016255DC65588893F234909457AB8CC84593E49_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953_gshared (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<NatSuite.Rendering.MTLReadback/<Dispose>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_m78E0AAA11634A2FC3056D4BE05F5A8431206FE18_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,NatSuite.Rendering.MTLReadback/<Dispose>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_mB86AF60EB27A75695DE2F6C063C41A69F121D8A6_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889* ___stateMachine1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<System.Object>(TDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared (RuntimeObject* ___d0, const RuntimeMethod* method) ;

// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.GLESReadback/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m461A8A6E6E07DAA8056940D043A1F199C00551BC (U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.AndroidJavaObject>::.ctor()
inline void TaskCompletionSource_1__ctor_m06BCA924E56A24CC1CFE912AD8FA88E5FED6F01B (TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.RenderThread::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderThread_Run_m2468497135FEAF9104B261EAE673FA731293F9C7 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.AndroidJavaObject>::get_Task()
inline Task_1_t906398BA3B2043F228499BE4D02F94FEE7584833* TaskCompletionSource_1_get_Task_mB33331E5D369971C3144B7F15E3A38DE2B0C569B_inline (TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t906398BA3B2043F228499BE4D02F94FEE7584833* (*) (TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// TResult System.Threading.Tasks.Task`1<UnityEngine.AndroidJavaObject>::get_Result()
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* Task_1_get_Result_m0800F6B7F8C5743AB132145C78B6C03E345DA5EF (Task_1_t906398BA3B2043F228499BE4D02F94FEE7584833* __this, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (Task_1_t906398BA3B2043F228499BE4D02F94FEE7584833*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.GLESReadback/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mD36CB3155A96A2592ABB74E65E1B26CB16F8E5B5 (U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<NatSuite.Rendering.GLESReadback/<Dispose>d__2>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m56A8D93AF2AC109BCB2CDF6FFC851D35C1FED5DA (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m56A8D93AF2AC109BCB2CDF6FFC851D35C1FED5DA_gshared)(__this, ___stateMachine0, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethod_mC103D7C5C92E7DC15B7AC043BD5D7FE398F559AC (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___value0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// System.Void System.Action`1<Unity.Collections.NativeArray`1<System.Byte>>::Invoke(T)
inline void Action_1_Invoke_mBE184C5690DD1E53F7CCED93A6978DC744426EBB_inline (Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC6D38157DECEAAD91322362C36F77954D4314270*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))Action_1_Invoke_mBE184C5690DD1E53F7CCED93A6978DC744426EBB_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::AttachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_AttachCurrentThread_m412647220ED1F7D42F9D41F692D1D7DC4696B6D4 (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.AndroidJavaObject>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m2193861AA694A8F205F1656EF277543768979311 (TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___result0, method);
}
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallVoidMethod_mFCFF6A5FF4A51305C3D2DBFB3A0699617EF40D48 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E (YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,NatSuite.Rendering.GLESReadback/<Dispose>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m2016255DC65588893F234909457AB8CC84593E49 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m2016255DC65588893F234909457AB8CC84593E49_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.GLESReadback/<Dispose>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__2_MoveNext_mFC36B8209D3665804CCD6346F60F4DEC8ACC5784 (U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.GLESReadback/<Dispose>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__2_SetStateMachine_m0A84A0AFC1A6B108D12AD28F33BEDF0F48731F40 (U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.MTLReadback::OnReadback(System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLReadback_OnReadback_m6377D27AD7536D159A3518C0667AA8D381C54A3C (void* ___context0, void* ___pixelBuffer1, const RuntimeMethod* method) ;
// System.IntPtr NatSuite.Rendering.MTLReadback::Create(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MTLReadback_Create_m8FB3B2F1A75A366B0D17C7DE5E9BB9F8F8ED21A1 (int32_t ___width0, int32_t ___height1, bool ___multithreading2, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.MTLReadback/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m43D0D79751AE1AE007FAF10A07D844629026A150 (U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953 (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<NatSuite.Rendering.MTLReadback/<Dispose>d__2>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_m78E0AAA11634A2FC3056D4BE05F5A8431206FE18 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_m78E0AAA11634A2FC3056D4BE05F5A8431206FE18_gshared)(__this, ___stateMachine0, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
inline void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*, intptr_t, const RuntimeMethod*))Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline)(__this, ___obj0, method);
}
// System.Void NatSuite.Rendering.MTLReadback/ReadbackHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadbackHandler__ctor_mC6FEFD3E17B5FF8B5D005C3D419283945DBD48B3 (ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.MTLReadback::Request(System.IntPtr,System.IntPtr,NatSuite.Rendering.MTLReadback/ReadbackHandler,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLReadback_Request_m4209EBD552CEF05DF75304EFD03683E9A1F1C1CD (intptr_t ___readback0, intptr_t ___texture1, ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* ___completionHandler2, void* ___context3, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.MTLReadback::Dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLReadback_Dispose_m1F4DC8A921C42343C450D3D9684D49CE83E7378E (intptr_t ___readback0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,NatSuite.Rendering.MTLReadback/<Dispose>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_mB86AF60EB27A75695DE2F6C063C41A69F121D8A6 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_mB86AF60EB27A75695DE2F6C063C41A69F121D8A6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void NatSuite.Rendering.MTLReadback/<Dispose>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__2_MoveNext_m913CD8C1209D10006139EC0BBE8138B1BF6C1AF7 (U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889* __this, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.MTLReadback/<Dispose>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__2_SetStateMachine_m656D8A29FF98962508F931037AEA0E22018ABFD4 (U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.RenderThread::OnRenderThreadInvoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderThread_OnRenderThreadInvoke_m9A9EABCB5FC6D2E4CF0C36DDD488CD48AEA65F8C (int32_t ____0, intptr_t ___context1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginEventAndData(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_IssuePluginEventAndData_m6218AC6654E29A7245DBB8F739FE99F6804FBB0C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, intptr_t ___callback0, int32_t ___eventID1, intptr_t ___data2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___buffer0, const RuntimeMethod* method) ;
// System.Void NatSuite.Rendering.RenderThread/UnityRenderingEventAndData::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderingEventAndData__ctor_mD393703B6C84D559981F526FBDC93503818FCF6F (UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<NatSuite.Rendering.RenderThread/UnityRenderingEventAndData>(TDelegate)
inline intptr_t Marshal_GetFunctionPointerForDelegate_TisUnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA_m95313327215A0122223FEF29635D0437172DDE81 (UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA*, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared)(___d0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL NRCreateReadback(int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL NRRequestReadback(intptr_t, intptr_t, Il2CppMethodPointer, void*);
IL2CPP_EXTERN_C void DEFAULT_CALL NRDisposeReadback(intptr_t);
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
// System.Void NatSuite.Rendering.GLESReadback::.ctor(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLESReadback__ctor_m6011A0E7B9592657B9686AF42ECE597B280E4979 (GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* __this, int32_t ___width0, int32_t ___height1, bool ___multithreading2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m06BCA924E56A24CC1CFE912AD8FA88E5FED6F01B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mB33331E5D369971C3144B7F15E3A38DE2B0C569B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m0800F6B7F8C5743AB132145C78B6C03E345DA5EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mA00C9188680EB5E9A8BFC1CBE10E15E2C4432E5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A92D2E017272D64E27F9A8011C728224A07D9DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51874ACF060C1DEC8A7B08F48AA555A8C6B9107A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58DB76806797E209F294B9E37FC3E3585F8AB455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70C1F5FFBE4B184089B8912731883EED976ABB78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA782209317C48E96A39C85D51CF1EA2FF3607747);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC986A53C33C74A9EBFEF526D6C081EDC0A9262E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2DDACBC15AC21502F0AD009F1D6D2231945B642);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// private readonly jvalue[] readBackParameters = new jvalue[2];
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___readBackParameters_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___readBackParameters_12), (void*)L_0);
		// private readonly jvalue[] baseAddressParameter = new jvalue[1];
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___baseAddressParameter_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseAddressParameter_13), (void*)L_1);
		// public GLESReadback (int width, int height, bool multithreading = false) : base(@"api.natsuite.natrender.Readback$Callback") {
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralBC986A53C33C74A9EBFEF526D6C081EDC0A9262E, NULL);
		U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E* L_2 = (U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ec__DisplayClass0_0__ctor_m461A8A6E6E07DAA8056940D043A1F199C00551BC(L_2, NULL);
		// var egl = new AndroidJavaClass(@"android.opengl.EGL14");
		U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E* L_3 = L_2;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_4, _stringLiteral51874ACF060C1DEC8A7B08F48AA555A8C6B9107A, NULL);
		NullCheck(L_3);
		L_3->___egl_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___egl_0), (void*)L_4);
		// var contextTask = new TaskCompletionSource<AndroidJavaObject>();
		U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E* L_5 = L_3;
		TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A* L_6 = (TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A*)il2cpp_codegen_object_new(TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TaskCompletionSource_1__ctor_m06BCA924E56A24CC1CFE912AD8FA88E5FED6F01B(L_6, TaskCompletionSource_1__ctor_m06BCA924E56A24CC1CFE912AD8FA88E5FED6F01B_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___contextTask_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___contextTask_1), (void*)L_6);
		// RenderThread.Run(() => {
		//     AndroidJNI.AttachCurrentThread();
		//     var context = egl.CallStatic<AndroidJavaObject>(@"eglGetCurrentContext");
		//     contextTask.SetResult(context);
		// });
		U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E* L_7 = L_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mA00C9188680EB5E9A8BFC1CBE10E15E2C4432E5C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var);
		RenderThread_Run_m2468497135FEAF9104B261EAE673FA731293F9C7(L_8, NULL);
		// var eglContext = contextTask.Task.Result;
		NullCheck(L_7);
		TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A* L_9 = L_7->___contextTask_1;
		NullCheck(L_9);
		Task_1_t906398BA3B2043F228499BE4D02F94FEE7584833* L_10;
		L_10 = TaskCompletionSource_1_get_Task_mB33331E5D369971C3144B7F15E3A38DE2B0C569B_inline(L_9, TaskCompletionSource_1_get_Task_mB33331E5D369971C3144B7F15E3A38DE2B0C569B_RuntimeMethod_var);
		NullCheck(L_10);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = Task_1_get_Result_m0800F6B7F8C5743AB132145C78B6C03E345DA5EF(L_10, Task_1_get_Result_m0800F6B7F8C5743AB132145C78B6C03E345DA5EF_RuntimeMethod_var);
		V_0 = L_11;
		// this.readback = new AndroidJavaObject(className, width, height, eglContext, this, multithreading);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		int32_t L_14 = ___width0;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = ___height1;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, __this);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)__this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		bool L_25 = ___multithreading2;
		bool L_26 = L_25;
		RuntimeObject* L_27 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_27);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_28, _stringLiteral70C1F5FFBE4B184089B8912731883EED976ABB78, L_24, NULL);
		__this->___readback_4 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___readback_4), (void*)L_28);
		// this.clazz = new AndroidJavaClass(className);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_29 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_29, _stringLiteral70C1F5FFBE4B184089B8912731883EED976ABB78, NULL);
		__this->___clazz_5 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clazz_5), (void*)L_29);
		// this.frameBuffer = new RenderTexture(width, height, 0, RenderTextureFormat.Default);
		int32_t L_30 = ___width0;
		int32_t L_31 = ___height1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_32, L_30, L_31, 0, 7, NULL);
		__this->___frameBuffer_6 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameBuffer_6), (void*)L_32);
		// this.frameBuffer.Create();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33 = __this->___frameBuffer_6;
		NullCheck(L_33);
		bool L_34;
		L_34 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_33, NULL);
		// this.readbackTexture = frameBuffer.GetNativeTexturePtr();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = __this->___frameBuffer_6;
		NullCheck(L_35);
		intptr_t L_36;
		L_36 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_35, NULL);
		__this->___readbackTexture_7 = L_36;
		// this.bufferSize = width * height * 4;
		int32_t L_37 = ___width0;
		int32_t L_38 = ___height1;
		__this->___bufferSize_8 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_37, L_38)), 4));
		// this.classPtr = readback.GetRawClass();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_39 = __this->___readback_4;
		NullCheck(L_39);
		intptr_t L_40;
		L_40 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_39, NULL);
		__this->___classPtr_9 = L_40;
		// this.readBackMethodID = AndroidJNIHelper.GetMethodID(classPtr, @"readback", @"(IJ)V", false);
		intptr_t L_41 = __this->___classPtr_9;
		intptr_t L_42;
		L_42 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_41, _stringLiteralD2DDACBC15AC21502F0AD009F1D6D2231945B642, _stringLiteral58DB76806797E209F294B9E37FC3E3585F8AB455, (bool)0, NULL);
		__this->___readBackMethodID_10 = L_42;
		// this.baseAddressMethodID = AndroidJNIHelper.GetMethodID(classPtr, @"baseAddress", @"(Ljava/lang/Object;)J", true);
		intptr_t L_43 = __this->___classPtr_9;
		intptr_t L_44;
		L_44 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_43, _stringLiteralA782209317C48E96A39C85D51CF1EA2FF3607747, _stringLiteral1A92D2E017272D64E27F9A8011C728224A07D9DC, (bool)1, NULL);
		__this->___baseAddressMethodID_11 = L_44;
		// }
		return;
	}
}
// System.Void NatSuite.Rendering.GLESReadback::Request(UnityEngine.Texture,System.Action`1<Unity.Collections.NativeArray`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLESReadback_Request_m7823B636F21209935398DABAF3A51D426510075B (GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* ___handler1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__0_mEAFF778EFEF28A451746C9629659E9FE3835819D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F* L_0 = (U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_mD36CB3155A96A2592ABB74E65E1B26CB16F8E5B5(L_0, NULL);
		U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F* L_2 = L_1;
		Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* L_3 = ___handler1;
		NullCheck(L_2);
		L_2->___handler_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___handler_1), (void*)L_3);
		// Graphics.Blit(texture, frameBuffer);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___texture0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___frameBuffer_6;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_4, L_5, NULL);
		// RenderThread.Run(() => {
		//     readBackParameters[0].i = readbackTexture.ToInt32();
		//     readBackParameters[1].j = (long)(IntPtr)GCHandle.Alloc(handler, GCHandleType.Normal);
		//     AndroidJNI.CallVoidMethod(readback.GetRawObject(), readBackMethodID, readBackParameters);
		// });
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_2, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__0_mEAFF778EFEF28A451746C9629659E9FE3835819D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var);
		RenderThread_Run_m2468497135FEAF9104B261EAE673FA731293F9C7(L_6, NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Rendering.GLESReadback::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLESReadback_Dispose_mD5C8AEB6F256B8A01D1D4335ED155318D214B9A2 (GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m56A8D93AF2AC109BCB2CDF6FFC851D35C1FED5DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m56A8D93AF2AC109BCB2CDF6FFC851D35C1FED5DA(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m56A8D93AF2AC109BCB2CDF6FFC851D35C1FED5DA_RuntimeMethod_var);
		return;
	}
}
// System.Void NatSuite.Rendering.GLESReadback::onReadback(System.Int64,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLESReadback_onReadback_m709C381423F3ACB28BAF60A89ED1508D081E4ACC (GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* __this, int64_t ___context0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___pixelBuffer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC6D38157DECEAAD91322362C36F77954D4314270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* G_B2_0 = NULL;
	Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* G_B1_0 = NULL;
	{
		// var handle = (GCHandle)(IntPtr)context;
		int64_t L_0 = ___context0;
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0(L_0, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_1, NULL);
		V_0 = L_2;
		// var handler = handle.Target as Action<NativeArray<byte>>;
		RuntimeObject* L_3;
		L_3 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		// handle.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		// baseAddressParameter[0].l = pixelBuffer.GetRawObject();
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4 = __this->___baseAddressParameter_13;
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ___pixelBuffer1;
		NullCheck(L_5);
		intptr_t L_6;
		L_6 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_5, NULL);
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_6;
		// var baseAddress = (void*)(IntPtr)AndroidJNI.CallStaticLongMethod(classPtr, baseAddressMethodID, baseAddressParameter);
		intptr_t L_7 = __this->___classPtr_9;
		intptr_t L_8 = __this->___baseAddressMethodID_11;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9 = __this->___baseAddressParameter_13;
		int64_t L_10;
		L_10 = AndroidJNI_CallStaticLongMethod_mC103D7C5C92E7DC15B7AC043BD5D7FE398F559AC(L_7, L_8, L_9, NULL);
		intptr_t L_11;
		L_11 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0(L_10, NULL);
		void* L_12;
		L_12 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_11, NULL);
		// var nativeArray = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<byte>(baseAddress, bufferSize, Allocator.None);
		int32_t L_13 = __this->___bufferSize_8;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_14;
		L_14 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA(L_12, L_13, 1, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var);
		V_1 = L_14;
		// handler?.Invoke(nativeArray);
		Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* L_15 = ((Action_1_tC6D38157DECEAAD91322362C36F77954D4314270*)IsInst((RuntimeObject*)L_3, Action_1_tC6D38157DECEAAD91322362C36F77954D4314270_il2cpp_TypeInfo_var));
		G_B1_0 = L_15;
		if (L_15)
		{
			G_B2_0 = L_15;
			goto IL_0069;
		}
	}
	{
		return;
	}

IL_0069:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_16 = V_1;
		NullCheck(G_B2_0);
		Action_1_Invoke_mBE184C5690DD1E53F7CCED93A6978DC744426EBB_inline(G_B2_0, L_16, NULL);
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
// System.Void NatSuite.Rendering.GLESReadback/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m461A8A6E6E07DAA8056940D043A1F199C00551BC (U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NatSuite.Rendering.GLESReadback/<>c__DisplayClass0_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mA00C9188680EB5E9A8BFC1CBE10E15E2C4432E5C (U3CU3Ec__DisplayClass0_0_t2D174BC8C401C2568B9D31B0BECDAB1FD7967D0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m2193861AA694A8F205F1656EF277543768979311_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1B025461F5845CBB295E53521BB2D878B87BE44);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJNI.AttachCurrentThread();
		int32_t L_0;
		L_0 = AndroidJNI_AttachCurrentThread_m412647220ED1F7D42F9D41F692D1D7DC4696B6D4(NULL);
		// var context = egl.CallStatic<AndroidJavaObject>(@"eglGetCurrentContext");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = __this->___egl_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_1, _stringLiteralD1B025461F5845CBB295E53521BB2D878B87BE44, L_2, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_0 = L_3;
		// contextTask.SetResult(context);
		TaskCompletionSource_1_tC3AF451DAC7FC408989466847C3EEF815792B18A* L_4 = __this->___contextTask_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
		NullCheck(L_4);
		TaskCompletionSource_1_SetResult_m2193861AA694A8F205F1656EF277543768979311(L_4, L_5, TaskCompletionSource_1_SetResult_m2193861AA694A8F205F1656EF277543768979311_RuntimeMethod_var);
		// });
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
// System.Void NatSuite.Rendering.GLESReadback/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mD36CB3155A96A2592ABB74E65E1B26CB16F8E5B5 (U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NatSuite.Rendering.GLESReadback/<>c__DisplayClass1_0::<Request>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__0_mEAFF778EFEF28A451746C9629659E9FE3835819D (U3CU3Ec__DisplayClass1_0_t21B5CC5BD8AD171FA51EA02381C3AC96C556E98F* __this, const RuntimeMethod* method) 
{
	{
		// readBackParameters[0].i = readbackTexture.ToInt32();
		GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = L_0->___readBackParameters_12;
		NullCheck(L_1);
		GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		intptr_t* L_3 = (&L_2->___readbackTexture_7);
		int32_t L_4;
		L_4 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292(L_3, NULL);
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___i_4 = L_4;
		// readBackParameters[1].j = (long)(IntPtr)GCHandle.Alloc(handler, GCHandleType.Normal);
		GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_5);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = L_5->___readBackParameters_12;
		NullCheck(L_6);
		Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* L_7 = __this->___handler_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_8;
		L_8 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_7, 2, NULL);
		intptr_t L_9;
		L_9 = GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline(L_8, NULL);
		int64_t L_10;
		L_10 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_9, NULL);
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___j_5 = L_10;
		// AndroidJNI.CallVoidMethod(readback.GetRawObject(), readBackMethodID, readBackParameters);
		GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_11 = __this->___U3CU3E4__this_0;
		NullCheck(L_11);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = L_11->___readback_4;
		NullCheck(L_12);
		intptr_t L_13;
		L_13 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_12, NULL);
		GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_14 = __this->___U3CU3E4__this_0;
		NullCheck(L_14);
		intptr_t L_15 = L_14->___readBackMethodID_10;
		GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_16 = __this->___U3CU3E4__this_0;
		NullCheck(L_16);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_17 = L_16->___readBackParameters_12;
		AndroidJNI_CallVoidMethod_mFCFF6A5FF4A51305C3D2DBFB3A0699617EF40D48(L_13, L_15, L_17, NULL);
		// });
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
// System.Void NatSuite.Rendering.GLESReadback/<Dispose>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__2_MoveNext_mFC36B8209D3665804CCD6346F60F4DEC8ACC5784 (U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m2016255DC65588893F234909457AB8CC84593E49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9EE5AF5B4EB10F18968FD4043D831AFE5F501EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* V_1 = NULL;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_2;
	memset((&V_2), 0, sizeof(V_2));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005d_1;
			}
		}
		{
			// readback.Call(@"release");
			GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_3 = V_1;
			NullCheck(L_3);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = L_3->___readback_4;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
			L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_4);
			AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteralD9EE5AF5B4EB10F18968FD4043D831AFE5F501EC, L_5, NULL);
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_6;
			L_6 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
			V_3 = L_6;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_7;
			L_7 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_3), NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_2), NULL);
			if (L_8)
			{
				goto IL_0079_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_10 = V_2;
			__this->___U3CU3Eu__1_3 = L_10;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m2016255DC65588893F234909457AB8CC84593E49(L_11, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA_m2016255DC65588893F234909457AB8CC84593E49_RuntimeMethod_var);
			goto IL_00b9;
		}

IL_005d_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_12 = __this->___U3CU3Eu__1_3;
			V_2 = L_12;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_13 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_13, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0079_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_2), NULL);
			// frameBuffer.Release();
			GLESReadback_tCC05AC218EF6FBD54DF20B9FA309EC83B527775F* L_15 = V_1;
			NullCheck(L_15);
			RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = L_15->___frameBuffer_6;
			NullCheck(L_16);
			RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_16, NULL);
			goto IL_00a6;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008d;
		}
		throw e;
	}

CATCH_008d:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_17 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_17, L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b9;
	}// end catch (depth: 1)

IL_00a6:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_19 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_19, NULL);
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeU3Ed__2_MoveNext_mFC36B8209D3665804CCD6346F60F4DEC8ACC5784_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA*>(__this + _offset);
	U3CDisposeU3Ed__2_MoveNext_mFC36B8209D3665804CCD6346F60F4DEC8ACC5784(_thisAdjusted, method);
}
// System.Void NatSuite.Rendering.GLESReadback/<Dispose>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__2_SetStateMachine_m0A84A0AFC1A6B108D12AD28F33BEDF0F48731F40 (U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeU3Ed__2_SetStateMachine_m0A84A0AFC1A6B108D12AD28F33BEDF0F48731F40_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeU3Ed__2_t59FFB47D01FDC68145D6B6486F8B402ED5C2B5CA*>(__this + _offset);
	U3CDisposeU3Ed__2_SetStateMachine_m0A84A0AFC1A6B108D12AD28F33BEDF0F48731F40(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MTLReadback_OnReadback_m6377D27AD7536D159A3518C0667AA8D381C54A3C(void* ___context0, void* ___pixelBuffer1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MTLReadback_OnReadback_m6377D27AD7536D159A3518C0667AA8D381C54A3C(___context0, ___pixelBuffer1, NULL);

}
// System.Void NatSuite.Rendering.MTLReadback::.ctor(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLReadback__ctor_m7D32636E3CA7E45BAA32A4C5F2B9443575EBAFDC (MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* __this, int32_t ___width0, int32_t ___height1, bool ___multithreading2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MTLReadback (int width, int height, bool multithreading = false) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.readback = Create(width, height, multithreading);
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		bool L_2 = ___multithreading2;
		intptr_t L_3;
		L_3 = MTLReadback_Create_m8FB3B2F1A75A366B0D17C7DE5E9BB9F8F8ED21A1(L_0, L_1, L_2, NULL);
		__this->___readback_0 = L_3;
		// this.frameBuffer = new RenderTexture(width, height, 0, RenderTextureFormat.Default);
		int32_t L_4 = ___width0;
		int32_t L_5 = ___height1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_6, L_4, L_5, 0, 7, NULL);
		__this->___frameBuffer_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameBuffer_1), (void*)L_6);
		// this.frameBuffer.Create();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = __this->___frameBuffer_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_7, NULL);
		// this.readbackTexture = frameBuffer.GetNativeTexturePtr();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___frameBuffer_1;
		NullCheck(L_9);
		intptr_t L_10;
		L_10 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_9, NULL);
		__this->___readbackTexture_2 = L_10;
		// this.bufferSize = width * height * 4;
		int32_t L_11 = ___width0;
		int32_t L_12 = ___height1;
		__this->___bufferSize_3 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), 4));
		// }
		return;
	}
}
// System.Void NatSuite.Rendering.MTLReadback::Request(UnityEngine.Texture,System.Action`1<Unity.Collections.NativeArray`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLReadback_Request_m61B88E2978FCD0ACD701559E191D7AD2DB2B1933 (MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* ___handler1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__0_m6B1921F677C2D6849468D4F6EE4D94E94B04E20A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__1_m5397809F052E01D3174D72ADB5827FD63F2ECFB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A* L_0 = (U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m43D0D79751AE1AE007FAF10A07D844629026A150(L_0, NULL);
		U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A* L_2 = L_1;
		Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* L_3 = ___handler1;
		NullCheck(L_2);
		L_2->___handler_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___handler_1), (void*)L_3);
		// Action<IntPtr> wrapper = baseAddress => {
		//     var nativeArray = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<byte>((void*)baseAddress, bufferSize, Allocator.None);
		//     handler(nativeArray);
		// };
		U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A* L_4 = L_2;
		U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A* L_5 = L_4;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_6 = (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)il2cpp_codegen_object_new(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__0_m6B1921F677C2D6849468D4F6EE4D94E94B04E20A_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		L_5->___wrapper_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___wrapper_2), (void*)L_6);
		// Graphics.Blit(texture, frameBuffer);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = ___texture0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = __this->___frameBuffer_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_7, L_8, NULL);
		// RenderThread.Run(() => Request(
		//     readback,
		//     readbackTexture,
		//     OnReadback,
		//     (void*)(IntPtr)GCHandle.Alloc(wrapper, GCHandleType.Normal)
		// ));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__1_m5397809F052E01D3174D72ADB5827FD63F2ECFB4_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var);
		RenderThread_Run_m2468497135FEAF9104B261EAE673FA731293F9C7(L_9, NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Rendering.MTLReadback::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLReadback_Dispose_mC124F82903351D8C07D42600A849A670D7A09422 (MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_m78E0AAA11634A2FC3056D4BE05F5A8431206FE18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_m78E0AAA11634A2FC3056D4BE05F5A8431206FE18(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_m78E0AAA11634A2FC3056D4BE05F5A8431206FE18_RuntimeMethod_var);
		return;
	}
}
// System.Void NatSuite.Rendering.MTLReadback::OnReadback(System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLReadback_OnReadback_m6377D27AD7536D159A3518C0667AA8D381C54A3C (void* ___context0, void* ___pixelBuffer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		// var handle = (GCHandle)(IntPtr)context;
		void* L_0 = ___context0;
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_0, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_1, NULL);
		V_0 = L_2;
		// var handler = handle.Target as Action<IntPtr>;
		RuntimeObject* L_3;
		L_3 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		// handle.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		// handler?.Invoke((IntPtr)pixelBuffer);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_4 = ((Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)IsInst((RuntimeObject*)L_3, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var));
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		void* L_5 = ___pixelBuffer1;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_5, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_6, NULL);
		// }
		return;
	}
}
// System.IntPtr NatSuite.Rendering.MTLReadback::Create(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MTLReadback_Create_m8FB3B2F1A75A366B0D17C7DE5E9BB9F8F8ED21A1 (int32_t ___width0, int32_t ___height1, bool ___multithreading2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(NRCreateReadback)(___width0, ___height1, static_cast<int32_t>(___multithreading2));

	return returnValue;
}
// System.Void NatSuite.Rendering.MTLReadback::Request(System.IntPtr,System.IntPtr,NatSuite.Rendering.MTLReadback/ReadbackHandler,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLReadback_Request_m4209EBD552CEF05DF75304EFD03683E9A1F1C1CD (intptr_t ___readback0, intptr_t ___texture1, ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* ___completionHandler2, void* ___context3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer, void*);

	// Marshaling of parameter '___completionHandler2' to native representation
	Il2CppMethodPointer ____completionHandler2_marshaled = NULL;
	____completionHandler2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___completionHandler2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NRRequestReadback)(___readback0, ___texture1, ____completionHandler2_marshaled, ___context3);

}
// System.Void NatSuite.Rendering.MTLReadback::Dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MTLReadback_Dispose_m1F4DC8A921C42343C450D3D9684D49CE83E7378E (intptr_t ___readback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NRDisposeReadback)(___readback0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ReadbackHandler_Invoke_mF7917280EA4294075E07E0C55BC1ED6B43EB9B65_Multicast(ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* __this, void* ___context0, void* ___pixelBuffer1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* currentDelegate = reinterpret_cast<ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, void*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___context0, ___pixelBuffer1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ReadbackHandler_Invoke_mF7917280EA4294075E07E0C55BC1ED6B43EB9B65_OpenInst(ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* __this, void* ___context0, void* ___pixelBuffer1, const RuntimeMethod* method)
{
	NullCheck(___context0);
	typedef void (*FunctionPointerType) (void*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___pixelBuffer1, method);
}
void ReadbackHandler_Invoke_mF7917280EA4294075E07E0C55BC1ED6B43EB9B65_OpenStatic(ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* __this, void* ___context0, void* ___pixelBuffer1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (void*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___pixelBuffer1, method);
}
void ReadbackHandler_Invoke_mF7917280EA4294075E07E0C55BC1ED6B43EB9B65_OpenStaticInvoker(ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* __this, void* ___context0, void* ___pixelBuffer1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< void*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___context0, ___pixelBuffer1);
}
void ReadbackHandler_Invoke_mF7917280EA4294075E07E0C55BC1ED6B43EB9B65_ClosedStaticInvoker(ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* __this, void* ___context0, void* ___pixelBuffer1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, void*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0, ___pixelBuffer1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099 (ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* __this, void* ___context0, void* ___pixelBuffer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___context0, ___pixelBuffer1);

}
// System.Void NatSuite.Rendering.MTLReadback/ReadbackHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadbackHandler__ctor_mC6FEFD3E17B5FF8B5D005C3D419283945DBD48B3 (ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadbackHandler_Invoke_mF7917280EA4294075E07E0C55BC1ED6B43EB9B65_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReadbackHandler_Invoke_mF7917280EA4294075E07E0C55BC1ED6B43EB9B65_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadbackHandler_Invoke_mF7917280EA4294075E07E0C55BC1ED6B43EB9B65_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ReadbackHandler_Invoke_mF7917280EA4294075E07E0C55BC1ED6B43EB9B65_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReadbackHandler_Invoke_mF7917280EA4294075E07E0C55BC1ED6B43EB9B65_Multicast;
}
// System.Void NatSuite.Rendering.MTLReadback/ReadbackHandler::Invoke(System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadbackHandler_Invoke_mF7917280EA4294075E07E0C55BC1ED6B43EB9B65 (ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* __this, void* ___context0, void* ___pixelBuffer1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, void*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___context0, ___pixelBuffer1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NatSuite.Rendering.MTLReadback/ReadbackHandler::BeginInvoke(System.Void*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadbackHandler_BeginInvoke_mD068380B54A32FE443F551BA064A6A2E10642724 (ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* __this, void* ___context0, void* ___pixelBuffer1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___context0;
	__d_args[1] = ___pixelBuffer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void NatSuite.Rendering.MTLReadback/ReadbackHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadbackHandler_EndInvoke_m771848790BC40B12FFC9F08B5833D481E95B3B9B (ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Rendering.MTLReadback/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m43D0D79751AE1AE007FAF10A07D844629026A150 (U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NatSuite.Rendering.MTLReadback/<>c__DisplayClass1_0::<Request>b__0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__0_m6B1921F677C2D6849468D4F6EE4D94E94B04E20A (U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A* __this, intptr_t ___baseAddress0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var nativeArray = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<byte>((void*)baseAddress, bufferSize, Allocator.None);
		intptr_t L_0 = ___baseAddress0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bufferSize_3;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4;
		L_4 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA(L_1, L_3, 1, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var);
		V_0 = L_4;
		// handler(nativeArray);
		Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* L_5 = __this->___handler_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_6 = V_0;
		NullCheck(L_5);
		Action_1_Invoke_mBE184C5690DD1E53F7CCED93A6978DC744426EBB_inline(L_5, L_6, NULL);
		// };
		return;
	}
}
// System.Void NatSuite.Rendering.MTLReadback/<>c__DisplayClass1_0::<Request>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CRequestU3Eb__1_m5397809F052E01D3174D72ADB5827FD63F2ECFB4 (U3CU3Ec__DisplayClass1_0_tF3E3F1E7EEFEDBF877BFEB04B77F70EDEB02F39A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MTLReadback_OnReadback_m6377D27AD7536D159A3518C0667AA8D381C54A3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RenderThread.Run(() => Request(
		//     readback,
		//     readbackTexture,
		//     OnReadback,
		//     (void*)(IntPtr)GCHandle.Alloc(wrapper, GCHandleType.Normal)
		// ));
		MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		intptr_t L_1 = L_0->___readback_0;
		MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		intptr_t L_3 = L_2->___readbackTexture_2;
		ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099* L_4 = (ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099*)il2cpp_codegen_object_new(ReadbackHandler_tB1F17B61F91E7187434B8E5643AF8F21380A0099_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ReadbackHandler__ctor_mC6FEFD3E17B5FF8B5D005C3D419283945DBD48B3(L_4, NULL, (intptr_t)((void*)MTLReadback_OnReadback_m6377D27AD7536D159A3518C0667AA8D381C54A3C_RuntimeMethod_var), NULL);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = __this->___wrapper_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_6;
		L_6 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_5, 2, NULL);
		intptr_t L_7;
		L_7 = GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline(L_6, NULL);
		void* L_8;
		L_8 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_7, NULL);
		MTLReadback_Request_m4209EBD552CEF05DF75304EFD03683E9A1F1C1CD(L_1, L_3, L_4, L_8, NULL);
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
// System.Void NatSuite.Rendering.MTLReadback/<Dispose>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__2_MoveNext_m913CD8C1209D10006139EC0BBE8138B1BF6C1AF7 (U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_mB86AF60EB27A75695DE2F6C063C41A69F121D8A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* V_1 = NULL;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_2;
	memset((&V_2), 0, sizeof(V_2));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0053_1;
			}
		}
		{
			// Dispose(readback);
			MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* L_3 = V_1;
			NullCheck(L_3);
			intptr_t L_4 = L_3->___readback_0;
			MTLReadback_Dispose_m1F4DC8A921C42343C450D3D9684D49CE83E7378E(L_4, NULL);
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_5;
			L_5 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
			V_3 = L_5;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_6;
			L_6 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_3), NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_2), NULL);
			if (L_7)
			{
				goto IL_006f_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_9 = V_2;
			__this->___U3CU3Eu__1_3 = L_9;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_mB86AF60EB27A75695DE2F6C063C41A69F121D8A6(L_10, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889_mB86AF60EB27A75695DE2F6C063C41A69F121D8A6_RuntimeMethod_var);
			goto IL_00af;
		}

IL_0053_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_11 = __this->___U3CU3Eu__1_3;
			V_2 = L_11;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006f_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_2), NULL);
			// frameBuffer.Release();
			MTLReadback_tDD42EB0F6DAB797538050311CA10E74C49C3A090* L_14 = V_1;
			NullCheck(L_14);
			RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = L_14->___frameBuffer_1;
			NullCheck(L_15);
			RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_15, NULL);
			goto IL_009c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0083;
		}
		throw e;
	}

CATCH_0083:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_16, L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00af;
	}// end catch (depth: 1)

IL_009c:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_18 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_18, NULL);
	}

IL_00af:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeU3Ed__2_MoveNext_m913CD8C1209D10006139EC0BBE8138B1BF6C1AF7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889*>(__this + _offset);
	U3CDisposeU3Ed__2_MoveNext_m913CD8C1209D10006139EC0BBE8138B1BF6C1AF7(_thisAdjusted, method);
}
// System.Void NatSuite.Rendering.MTLReadback/<Dispose>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__2_SetStateMachine_m656D8A29FF98962508F931037AEA0E22018ABFD4 (U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeU3Ed__2_SetStateMachine_m656D8A29FF98962508F931037AEA0E22018ABFD4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeU3Ed__2_tCDDA22AC53A7D66FF6083C2C143F536A5F1EA889*>(__this + _offset);
	U3CDisposeU3Ed__2_SetStateMachine_m656D8A29FF98962508F931037AEA0E22018ABFD4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void CDECL ReversePInvokeWrapper_RenderThread_OnRenderThreadInvoke_m9A9EABCB5FC6D2E4CF0C36DDD488CD48AEA65F8C(int32_t ____0, intptr_t ___context1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RenderThread_OnRenderThreadInvoke_m9A9EABCB5FC6D2E4CF0C36DDD488CD48AEA65F8C(____0, ___context1, NULL);

}
// System.Void NatSuite.Rendering.RenderThread::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderThread_Run_m2468497135FEAF9104B261EAE673FA731293F9C7 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var commandBuffer = new CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_0, NULL);
		// commandBuffer.IssuePluginEventAndData(Callback, 0, (IntPtr)GCHandle.Alloc(action, GCHandleType.Normal));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_StaticFields*)il2cpp_codegen_static_fields_for(RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var))->___Callback_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___action0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_3, 2, NULL);
		intptr_t L_5;
		L_5 = GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline(L_4, NULL);
		NullCheck(L_1);
		CommandBuffer_IssuePluginEventAndData_m6218AC6654E29A7245DBB8F739FE99F6804FBB0C(L_1, L_2, 0, L_5, NULL);
		// Graphics.ExecuteCommandBuffer(commandBuffer);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9(L_1, NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Rendering.RenderThread::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderThread__cctor_m2B1E8B3778811E4EA76EA38829630E843403CAEB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisUnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA_m95313327215A0122223FEF29635D0437172DDE81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderThread_OnRenderThreadInvoke_m9A9EABCB5FC6D2E4CF0C36DDD488CD48AEA65F8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback = Marshal.GetFunctionPointerForDelegate<UnityRenderingEventAndData>(OnRenderThreadInvoke);
		UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* L_0 = (UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA*)il2cpp_codegen_object_new(UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityRenderingEventAndData__ctor_mD393703B6C84D559981F526FBDC93503818FCF6F(L_0, NULL, (intptr_t)((void*)RenderThread_OnRenderThreadInvoke_m9A9EABCB5FC6D2E4CF0C36DDD488CD48AEA65F8C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Marshal_GetFunctionPointerForDelegate_TisUnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA_m95313327215A0122223FEF29635D0437172DDE81(L_0, Marshal_GetFunctionPointerForDelegate_TisUnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA_m95313327215A0122223FEF29635D0437172DDE81_RuntimeMethod_var);
		((RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_StaticFields*)il2cpp_codegen_static_fields_for(RenderThread_t7B88F1A334606A3119AA403F8D0EFFDB8233CD5B_il2cpp_TypeInfo_var))->___Callback_0 = L_1;
		// }
		return;
	}
}
// System.Void NatSuite.Rendering.RenderThread::OnRenderThreadInvoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderThread_OnRenderThreadInvoke_m9A9EABCB5FC6D2E4CF0C36DDD488CD48AEA65F8C (int32_t ____0, intptr_t ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// var handle = (GCHandle)context;
		intptr_t L_0 = ___context1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_0, NULL);
		V_0 = L_1;
		// var action = handle.Target as Action;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		// handle.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		// action?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)IsInstSealed((RuntimeObject*)L_2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
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
void UnityRenderingEventAndData_Invoke_mAC734582780036CF8540DE39C469073D9B1EEF1C_Multicast(UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* __this, int32_t ____0, intptr_t ___data1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* currentDelegate = reinterpret_cast<UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ____0, ___data1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityRenderingEventAndData_Invoke_mAC734582780036CF8540DE39C469073D9B1EEF1C_OpenInst(UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* __this, int32_t ____0, intptr_t ___data1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(____0, ___data1, method);
}
void UnityRenderingEventAndData_Invoke_mAC734582780036CF8540DE39C469073D9B1EEF1C_OpenStatic(UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* __this, int32_t ____0, intptr_t ___data1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(____0, ___data1, method);
}
void UnityRenderingEventAndData_Invoke_mAC734582780036CF8540DE39C469073D9B1EEF1C_OpenStaticInvoker(UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* __this, int32_t ____0, intptr_t ___data1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ____0, ___data1);
}
void UnityRenderingEventAndData_Invoke_mAC734582780036CF8540DE39C469073D9B1EEF1C_ClosedStaticInvoker(UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* __this, int32_t ____0, intptr_t ___data1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ____0, ___data1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA (UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* __this, int32_t ____0, intptr_t ___data1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(____0, ___data1);

}
// System.Void NatSuite.Rendering.RenderThread/UnityRenderingEventAndData::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderingEventAndData__ctor_mD393703B6C84D559981F526FBDC93503818FCF6F (UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityRenderingEventAndData_Invoke_mAC734582780036CF8540DE39C469073D9B1EEF1C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityRenderingEventAndData_Invoke_mAC734582780036CF8540DE39C469073D9B1EEF1C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityRenderingEventAndData_Invoke_mAC734582780036CF8540DE39C469073D9B1EEF1C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UnityRenderingEventAndData_Invoke_mAC734582780036CF8540DE39C469073D9B1EEF1C_Multicast;
}
// System.Void NatSuite.Rendering.RenderThread/UnityRenderingEventAndData::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderingEventAndData_Invoke_mAC734582780036CF8540DE39C469073D9B1EEF1C (UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* __this, int32_t ____0, intptr_t ___data1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ____0, ___data1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NatSuite.Rendering.RenderThread/UnityRenderingEventAndData::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityRenderingEventAndData_BeginInvoke_m021484911182E962A0C26611A24667A3202D4CC7 (UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* __this, int32_t ____0, intptr_t ___data1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &____0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___data1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void NatSuite.Rendering.RenderThread/UnityRenderingEventAndData::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderingEventAndData_EndInvoke_mAEA41CE4A7254764237AB0A8684478AA472AE635 (UnityRenderingEventAndData_t74236CA32FA07BA6119336BF5C81A708251041EA* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_0 = ___value0;
		intptr_t L_1 = L_0.___handle_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBE184C5690DD1E53F7CCED93A6978DC744426EBB_gshared_inline (Action_1_tC6D38157DECEAAD91322362C36F77954D4314270* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
