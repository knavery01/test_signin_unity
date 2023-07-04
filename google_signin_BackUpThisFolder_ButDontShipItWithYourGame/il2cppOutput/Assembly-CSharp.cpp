#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>
struct Action_1_tF52889A7B072E11E8880182FD8F7D44219989077;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// Google.FutureAPIImpl`1<Google.GoogleSignInUser>
struct FutureAPIImpl_1_t1DBB9AEFB8C58CA4AD9AFE5C32CA4C9CF3E58E8B;
// Google.FutureAPIImpl`1<System.Object>
struct FutureAPIImpl_1_tB70B1803C3C8E7E6A30F4E5B318E1BCBA62575DA;
// Google.Future`1<Google.GoogleSignInUser>
struct Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B;
// Google.Future`1<System.Object>
struct Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t584E66CD0123CFB6503AC3E597748948194AAA5E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA;
// Google.GoogleSignInConfiguration
struct GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8;
// Google.Impl.GoogleSignInImpl
struct GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349;
// GoogleSignInService
struct GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD;
// Google.GoogleSignInUser
struct GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// Google.ISignInImpl
struct ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Google.Impl.NativeFuture
struct NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.Impl.BaseObject/OutStringMethod
struct OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Google.GoogleSignIn/SignInException
struct SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Google.Impl.NativeFuture/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInStatusCode_t3AEC2A455C7DB2C736F01D352EA10EFDCB011D7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral10F51048DD1BD5A2469EF209B64ACC6FE80197F5;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral1A4694263D3795B4E6800E935B7ABEFF9A1CDD6B;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2C41540AEBC151A2E6CD9946AB44FF2F4AD09541;
IL2CPP_EXTERN_C String_t* _stringLiteral2E1AD0E83130989E2515696D6D5B828CD141AAE6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral56AD00A3BBD3193180AA5FC557AB2FB212F215AE;
IL2CPP_EXTERN_C String_t* _stringLiteral68CCAEFA2D0D8C4A9C1B054BB5F1AF05C8E3F4AC;
IL2CPP_EXTERN_C String_t* _stringLiteral72479C2E2CD4DACBD6155ABD5D0DEC816E33D007;
IL2CPP_EXTERN_C String_t* _stringLiteral725A2F73B9AC862B4466B7C7B1287663C2C79392;
IL2CPP_EXTERN_C String_t* _stringLiteral769A2FDAB9A0B414C5BC97D6424E60561429FDA7;
IL2CPP_EXTERN_C String_t* _stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD;
IL2CPP_EXTERN_C String_t* _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459;
IL2CPP_EXTERN_C String_t* _stringLiteralA01907B77A31AFB8179089C6C1315EF4D713C528;
IL2CPP_EXTERN_C String_t* _stringLiteralD400EB487C20E145E8637C4026A2356D9E546258;
IL2CPP_EXTERN_C String_t* _stringLiteralD6AEB00E2908EDBFDB9EF7E0BC9A94A5D2742E6C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91;
IL2CPP_EXTERN_C String_t* _stringLiteralE8E80476EAA219E9BBF9C58B4BC92CBAEA079F36;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0582EED06C9EA50ABAFD3ECA275FC4D660B140;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSignInService_OnAuthenticationFinished_mD8EA60A3EA25523F06FF94596EB34A94665C4618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSignInService_OnSignIn_mA6E2C64D2E83E5D26EB72F9EA266C3C4367C4AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

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
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// Google.Future`1<Google.GoogleSignInUser>
struct Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B  : public RuntimeObject
{
	// Google.FutureAPIImpl`1<T> Google.Future`1::apiImpl
	RuntimeObject* ___apiImpl_0;
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

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* ____task_0;
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

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA  : public RuntimeObject
{
	// Google.ISignInImpl Google.GoogleSignIn::impl
	RuntimeObject* ___impl_2;
};

// Google.GoogleSignInConfiguration
struct GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8  : public RuntimeObject
{
	// System.Boolean Google.GoogleSignInConfiguration::UseGameSignIn
	bool ___UseGameSignIn_0;
	// System.String Google.GoogleSignInConfiguration::WebClientId
	String_t* ___WebClientId_1;
	// System.Boolean Google.GoogleSignInConfiguration::RequestAuthCode
	bool ___RequestAuthCode_2;
	// System.Boolean Google.GoogleSignInConfiguration::ForceTokenRefresh
	bool ___ForceTokenRefresh_3;
	// System.Boolean Google.GoogleSignInConfiguration::RequestEmail
	bool ___RequestEmail_4;
	// System.Boolean Google.GoogleSignInConfiguration::RequestIdToken
	bool ___RequestIdToken_5;
	// System.Boolean Google.GoogleSignInConfiguration::RequestProfile
	bool ___RequestProfile_6;
	// System.Boolean Google.GoogleSignInConfiguration::HidePopups
	bool ___HidePopups_7;
	// System.String Google.GoogleSignInConfiguration::AccountName
	String_t* ___AccountName_8;
	// System.Collections.Generic.IEnumerable`1<System.String> Google.GoogleSignInConfiguration::AdditionalScopes
	RuntimeObject* ___AdditionalScopes_9;
};

// Google.GoogleSignInUser
struct GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA  : public RuntimeObject
{
	// System.String Google.GoogleSignInUser::<AuthCode>k__BackingField
	String_t* ___U3CAuthCodeU3Ek__BackingField_0;
	// System.String Google.GoogleSignInUser::<Email>k__BackingField
	String_t* ___U3CEmailU3Ek__BackingField_1;
	// System.String Google.GoogleSignInUser::<IdToken>k__BackingField
	String_t* ___U3CIdTokenU3Ek__BackingField_2;
	// System.String Google.GoogleSignInUser::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Google.GoogleSignInUser::<GivenName>k__BackingField
	String_t* ___U3CGivenNameU3Ek__BackingField_4;
	// System.String Google.GoogleSignInUser::<FamilyName>k__BackingField
	String_t* ___U3CFamilyNameU3Ek__BackingField_5;
	// System.Uri Google.GoogleSignInUser::<ImageUrl>k__BackingField
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___U3CImageUrlU3Ek__BackingField_6;
	// System.String Google.GoogleSignInUser::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_7;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
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

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::selfHandleRef
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___selfHandleRef_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Google.GoogleSignIn/SignInException
struct SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A  : public Exception_t
{
	// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_18;
};

// Google.Impl.NativeFuture/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.NativeFuture/<>c__DisplayClass5_0::userPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___userPtr_0;
};

// System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>
struct Action_1_tF52889A7B072E11E8880182FD8F7D44219989077  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Google.Impl.GoogleSignInImpl
struct GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349  : public BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Google.Impl.NativeFuture
struct NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F  : public BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// Google.Impl.BaseObject/OutStringMethod
struct OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// GoogleSignInService
struct GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String GoogleSignInService::GoogleWebAPI
	String_t* ___GoogleWebAPI_4;
	// Google.GoogleSignInConfiguration GoogleSignInService::configuration
	GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___configuration_5;
	// Firebase.Auth.FirebaseAuth GoogleSignInService::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_6;
	// Firebase.Auth.FirebaseUser GoogleSignInService::user
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___user_7;
	// UnityEngine.UI.Text GoogleSignInService::statusText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___statusText_8;
	// UnityEngine.UI.Button GoogleSignInService::signInButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___signInButton_9;
	// System.Collections.Generic.List`1<System.String> GoogleSignInService::messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___messages_10;
};

// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// Google.Future`1<Google.GoogleSignInUser>

// Google.Future`1<Google.GoogleSignInUser>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>

// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>

// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields
{
	// Google.GoogleSignIn Google.GoogleSignIn::theInstance
	GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* ___theInstance_0;
	// Google.GoogleSignInConfiguration Google.GoogleSignIn::theConfiguration
	GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___theConfiguration_1;
};

// Google.GoogleSignIn

// Google.GoogleSignInConfiguration

// Google.GoogleSignInConfiguration

// Google.GoogleSignInUser

// Google.GoogleSignInUser

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.Uri
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
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// Readme/Section

// Readme/Section

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>

// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>

// System.Threading.Tasks.Task`1<System.Object>

// System.Threading.Tasks.Task`1<System.Object>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.UInt32

// System.UInt32

// System.UIntPtr
struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// System.UIntPtr

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.HandleRef

// System.Runtime.InteropServices.HandleRef

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// System.AggregateException

// System.AggregateException

// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::nullSelf
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___nullSelf_1;
};

// Google.Impl.BaseObject

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// Google.GoogleSignIn/SignInException

// Google.GoogleSignIn/SignInException

// Google.Impl.NativeFuture/<>c__DisplayClass5_0

// Google.Impl.NativeFuture/<>c__DisplayClass5_0

// System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>

// System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// Google.Impl.GoogleSignInImpl

// Google.Impl.GoogleSignInImpl

// System.InvalidOperationException

// System.InvalidOperationException

// Google.Impl.NativeFuture

// Google.Impl.NativeFuture

// Readme

// Readme

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// Google.Impl.BaseObject/OutStringMethod

// Google.Impl.BaseObject/OutStringMethod

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// GoogleSignInService

// GoogleSignInService

// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields
{
	// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::instance
	SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* ___instance_4;
};

// Google.Impl.SignInHelperObject

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___0_continuationAction, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Future`1<System.Object>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Future_1_WaitForResult_m86C7BBC0D729D1190E2DE445649A1A7280004193_gshared (Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF* __this, TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___0_tcs, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Google.Future`1<System.Object>::.ctor(Google.FutureAPIImpl`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_1__ctor_mFAB04EC0EED034736749BA83776F629ED33AA046_gshared (Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF* __this, RuntimeObject* ___0_impl, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::set_Configuration(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___0_value, const RuntimeMethod* method) ;
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline (const RuntimeMethod* method) ;
// System.Void GoogleSignInService::AddStatusText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6 (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// Google.GoogleSignIn Google.GoogleSignIn::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* GoogleSignIn_get_DefaultInstance_m3A7F48D5EB49BD41DF945D9A54E93BA1C5D382D8 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m24ECDBDFF2296BB9E1A0A6682131E87BADE4EADE (Action_1_tF52889A7B072E11E8880182FD8F7D44219989077* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF52889A7B072E11E8880182FD8F7D44219989077*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Google.GoogleSignInUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1 (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* __this, Action_1_tF52889A7B072E11E8880182FD8F7D44219989077* ___0_continuationAction, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926*, Action_1_tF52889A7B072E11E8880182FD8F7D44219989077*, const RuntimeMethod*))Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared)(__this, ___0_continuationAction, method);
}
// System.Void Google.GoogleSignIn::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_SignOut_m1666034382C085A0EE0227035E57E5AD61FE43B6 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_Disconnect_mD97724F96462EC3BB49B29CFDC92888EB5D11D00 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886*, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared)(__this, method);
}
// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SignInException_get_Status_m2FBF33632A23C771EE5CEB65120E3DFEC8FF5A74_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Google.GoogleSignInUser>::get_Result()
inline GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* __this, const RuntimeMethod* method)
{
	return ((  GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* (*) (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.String Google.GoogleSignInUser::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String Google.GoogleSignInUser::get_Email()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_Email_mA6E37F96BC90280CBA4D425743426CBE8D515551_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.String Google.GoogleSignInUser::get_IdToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.Uri Google.GoogleSignInUser::get_ImageUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GoogleSignInUser_get_ImageUrl_m81F36356F02F01B392A614BD17F639499FB5EDA4_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignInSilently_mA667E9AAF7FA438217844D0BACC7DF68364DF7AD (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_status, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___0_configuration, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* ___0_impl, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84 (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Future`1<Google.GoogleSignInUser>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
inline RuntimeObject* Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* __this, TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* ___0_tcs, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*, TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))Future_1_WaitForResult_m86C7BBC0D729D1190E2DE445649A1A7280004193_gshared)(__this, ___0_tcs, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::get_Task()
inline Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* (*) (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn/SignInException::set_Status(Google.GoogleSignInStatusCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___0_wrapper, intptr_t ___1_handle, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method) ;
// System.Boolean System.UIntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m7A952F9624311E28A8F6B7D48A27E897F59E7021 (uintptr_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.UInt32 System.UIntPtr::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965 (uintptr_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_m298AD9D9AC4EEC28D205394CDD330BC02F1DD6A4 (const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m6C8D53A9F11B20CC884FC7E118C5854570096CBF (intptr_t ___0_data, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, intptr_t ___0_intPtr, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9 (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_mD397232FBA115AC8CFCB48BD84FB961D0F170B9E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, bool ___1_useGameSignIn, String_t* ___2_webClientId, bool ___3_requestAuthCode, bool ___4_forceTokenRefresh, bool ___5_requestEmail, bool ___6_requestIdToken, bool ___7_hidePopups, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___8_additionalScopes, int32_t ___9_scopeCount, String_t* ___10_accountName, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m21685383DEDE08D27C74A274CA26D3FEEFC033EC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, bool ___1_flag, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_m22D8DE4B14BDAAE661FFEFEF5D9BEFD5830D2175 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void Google.Future`1<Google.GoogleSignInUser>::.ctor(Google.FutureAPIImpl`1<T>)
inline void Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6 (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* __this, RuntimeObject* ___0_impl, const RuntimeMethod* method)
{
	((  void (*) (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*, RuntimeObject*, const RuntimeMethod*))Future_1__ctor_mFAB04EC0EED034736749BA83776F629ED33AA046_gshared)(__this, ___0_impl, method);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_mB9B6823FC8F062B9FA8B3A954DD2D27CB6F7B062 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_mA13B93C574D80B705301DA279CB588434C256DE3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_m00F5736B6446CD99B21D3E58D7A6D2A48A4CA0EB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_m28CC383A504AA5E245927D51463C4C2E53036EF9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mB2A55106C50985472B9CD2F983F668CE42490435 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_m9495EFE3047E860938A68D98AB665B08D9368BBB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void Google.Impl.NativeFuture/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject/OutStringMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject/OutStringMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* ___0_outStringMethod, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_Email(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_value, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_m394770E3C255F4A323BC0BBCB95E17628385BF8C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_mA10A1F7FCDB0C0509C25C07B4879ED6C8E7AB898 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_mB5BA2AF3A3B912BC7981CCAF582C4CB0BE794569 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m598696E5B17386931EDA83BBB0620473B688B6B6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mFFF0ABA104C06A67D5A8E2412F037E9FEB5EF8C9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_m8E9891422C140811C8FA3BA9366BD82E0D1DD444 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m7C4FB4471B7287C7F835758C8B6DEACCC423F478 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_m96C9B6DB9DA04EA6634C71B9651966DAD62434B4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_m4DA7FB3CF2B43ABE928AC85A24017202EBB93B43 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Google.Impl.SignInHelperObject>()
inline SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3 (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* __this, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_Create(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_EnableDebugLogging(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Configure(void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_SignIn(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_SignInSilently(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_Signout(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_Disconnect(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_DisposeFuture(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Pending(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_Result(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Status(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetServerAuthCode(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetDisplayName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetEmail(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetFamilyName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetGivenName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetIdToken(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetImageUrl(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetUserId(void*, uint8_t*, uintptr_t);
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
// System.Void GoogleSignInService::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService_Awake_m4F093491EA3E8FB90F43C82B919446BF5BC450B1 (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(GoogleWebAPI);
		String_t* L_0 = __this->___GoogleWebAPI_4;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// configuration = new GoogleSignInConfiguration
		// {
		//     WebClientId = GoogleWebAPI,
		//     RequestIdToken = true
		// };
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1 = (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)il2cpp_codegen_object_new(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589(L_1, NULL);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2 = L_1;
		String_t* L_3 = __this->___GoogleWebAPI_4;
		NullCheck(L_2);
		L_2->___WebClientId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___WebClientId_1), (void*)L_3);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = L_2;
		NullCheck(L_4);
		L_4->___RequestIdToken_5 = (bool)1;
		__this->___configuration_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_5), (void*)L_4);
		// }
		return;
	}
}
// System.Void GoogleSignInService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService_Start_m9FC8FBD8A30F21216C801BCBDCAE07AF4BECAD8A (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInService_OnSignIn_mA6E2C64D2E83E5D26EB72F9EA266C3C4367C4AD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Button signIn = signInButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___signInButton_9;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_0, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// signIn.onClick.AddListener(OnSignIn);
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)GoogleSignInService_OnSignIn_mA6E2C64D2E83E5D26EB72F9EA266C3C4367C4AD9_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void GoogleSignInService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService_Update_m607BE9FC57D41FBA49B285B2935A1F4EB40D5F71 (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GoogleSignInService::OnSignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService_OnSignIn_mA6E2C64D2E83E5D26EB72F9EA266C3C4367C4AD9 (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInService_OnAuthenticationFinished_mD8EA60A3EA25523F06FF94596EB34A94665C4618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C41540AEBC151A2E6CD9946AB44FF2F4AD09541);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoogleSignIn.Configuration = configuration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = __this->___configuration_5;
		GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85(L_0, NULL);
		// GoogleSignIn.Configuration.UseGameSignIn = false;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1;
		L_1 = GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline(NULL);
		NullCheck(L_1);
		L_1->___UseGameSignIn_0 = (bool)0;
		// GoogleSignIn.Configuration.RequestIdToken = true;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2;
		L_2 = GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline(NULL);
		NullCheck(L_2);
		L_2->___RequestIdToken_5 = (bool)1;
		// GoogleSignIn.Configuration.RequestEmail = true;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_3;
		L_3 = GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline(NULL);
		NullCheck(L_3);
		L_3->___RequestEmail_4 = (bool)1;
		// AddStatusText("Calling SignIn");
		GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(__this, _stringLiteral2C41540AEBC151A2E6CD9946AB44FF2F4AD09541, NULL);
		// GoogleSignIn.DefaultInstance.SignIn().ContinueWith(
		//   OnAuthenticationFinished);
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_4;
		L_4 = GoogleSignIn_get_DefaultInstance_m3A7F48D5EB49BD41DF945D9A54E93BA1C5D382D8(NULL);
		NullCheck(L_4);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_5;
		L_5 = GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D(L_4, NULL);
		Action_1_tF52889A7B072E11E8880182FD8F7D44219989077* L_6 = (Action_1_tF52889A7B072E11E8880182FD8F7D44219989077*)il2cpp_codegen_object_new(Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m24ECDBDFF2296BB9E1A0A6682131E87BADE4EADE(L_6, __this, (intptr_t)((void*)GoogleSignInService_OnAuthenticationFinished_mD8EA60A3EA25523F06FF94596EB34A94665C4618_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1(L_5, L_6, Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GoogleSignInService::OnSignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService_OnSignOut_m15A3387C5EE120F99CF0ED7226DFD499A29F2A64 (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E1AD0E83130989E2515696D6D5B828CD141AAE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddStatusText("Calling SignOut");
		GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(__this, _stringLiteral2E1AD0E83130989E2515696D6D5B828CD141AAE6, NULL);
		// GoogleSignIn.DefaultInstance.SignOut();
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0;
		L_0 = GoogleSignIn_get_DefaultInstance_m3A7F48D5EB49BD41DF945D9A54E93BA1C5D382D8(NULL);
		NullCheck(L_0);
		GoogleSignIn_SignOut_m1666034382C085A0EE0227035E57E5AD61FE43B6(L_0, NULL);
		// }
		return;
	}
}
// System.Void GoogleSignInService::OnDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService_OnDisconnect_mF883E8103496478657327074639FD45BB06B20EC (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72479C2E2CD4DACBD6155ABD5D0DEC816E33D007);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddStatusText("Calling Disconnect");
		GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(__this, _stringLiteral72479C2E2CD4DACBD6155ABD5D0DEC816E33D007, NULL);
		// GoogleSignIn.DefaultInstance.Disconnect();
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0;
		L_0 = GoogleSignIn_get_DefaultInstance_m3A7F48D5EB49BD41DF945D9A54E93BA1C5D382D8(NULL);
		NullCheck(L_0);
		GoogleSignIn_Disconnect_mD97724F96462EC3BB49B29CFDC92888EB5D11D00(L_0, NULL);
		// }
		return;
	}
}
// System.Void GoogleSignInService::OnAuthenticationFinished(System.Threading.Tasks.Task`1<Google.GoogleSignInUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService_OnAuthenticationFinished_mD8EA60A3EA25523F06FF94596EB34A94665C4618 (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInStatusCode_t3AEC2A455C7DB2C736F01D352EA10EFDCB011D7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10F51048DD1BD5A2469EF209B64ACC6FE80197F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68CCAEFA2D0D8C4A9C1B054BB5F1AF05C8E3F4AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725A2F73B9AC862B4466B7C7B1287663C2C79392);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral769A2FDAB9A0B414C5BC97D6424E60561429FDA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8E80476EAA219E9BBF9C58B4BC92CBAEA079F36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0582EED06C9EA50ABAFD3ECA275FC4D660B140);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* V_1 = NULL;
	int32_t V_2 = 0;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* G_B6_2 = NULL;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* G_B5_2 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* G_B7_2 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* G_B15_2 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* G_B14_2 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* G_B16_2 = NULL;
	{
		// if (task.IsFaulted)
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_0 = ___0_task;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_0, NULL);
		if (!L_1)
		{
			goto IL_0095;
		}
	}
	{
		// using (IEnumerator<System.Exception> enumerator =
		//         task.Exception.InnerExceptions.GetEnumerator())
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_2 = ___0_task;
		NullCheck(L_2);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_3;
		L_3 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_2, NULL);
		NullCheck(L_3);
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_4;
		L_4 = AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC(L_4, ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_0094;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0094:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (enumerator.MoveNext())
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (!L_9)
				{
					goto IL_0064_1;
				}
			}
			{
				// GoogleSignIn.SignInException error =
				//         (GoogleSignIn.SignInException)enumerator.Current;
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				Exception_t* L_11;
				L_11 = InterfaceFuncInvoker0< Exception_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var, L_10);
				V_1 = ((SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A*)CastclassClass((RuntimeObject*)L_11, SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var));
				// AddStatusText("Got Error: " + error.Status + " " + error.Message);
				SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* L_12 = V_1;
				NullCheck(L_12);
				int32_t L_13;
				L_13 = SignInException_get_Status_m2FBF33632A23C771EE5CEB65120E3DFEC8FF5A74_inline(L_12, NULL);
				V_2 = L_13;
				Il2CppFakeBox<int32_t> L_14(GoogleSignInStatusCode_t3AEC2A455C7DB2C736F01D352EA10EFDCB011D7B_il2cpp_TypeInfo_var, (&V_2));
				String_t* L_15;
				L_15 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_14), NULL);
				SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* L_16 = V_1;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_16);
				String_t* L_18;
				L_18 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral68CCAEFA2D0D8C4A9C1B054BB5F1AF05C8E3F4AC, L_15, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_17, NULL);
				GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(__this, L_18, NULL);
				goto IL_0136;
			}

IL_0064_1:
			{
				// AddStatusText("Got Unexpected Exception?!?" + task.Exception);
				Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_19 = ___0_task;
				NullCheck(L_19);
				AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_20;
				L_20 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_19, NULL);
				AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_21 = L_20;
				G_B5_0 = L_21;
				G_B5_1 = _stringLiteral725A2F73B9AC862B4466B7C7B1287663C2C79392;
				G_B5_2 = __this;
				if (L_21)
				{
					G_B6_0 = L_21;
					G_B6_1 = _stringLiteral725A2F73B9AC862B4466B7C7B1287663C2C79392;
					G_B6_2 = __this;
					goto IL_0077_1;
				}
			}
			{
				G_B7_0 = ((String_t*)(NULL));
				G_B7_1 = G_B5_1;
				G_B7_2 = G_B5_2;
				goto IL_007c_1;
			}

IL_0077_1:
			{
				NullCheck(G_B6_0);
				String_t* L_22;
				L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
				G_B7_0 = L_22;
				G_B7_1 = G_B6_1;
				G_B7_2 = G_B6_2;
			}

IL_007c_1:
			{
				String_t* L_23;
				L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B7_1, G_B7_0, NULL);
				NullCheck(G_B7_2);
				GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(G_B7_2, L_23, NULL);
				// }
				goto IL_0136;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		// else if (task.IsCanceled)
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_24 = ___0_task;
		NullCheck(L_24);
		bool L_25;
		L_25 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_24, NULL);
		if (!L_25)
		{
			goto IL_00a9;
		}
	}
	{
		// AddStatusText("Canceled");
		GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(__this, _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459, NULL);
		return;
	}

IL_00a9:
	{
		// AddStatusText("Welcome: " + task.Result.DisplayName + "!");
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_26 = ___0_task;
		NullCheck(L_26);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_27;
		L_27 = Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B(L_26, Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C_inline(L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral769A2FDAB9A0B414C5BC97D6424E60561429FDA7, L_28, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, NULL);
		GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(__this, L_29, NULL);
		// AddStatusText("Email: " + task.Result.Email);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_30 = ___0_task;
		NullCheck(L_30);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_31;
		L_31 = Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B(L_30, Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = GoogleSignInUser_get_Email_mA6E37F96BC90280CBA4D425743426CBE8D515551_inline(L_31, NULL);
		String_t* L_33;
		L_33 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFC0582EED06C9EA50ABAFD3ECA275FC4D660B140, L_32, NULL);
		GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(__this, L_33, NULL);
		// AddStatusText("IdToken: " + task.Result.IdToken);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_34 = ___0_task;
		NullCheck(L_34);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_35;
		L_35 = Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B(L_34, Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A_inline(L_35, NULL);
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE8E80476EAA219E9BBF9C58B4BC92CBAEA079F36, L_36, NULL);
		GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(__this, L_37, NULL);
		// AddStatusText("ImageUrl: " + task.Result.ImageUrl);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_38 = ___0_task;
		NullCheck(L_38);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_39;
		L_39 = Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B(L_38, Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
		NullCheck(L_39);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_40;
		L_40 = GoogleSignInUser_get_ImageUrl_m81F36356F02F01B392A614BD17F639499FB5EDA4_inline(L_39, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_41 = L_40;
		G_B14_0 = L_41;
		G_B14_1 = _stringLiteral10F51048DD1BD5A2469EF209B64ACC6FE80197F5;
		G_B14_2 = __this;
		if (L_41)
		{
			G_B15_0 = L_41;
			G_B15_1 = _stringLiteral10F51048DD1BD5A2469EF209B64ACC6FE80197F5;
			G_B15_2 = __this;
			goto IL_0117;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		goto IL_011c;
	}

IL_0117:
	{
		NullCheck(G_B15_0);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B15_0);
		G_B16_0 = L_42;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_011c:
	{
		String_t* L_43;
		L_43 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B16_1, G_B16_0, NULL);
		NullCheck(G_B16_2);
		GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(G_B16_2, L_43, NULL);
		// Debug.Log(task.Result.IdToken);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_44 = ___0_task;
		NullCheck(L_44);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_45;
		L_45 = Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B(L_44, Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
		NullCheck(L_45);
		String_t* L_46;
		L_46 = GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A_inline(L_45, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_46, NULL);
	}

IL_0136:
	{
		// }
		return;
	}
}
// System.Void GoogleSignInService::OnSignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService_OnSignInSilently_mF66F0675B168DF0E07EF9EC7F122B8823895AF05 (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInService_OnAuthenticationFinished_mD8EA60A3EA25523F06FF94596EB34A94665C4618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA01907B77A31AFB8179089C6C1315EF4D713C528);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoogleSignIn.Configuration = configuration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = __this->___configuration_5;
		GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85(L_0, NULL);
		// GoogleSignIn.Configuration.UseGameSignIn = false;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1;
		L_1 = GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline(NULL);
		NullCheck(L_1);
		L_1->___UseGameSignIn_0 = (bool)0;
		// GoogleSignIn.Configuration.RequestIdToken = true;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2;
		L_2 = GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline(NULL);
		NullCheck(L_2);
		L_2->___RequestIdToken_5 = (bool)1;
		// AddStatusText("Calling SignIn Silently");
		GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(__this, _stringLiteralA01907B77A31AFB8179089C6C1315EF4D713C528, NULL);
		// GoogleSignIn.DefaultInstance.SignInSilently()
		//       .ContinueWith(OnAuthenticationFinished);
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_3;
		L_3 = GoogleSignIn_get_DefaultInstance_m3A7F48D5EB49BD41DF945D9A54E93BA1C5D382D8(NULL);
		NullCheck(L_3);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_4;
		L_4 = GoogleSignIn_SignInSilently_mA667E9AAF7FA438217844D0BACC7DF68364DF7AD(L_3, NULL);
		Action_1_tF52889A7B072E11E8880182FD8F7D44219989077* L_5 = (Action_1_tF52889A7B072E11E8880182FD8F7D44219989077*)il2cpp_codegen_object_new(Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m24ECDBDFF2296BB9E1A0A6682131E87BADE4EADE(L_5, __this, (intptr_t)((void*)GoogleSignInService_OnAuthenticationFinished_mD8EA60A3EA25523F06FF94596EB34A94665C4618_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1(L_4, L_5, Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GoogleSignInService::OnGamesSignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService_OnGamesSignIn_mC9A8FD34FBE7A6662C0D78240CA9248E84CE4FA3 (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInService_OnAuthenticationFinished_mD8EA60A3EA25523F06FF94596EB34A94665C4618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56AD00A3BBD3193180AA5FC557AB2FB212F215AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoogleSignIn.Configuration = configuration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = __this->___configuration_5;
		GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85(L_0, NULL);
		// GoogleSignIn.Configuration.UseGameSignIn = true;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1;
		L_1 = GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline(NULL);
		NullCheck(L_1);
		L_1->___UseGameSignIn_0 = (bool)1;
		// GoogleSignIn.Configuration.RequestIdToken = false;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2;
		L_2 = GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline(NULL);
		NullCheck(L_2);
		L_2->___RequestIdToken_5 = (bool)0;
		// AddStatusText("Calling Games SignIn");
		GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6(__this, _stringLiteral56AD00A3BBD3193180AA5FC557AB2FB212F215AE, NULL);
		// GoogleSignIn.DefaultInstance.SignIn().ContinueWith(
		//   OnAuthenticationFinished);
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_3;
		L_3 = GoogleSignIn_get_DefaultInstance_m3A7F48D5EB49BD41DF945D9A54E93BA1C5D382D8(NULL);
		NullCheck(L_3);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_4;
		L_4 = GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D(L_3, NULL);
		Action_1_tF52889A7B072E11E8880182FD8F7D44219989077* L_5 = (Action_1_tF52889A7B072E11E8880182FD8F7D44219989077*)il2cpp_codegen_object_new(Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m24ECDBDFF2296BB9E1A0A6682131E87BADE4EADE(L_5, __this, (intptr_t)((void*)GoogleSignInService_OnAuthenticationFinished_mD8EA60A3EA25523F06FF94596EB34A94665C4618_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1(L_4, L_5, Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GoogleSignInService::AddStatusText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService_AddStatusText_mF67BDFF05AC61714C5CA0C9A84259666D95252F6 (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// if (messages.Count == 5)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___messages_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_0, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_001a;
		}
	}
	{
		// messages.RemoveAt(0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___messages_10;
		NullCheck(L_2);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_2, 0, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
	}

IL_001a:
	{
		// messages.Add(text);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___messages_10;
		String_t* L_4 = ___0_text;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// string txt = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (string s in messages)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___messages_10;
		NullCheck(L_5);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_6;
		L_6 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_5, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_1), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004f_1;
			}

IL_003a_1:
			{
				// foreach (string s in messages)
				String_t* L_7;
				L_7 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_1), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_2 = L_7;
				// txt += "\n" + s;
				String_t* L_8 = V_0;
				String_t* L_9 = V_2;
				String_t* L_10;
				L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_8, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_9, NULL);
				V_0 = L_10;
			}

IL_004f_1:
			{
				// foreach (string s in messages)
				bool L_11;
				L_11 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_1), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003a_1;
				}
			}
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// statusText.text = txt;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___statusText_8;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_13);
		// }
		return;
	}
}
// System.Void GoogleSignInService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInService__ctor_m0CBD440F9F3BF921E834FAAD82DF4F47BA39411B (GoogleSignInService_tC849D407B9FB12928A43A333C45FC9D57C455CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4694263D3795B4E6800E935B7ABEFF9A1CDD6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string GoogleWebAPI = "547630993735-c5gie2s688g8ust07m3a9pfaghbuhtbi.apps.googleusercontent.com";
		__this->___GoogleWebAPI_4 = _stringLiteral1A4694263D3795B4E6800E935B7ABEFF9A1CDD6B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GoogleWebAPI_4), (void*)_stringLiteral1A4694263D3795B4E6800E935B7ABEFF9A1CDD6B);
		// private List<string> messages = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___messages_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messages_10), (void*)L_0);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
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
// System.Void Google.GoogleSignIn::set_Configuration(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (theInstance == null || theConfiguration == value || theConfiguration == null) {
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2 = ___0_value;
		if ((((RuntimeObject*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)L_1) == ((RuntimeObject*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_3 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_0016:
	{
		// theConfiguration = value;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = ___0_value;
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1), (void*)L_4);
		return;
	}

IL_001d:
	{
		// throw new SignInException(GoogleSignInStatusCode.DeveloperError,
		//     "DefaultInstance already created. " +
		//     " Cannot change configuration after creation.");
		SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* L_5 = (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B(L_5, 6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD400EB487C20E145E8637C4026A2356D9E546258)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GoogleSignIn_set_Configuration_m0009916D90123692747FEC684C93862607011E85_RuntimeMethod_var)));
	}
}
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return theConfiguration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		return L_0;
	}
}
// Google.GoogleSignIn Google.GoogleSignIn::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* GoogleSignIn_get_DefaultInstance_m3A7F48D5EB49BD41DF945D9A54E93BA1C5D382D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (theInstance == null) {
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// theInstance = new GoogleSignIn(new GoogleSignInImpl(Configuration));
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1;
		L_1 = GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline(NULL);
		GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* L_2 = (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349*)il2cpp_codegen_object_new(GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A(L_2, L_1, NULL);
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_3 = (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA*)il2cpp_codegen_object_new(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52(L_3, L_2, NULL);
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0), (void*)L_3);
	}

IL_001b:
	{
		// return theInstance;
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_4 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		return L_4;
	}
}
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* ___0_impl, const RuntimeMethod* method) 
{
	{
		// internal GoogleSignIn(GoogleSignInImpl impl) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.impl = impl;
		GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* L_0 = ___0_impl;
		__this->___impl_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn::EnableDebugLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_EnableDebugLogging_m14A29DE697ECC64D8A0A5CBA47278ECAE9D26F29 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// impl.EnableDebugLogging(flag);
		RuntimeObject* L_0 = __this->___impl_2;
		bool L_1 = ___0_flag;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Google.ISignInImpl::EnableDebugLogging(System.Boolean) */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* V_0 = NULL;
	{
		// var tcs = new TaskCompletionSource<GoogleSignInUser>();
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_0 = (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*)il2cpp_codegen_object_new(TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84(L_0, TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		V_0 = L_0;
		// SignInHelperObject.Instance.StartCoroutine(
		//   impl.SignIn().WaitForResult(tcs));
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_1;
		L_1 = SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34(NULL);
		RuntimeObject* L_2 = __this->___impl_2;
		NullCheck(L_2);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3;
		L_3 = InterfaceFuncInvoker0< Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* >::Invoke(0 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignIn() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C(L_3, L_4, Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_5, NULL);
		// return tcs.Task;
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_7 = V_0;
		NullCheck(L_7);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline(L_7, TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignInSilently_mA667E9AAF7FA438217844D0BACC7DF68364DF7AD (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* V_0 = NULL;
	{
		// var tcs = new TaskCompletionSource<GoogleSignInUser>();
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_0 = (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*)il2cpp_codegen_object_new(TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84(L_0, TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		V_0 = L_0;
		// SignInHelperObject.Instance.StartCoroutine(
		//     impl.SignInSilently().WaitForResult(tcs));
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_1;
		L_1 = SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34(NULL);
		RuntimeObject* L_2 = __this->___impl_2;
		NullCheck(L_2);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3;
		L_3 = InterfaceFuncInvoker0< Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* >::Invoke(1 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignInSilently() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C(L_3, L_4, Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_5, NULL);
		// return tcs.Task;
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_7 = V_0;
		NullCheck(L_7);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline(L_7, TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void Google.GoogleSignIn::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_SignOut_m1666034382C085A0EE0227035E57E5AD61FE43B6 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theConfiguration = null;
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1 = (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1), (void*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)NULL);
		// impl.SignOut();
		RuntimeObject* L_0 = __this->___impl_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Google.ISignInImpl::SignOut() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_Disconnect_mD97724F96462EC3BB49B29CFDC92888EB5D11D00 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// impl.Disconnect();
		RuntimeObject* L_0 = __this->___impl_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Google.ISignInImpl::Disconnect() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0);
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
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_mF0A5634485EAF28ED443E3FB31248C2C1B1BE942 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal SignInException(GoogleSignInStatusCode status) {
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// Status = status;
		int32_t L_0 = ___0_status;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_status, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(message) {
		String_t* L_0 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// Status = status;
		int32_t L_1 = ___0_status;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m84BD804BE5ECAFDF85A48095572AA861C1E9D931 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_status, String_t* ___1_message, Exception_t* ___2_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Exception innerException) : base(message, innerException) {
		String_t* L_0 = ___1_message;
		Exception_t* L_1 = ___2_innerException;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// Status = status;
		int32_t L_2 = ___0_status;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m97D47EE86A6870059BDA9F858818670FBAFA3812 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_status, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___2_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(info, context) {
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___1_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___2_context;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120(__this, L_0, L_1, NULL);
		// Status = status;
		int32_t L_2 = ___0_status;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignInException_get_Status_m2FBF33632A23C771EE5CEB65120E3DFEC8FF5A74 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Google.GoogleSignIn/SignInException::set_Status(Google.GoogleSignInStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		int32_t L_0 = ___0_value;
		__this->___U3CStatusU3Ek__BackingField_18 = L_0;
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
// System.Void Google.GoogleSignInConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* __this, const RuntimeMethod* method) 
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
// System.String Google.GoogleSignInUser::get_AuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_AuthCode_m086556E7DADF3850F2A70EC022F5BF9870DAAE34 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CAuthCodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CAuthCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_Email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_Email_mA6E37F96BC90280CBA4D425743426CBE8D515551 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CEmailU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_Email(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CEmailU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_IdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CIdTokenU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CIdTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_GivenName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_GivenName_m1955EAFF719827C4118F9B7D2DF30E490F6A6797 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CGivenNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CGivenNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGivenNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_FamilyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_FamilyName_mB8E944CF7D941E7F823C079410D45071ECE203A7 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CFamilyNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CFamilyNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFamilyNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Uri Google.GoogleSignInUser::get_ImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GoogleSignInUser_get_ImageUrl_m81F36356F02F01B392A614BD17F639499FB5EDA4 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___U3CImageUrlU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___0_value;
		__this->___U3CImageUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_UserId_mCBF326EFC373DEF983AB1E87082AF49D81D1082E (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CUserIdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Google.GoogleSignInUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
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
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, intptr_t ___0_intPtr, const RuntimeMethod* method) 
{
	{
		// public BaseObject(IntPtr intPtr) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// selfHandleRef = new HandleRef(this, intPtr);
		intptr_t L_0 = ___0_intPtr;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_1), __this, L_0, /*hidden argument*/NULL);
		__this->___selfHandleRef_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___selfHandleRef_0))->____wrapper_0), (void*)NULL);
		// }
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9 (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (selfHandleRef.Equals(nullSelf)) {
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___selfHandleRef_0);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1 = ((BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var))->___nullSelf_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1;
		RuntimeObject* L_3 = Box(HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var, &L_2);
		Il2CppFakeBox<HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F> L_4(HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var, L_0);
		bool L_5;
		L_5 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), L_3, NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// throw new InvalidOperationException(
		//   "Attempted to use object after it was cleaned up");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6AEB00E2908EDBFDB9EF7E0BC9A94A5D2742E6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9_RuntimeMethod_var)));
	}

IL_0028:
	{
		// return selfHandleRef;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = __this->___selfHandleRef_0;
		return L_7;
	}
}
// System.Void Google.Impl.BaseObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selfHandleRef = nullSelf;
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = ((BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var))->___nullSelf_1;
		__this->___selfHandleRef_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___selfHandleRef_0))->____wrapper_0), (void*)NULL);
		// }
		return;
	}
}
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject/OutStringMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* ___0_outStringMethod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Exception_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// UIntPtr requiredSize = outStringMethod(null, UIntPtr.Zero);
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_0 = ___0_outStringMethod;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_1 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		NullCheck(L_0);
		uintptr_t L_2;
		L_2 = OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline(L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_1, NULL);
		V_0 = L_2;
		// if (requiredSize.Equals(UIntPtr.Zero)) {
		uintptr_t L_3 = ((UIntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(UIntPtr_t_il2cpp_TypeInfo_var))->___Zero_0;
		uintptr_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UIntPtr_t_il2cpp_TypeInfo_var, &L_4);
		bool L_6;
		L_6 = UIntPtr_Equals_m7A952F9624311E28A8F6B7D48A27E897F59E7021((&V_0), L_5, NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0022:
	{
		// string str = null;
		V_1 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		// byte[] array = new byte[requiredSize.ToUInt32()];
		uint32_t L_7;
		L_7 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_2 = L_8;
		// outStringMethod(array, requiredSize);
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_9 = ___0_outStringMethod;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		uintptr_t L_11 = V_0;
		NullCheck(L_9);
		uintptr_t L_12;
		L_12 = OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline(L_9, L_10, L_11, NULL);
		// str = Encoding.UTF8.GetString(array, 0,
		//         (int)requiredSize.ToUInt32() - 1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
		L_13 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		uint32_t L_15;
		L_15 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_0), NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 1)));
		V_1 = L_16;
		// } catch (Exception e) {
		goto IL_0077;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Exception)
		{
			// } catch (Exception e) {
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("Exception creating string from char array: " + e);
			Exception_t* L_17 = V_3;
			Exception_t* L_18 = L_17;
			G_B5_0 = L_18;
			G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD));
			if (L_18)
			{
				G_B6_0 = L_18;
				G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD));
				goto IL_0060;
			}
		}
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			goto IL_0065;
		}

IL_0060:
		{
			NullCheck(G_B6_0);
			String_t* L_19;
			L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
			G_B7_0 = L_19;
			G_B7_1 = G_B6_1;
		}

IL_0065:
		{
			String_t* L_20;
			L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B7_1, G_B7_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
			// str = string.Empty;
			String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
			V_1 = L_21;
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0077;
		}
	}// end catch (depth: 1)

IL_0077:
	{
		// return str;
		String_t* L_22 = V_1;
		return L_22;
	}
}
// System.Void Google.Impl.BaseObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__cctor_m37F36BB0C1EEF39D0197935D9E0A90BAC16FF1FB (const RuntimeMethod* method) 
{
	{
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
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Multicast(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uintptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* currentDelegate = reinterpret_cast<OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*>(delegatesToInvoke[i]);
		typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_out_bytes, ___1_out_size, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenInst(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	NullCheck(___0_out_bytes);
	typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_out_bytes, ___1_out_size, method);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStatic(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_out_bytes, ___1_out_size, method);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStaticInvoker(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uintptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_out_bytes, ___1_out_size);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_ClosedStaticInvoker(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< uintptr_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_out_bytes, ___1_out_size);
}
IL2CPP_EXTERN_C  uintptr_t DelegatePInvokeWrapper_OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5 (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_out_bytes' to native representation
	uint8_t* ____0_out_bytes_marshaled = NULL;
	if (___0_out_bytes != NULL)
	{
		____0_out_bytes_marshaled = reinterpret_cast<uint8_t*>((___0_out_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = il2cppPInvokeFunc(____0_out_bytes_marshaled, ___1_out_size);

	return returnValue;
}
// System.Void Google.Impl.BaseObject/OutStringMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Multicast;
}
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_out_bytes, ___1_out_size, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Google.Impl.BaseObject/OutStringMethod::BeginInvoke(System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OutStringMethod_BeginInvoke_m608A23F502DE02D618CCA39D6D865C7D18CDFDF7 (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_out_bytes;
	__d_args[1] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___1_out_size);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_EndInvoke_m1559888E67A55BCBDCFA90C6873D68C33E8AFE2A (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(uintptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___0_configuration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// : base(GoogleSignIn_Create(GetPlayerActivity())) {
		intptr_t L_0;
		L_0 = GoogleSignInImpl_GetPlayerActivity_m298AD9D9AC4EEC28D205394CDD330BC02F1DD6A4(NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Create_m6C8D53A9F11B20CC884FC7E118C5854570096CBF(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A(__this, L_1, NULL);
		// if (configuration != null) {
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2 = ___0_configuration;
		if (!L_2)
		{
			goto IL_0075;
		}
	}
	{
		// List<string> scopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_3;
		// if (configuration.AdditionalScopes != null) {
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = ___0_configuration;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___AdditionalScopes_9;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// scopes.AddRange(configuration.AdditionalScopes);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = V_0;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_7 = ___0_configuration;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___AdditionalScopes_9;
		NullCheck(L_6);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_6, L_8, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
	}

IL_002d:
	{
		// GoogleSignIn_Configure(SelfPtr(), configuration.UseGameSignIn,
		//              configuration.WebClientId,
		//              configuration.RequestAuthCode,
		//              configuration.ForceTokenRefresh,
		//              configuration.RequestEmail,
		//              configuration.RequestIdToken,
		//              configuration.HidePopups,
		//              scopes.ToArray(),
		//              scopes.Count,
		//              configuration.AccountName);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_9;
		L_9 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_10 = ___0_configuration;
		NullCheck(L_10);
		bool L_11 = L_10->___UseGameSignIn_0;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_12 = ___0_configuration;
		NullCheck(L_12);
		String_t* L_13 = L_12->___WebClientId_1;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_14 = ___0_configuration;
		NullCheck(L_14);
		bool L_15 = L_14->___RequestAuthCode_2;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_16 = ___0_configuration;
		NullCheck(L_16);
		bool L_17 = L_16->___ForceTokenRefresh_3;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_18 = ___0_configuration;
		NullCheck(L_18);
		bool L_19 = L_18->___RequestEmail_4;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_20 = ___0_configuration;
		NullCheck(L_20);
		bool L_21 = L_20->___RequestIdToken_5;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_22 = ___0_configuration;
		NullCheck(L_22);
		bool L_23 = L_22->___HidePopups_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = V_0;
		NullCheck(L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25;
		L_25 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_24, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_26, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_28 = ___0_configuration;
		NullCheck(L_28);
		String_t* L_29 = L_28->___AccountName_8;
		bool L_30;
		L_30 = GoogleSignInImpl_GoogleSignIn_Configure_mD397232FBA115AC8CFCB48BD84FB961D0F170B9E(L_9, L_11, L_13, L_15, L_17, L_19, L_21, L_23, L_25, L_27, L_29, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::EnableDebugLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_EnableDebugLogging_m527A8F7AAE6B947A8EC6DC25E23E661D2B6E117F (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_EnableDebugLogging(SelfPtr(), flag);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		bool L_1 = ___0_flag;
		GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m21685383DEDE08D27C74A274CA26D3FEEFC033EC(L_0, L_1, NULL);
		// }
		return;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* GoogleSignInImpl_SignIn_m859A15256A86DF1873867F49B79B69163EAB9BE8 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr nativeFuture = GoogleSignIn_SignIn(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_SignIn_m22D8DE4B14BDAAE661FFEFEF5D9BEFD5830D2175(L_0, NULL);
		// return new Future<GoogleSignInUser>(new NativeFuture(nativeFuture));
		NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* L_2 = (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F*)il2cpp_codegen_object_new(NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC(L_2, L_1, NULL);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3 = (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*)il2cpp_codegen_object_new(Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6(L_3, L_2, Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		return L_3;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* GoogleSignInImpl_SignInSilently_mE92B6CCBDA838381A21703691FB9C5F461A477F8 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr nativeFuture = GoogleSignIn_SignInSilently(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_SignInSilently_mB9B6823FC8F062B9FA8B3A954DD2D27CB6F7B062(L_0, NULL);
		// return new Future<GoogleSignInUser>(new NativeFuture(nativeFuture));
		NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* L_2 = (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F*)il2cpp_codegen_object_new(NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC(L_2, L_1, NULL);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3 = (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*)il2cpp_codegen_object_new(Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6(L_3, L_2, Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_SignOut_m88FED0CCBAA20F403B838BAA20FBD5FC5CC2416B (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_Signout(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_Signout_mA13B93C574D80B705301DA279CB588434C256DE3(L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_Disconnect_m136F2268A549DA9A13D7BBB198BE4B286380ECA1 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_Disconnect(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_Disconnect_m00F5736B6446CD99B21D3E58D7A6D2A48A4CA0EB(L_0, NULL);
		// }
		return;
	}
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m6C8D53A9F11B20CC884FC7E118C5854570096CBF (intptr_t ___0_data, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Create)(___0_data);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_data);
	#endif

	return returnValue;
}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m21685383DEDE08D27C74A274CA26D3FEEFC033EC (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, bool ___1_flag, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_EnableDebugLogging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_EnableDebugLogging)(____0_self_marshaled, static_cast<int32_t>(___1_flag));
	#else
	il2cppPInvokeFunc(____0_self_marshaled, static_cast<int32_t>(___1_flag));
	#endif

}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_mD397232FBA115AC8CFCB48BD84FB961D0F170B9E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, bool ___1_useGameSignIn, String_t* ___2_webClientId, bool ___3_requestAuthCode, bool ___4_forceTokenRefresh, bool ___5_requestEmail, bool ___6_requestIdToken, bool ___7_hidePopups, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___8_additionalScopes, int32_t ___9_scopeCount, String_t* ___10_accountName, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4 + sizeof(char*) + 4 + 4 + 4 + 4 + 4 + sizeof(void*) + sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Configure", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___2_webClientId' to native representation
	char* ____2_webClientId_marshaled = NULL;
	____2_webClientId_marshaled = il2cpp_codegen_marshal_string(___2_webClientId);

	// Marshaling of parameter '___8_additionalScopes' to native representation
	char** ____8_additionalScopes_marshaled = NULL;
	if (___8_additionalScopes != NULL)
	{
		il2cpp_array_size_t ____8_additionalScopes_Length = (___8_additionalScopes)->max_length;
		____8_additionalScopes_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____8_additionalScopes_Length + 1);
		(____8_additionalScopes_marshaled)[____8_additionalScopes_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____8_additionalScopes_Length); i++)
		{
			(____8_additionalScopes_marshaled)[i] = il2cpp_codegen_marshal_string((___8_additionalScopes)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____8_additionalScopes_marshaled = NULL;
	}

	// Marshaling of parameter '___10_accountName' to native representation
	char* ____10_accountName_marshaled = NULL;
	____10_accountName_marshaled = il2cpp_codegen_marshal_string(___10_accountName);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Configure)(____0_self_marshaled, static_cast<int32_t>(___1_useGameSignIn), ____2_webClientId_marshaled, static_cast<int32_t>(___3_requestAuthCode), static_cast<int32_t>(___4_forceTokenRefresh), static_cast<int32_t>(___5_requestEmail), static_cast<int32_t>(___6_requestIdToken), static_cast<int32_t>(___7_hidePopups), ____8_additionalScopes_marshaled, ___9_scopeCount, ____10_accountName_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, static_cast<int32_t>(___1_useGameSignIn), ____2_webClientId_marshaled, static_cast<int32_t>(___3_requestAuthCode), static_cast<int32_t>(___4_forceTokenRefresh), static_cast<int32_t>(___5_requestEmail), static_cast<int32_t>(___6_requestIdToken), static_cast<int32_t>(___7_hidePopups), ____8_additionalScopes_marshaled, ___9_scopeCount, ____10_accountName_marshaled);
	#endif

	// Marshaling cleanup of parameter '___2_webClientId' native representation
	il2cpp_codegen_marshal_free(____2_webClientId_marshaled);
	____2_webClientId_marshaled = NULL;

	// Marshaling cleanup of parameter '___8_additionalScopes' native representation
	if (____8_additionalScopes_marshaled != NULL)
	{
		const il2cpp_array_size_t ____8_additionalScopes_marshaled_CleanupLoopCount = (___8_additionalScopes != NULL) ? (___8_additionalScopes)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____8_additionalScopes_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____8_additionalScopes_marshaled)[i]);
			(____8_additionalScopes_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____8_additionalScopes_marshaled);
		____8_additionalScopes_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___10_accountName' native representation
	il2cpp_codegen_marshal_free(____10_accountName_marshaled);
	____10_accountName_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_m22D8DE4B14BDAAE661FFEFEF5D9BEFD5830D2175 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_SignIn", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignIn)(____0_self_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_mB9B6823FC8F062B9FA8B3A954DD2D27CB6F7B062 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_SignInSilently", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignInSilently)(____0_self_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled);
	#endif

	return returnValue;
}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_mA13B93C574D80B705301DA279CB588434C256DE3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Signout", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Signout)(____0_self_marshaled);
	#else
	il2cppPInvokeFunc(____0_self_marshaled);
	#endif

}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_m00F5736B6446CD99B21D3E58D7A6D2A48A4CA0EB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Disconnect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Disconnect)(____0_self_marshaled);
	#else
	il2cppPInvokeFunc(____0_self_marshaled);
	#endif

}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_m28CC383A504AA5E245927D51463C4C2E53036EF9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_DisposeFuture", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_DisposeFuture)(____0_self_marshaled);
	#else
	il2cppPInvokeFunc(____0_self_marshaled);
	#endif

}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mB2A55106C50985472B9CD2F983F668CE42490435 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Pending", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Pending)(____0_self_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_self_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_m9495EFE3047E860938A68D98AB665B08D9368BBB (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Result", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Result)(____0_self_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled);
	#endif

	return returnValue;
}
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_m394770E3C255F4A323BC0BBCB95E17628385BF8C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Status", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Status)(____0_self_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_self_marshaled);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m7C4FB4471B7287C7F835758C8B6DEACCC423F478 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetServerAuthCode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetServerAuthCode)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_mA10A1F7FCDB0C0509C25C07B4879ED6C8E7AB898 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetDisplayName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetDisplayName)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_mB5BA2AF3A3B912BC7981CCAF582C4CB0BE794569 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetEmail", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetEmail)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m598696E5B17386931EDA83BBB0620473B688B6B6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetFamilyName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetFamilyName)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mFFF0ABA104C06A67D5A8E2412F037E9FEB5EF8C9 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetGivenName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetGivenName)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_m8E9891422C140811C8FA3BA9366BD82E0D1DD444 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetIdToken", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetIdToken)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_m96C9B6DB9DA04EA6634C71B9651966DAD62434B4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetImageUrl", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetImageUrl)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_m4DA7FB3CF2B43ABE928AC85A24017202EBB93B43 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___0_self, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, uintptr_t ___2_len, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetUserId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_self' to native representation
	void* ____0_self_marshaled = NULL;
	____0_self_marshaled = (void*)___0_self.____handle_1;

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetUserId)(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____0_self_marshaled, ____1_bytes_marshaled, ___2_len);
	#endif

	return returnValue;
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_m298AD9D9AC4EEC28D205394CDD330BC02F1DD6A4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.AndroidJavaClass jc = new UnityEngine.AndroidJavaClass(
		//   "com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// return jc.GetStatic<UnityEngine.AndroidJavaObject>("currentActivity")
		//          .GetRawObject();
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_1, NULL);
		return L_2;
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
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal NativeFuture(IntPtr ptr) : base(ptr) {
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.Impl.NativeFuture::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture_Dispose_m86BBFC01575F8083B39FAEFDD779267FE212C669 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_DisposeFuture(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_DisposeFuture_m28CC383A504AA5E245927D51463C4C2E53036EF9(L_0, NULL);
		// base.Dispose();
		BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Google.Impl.NativeFuture::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFuture_get_Pending_mF70898B348D8019990176CA0B7D46936E7EDA741 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// return GoogleSignInImpl.GoogleSignIn_Pending(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		bool L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Pending_mB2A55106C50985472B9CD2F983F668CE42490435(L_0, NULL);
		return L_1;
	}
}
// Google.GoogleSignInUser Google.Impl.NativeFuture::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* NativeFuture_get_Result_m9A5DF2B826B14BC6D847C0CB12ACC2F5549B1A2A (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* V_1 = NULL;
	GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// IntPtr ptr = GoogleSignInImpl.GoogleSignIn_Result(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Result_m9495EFE3047E860938A68D98AB665B08D9368BBB(L_0, NULL);
		V_0 = L_1;
		// if (ptr != IntPtr.Zero) {
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_00ff;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_5 = (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A(L_5, NULL);
		V_1 = L_5;
		// GoogleSignInUser user = new GoogleSignInUser();
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_6 = (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA*)il2cpp_codegen_object_new(GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91(L_6, NULL);
		V_2 = L_6;
		// HandleRef userPtr = new HandleRef(user, ptr);
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_7 = V_1;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_8 = V_2;
		intptr_t L_9 = V_0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_10;
		memset((&L_10), 0, sizeof(L_10));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_10), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->___userPtr_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_7->___userPtr_0))->____wrapper_0), (void*)NULL);
		// user.DisplayName = OutParamsToString((out_string, out_size) =>
		//         GoogleSignInImpl.GoogleSignIn_GetDisplayName(userPtr,
		//                                                      out_string,
		//                                                      out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_11 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_12 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_13 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_13, NULL);
		NullCheck(L_11);
		GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline(L_11, L_14, NULL);
		// user.Email = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetEmail(userPtr, out_string,
		//                                            out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_15 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_16 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_17 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var), NULL);
		String_t* L_18;
		L_18 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_17, NULL);
		NullCheck(L_15);
		GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline(L_15, L_18, NULL);
		// user.FamilyName = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetFamilyName(userPtr, out_string,
		//                                                 out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_19 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_20 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_21 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var), NULL);
		String_t* L_22;
		L_22 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_21, NULL);
		NullCheck(L_19);
		GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline(L_19, L_22, NULL);
		// user.GivenName = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetGivenName(userPtr, out_string,
		//                                                out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_23 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_24 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_25 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var), NULL);
		String_t* L_26;
		L_26 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_25, NULL);
		NullCheck(L_23);
		GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline(L_23, L_26, NULL);
		// user.IdToken = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetIdToken(userPtr, out_string,
		//                                              out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_27 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_28 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_29 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_29, L_28, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var), NULL);
		String_t* L_30;
		L_30 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_29, NULL);
		NullCheck(L_27);
		GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline(L_27, L_30, NULL);
		// user.AuthCode = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetServerAuthCode(userPtr, out_string,
		//                                                     out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_31 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_32 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_33 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var), NULL);
		String_t* L_34;
		L_34 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_33, NULL);
		NullCheck(L_31);
		GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline(L_31, L_34, NULL);
		// string url = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetImageUrl(userPtr, out_string,
		//                                               out_size));
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_35 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_36 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_36, L_35, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var), NULL);
		String_t* L_37;
		L_37 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_36, NULL);
		V_3 = L_37;
		// if (url.Length > 0) {
		String_t* L_38 = V_3;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		// user.ImageUrl = new System.Uri(url);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_40 = V_2;
		String_t* L_41 = V_3;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_42 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_42, L_41, NULL);
		NullCheck(L_40);
		GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline(L_40, L_42, NULL);
	}

IL_00e6:
	{
		// user.UserId = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetUserId(userPtr, out_string,
		//                                             out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_43 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_44 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_45 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_45, L_44, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		String_t* L_46;
		L_46 = BaseObject_OutParamsToString_mA2D2E392386AEA31AC1E0E2AF64E9ABD8A20028B(L_45, NULL);
		NullCheck(L_43);
		GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline(L_43, L_46, NULL);
		// return user;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_47 = V_2;
		return L_47;
	}

IL_00ff:
	{
		// return null;
		return (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA*)NULL;
	}
}
// Google.GoogleSignInStatusCode Google.Impl.NativeFuture::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFuture_get_Status_mC727AD36BDCDD64E381FA4991E58694ABA9561F4 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// return (GoogleSignInStatusCode)GoogleSignInImpl.GoogleSignIn_Status(
		//   SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		int32_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Status_m394770E3C255F4A323BC0BBCB95E17628385BF8C(L_0, NULL);
		return (int32_t)(L_1);
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
// System.Void Google.Impl.NativeFuture/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__0(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetDisplayName(userPtr,
		//                                              out_string,
		//                                              out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetDisplayName_mA10A1F7FCDB0C0509C25C07B4879ED6C8E7AB898(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__1(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetEmail(userPtr, out_string,
		//                                        out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetEmail_mB5BA2AF3A3B912BC7981CCAF582C4CB0BE794569(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__2(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetFamilyName(userPtr, out_string,
		//                                             out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetFamilyName_m598696E5B17386931EDA83BBB0620473B688B6B6(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__3(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetGivenName(userPtr, out_string,
		//                                            out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetGivenName_mFFF0ABA104C06A67D5A8E2412F037E9FEB5EF8C9(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__4(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetIdToken(userPtr, out_string,
		//                                          out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetIdToken_m8E9891422C140811C8FA3BA9366BD82E0D1DD444(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__5(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetServerAuthCode(userPtr, out_string,
		//                                                 out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m7C4FB4471B7287C7F835758C8B6DEACCC423F478(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__6(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetImageUrl(userPtr, out_string,
		//                                           out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetImageUrl_m96C9B6DB9DA04EA6634C71B9651966DAD62434B4(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__7(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_string, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetUserId(userPtr, out_string,
		//                                         out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_out_string;
		uintptr_t L_2 = ___1_out_size;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetUserId_m4DA7FB3CF2B43ABE928AC85A24017202EBB93B43(L_0, L_1, L_2, NULL);
		return L_3;
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
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* SignInHelperObject_get_Instance_mB289E4E5785ECA3877128A2D7E42F73DAEAA2C34 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying) {
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// GameObject obj = new GameObject("GoogleSignInHelperObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91, NULL);
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// instance = obj.AddComponent<SignInHelperObject>();
		NullCheck(L_2);
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_3;
		L_3 = GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF(L_2, GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var);
		((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_3);
		goto IL_002d;
	}

IL_0023:
	{
		// instance = new SignInHelperObject();
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_4 = (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B*)il2cpp_codegen_object_new(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3(L_4, NULL);
		((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_4);
	}

IL_002d:
	{
		// return instance;
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_5 = ((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4;
		return L_5;
	}
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3 (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m3F4FE6701C9A4214FB378DEB8728C91D04A0D414_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return theConfiguration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_0 = __this->___m_innerExceptions_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SignInException_get_Status_m2FBF33632A23C771EE5CEB65120E3DFEC8FF5A74_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_Email_mA6E37F96BC90280CBA4D425743426CBE8D515551_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CEmailU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CIdTokenU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GoogleSignInUser_get_ImageUrl_m81F36356F02F01B392A614BD17F639499FB5EDA4_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___U3CImageUrlU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		int32_t L_0 = ___0_value;
		__this->___U3CStatusU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_out_bytes, uintptr_t ___1_out_size, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_out_bytes, ___1_out_size, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CEmailU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CFamilyNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFamilyNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CGivenNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGivenNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CIdTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CAuthCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___0_value;
		__this->___U3CImageUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___0_value;
		__this->___U3CUserIdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
