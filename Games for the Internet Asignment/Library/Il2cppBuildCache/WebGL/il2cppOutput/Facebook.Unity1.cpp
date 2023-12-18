#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InterfaceActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Facebook.Unity.Utilities/Callback`1<System.Object>
struct Callback_1_tBCF83A39E64483144AB09C33CBF5F81B2FA31353;
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_tC629FECBE7259CF822092A82F13C68D04DF9FAE1;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t7985F00DD82B081CE6E2EABA48C30DF084585653;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t6166F5FB96C236E90EFD544116294CBE2AFE6489;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_tFD70485570645EBD2D9687F2FF918892642F2CC7;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t3E7742F517235C9ECE58D1B54A49A538DADB5947;
// Facebook.Unity.FacebookDelegate`1<System.Object>
struct FacebookDelegate_1_t6CC23315A4773E6BA9C162E9EFD4A33358009417;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Facebook.Unity.AccessToken
struct AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Facebook.Unity.Mobile.Android.AndroidFacebook
struct AndroidFacebook_t4A439354665D5BF3BEFD3F4ADD71FD06AAC0F427;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Facebook.Unity.CallbackManager
struct CallbackManager_t811808759C06A9AA6490F764988645176A87897C;
// Facebook.Unity.Canvas.CanvasFacebook
struct CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Facebook.Unity.Editor.EditorFacebookMockDialog
struct EditorFacebookMockDialog_t64A7CED645DC99E008D7E1342ED6A1FD961068D3;
// Facebook.Unity.FacebookGameObject
struct FacebookGameObject_t593C48B72DE2DE711EF88C55381CEB906611A472;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// Facebook.Unity.Gameroom.GameroomFacebook
struct GameroomFacebook_t23B4DE6A6FAC44A24661381E62057E8BDC07D00E;
// Facebook.Unity.Gameroom.GameroomFacebookGameObject
struct GameroomFacebookGameObject_t38419997B3A0F31405F077D3CF81B1D10CE22906;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D;
// Facebook.Unity.IAccessTokenRefreshResult
struct IAccessTokenRefreshResult_t7DD9BADF762855380C4D2F5DB848B8FCDDFF52AD;
// Facebook.Unity.Mobile.Android.IAndroidWrapper
struct IAndroidWrapper_t89FE36CA03D8778A1F286F8B2D392C623D4ABA95;
// Facebook.Unity.IAppLinkResult
struct IAppLinkResult_t5EE6057A2AF72A3C6B16100B177B28C68319FB91;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Facebook.Unity.Canvas.ICanvasJSWrapper
struct ICanvasJSWrapper_tEEC7FE3DA61960B389DE1EA2CCB73B2B81EFA4E9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Facebook.Unity.Editor.IEditorWrapper
struct IEditorWrapper_t4BA7126C322A4D0D3A029D92DB77DE4B77824BDC;
// Facebook.Unity.IFacebook
struct IFacebook_tA26C2ED9B0151257EB371385B6C9F5A3555075E9;
// Facebook.Unity.IFacebookImplementation
struct IFacebookImplementation_t40C58E8CA788FC9939B049AF5D2536CE3C6C1AF9;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Facebook.Unity.Gameroom.IGameroomFacebookImplementation
struct IGameroomFacebookImplementation_tCA6BC9A7A0964C68CD37A8FE7277D9A750006032;
// Facebook.Unity.Gameroom.IGameroomWrapper
struct IGameroomWrapper_t2C8E87407A12A883AF163E76C1520AFD4D2F21C8;
// Facebook.Unity.IGraphResult
struct IGraphResult_tFA561FD10206D555CF3F410CE2C8503FF93F7BB3;
// Facebook.Unity.Mobile.IOS.IIOSWrapper
struct IIOSWrapper_t07A24C13BD7ADD58311D3E585A3EAE4B58E7EFC5;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// Facebook.Unity.ILoginResult
struct ILoginResult_tD4D73E9EFD7D80578E7211F0CC21209259457502;
// Facebook.Unity.Mobile.IMobileFacebook
struct IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0;
// Facebook.Unity.Mobile.IOS.IOSFacebook
struct IOSFacebook_t386F470B8E9BE83529E1BF4592A9149EE087C334;
// Facebook.Unity.IPayFacebook
struct IPayFacebook_t282A5B27A470C10287940309A402606A9F6D63F3;
// Facebook.Unity.IPayResult
struct IPayResult_tC9ECC2D0ACE62CC23AEAE841F3010C10BE689BA8;
// Facebook.Unity.InitDelegate
struct InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Facebook.Unity.Editor.Dialogs.MockLoginDialog
struct MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Facebook.Unity.Profile
struct Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B;
// Facebook.Unity.ResultContainer
struct ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// Facebook.Unity.UserAgeRange
struct UserAgeRange_t913C132870D7C88D3CAF2B9D27579A79E96DD25E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Facebook.Unity.FB/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077;
// Facebook.Unity.FB/CompiledFacebookLoader
struct CompiledFacebookLoader_t031DEFD215C9CB65289F5AF8096D59CC01ABA682;
// Facebook.Unity.FB/OnDLLLoaded
struct OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A;
// Facebook.Unity.FacebookBase/<>c
struct U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E;
// Facebook.Unity.FacebookLogger/DebugLogger
struct DebugLogger_t0B7595AC84A793F4BE14579814CD27B762155823;
// Facebook.Unity.FacebookScheduler/<DelayEvent>d__1
struct U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0;
// Facebook.Unity.Gameroom.GameroomFacebook/OnComplete
struct OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B;
// Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4
struct U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD;
// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict
struct NativeDict_t814DD54137175EB0038887E695C264B4813BF653;
// Facebook.MiniJSON.Json/Parser
struct Parser_t0050B6460A7019B352C623B39F613D2564AFC839;
// Facebook.MiniJSON.Json/Serializer
struct Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45;
// Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C;
// Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E;
// Facebook.Unity.Utilities/<>c
struct U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4;

IL2CPP_EXTERN_C RuntimeClass* AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidFacebook_t4A439354665D5BF3BEFD3F4ADD71FD06AAC0F427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorFacebook_tD2A9AC2FB609DF1BF7611664B492CD42C3A2FB55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FacebookDelegate_1_t6166F5FB96C236E90EFD544116294CBE2AFE6489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FacebookSettings_tB6341C9F2583109B5576B9CB50BAB26B328F2975_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameroomFacebook_t23B4DE6A6FAC44A24661381E62057E8BDC07D00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGameroomFacebookImplementation_tCA6BC9A7A0964C68CD37A8FE7277D9A750006032_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOSFacebook_t386F470B8E9BE83529E1BF4592A9149EE087C334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPayFacebook_t282A5B27A470C10287940309A402606A9F6D63F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResult_t3EE04071A472BD07988DE7119614748452A33666_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Json_t90934110F570CB6C1B781E405165DA26448897FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t0050B6460A7019B352C623B39F613D2564AFC839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral126A04A5A066C00B77AB4F3483884A7606F6BC5D;
IL2CPP_EXTERN_C String_t* _stringLiteral30A7BF1FEE5DF8662ED83E80AA4537E34CC0361B;
IL2CPP_EXTERN_C String_t* _stringLiteral3E1A3C74C7169410C083C38E4316E0B616B1FB85;
IL2CPP_EXTERN_C String_t* _stringLiteral586A13F06AE71843C594D008B796A8DE2A0A1597;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral783DB8EDE0D1EDC2174AC1931718AC55B6E28426;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9C633E7C674E23EA753146B1D433678CB78C44D6;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D04E432BAC10E5BF00FAEE5AD03DFA57F88C4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralD0FFE255F631035C3E8FE88B4BA4AE40910A8DE5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFADDF05B43A17EA6A8388C2C998770D78F8909EE;
IL2CPP_EXTERN_C String_t* _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA304DCE1819EEDA733FB5961DF71438C48F96B;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_1_Invoke_mF716C18C29CE9E1B19B3EB56E8A376160D48EC34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Canvas_get_FacebookPayImpl_m7096501C85133E85263A9256164E0D6331084162_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FacebookDelegate_1__ctor_mC843DA6C237FDF30CD73D0BB81B7AB680C7B33C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mobile_get_MobileFacebookImpl_m437F86BC67BBD6A695FF7C3D3F3F7474EEC6BE00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayEventU3Ed__1_System_Collections_IEnumerator_Reset_m05633EDF5F93FD5D0EA2187448F7A9EC6AF603D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_1_U3CSendSuccessResultU3Eb__1_m833866A5EF51D4D884D60B38BC2A2E733E33C17C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForPipeResponseU3Ed__4_System_Collections_IEnumerator_Reset_mAAA94CA358C3552491249BCD67C9E9FDD43D742E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Facebook.Unity.FacebookBase
struct  FacebookBase_t1ABA5F09FAF1A43CD20C79CD849B83F3DDFB0382  : public RuntimeObject
{
public:
	// Facebook.Unity.InitDelegate Facebook.Unity.FacebookBase::onInitCompleteDelegate
	InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * ___onInitCompleteDelegate_0;
	// System.Boolean Facebook.Unity.FacebookBase::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_1;
	// Facebook.Unity.CallbackManager Facebook.Unity.FacebookBase::<CallbackManager>k__BackingField
	CallbackManager_t811808759C06A9AA6490F764988645176A87897C * ___U3CCallbackManagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_onInitCompleteDelegate_0() { return static_cast<int32_t>(offsetof(FacebookBase_t1ABA5F09FAF1A43CD20C79CD849B83F3DDFB0382, ___onInitCompleteDelegate_0)); }
	inline InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * get_onInitCompleteDelegate_0() const { return ___onInitCompleteDelegate_0; }
	inline InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E ** get_address_of_onInitCompleteDelegate_0() { return &___onInitCompleteDelegate_0; }
	inline void set_onInitCompleteDelegate_0(InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * value)
	{
		___onInitCompleteDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInitCompleteDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FacebookBase_t1ABA5F09FAF1A43CD20C79CD849B83F3DDFB0382, ___U3CInitializedU3Ek__BackingField_1)); }
	inline bool get_U3CInitializedU3Ek__BackingField_1() const { return ___U3CInitializedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_1() { return &___U3CInitializedU3Ek__BackingField_1; }
	inline void set_U3CInitializedU3Ek__BackingField_1(bool value)
	{
		___U3CInitializedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCallbackManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FacebookBase_t1ABA5F09FAF1A43CD20C79CD849B83F3DDFB0382, ___U3CCallbackManagerU3Ek__BackingField_2)); }
	inline CallbackManager_t811808759C06A9AA6490F764988645176A87897C * get_U3CCallbackManagerU3Ek__BackingField_2() const { return ___U3CCallbackManagerU3Ek__BackingField_2; }
	inline CallbackManager_t811808759C06A9AA6490F764988645176A87897C ** get_address_of_U3CCallbackManagerU3Ek__BackingField_2() { return &___U3CCallbackManagerU3Ek__BackingField_2; }
	inline void set_U3CCallbackManagerU3Ek__BackingField_2(CallbackManager_t811808759C06A9AA6490F764988645176A87897C * value)
	{
		___U3CCallbackManagerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCallbackManagerU3Ek__BackingField_2), (void*)value);
	}
};


// Facebook.MiniJSON.Json
struct  Json_t90934110F570CB6C1B781E405165DA26448897FA  : public RuntimeObject
{
public:

public:
};

struct Json_t90934110F570CB6C1B781E405165DA26448897FA_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo Facebook.MiniJSON.Json::numberFormat
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numberFormat_0;

public:
	inline static int32_t get_offset_of_numberFormat_0() { return static_cast<int32_t>(offsetof(Json_t90934110F570CB6C1B781E405165DA26448897FA_StaticFields, ___numberFormat_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numberFormat_0() const { return ___numberFormat_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numberFormat_0() { return &___numberFormat_0; }
	inline void set_numberFormat_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numberFormat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberFormat_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Facebook.Unity.ResultContainer
struct  ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.ResultContainer::<RawResult>k__BackingField
	String_t* ___U3CRawResultU3Ek__BackingField_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultContainer::<ResultDictionary>k__BackingField
	RuntimeObject* ___U3CResultDictionaryU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CRawResultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B, ___U3CRawResultU3Ek__BackingField_1)); }
	inline String_t* get_U3CRawResultU3Ek__BackingField_1() const { return ___U3CRawResultU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CRawResultU3Ek__BackingField_1() { return &___U3CRawResultU3Ek__BackingField_1; }
	inline void set_U3CRawResultU3Ek__BackingField_1(String_t* value)
	{
		___U3CRawResultU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawResultU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultDictionaryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B, ___U3CResultDictionaryU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CResultDictionaryU3Ek__BackingField_2() const { return ___U3CResultDictionaryU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CResultDictionaryU3Ek__BackingField_2() { return &___U3CResultDictionaryU3Ek__BackingField_2; }
	inline void set_U3CResultDictionaryU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CResultDictionaryU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultDictionaryU3Ek__BackingField_2), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Facebook.Unity.FB/<>c__DisplayClass36_0
struct  U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077  : public RuntimeObject
{
public:
	// Facebook.Unity.InitDelegate Facebook.Unity.FB/<>c__DisplayClass36_0::onInitComplete
	InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * ___onInitComplete_0;
	// System.String Facebook.Unity.FB/<>c__DisplayClass36_0::appId
	String_t* ___appId_1;
	// System.Boolean Facebook.Unity.FB/<>c__DisplayClass36_0::cookie
	bool ___cookie_2;
	// System.Boolean Facebook.Unity.FB/<>c__DisplayClass36_0::logging
	bool ___logging_3;
	// System.Boolean Facebook.Unity.FB/<>c__DisplayClass36_0::status
	bool ___status_4;
	// System.Boolean Facebook.Unity.FB/<>c__DisplayClass36_0::xfbml
	bool ___xfbml_5;
	// System.String Facebook.Unity.FB/<>c__DisplayClass36_0::authResponse
	String_t* ___authResponse_6;
	// System.Boolean Facebook.Unity.FB/<>c__DisplayClass36_0::frictionlessRequests
	bool ___frictionlessRequests_7;
	// System.String Facebook.Unity.FB/<>c__DisplayClass36_0::javascriptSDKLocale
	String_t* ___javascriptSDKLocale_8;
	// Facebook.Unity.HideUnityDelegate Facebook.Unity.FB/<>c__DisplayClass36_0::onHideUnity
	HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * ___onHideUnity_9;

public:
	inline static int32_t get_offset_of_onInitComplete_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077, ___onInitComplete_0)); }
	inline InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * get_onInitComplete_0() const { return ___onInitComplete_0; }
	inline InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E ** get_address_of_onInitComplete_0() { return &___onInitComplete_0; }
	inline void set_onInitComplete_0(InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * value)
	{
		___onInitComplete_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInitComplete_0), (void*)value);
	}

	inline static int32_t get_offset_of_appId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077, ___appId_1)); }
	inline String_t* get_appId_1() const { return ___appId_1; }
	inline String_t** get_address_of_appId_1() { return &___appId_1; }
	inline void set_appId_1(String_t* value)
	{
		___appId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appId_1), (void*)value);
	}

	inline static int32_t get_offset_of_cookie_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077, ___cookie_2)); }
	inline bool get_cookie_2() const { return ___cookie_2; }
	inline bool* get_address_of_cookie_2() { return &___cookie_2; }
	inline void set_cookie_2(bool value)
	{
		___cookie_2 = value;
	}

	inline static int32_t get_offset_of_logging_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077, ___logging_3)); }
	inline bool get_logging_3() const { return ___logging_3; }
	inline bool* get_address_of_logging_3() { return &___logging_3; }
	inline void set_logging_3(bool value)
	{
		___logging_3 = value;
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077, ___status_4)); }
	inline bool get_status_4() const { return ___status_4; }
	inline bool* get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(bool value)
	{
		___status_4 = value;
	}

	inline static int32_t get_offset_of_xfbml_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077, ___xfbml_5)); }
	inline bool get_xfbml_5() const { return ___xfbml_5; }
	inline bool* get_address_of_xfbml_5() { return &___xfbml_5; }
	inline void set_xfbml_5(bool value)
	{
		___xfbml_5 = value;
	}

	inline static int32_t get_offset_of_authResponse_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077, ___authResponse_6)); }
	inline String_t* get_authResponse_6() const { return ___authResponse_6; }
	inline String_t** get_address_of_authResponse_6() { return &___authResponse_6; }
	inline void set_authResponse_6(String_t* value)
	{
		___authResponse_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authResponse_6), (void*)value);
	}

	inline static int32_t get_offset_of_frictionlessRequests_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077, ___frictionlessRequests_7)); }
	inline bool get_frictionlessRequests_7() const { return ___frictionlessRequests_7; }
	inline bool* get_address_of_frictionlessRequests_7() { return &___frictionlessRequests_7; }
	inline void set_frictionlessRequests_7(bool value)
	{
		___frictionlessRequests_7 = value;
	}

	inline static int32_t get_offset_of_javascriptSDKLocale_8() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077, ___javascriptSDKLocale_8)); }
	inline String_t* get_javascriptSDKLocale_8() const { return ___javascriptSDKLocale_8; }
	inline String_t** get_address_of_javascriptSDKLocale_8() { return &___javascriptSDKLocale_8; }
	inline void set_javascriptSDKLocale_8(String_t* value)
	{
		___javascriptSDKLocale_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javascriptSDKLocale_8), (void*)value);
	}

	inline static int32_t get_offset_of_onHideUnity_9() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077, ___onHideUnity_9)); }
	inline HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * get_onHideUnity_9() const { return ___onHideUnity_9; }
	inline HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D ** get_address_of_onHideUnity_9() { return &___onHideUnity_9; }
	inline void set_onHideUnity_9(HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * value)
	{
		___onHideUnity_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHideUnity_9), (void*)value);
	}
};


// Facebook.Unity.FB/Canvas
struct  Canvas_tA3F266662559886F82800FF55112067F41030286  : public RuntimeObject
{
public:

public:
};


// Facebook.Unity.FB/Mobile
struct  Mobile_tD0F02172758B66612CB23A5A25FC271D0C22D5CB  : public RuntimeObject
{
public:

public:
};


// Facebook.Unity.FacebookBase/<>c
struct  U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E_StaticFields
{
public:
	// Facebook.Unity.FacebookBase/<>c Facebook.Unity.FacebookBase/<>c::<>9
	U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> Facebook.Unity.FacebookBase/<>c::<>9__41_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__41_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E_StaticFields, ___U3CU3E9__41_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__41_0_1() const { return ___U3CU3E9__41_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__41_0_1() { return &___U3CU3E9__41_0_1; }
	inline void set_U3CU3E9__41_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__41_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_1), (void*)value);
	}
};


// Facebook.Unity.FacebookLogger/DebugLogger
struct  DebugLogger_t0B7595AC84A793F4BE14579814CD27B762155823  : public RuntimeObject
{
public:

public:
};


// Facebook.Unity.FacebookScheduler/<DelayEvent>d__1
struct  U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0  : public RuntimeObject
{
public:
	// System.Int32 Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int64 Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::delay
	int64_t ___delay_2;
	// System.Action Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0, ___delay_2)); }
	inline int64_t get_delay_2() const { return ___delay_2; }
	inline int64_t* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(int64_t value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0, ___action_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_3() const { return ___action_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}
};


// Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4
struct  U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD  : public RuntimeObject
{
public:
	// System.Int32 Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.Unity.Gameroom.GameroomFacebookGameObject Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::<>4__this
	GameroomFacebookGameObject_t38419997B3A0F31405F077D3CF81B1D10CE22906 * ___U3CU3E4__this_2;
	// Facebook.Unity.Gameroom.GameroomFacebook/OnComplete Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::onCompleteDelegate
	OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B * ___onCompleteDelegate_3;
	// System.String Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::callbackId
	String_t* ___callbackId_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD, ___U3CU3E4__this_2)); }
	inline GameroomFacebookGameObject_t38419997B3A0F31405F077D3CF81B1D10CE22906 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameroomFacebookGameObject_t38419997B3A0F31405F077D3CF81B1D10CE22906 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameroomFacebookGameObject_t38419997B3A0F31405F077D3CF81B1D10CE22906 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_onCompleteDelegate_3() { return static_cast<int32_t>(offsetof(U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD, ___onCompleteDelegate_3)); }
	inline OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B * get_onCompleteDelegate_3() const { return ___onCompleteDelegate_3; }
	inline OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B ** get_address_of_onCompleteDelegate_3() { return &___onCompleteDelegate_3; }
	inline void set_onCompleteDelegate_3(OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B * value)
	{
		___onCompleteDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleteDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_callbackId_4() { return static_cast<int32_t>(offsetof(U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD, ___callbackId_4)); }
	inline String_t* get_callbackId_4() const { return ___callbackId_4; }
	inline String_t** get_address_of_callbackId_4() { return &___callbackId_4; }
	inline void set_callbackId_4(String_t* value)
	{
		___callbackId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackId_4), (void*)value);
	}
};


// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict
struct  NativeDict_t814DD54137175EB0038887E695C264B4813BF653  : public RuntimeObject
{
public:
	// System.Int32 Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::<NumEntries>k__BackingField
	int32_t ___U3CNumEntriesU3Ek__BackingField_0;
	// System.String[] Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::<Keys>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CKeysU3Ek__BackingField_1;
	// System.String[] Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::<Values>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CValuesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CNumEntriesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeDict_t814DD54137175EB0038887E695C264B4813BF653, ___U3CNumEntriesU3Ek__BackingField_0)); }
	inline int32_t get_U3CNumEntriesU3Ek__BackingField_0() const { return ___U3CNumEntriesU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CNumEntriesU3Ek__BackingField_0() { return &___U3CNumEntriesU3Ek__BackingField_0; }
	inline void set_U3CNumEntriesU3Ek__BackingField_0(int32_t value)
	{
		___U3CNumEntriesU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CKeysU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NativeDict_t814DD54137175EB0038887E695C264B4813BF653, ___U3CKeysU3Ek__BackingField_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CKeysU3Ek__BackingField_1() const { return ___U3CKeysU3Ek__BackingField_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CKeysU3Ek__BackingField_1() { return &___U3CKeysU3Ek__BackingField_1; }
	inline void set_U3CKeysU3Ek__BackingField_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CKeysU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeysU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValuesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NativeDict_t814DD54137175EB0038887E695C264B4813BF653, ___U3CValuesU3Ek__BackingField_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CValuesU3Ek__BackingField_2() const { return ___U3CValuesU3Ek__BackingField_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CValuesU3Ek__BackingField_2() { return &___U3CValuesU3Ek__BackingField_2; }
	inline void set_U3CValuesU3Ek__BackingField_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CValuesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValuesU3Ek__BackingField_2), (void*)value);
	}
};


// Facebook.MiniJSON.Json/Parser
struct  Parser_t0050B6460A7019B352C623B39F613D2564AFC839  : public RuntimeObject
{
public:
	// System.IO.StringReader Facebook.MiniJSON.Json/Parser::json
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * ___json_0;

public:
	inline static int32_t get_offset_of_json_0() { return static_cast<int32_t>(offsetof(Parser_t0050B6460A7019B352C623B39F613D2564AFC839, ___json_0)); }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 * get_json_0() const { return ___json_0; }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 ** get_address_of_json_0() { return &___json_0; }
	inline void set_json_0(StringReader_t74E352C280EAC22C878867444978741F19E1F895 * value)
	{
		___json_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_0), (void*)value);
	}
};


// Facebook.MiniJSON.Json/Serializer
struct  Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45  : public RuntimeObject
{
public:
	// System.Text.StringBuilder Facebook.MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}
};


// Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C  : public RuntimeObject
{
public:
	// Facebook.Unity.Editor.Dialogs.MockLoginDialog Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0::<>4__this
	MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2 * ___U3CU3E4__this_0;
	// System.String Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0::graphDomain
	String_t* ___graphDomain_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C, ___U3CU3E4__this_0)); }
	inline MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_graphDomain_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C, ___graphDomain_1)); }
	inline String_t* get_graphDomain_1() const { return ___graphDomain_1; }
	inline String_t** get_address_of_graphDomain_1() { return &___graphDomain_1; }
	inline void set_graphDomain_1(String_t* value)
	{
		___graphDomain_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphDomain_1), (void*)value);
	}
};


// Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1
struct  U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1::facebookID
	String_t* ___facebookID_0;
	// Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0 Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_facebookID_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E, ___facebookID_0)); }
	inline String_t* get_facebookID_0() const { return ___facebookID_0; }
	inline String_t** get_address_of_facebookID_0() { return &___facebookID_0; }
	inline void set_facebookID_0(String_t* value)
	{
		___facebookID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___facebookID_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Facebook.Unity.Utilities/<>c
struct  U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4_StaticFields
{
public:
	// Facebook.Unity.Utilities/<>c Facebook.Unity.Utilities/<>c::<>9
	U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.String> Facebook.Unity.Utilities/<>c::<>9__19_0
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// Facebook.Unity.Canvas.CanvasFacebook
struct  CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5  : public FacebookBase_t1ABA5F09FAF1A43CD20C79CD849B83F3DDFB0382
{
public:
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appId
	String_t* ___appId_3;
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appLinkUrl
	String_t* ___appLinkUrl_4;
	// Facebook.Unity.Canvas.ICanvasJSWrapper Facebook.Unity.Canvas.CanvasFacebook::canvasJSWrapper
	RuntimeObject* ___canvasJSWrapper_5;
	// Facebook.Unity.HideUnityDelegate Facebook.Unity.Canvas.CanvasFacebook::onHideUnityDelegate
	HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * ___onHideUnityDelegate_6;
	// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_appId_3() { return static_cast<int32_t>(offsetof(CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5, ___appId_3)); }
	inline String_t* get_appId_3() const { return ___appId_3; }
	inline String_t** get_address_of_appId_3() { return &___appId_3; }
	inline void set_appId_3(String_t* value)
	{
		___appId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appId_3), (void*)value);
	}

	inline static int32_t get_offset_of_appLinkUrl_4() { return static_cast<int32_t>(offsetof(CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5, ___appLinkUrl_4)); }
	inline String_t* get_appLinkUrl_4() const { return ___appLinkUrl_4; }
	inline String_t** get_address_of_appLinkUrl_4() { return &___appLinkUrl_4; }
	inline void set_appLinkUrl_4(String_t* value)
	{
		___appLinkUrl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appLinkUrl_4), (void*)value);
	}

	inline static int32_t get_offset_of_canvasJSWrapper_5() { return static_cast<int32_t>(offsetof(CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5, ___canvasJSWrapper_5)); }
	inline RuntimeObject* get_canvasJSWrapper_5() const { return ___canvasJSWrapper_5; }
	inline RuntimeObject** get_address_of_canvasJSWrapper_5() { return &___canvasJSWrapper_5; }
	inline void set_canvasJSWrapper_5(RuntimeObject* value)
	{
		___canvasJSWrapper_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasJSWrapper_5), (void*)value);
	}

	inline static int32_t get_offset_of_onHideUnityDelegate_6() { return static_cast<int32_t>(offsetof(CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5, ___onHideUnityDelegate_6)); }
	inline HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * get_onHideUnityDelegate_6() const { return ___onHideUnityDelegate_6; }
	inline HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D ** get_address_of_onHideUnityDelegate_6() { return &___onHideUnityDelegate_6; }
	inline void set_onHideUnityDelegate_6(HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * value)
	{
		___onHideUnityDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHideUnityDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5, ___U3CLimitEventUsageU3Ek__BackingField_7)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_7() const { return ___U3CLimitEventUsageU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_7() { return &___U3CLimitEventUsageU3Ek__BackingField_7; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_7(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_7 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// Facebook.Unity.Gameroom.GameroomFacebook
struct  GameroomFacebook_t23B4DE6A6FAC44A24661381E62057E8BDC07D00E  : public FacebookBase_t1ABA5F09FAF1A43CD20C79CD849B83F3DDFB0382
{
public:
	// System.String Facebook.Unity.Gameroom.GameroomFacebook::appId
	String_t* ___appId_3;
	// Facebook.Unity.Gameroom.IGameroomWrapper Facebook.Unity.Gameroom.GameroomFacebook::gameroomWrapper
	RuntimeObject* ___gameroomWrapper_4;
	// System.Boolean Facebook.Unity.Gameroom.GameroomFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_appId_3() { return static_cast<int32_t>(offsetof(GameroomFacebook_t23B4DE6A6FAC44A24661381E62057E8BDC07D00E, ___appId_3)); }
	inline String_t* get_appId_3() const { return ___appId_3; }
	inline String_t** get_address_of_appId_3() { return &___appId_3; }
	inline void set_appId_3(String_t* value)
	{
		___appId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appId_3), (void*)value);
	}

	inline static int32_t get_offset_of_gameroomWrapper_4() { return static_cast<int32_t>(offsetof(GameroomFacebook_t23B4DE6A6FAC44A24661381E62057E8BDC07D00E, ___gameroomWrapper_4)); }
	inline RuntimeObject* get_gameroomWrapper_4() const { return ___gameroomWrapper_4; }
	inline RuntimeObject** get_address_of_gameroomWrapper_4() { return &___gameroomWrapper_4; }
	inline void set_gameroomWrapper_4(RuntimeObject* value)
	{
		___gameroomWrapper_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameroomWrapper_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GameroomFacebook_t23B4DE6A6FAC44A24661381E62057E8BDC07D00E, ___U3CLimitEventUsageU3Ek__BackingField_5)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_5() const { return ___U3CLimitEventUsageU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_5() { return &___U3CLimitEventUsageU3Ek__BackingField_5; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_5(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_5 = value;
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Facebook.Unity.HttpMethod
struct  HttpMethod_t0A89691BC9CD8787111E94B77C72F5AC0F2EA3BF 
{
public:
	// System.Int32 Facebook.Unity.HttpMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpMethod_t0A89691BC9CD8787111E94B77C72F5AC0F2EA3BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Facebook.Unity.LoginTracking
struct  LoginTracking_t4DA760D7699F7B503DA73E76D8127B49CFF14BD6 
{
public:
	// System.Int32 Facebook.Unity.LoginTracking::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoginTracking_t4DA760D7699F7B503DA73E76D8127B49CFF14BD6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Facebook.Unity.ShareDialogMode
struct  ShareDialogMode_tD608135BD2E54DF0940D05A8079072E93D227923 
{
public:
	// System.Int32 Facebook.Unity.ShareDialogMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShareDialogMode_tD608135BD2E54DF0940D05A8079072E93D227923, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringReader
struct  StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// Facebook.Unity.ComponentFactory/IfNotExist
struct  IfNotExist_tC7B946908929ABE56F08F43A74FD206E9D22C963 
{
public:
	// System.Int32 Facebook.Unity.ComponentFactory/IfNotExist::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IfNotExist_tC7B946908929ABE56F08F43A74FD206E9D22C963, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Facebook.MiniJSON.Json/Parser/TOKEN
struct  TOKEN_t5DCED1D5F5A29015C2AD9BCC8AA40E04735D5B83 
{
public:
	// System.Int32 Facebook.MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_t5DCED1D5F5A29015C2AD9BCC8AA40E04735D5B83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Facebook.Unity.AccessToken
struct  AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.AccessToken::<TokenString>k__BackingField
	String_t* ___U3CTokenStringU3Ek__BackingField_1;
	// System.DateTime Facebook.Unity.AccessToken::<ExpirationTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CExpirationTimeU3Ek__BackingField_2;
	// System.Collections.Generic.IEnumerable`1<System.String> Facebook.Unity.AccessToken::<Permissions>k__BackingField
	RuntimeObject* ___U3CPermissionsU3Ek__BackingField_3;
	// System.String Facebook.Unity.AccessToken::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
	// System.Nullable`1<System.DateTime> Facebook.Unity.AccessToken::<LastRefresh>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CLastRefreshU3Ek__BackingField_5;
	// System.String Facebook.Unity.AccessToken::<GraphDomain>k__BackingField
	String_t* ___U3CGraphDomainU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTokenStringU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860, ___U3CTokenStringU3Ek__BackingField_1)); }
	inline String_t* get_U3CTokenStringU3Ek__BackingField_1() const { return ___U3CTokenStringU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTokenStringU3Ek__BackingField_1() { return &___U3CTokenStringU3Ek__BackingField_1; }
	inline void set_U3CTokenStringU3Ek__BackingField_1(String_t* value)
	{
		___U3CTokenStringU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenStringU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExpirationTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860, ___U3CExpirationTimeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CExpirationTimeU3Ek__BackingField_2() const { return ___U3CExpirationTimeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CExpirationTimeU3Ek__BackingField_2() { return &___U3CExpirationTimeU3Ek__BackingField_2; }
	inline void set_U3CExpirationTimeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CExpirationTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPermissionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860, ___U3CPermissionsU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CPermissionsU3Ek__BackingField_3() const { return ___U3CPermissionsU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CPermissionsU3Ek__BackingField_3() { return &___U3CPermissionsU3Ek__BackingField_3; }
	inline void set_U3CPermissionsU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CPermissionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPermissionsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastRefreshU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860, ___U3CLastRefreshU3Ek__BackingField_5)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CLastRefreshU3Ek__BackingField_5() const { return ___U3CLastRefreshU3Ek__BackingField_5; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CLastRefreshU3Ek__BackingField_5() { return &___U3CLastRefreshU3Ek__BackingField_5; }
	inline void set_U3CLastRefreshU3Ek__BackingField_5(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CLastRefreshU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGraphDomainU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860, ___U3CGraphDomainU3Ek__BackingField_6)); }
	inline String_t* get_U3CGraphDomainU3Ek__BackingField_6() const { return ___U3CGraphDomainU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CGraphDomainU3Ek__BackingField_6() { return &___U3CGraphDomainU3Ek__BackingField_6; }
	inline void set_U3CGraphDomainU3Ek__BackingField_6(String_t* value)
	{
		___U3CGraphDomainU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGraphDomainU3Ek__BackingField_6), (void*)value);
	}
};

struct AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860_StaticFields
{
public:
	// Facebook.Unity.AccessToken Facebook.Unity.AccessToken::<CurrentAccessToken>k__BackingField
	AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860 * ___U3CCurrentAccessTokenU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CCurrentAccessTokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860_StaticFields, ___U3CCurrentAccessTokenU3Ek__BackingField_0)); }
	inline AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860 * get_U3CCurrentAccessTokenU3Ek__BackingField_0() const { return ___U3CCurrentAccessTokenU3Ek__BackingField_0; }
	inline AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860 ** get_address_of_U3CCurrentAccessTokenU3Ek__BackingField_0() { return &___U3CCurrentAccessTokenU3Ek__BackingField_0; }
	inline void set_U3CCurrentAccessTokenU3Ek__BackingField_0(AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860 * value)
	{
		___U3CCurrentAccessTokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentAccessTokenU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Facebook.Unity.Editor.EditorFacebook
struct  EditorFacebook_tD2A9AC2FB609DF1BF7611664B492CD42C3A2FB55  : public FacebookBase_t1ABA5F09FAF1A43CD20C79CD849B83F3DDFB0382
{
public:
	// Facebook.Unity.Editor.IEditorWrapper Facebook.Unity.Editor.EditorFacebook::editorWrapper
	RuntimeObject* ___editorWrapper_3;
	// System.Boolean Facebook.Unity.Editor.EditorFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_4;
	// Facebook.Unity.ShareDialogMode Facebook.Unity.Editor.EditorFacebook::<ShareDialogMode>k__BackingField
	int32_t ___U3CShareDialogModeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_editorWrapper_3() { return static_cast<int32_t>(offsetof(EditorFacebook_tD2A9AC2FB609DF1BF7611664B492CD42C3A2FB55, ___editorWrapper_3)); }
	inline RuntimeObject* get_editorWrapper_3() const { return ___editorWrapper_3; }
	inline RuntimeObject** get_address_of_editorWrapper_3() { return &___editorWrapper_3; }
	inline void set_editorWrapper_3(RuntimeObject* value)
	{
		___editorWrapper_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editorWrapper_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EditorFacebook_tD2A9AC2FB609DF1BF7611664B492CD42C3A2FB55, ___U3CLimitEventUsageU3Ek__BackingField_4)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_4() const { return ___U3CLimitEventUsageU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_4() { return &___U3CLimitEventUsageU3Ek__BackingField_4; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_4(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CShareDialogModeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EditorFacebook_tD2A9AC2FB609DF1BF7611664B492CD42C3A2FB55, ___U3CShareDialogModeU3Ek__BackingField_5)); }
	inline int32_t get_U3CShareDialogModeU3Ek__BackingField_5() const { return ___U3CShareDialogModeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CShareDialogModeU3Ek__BackingField_5() { return &___U3CShareDialogModeU3Ek__BackingField_5; }
	inline void set_U3CShareDialogModeU3Ek__BackingField_5(int32_t value)
	{
		___U3CShareDialogModeU3Ek__BackingField_5 = value;
	}
};


// Facebook.Unity.Mobile.MobileFacebook
struct  MobileFacebook_tB9D7A5277DE48679BE48E6FB790CA73BF27A534B  : public FacebookBase_t1ABA5F09FAF1A43CD20C79CD849B83F3DDFB0382
{
public:
	// Facebook.Unity.ShareDialogMode Facebook.Unity.Mobile.MobileFacebook::shareDialogMode
	int32_t ___shareDialogMode_3;

public:
	inline static int32_t get_offset_of_shareDialogMode_3() { return static_cast<int32_t>(offsetof(MobileFacebook_tB9D7A5277DE48679BE48E6FB790CA73BF27A534B, ___shareDialogMode_3)); }
	inline int32_t get_shareDialogMode_3() const { return ___shareDialogMode_3; }
	inline int32_t* get_address_of_shareDialogMode_3() { return &___shareDialogMode_3; }
	inline void set_shareDialogMode_3(int32_t value)
	{
		___shareDialogMode_3 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// Facebook.Unity.Profile
struct  Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.Profile::<UserID>k__BackingField
	String_t* ___U3CUserIDU3Ek__BackingField_0;
	// System.String Facebook.Unity.Profile::<FirstName>k__BackingField
	String_t* ___U3CFirstNameU3Ek__BackingField_1;
	// System.String Facebook.Unity.Profile::<MiddleName>k__BackingField
	String_t* ___U3CMiddleNameU3Ek__BackingField_2;
	// System.String Facebook.Unity.Profile::<LastName>k__BackingField
	String_t* ___U3CLastNameU3Ek__BackingField_3;
	// System.String Facebook.Unity.Profile::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;
	// System.String Facebook.Unity.Profile::<Email>k__BackingField
	String_t* ___U3CEmailU3Ek__BackingField_5;
	// System.String Facebook.Unity.Profile::<ImageURL>k__BackingField
	String_t* ___U3CImageURLU3Ek__BackingField_6;
	// System.String Facebook.Unity.Profile::<LinkURL>k__BackingField
	String_t* ___U3CLinkURLU3Ek__BackingField_7;
	// System.String[] Facebook.Unity.Profile::<FriendIDs>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CFriendIDsU3Ek__BackingField_8;
	// System.Nullable`1<System.DateTime> Facebook.Unity.Profile::<Birthday>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CBirthdayU3Ek__BackingField_9;
	// Facebook.Unity.UserAgeRange Facebook.Unity.Profile::<AgeRange>k__BackingField
	UserAgeRange_t913C132870D7C88D3CAF2B9D27579A79E96DD25E * ___U3CAgeRangeU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CUserIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B, ___U3CUserIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CUserIDU3Ek__BackingField_0() const { return ___U3CUserIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CUserIDU3Ek__BackingField_0() { return &___U3CUserIDU3Ek__BackingField_0; }
	inline void set_U3CUserIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CUserIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFirstNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B, ___U3CFirstNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CFirstNameU3Ek__BackingField_1() const { return ___U3CFirstNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CFirstNameU3Ek__BackingField_1() { return &___U3CFirstNameU3Ek__BackingField_1; }
	inline void set_U3CFirstNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CFirstNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFirstNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMiddleNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B, ___U3CMiddleNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CMiddleNameU3Ek__BackingField_2() const { return ___U3CMiddleNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMiddleNameU3Ek__BackingField_2() { return &___U3CMiddleNameU3Ek__BackingField_2; }
	inline void set_U3CMiddleNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CMiddleNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMiddleNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B, ___U3CLastNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CLastNameU3Ek__BackingField_3() const { return ___U3CLastNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CLastNameU3Ek__BackingField_3() { return &___U3CLastNameU3Ek__BackingField_3; }
	inline void set_U3CLastNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CLastNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLastNameU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B, ___U3CNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CNameU3Ek__BackingField_4() const { return ___U3CNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_4() { return &___U3CNameU3Ek__BackingField_4; }
	inline void set_U3CNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEmailU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B, ___U3CEmailU3Ek__BackingField_5)); }
	inline String_t* get_U3CEmailU3Ek__BackingField_5() const { return ___U3CEmailU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CEmailU3Ek__BackingField_5() { return &___U3CEmailU3Ek__BackingField_5; }
	inline void set_U3CEmailU3Ek__BackingField_5(String_t* value)
	{
		___U3CEmailU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEmailU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImageURLU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B, ___U3CImageURLU3Ek__BackingField_6)); }
	inline String_t* get_U3CImageURLU3Ek__BackingField_6() const { return ___U3CImageURLU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CImageURLU3Ek__BackingField_6() { return &___U3CImageURLU3Ek__BackingField_6; }
	inline void set_U3CImageURLU3Ek__BackingField_6(String_t* value)
	{
		___U3CImageURLU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CImageURLU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLinkURLU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B, ___U3CLinkURLU3Ek__BackingField_7)); }
	inline String_t* get_U3CLinkURLU3Ek__BackingField_7() const { return ___U3CLinkURLU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CLinkURLU3Ek__BackingField_7() { return &___U3CLinkURLU3Ek__BackingField_7; }
	inline void set_U3CLinkURLU3Ek__BackingField_7(String_t* value)
	{
		___U3CLinkURLU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLinkURLU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFriendIDsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B, ___U3CFriendIDsU3Ek__BackingField_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CFriendIDsU3Ek__BackingField_8() const { return ___U3CFriendIDsU3Ek__BackingField_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CFriendIDsU3Ek__BackingField_8() { return &___U3CFriendIDsU3Ek__BackingField_8; }
	inline void set_U3CFriendIDsU3Ek__BackingField_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CFriendIDsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFriendIDsU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBirthdayU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B, ___U3CBirthdayU3Ek__BackingField_9)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CBirthdayU3Ek__BackingField_9() const { return ___U3CBirthdayU3Ek__BackingField_9; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CBirthdayU3Ek__BackingField_9() { return &___U3CBirthdayU3Ek__BackingField_9; }
	inline void set_U3CBirthdayU3Ek__BackingField_9(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CBirthdayU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CAgeRangeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B, ___U3CAgeRangeU3Ek__BackingField_10)); }
	inline UserAgeRange_t913C132870D7C88D3CAF2B9D27579A79E96DD25E * get_U3CAgeRangeU3Ek__BackingField_10() const { return ___U3CAgeRangeU3Ek__BackingField_10; }
	inline UserAgeRange_t913C132870D7C88D3CAF2B9D27579A79E96DD25E ** get_address_of_U3CAgeRangeU3Ek__BackingField_10() { return &___U3CAgeRangeU3Ek__BackingField_10; }
	inline void set_U3CAgeRangeU3Ek__BackingField_10(UserAgeRange_t913C132870D7C88D3CAF2B9D27579A79E96DD25E * value)
	{
		___U3CAgeRangeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAgeRangeU3Ek__BackingField_10), (void*)value);
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct  Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct  FacebookDelegate_1_tC629FECBE7259CF822092A82F13C68D04DF9FAE1  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct  FacebookDelegate_1_t7985F00DD82B081CE6E2EABA48C30DF084585653  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct  FacebookDelegate_1_t6166F5FB96C236E90EFD544116294CBE2AFE6489  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct  FacebookDelegate_1_tFD70485570645EBD2D9687F2FF918892642F2CC7  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct  FacebookDelegate_1_t3E7742F517235C9ECE58D1B54A49A538DADB5947  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.Mobile.Android.AndroidFacebook
struct  AndroidFacebook_t4A439354665D5BF3BEFD3F4ADD71FD06AAC0F427  : public MobileFacebook_tB9D7A5277DE48679BE48E6FB790CA73BF27A534B
{
public:
	// System.Boolean Facebook.Unity.Mobile.Android.AndroidFacebook::limitEventUsage
	bool ___limitEventUsage_4;
	// Facebook.Unity.Mobile.Android.IAndroidWrapper Facebook.Unity.Mobile.Android.AndroidFacebook::androidWrapper
	RuntimeObject* ___androidWrapper_5;
	// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::userID
	String_t* ___userID_6;
	// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::<KeyHash>k__BackingField
	String_t* ___U3CKeyHashU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_limitEventUsage_4() { return static_cast<int32_t>(offsetof(AndroidFacebook_t4A439354665D5BF3BEFD3F4ADD71FD06AAC0F427, ___limitEventUsage_4)); }
	inline bool get_limitEventUsage_4() const { return ___limitEventUsage_4; }
	inline bool* get_address_of_limitEventUsage_4() { return &___limitEventUsage_4; }
	inline void set_limitEventUsage_4(bool value)
	{
		___limitEventUsage_4 = value;
	}

	inline static int32_t get_offset_of_androidWrapper_5() { return static_cast<int32_t>(offsetof(AndroidFacebook_t4A439354665D5BF3BEFD3F4ADD71FD06AAC0F427, ___androidWrapper_5)); }
	inline RuntimeObject* get_androidWrapper_5() const { return ___androidWrapper_5; }
	inline RuntimeObject** get_address_of_androidWrapper_5() { return &___androidWrapper_5; }
	inline void set_androidWrapper_5(RuntimeObject* value)
	{
		___androidWrapper_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___androidWrapper_5), (void*)value);
	}

	inline static int32_t get_offset_of_userID_6() { return static_cast<int32_t>(offsetof(AndroidFacebook_t4A439354665D5BF3BEFD3F4ADD71FD06AAC0F427, ___userID_6)); }
	inline String_t* get_userID_6() const { return ___userID_6; }
	inline String_t** get_address_of_userID_6() { return &___userID_6; }
	inline void set_userID_6(String_t* value)
	{
		___userID_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userID_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeyHashU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AndroidFacebook_t4A439354665D5BF3BEFD3F4ADD71FD06AAC0F427, ___U3CKeyHashU3Ek__BackingField_7)); }
	inline String_t* get_U3CKeyHashU3Ek__BackingField_7() const { return ___U3CKeyHashU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CKeyHashU3Ek__BackingField_7() { return &___U3CKeyHashU3Ek__BackingField_7; }
	inline void set_U3CKeyHashU3Ek__BackingField_7(String_t* value)
	{
		___U3CKeyHashU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeyHashU3Ek__BackingField_7), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Facebook.Unity.FB
struct  FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};

struct FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields
{
public:
	// Facebook.Unity.IFacebook Facebook.Unity.FB::facebook
	RuntimeObject* ___facebook_5;
	// System.Boolean Facebook.Unity.FB::isInitCalled
	bool ___isInitCalled_6;
	// System.String Facebook.Unity.FB::facebookDomain
	String_t* ___facebookDomain_7;
	// System.String Facebook.Unity.FB::gamingDomain
	String_t* ___gamingDomain_8;
	// System.String Facebook.Unity.FB::graphApiVersion
	String_t* ___graphApiVersion_9;
	// System.String Facebook.Unity.FB::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_10;
	// System.String Facebook.Unity.FB::<ClientToken>k__BackingField
	String_t* ___U3CClientTokenU3Ek__BackingField_11;
	// Facebook.Unity.FB/OnDLLLoaded Facebook.Unity.FB::<OnDLLLoadedDelegate>k__BackingField
	OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * ___U3COnDLLLoadedDelegateU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_facebook_5() { return static_cast<int32_t>(offsetof(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields, ___facebook_5)); }
	inline RuntimeObject* get_facebook_5() const { return ___facebook_5; }
	inline RuntimeObject** get_address_of_facebook_5() { return &___facebook_5; }
	inline void set_facebook_5(RuntimeObject* value)
	{
		___facebook_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___facebook_5), (void*)value);
	}

	inline static int32_t get_offset_of_isInitCalled_6() { return static_cast<int32_t>(offsetof(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields, ___isInitCalled_6)); }
	inline bool get_isInitCalled_6() const { return ___isInitCalled_6; }
	inline bool* get_address_of_isInitCalled_6() { return &___isInitCalled_6; }
	inline void set_isInitCalled_6(bool value)
	{
		___isInitCalled_6 = value;
	}

	inline static int32_t get_offset_of_facebookDomain_7() { return static_cast<int32_t>(offsetof(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields, ___facebookDomain_7)); }
	inline String_t* get_facebookDomain_7() const { return ___facebookDomain_7; }
	inline String_t** get_address_of_facebookDomain_7() { return &___facebookDomain_7; }
	inline void set_facebookDomain_7(String_t* value)
	{
		___facebookDomain_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___facebookDomain_7), (void*)value);
	}

	inline static int32_t get_offset_of_gamingDomain_8() { return static_cast<int32_t>(offsetof(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields, ___gamingDomain_8)); }
	inline String_t* get_gamingDomain_8() const { return ___gamingDomain_8; }
	inline String_t** get_address_of_gamingDomain_8() { return &___gamingDomain_8; }
	inline void set_gamingDomain_8(String_t* value)
	{
		___gamingDomain_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gamingDomain_8), (void*)value);
	}

	inline static int32_t get_offset_of_graphApiVersion_9() { return static_cast<int32_t>(offsetof(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields, ___graphApiVersion_9)); }
	inline String_t* get_graphApiVersion_9() const { return ___graphApiVersion_9; }
	inline String_t** get_address_of_graphApiVersion_9() { return &___graphApiVersion_9; }
	inline void set_graphApiVersion_9(String_t* value)
	{
		___graphApiVersion_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphApiVersion_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields, ___U3CAppIdU3Ek__BackingField_10)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_10() const { return ___U3CAppIdU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_10() { return &___U3CAppIdU3Ek__BackingField_10; }
	inline void set_U3CAppIdU3Ek__BackingField_10(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientTokenU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields, ___U3CClientTokenU3Ek__BackingField_11)); }
	inline String_t* get_U3CClientTokenU3Ek__BackingField_11() const { return ___U3CClientTokenU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CClientTokenU3Ek__BackingField_11() { return &___U3CClientTokenU3Ek__BackingField_11; }
	inline void set_U3CClientTokenU3Ek__BackingField_11(String_t* value)
	{
		___U3CClientTokenU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientTokenU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnDLLLoadedDelegateU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields, ___U3COnDLLLoadedDelegateU3Ek__BackingField_12)); }
	inline OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * get_U3COnDLLLoadedDelegateU3Ek__BackingField_12() const { return ___U3COnDLLLoadedDelegateU3Ek__BackingField_12; }
	inline OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A ** get_address_of_U3COnDLLLoadedDelegateU3Ek__BackingField_12() { return &___U3COnDLLLoadedDelegateU3Ek__BackingField_12; }
	inline void set_U3COnDLLLoadedDelegateU3Ek__BackingField_12(OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * value)
	{
		___U3COnDLLLoadedDelegateU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnDLLLoadedDelegateU3Ek__BackingField_12), (void*)value);
	}
};


// Facebook.Unity.HideUnityDelegate
struct  HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.Mobile.IOS.IOSFacebook
struct  IOSFacebook_t386F470B8E9BE83529E1BF4592A9149EE087C334  : public MobileFacebook_tB9D7A5277DE48679BE48E6FB790CA73BF27A534B
{
public:
	// System.Boolean Facebook.Unity.Mobile.IOS.IOSFacebook::limitEventUsage
	bool ___limitEventUsage_4;
	// Facebook.Unity.Mobile.IOS.IIOSWrapper Facebook.Unity.Mobile.IOS.IOSFacebook::iosWrapper
	RuntimeObject* ___iosWrapper_5;
	// System.String Facebook.Unity.Mobile.IOS.IOSFacebook::userID
	String_t* ___userID_6;

public:
	inline static int32_t get_offset_of_limitEventUsage_4() { return static_cast<int32_t>(offsetof(IOSFacebook_t386F470B8E9BE83529E1BF4592A9149EE087C334, ___limitEventUsage_4)); }
	inline bool get_limitEventUsage_4() const { return ___limitEventUsage_4; }
	inline bool* get_address_of_limitEventUsage_4() { return &___limitEventUsage_4; }
	inline void set_limitEventUsage_4(bool value)
	{
		___limitEventUsage_4 = value;
	}

	inline static int32_t get_offset_of_iosWrapper_5() { return static_cast<int32_t>(offsetof(IOSFacebook_t386F470B8E9BE83529E1BF4592A9149EE087C334, ___iosWrapper_5)); }
	inline RuntimeObject* get_iosWrapper_5() const { return ___iosWrapper_5; }
	inline RuntimeObject** get_address_of_iosWrapper_5() { return &___iosWrapper_5; }
	inline void set_iosWrapper_5(RuntimeObject* value)
	{
		___iosWrapper_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iosWrapper_5), (void*)value);
	}

	inline static int32_t get_offset_of_userID_6() { return static_cast<int32_t>(offsetof(IOSFacebook_t386F470B8E9BE83529E1BF4592A9149EE087C334, ___userID_6)); }
	inline String_t* get_userID_6() const { return ___userID_6; }
	inline String_t** get_address_of_userID_6() { return &___userID_6; }
	inline void set_userID_6(String_t* value)
	{
		___userID_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userID_6), (void*)value);
	}
};


// Facebook.Unity.InitDelegate
struct  InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Facebook.Unity.FB/OnDLLLoaded
struct  OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.Gameroom.GameroomFacebook/OnComplete
struct  OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Facebook.Unity.Editor.EditorFacebookMockDialog
struct  EditorFacebookMockDialog_t64A7CED645DC99E008D7E1342ED6A1FD961068D3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rect Facebook.Unity.Editor.EditorFacebookMockDialog::modalRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___modalRect_4;
	// UnityEngine.GUIStyle Facebook.Unity.Editor.EditorFacebookMockDialog::modalStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___modalStyle_5;
	// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer> Facebook.Unity.Editor.EditorFacebookMockDialog::<Callback>k__BackingField
	Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486 * ___U3CCallbackU3Ek__BackingField_6;
	// System.String Facebook.Unity.Editor.EditorFacebookMockDialog::<CallbackID>k__BackingField
	String_t* ___U3CCallbackIDU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_modalRect_4() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_t64A7CED645DC99E008D7E1342ED6A1FD961068D3, ___modalRect_4)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_modalRect_4() const { return ___modalRect_4; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_modalRect_4() { return &___modalRect_4; }
	inline void set_modalRect_4(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___modalRect_4 = value;
	}

	inline static int32_t get_offset_of_modalStyle_5() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_t64A7CED645DC99E008D7E1342ED6A1FD961068D3, ___modalStyle_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_modalStyle_5() const { return ___modalStyle_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_modalStyle_5() { return &___modalStyle_5; }
	inline void set_modalStyle_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___modalStyle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modalStyle_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCallbackU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_t64A7CED645DC99E008D7E1342ED6A1FD961068D3, ___U3CCallbackU3Ek__BackingField_6)); }
	inline Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486 * get_U3CCallbackU3Ek__BackingField_6() const { return ___U3CCallbackU3Ek__BackingField_6; }
	inline Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486 ** get_address_of_U3CCallbackU3Ek__BackingField_6() { return &___U3CCallbackU3Ek__BackingField_6; }
	inline void set_U3CCallbackU3Ek__BackingField_6(Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486 * value)
	{
		___U3CCallbackU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCallbackU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCallbackIDU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_t64A7CED645DC99E008D7E1342ED6A1FD961068D3, ___U3CCallbackIDU3Ek__BackingField_7)); }
	inline String_t* get_U3CCallbackIDU3Ek__BackingField_7() const { return ___U3CCallbackIDU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CCallbackIDU3Ek__BackingField_7() { return &___U3CCallbackIDU3Ek__BackingField_7; }
	inline void set_U3CCallbackIDU3Ek__BackingField_7(String_t* value)
	{
		___U3CCallbackIDU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCallbackIDU3Ek__BackingField_7), (void*)value);
	}
};


// Facebook.Unity.FacebookGameObject
struct  FacebookGameObject_t593C48B72DE2DE711EF88C55381CEB906611A472  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Facebook.Unity.IFacebookImplementation Facebook.Unity.FacebookGameObject::<Facebook>k__BackingField
	RuntimeObject* ___U3CFacebookU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CFacebookU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FacebookGameObject_t593C48B72DE2DE711EF88C55381CEB906611A472, ___U3CFacebookU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CFacebookU3Ek__BackingField_4() const { return ___U3CFacebookU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CFacebookU3Ek__BackingField_4() { return &___U3CFacebookU3Ek__BackingField_4; }
	inline void set_U3CFacebookU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CFacebookU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFacebookU3Ek__BackingField_4), (void*)value);
	}
};


// Facebook.Unity.FB/CompiledFacebookLoader
struct  CompiledFacebookLoader_t031DEFD215C9CB65289F5AF8096D59CC01ABA682  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Facebook.Unity.Gameroom.GameroomFacebookGameObject
struct  GameroomFacebookGameObject_t38419997B3A0F31405F077D3CF81B1D10CE22906  : public FacebookGameObject_t593C48B72DE2DE711EF88C55381CEB906611A472
{
public:

public:
};


// Facebook.Unity.Editor.Dialogs.MockLoginDialog
struct  MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2  : public EditorFacebookMockDialog_t64A7CED645DC99E008D7E1342ED6A1FD961068D3
{
public:
	// System.String Facebook.Unity.Editor.Dialogs.MockLoginDialog::accessToken
	String_t* ___accessToken_8;

public:
	inline static int32_t get_offset_of_accessToken_8() { return static_cast<int32_t>(offsetof(MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2, ___accessToken_8)); }
	inline String_t* get_accessToken_8() const { return ___accessToken_8; }
	inline String_t** get_address_of_accessToken_8() { return &___accessToken_8; }
	inline void set_accessToken_8(String_t* value)
	{
		___accessToken_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accessToken_8), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Facebook.Unity.FacebookDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacebookDelegate_1__ctor_m87D25FA462189D05AFC79CAB8B0D0FA7F9BA9FF0_gshared (FacebookDelegate_1_t6CC23315A4773E6BA9C162E9EFD4A33358009417 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Utilities/Callback`1<System.Object>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_1_Invoke_mBEE9F61A6AB134C76D217326319B4BB2DEC4BC42_gshared (Callback_1_tBCF83A39E64483144AB09C33CBF5F81B2FA31353 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Facebook.Unity.Settings.FacebookSettings::get_ChannelUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FacebookSettings_get_ChannelUrl_m37D1F54510DAA2CC7172DBE278086C94193CC978 (const RuntimeMethod* method);
// System.Boolean Facebook.Unity.Constants::get_DebugMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Constants_get_DebugMode_mE0785CE054C9BB30296DC5B971E981ABC8D5E65D (const RuntimeMethod* method);
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,System.String,System.Boolean,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasFacebook_Init_m708D0D07A91CE834C67AA998E1885911D860300A (CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5 * __this, String_t* ___appId0, bool ___cookie1, bool ___logging2, bool ___status3, bool ___xfbml4, String_t* ___channelUrl5, String_t* ___authResponse6, bool ___frictionlessRequests7, String_t* ___javascriptSDKLocale8, bool ___loadDebugJSSDK9, HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * ___hideUnityDelegate10, InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * ___onInitComplete11, const RuntimeMethod* method);
// System.String Facebook.Unity.Settings.FacebookSettings::get_IosURLSuffix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FacebookSettings_get_IosURLSuffix_mE57D5F68397448006D85CB3AF7325EA24FEBE172 (const RuntimeMethod* method);
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::Init(System.String,System.Boolean,System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSFacebook_Init_m48968A2568802475B0CA39DF82C4A929F4221472 (IOSFacebook_t386F470B8E9BE83529E1BF4592A9149EE087C334 * __this, String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___iosURLSuffix2, HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * ___hideUnityDelegate3, InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * ___onInitComplete4, const RuntimeMethod* method);
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::Init(System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidFacebook_Init_m1F3965AE272A84F50D8C8CE104FE0761420EB689 (AndroidFacebook_t4A439354665D5BF3BEFD3F4ADD71FD06AAC0F427 * __this, String_t* ___appId0, HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * ___hideUnityDelegate1, InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * ___onInitComplete2, const RuntimeMethod* method);
// System.Void Facebook.Unity.Gameroom.GameroomFacebook::Init(System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameroomFacebook_Init_m114AAACF2193F888C5EB054FCB313C853A30B6F6 (GameroomFacebook_t23B4DE6A6FAC44A24661381E62057E8BDC07D00E * __this, String_t* ___appId0, HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * ___hideUnityDelegate1, InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * ___onInitComplete2, const RuntimeMethod* method);
// Facebook.Unity.IFacebook Facebook.Unity.FB::get_FacebookImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FB_get_FacebookImpl_mE3727CF996C1C815EE858C3575583E24E6E0476B (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// Facebook.Unity.IPayFacebook Facebook.Unity.FB/Canvas::get_FacebookPayImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Canvas_get_FacebookPayImpl_m7096501C85133E85263A9256164E0D6331084162 (const RuntimeMethod* method);
// Facebook.Unity.IFacebookImplementation Facebook.Unity.FacebookGameObject::get_Facebook()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FacebookGameObject_get_Facebook_m22A35672C090818DEE30BF14F76D9AB1CD016930_inline (FacebookGameObject_t593C48B72DE2DE711EF88C55381CEB906611A472 * __this, const RuntimeMethod* method);
// Facebook.Unity.FB/OnDLLLoaded Facebook.Unity.FB::get_OnDLLLoadedDelegate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * FB_get_OnDLLLoadedDelegate_mFE908A2E33D71D375D761FA79123CFE1F486818E_inline (const RuntimeMethod* method);
// System.Void Facebook.Unity.FB/OnDLLLoaded::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDLLLoaded_Invoke_mF31E1325B324FF404699697ABB721C3EB363E91A (OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.FB::LogVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FB_LogVersion_m80602DF983B2B376493482A63D6D62428FF95107 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// Facebook.Unity.Mobile.IMobileFacebook Facebook.Unity.FB/Mobile::get_MobileFacebookImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mobile_get_MobileFacebookImpl_m437F86BC67BBD6A695FF7C3D3F3F7474EEC6BE00 (const RuntimeMethod* method);
// System.Void Facebook.Unity.FacebookBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBC412126FCD2793E76D1C92DC01BEEBE9CD6C234 (U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// Facebook.Unity.Gameroom.IGameroomFacebookImplementation Facebook.Unity.Gameroom.GameroomFacebookGameObject::get_GameroomFacebookImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameroomFacebookGameObject_get_GameroomFacebookImpl_mD2F17EF6C11DF47C18E283698FCC8BFED632B322 (GameroomFacebookGameObject_t38419997B3A0F31405F077D3CF81B1D10CE22906 * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.ResultContainer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultContainer__ctor_m939D224D088ED02B5BD2C740893C9CD7A2766DF3 (ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * __this, String_t* ___result0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Gameroom.GameroomFacebook/OnComplete::Invoke(Facebook.Unity.ResultContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnComplete_Invoke_mFA9441C6402B460D7172A8EF5AE6F32DA753F964 (OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B * __this, ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * ___resultContainer0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_NumEntries(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_NumEntries_m99921AD52BE0E2A1954C42B129958636C1EAD005_inline (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_Keys(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_Keys_m0CE47A9C700281F5564597F990EC8CBBE63C8104_inline (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_Values(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_Values_m0F9502A5540BAAF5E5E9CBBE054F0DD23BD0FAFC_inline (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC (int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m71EBE8A19BA9B6314A352C556FCA7069AF4372A0 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Char Facebook.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m3314056A4CABD6AB0DC8D6A28A70B5586038D617 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m7BF0E412EC0218A10A723C120C3637796DAE526F (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method);
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m88AAF82591D892412311883F54A11A296832808F (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m5B11E3199F650AB103A66AAE40DEDEC84AF2919B (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m8B5421FE65975813CC2C6BA10A358288646B6433 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m41C1E347F1092F00AEBB9F55CD1F96564FA02AF8 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method);
// System.String Facebook.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mC59F8D70ED67C470EDA8BE5C9E5D99071ABB3AED (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m7455DE77A9835D67A01DD5AAC0220734DD34AD85 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m541F6499F3D90269E1FB30C6BE51775D00E9204E (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mA4F14890391AECD7B93388294B03D0FF2AB6C69A (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_mA22E7D7A67AA4161DF3C8820E1448E4A37BC14B5 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.Int64 System.Int64::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_m8DDFA7706B4470D748A591EA89D224D608BD756C (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_m281C3FAE601723AC732D26BAFC6D61CEFD2E0F7D (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m5F570EEFE2926DE269D409D82D7B228618F965AF (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m485D12836E4DBD62F8C5FFF784F4DF4D825462B0 (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m5CC0915D42E800A03D719278884B704EE1555434 (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m0D97F807A413712CE227D4769067A596F1D9F607 (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, RuntimeObject* ___array0, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_mA7623F564833E4A433F8A82062FF67C8761BB5D3 (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mC322DC2D3E8E293EAB9F8F891C8894DF40D85635 (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mA60945431DE8F2DFDF3A3E4C76C21703562F2906 (int32_t ___value0, int32_t ___toBase1, const RuntimeMethod* method);
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_m5F079704E6409AEDCE0C1121CDD59D1F97CECE8A (U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>::.ctor(System.Object,System.IntPtr)
inline void FacebookDelegate_1__ctor_mC843DA6C237FDF30CD73D0BB81B7AB680C7B33C5 (FacebookDelegate_1_t6166F5FB96C236E90EFD544116294CBE2AFE6489 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (FacebookDelegate_1_t6166F5FB96C236E90EFD544116294CBE2AFE6489 *, RuntimeObject *, intptr_t, const RuntimeMethod*))FacebookDelegate_1__ctor_m87D25FA462189D05AFC79CAB8B0D0FA7F9BA9FF0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Facebook.Unity.FB::API(System.String,Facebook.Unity.HttpMethod,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FB_API_mE09565D77752519118D997DAF21BCF39809C8D9C (String_t* ___query0, int32_t ___method1, FacebookDelegate_1_t6166F5FB96C236E90EFD544116294CBE2AFE6489 * ___callback2, RuntimeObject* ___formData3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.DateTime System.DateTime::AddDays(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_AddDays_mEB8882A3289F39D7B10E5A1FB36A2ABF80328368 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, double ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
inline void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared)(__this, ___value0, method);
}
// System.Void Facebook.Unity.AccessToken::.ctor(System.String,System.String,System.DateTime,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.DateTime>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessToken__ctor_mEB4D1263B345F3EEF1946BE0385DD6436E772283 (AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860 * __this, String_t* ___tokenString0, String_t* ___userId1, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___expirationTime2, RuntimeObject* ___permissions3, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___lastRefresh4, String_t* ___graphDomain5, const RuntimeMethod* method);
// System.String Facebook.Unity.AccessToken::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessToken_ToJson_m39A48AB52CDFA4DF7B98732C8AD1640205A5259F (AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860 * __this, const RuntimeMethod* method);
// System.Object Facebook.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_mBF2B07679B181FD8A09DB0BCE64B5FA60A6FAD44 (String_t* ___json0, const RuntimeMethod* method);
// System.String Facebook.Unity.Editor.EditorFacebookMockDialog::get_CallbackID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EditorFacebookMockDialog_get_CallbackID_m200D3A018DE112B7612B0C689ACFB33D96E29865_inline (EditorFacebookMockDialog_t64A7CED645DC99E008D7E1342ED6A1FD961068D3 * __this, const RuntimeMethod* method);
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer> Facebook.Unity.Editor.EditorFacebookMockDialog::get_Callback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486 * EditorFacebookMockDialog_get_Callback_m1F30F3AA15BF404641585B1725464AFFBB1EDAFE_inline (EditorFacebookMockDialog_t64A7CED645DC99E008D7E1342ED6A1FD961068D3 * __this, const RuntimeMethod* method);
// System.Void Facebook.Unity.ResultContainer::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultContainer__ctor_mB3082CEB44917160D454502D68354CAE12E9FF8F (ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>::Invoke(T)
inline void Callback_1_Invoke_mF716C18C29CE9E1B19B3EB56E8A376160D48EC34 (Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486 * __this, ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486 *, ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B *, const RuntimeMethod*))Callback_1_Invoke_mBEE9F61A6AB134C76D217326319B4BB2DEC4BC42_gshared)(__this, ___obj0, method);
}
// System.Void Facebook.Unity.Utilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m17C9983FFD7EBF23C2EA0DFD7D481680685F5E81 (U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4 * __this, const RuntimeMethod* method);
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
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m21E0C423FBF0965FDC233D0446FEF8F5EFA0A00D (U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::<Init>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CInitU3Eb__0_mD2583433DA89741CE10216779E7A4C1338280294 (U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorFacebook_tD2A9AC2FB609DF1BF7611664B492CD42C3A2FB55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields*)il2cpp_codegen_static_fields_for(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var))->get_facebook_5();
		InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * L_1 = __this->get_onInitComplete_0();
		VirtActionInvoker1< InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * >::Invoke(33 /* System.Void Facebook.Unity.FacebookBase::Init(Facebook.Unity.InitDelegate) */, ((EditorFacebook_tD2A9AC2FB609DF1BF7611664B492CD42C3A2FB55 *)CastclassClass((RuntimeObject*)L_0, EditorFacebook_tD2A9AC2FB609DF1BF7611664B492CD42C3A2FB55_il2cpp_TypeInfo_var)), L_1);
		return;
	}
}
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::<Init>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CInitU3Eb__1_mF4A1E2DB5D26138AB5B9753D858AAC3F425F3335 (U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookSettings_tB6341C9F2583109B5576B9CB50BAB26B328F2975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields*)il2cpp_codegen_static_fields_for(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var))->get_facebook_5();
		String_t* L_1 = __this->get_appId_1();
		bool L_2 = __this->get_cookie_2();
		bool L_3 = __this->get_logging_3();
		bool L_4 = __this->get_status_4();
		bool L_5 = __this->get_xfbml_5();
		IL2CPP_RUNTIME_CLASS_INIT(FacebookSettings_tB6341C9F2583109B5576B9CB50BAB26B328F2975_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = FacebookSettings_get_ChannelUrl_m37D1F54510DAA2CC7172DBE278086C94193CC978(/*hidden argument*/NULL);
		String_t* L_7 = __this->get_authResponse_6();
		bool L_8 = __this->get_frictionlessRequests_7();
		String_t* L_9 = __this->get_javascriptSDKLocale_8();
		bool L_10;
		L_10 = Constants_get_DebugMode_mE0785CE054C9BB30296DC5B971E981ABC8D5E65D(/*hidden argument*/NULL);
		HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * L_11 = __this->get_onHideUnity_9();
		InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * L_12 = __this->get_onInitComplete_0();
		CanvasFacebook_Init_m708D0D07A91CE834C67AA998E1885911D860300A(((CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5 *)CastclassSealed((RuntimeObject*)L_0, CanvasFacebook_tE9EDCED19CB4D953DE3FA3C959B945A6D29D18F5_il2cpp_TypeInfo_var)), L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::<Init>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CInitU3Eb__2_mAD14C51EADA6491347ADAAA8F6020F496B729037 (U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookSettings_tB6341C9F2583109B5576B9CB50BAB26B328F2975_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSFacebook_t386F470B8E9BE83529E1BF4592A9149EE087C334_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields*)il2cpp_codegen_static_fields_for(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var))->get_facebook_5();
		String_t* L_1 = __this->get_appId_1();
		bool L_2 = __this->get_frictionlessRequests_7();
		IL2CPP_RUNTIME_CLASS_INIT(FacebookSettings_tB6341C9F2583109B5576B9CB50BAB26B328F2975_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = FacebookSettings_get_IosURLSuffix_mE57D5F68397448006D85CB3AF7325EA24FEBE172(/*hidden argument*/NULL);
		HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * L_4 = __this->get_onHideUnity_9();
		InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * L_5 = __this->get_onInitComplete_0();
		IOSFacebook_Init_m48968A2568802475B0CA39DF82C4A929F4221472(((IOSFacebook_t386F470B8E9BE83529E1BF4592A9149EE087C334 *)CastclassClass((RuntimeObject*)L_0, IOSFacebook_t386F470B8E9BE83529E1BF4592A9149EE087C334_il2cpp_TypeInfo_var)), L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::<Init>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CInitU3Eb__3_mDE1D10729FD856F99307A9C7685AEF7C02F492F4 (U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidFacebook_t4A439354665D5BF3BEFD3F4ADD71FD06AAC0F427_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields*)il2cpp_codegen_static_fields_for(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var))->get_facebook_5();
		String_t* L_1 = __this->get_appId_1();
		HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * L_2 = __this->get_onHideUnity_9();
		InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * L_3 = __this->get_onInitComplete_0();
		AndroidFacebook_Init_m1F3965AE272A84F50D8C8CE104FE0761420EB689(((AndroidFacebook_t4A439354665D5BF3BEFD3F4ADD71FD06AAC0F427 *)CastclassSealed((RuntimeObject*)L_0, AndroidFacebook_t4A439354665D5BF3BEFD3F4ADD71FD06AAC0F427_il2cpp_TypeInfo_var)), L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FB/<>c__DisplayClass36_0::<Init>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CInitU3Eb__4_m29684DDDD56FA171A1227CE11137B55E6FDECBA9 (U3CU3Ec__DisplayClass36_0_tE06F57C0912C5FA14157DEDF5FD2BBBF2F50F077 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameroomFacebook_t23B4DE6A6FAC44A24661381E62057E8BDC07D00E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields*)il2cpp_codegen_static_fields_for(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var))->get_facebook_5();
		String_t* L_1 = __this->get_appId_1();
		HideUnityDelegate_tAACA71D6375EF3FC43F000FA8A7C5F4FA31B523D * L_2 = __this->get_onHideUnity_9();
		InitDelegate_t263DFC4478CCBA0207BD39F4786B2D6E399E8E8E * L_3 = __this->get_onInitComplete_0();
		GameroomFacebook_Init_m114AAACF2193F888C5EB054FCB313C853A30B6F6(((GameroomFacebook_t23B4DE6A6FAC44A24661381E62057E8BDC07D00E *)CastclassSealed((RuntimeObject*)L_0, GameroomFacebook_t23B4DE6A6FAC44A24661381E62057E8BDC07D00E_il2cpp_TypeInfo_var)), L_1, L_2, L_3, /*hidden argument*/NULL);
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
// Facebook.Unity.IPayFacebook Facebook.Unity.FB/Canvas::get_FacebookPayImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Canvas_get_FacebookPayImpl_m7096501C85133E85263A9256164E0D6331084162 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPayFacebook_t282A5B27A470C10287940309A402606A9F6D63F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = FB_get_FacebookImpl_mE3727CF996C1C815EE858C3575583E24E6E0476B(/*hidden argument*/NULL);
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IPayFacebook_t282A5B27A470C10287940309A402606A9F6D63F3_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9C633E7C674E23EA753146B1D433678CB78C44D6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Canvas_get_FacebookPayImpl_m7096501C85133E85263A9256164E0D6331084162_RuntimeMethod_var)));
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void Facebook.Unity.FB/Canvas::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_Pay_m6D45E3FDC1B9F15ABA3BBD90716E70438BA71F74 (String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___quantityMin3, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t3E7742F517235C9ECE58D1B54A49A538DADB5947 * ___callback8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPayFacebook_t282A5B27A470C10287940309A402606A9F6D63F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Canvas_get_FacebookPayImpl_m7096501C85133E85263A9256164E0D6331084162(/*hidden argument*/NULL);
		String_t* L_1 = ___product0;
		String_t* L_2 = ___action1;
		int32_t L_3 = ___quantity2;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_4 = ___quantityMin3;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_5 = ___quantityMax4;
		String_t* L_6 = ___requestId5;
		String_t* L_7 = ___pricepointId6;
		String_t* L_8 = ___testCurrency7;
		FacebookDelegate_1_t3E7742F517235C9ECE58D1B54A49A538DADB5947 * L_9 = ___callback8;
		InterfaceActionInvoker9< String_t*, String_t*, int32_t, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 , Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 , String_t*, String_t*, String_t*, FacebookDelegate_1_t3E7742F517235C9ECE58D1B54A49A538DADB5947 * >::Invoke(0 /* System.Void Facebook.Unity.IPayFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>) */, IPayFacebook_t282A5B27A470C10287940309A402606A9F6D63F3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
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
// System.Void Facebook.Unity.FB/CompiledFacebookLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompiledFacebookLoader_Start_mC8EC281E2C79D3E19AF146F53110F3B8C72D3F82 (CompiledFacebookLoader_t031DEFD215C9CB65289F5AF8096D59CC01ABA682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FacebookGameObject_t593C48B72DE2DE711EF88C55381CEB906611A472 * L_0;
		L_0 = VirtFuncInvoker0< FacebookGameObject_t593C48B72DE2DE711EF88C55381CEB906611A472 * >::Invoke(4 /* Facebook.Unity.FacebookGameObject Facebook.Unity.FB/CompiledFacebookLoader::get_FBGameObject() */, __this);
		RuntimeObject* L_1;
		L_1 = FacebookGameObject_get_Facebook_m22A35672C090818DEE30BF14F76D9AB1CD016930_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		((FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields*)il2cpp_codegen_static_fields_for(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var))->set_facebook_5(L_1);
		OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * L_2;
		L_2 = FB_get_OnDLLLoadedDelegate_mFE908A2E33D71D375D761FA79123CFE1F486818E_inline(/*hidden argument*/NULL);
		OnDLLLoaded_Invoke_mF31E1325B324FF404699697ABB721C3EB363E91A(L_2, /*hidden argument*/NULL);
		FB_LogVersion_m80602DF983B2B376493482A63D6D62428FF95107(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FB/CompiledFacebookLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompiledFacebookLoader__ctor_m878DA6E48EEB5835CC862CE8E00CEFCC87EDCC9C (CompiledFacebookLoader_t031DEFD215C9CB65289F5AF8096D59CC01ABA682 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Facebook.Unity.FB/Mobile::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_set_ShareDialogMode_mCBCEF7AFA94330D56447F478D01814B263DD3DB8 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Mobile_get_MobileFacebookImpl_m437F86BC67BBD6A695FF7C3D3F3F7474EEC6BE00(/*hidden argument*/NULL);
		int32_t L_1 = ___value0;
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void Facebook.Unity.Mobile.IMobileFacebook::set_ShareDialogMode(Facebook.Unity.ShareDialogMode) */, IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// Facebook.Unity.Mobile.IMobileFacebook Facebook.Unity.FB/Mobile::get_MobileFacebookImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mobile_get_MobileFacebookImpl_m437F86BC67BBD6A695FF7C3D3F3F7474EEC6BE00 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = FB_get_FacebookImpl_mE3727CF996C1C815EE858C3575583E24E6E0476B(/*hidden argument*/NULL);
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral783DB8EDE0D1EDC2174AC1931718AC55B6E28426)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mobile_get_MobileFacebookImpl_m437F86BC67BBD6A695FF7C3D3F3F7474EEC6BE00_RuntimeMethod_var)));
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void Facebook.Unity.FB/Mobile::LoginWithTrackingPreference(Facebook.Unity.LoginTracking,System.Collections.Generic.IEnumerable`1<System.String>,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_LoginWithTrackingPreference_m45D5C7F486EFBAF400BAC5BB84E0FB1E4CC26410 (int32_t ___loginTracking0, RuntimeObject* ___permissions1, String_t* ___nonce2, FacebookDelegate_1_tFD70485570645EBD2D9687F2FF918892642F2CC7 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0FFE255F631035C3E8FE88B4BA4AE40910A8DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___loginTracking0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = Mobile_get_MobileFacebookImpl_m437F86BC67BBD6A695FF7C3D3F3F7474EEC6BE00(/*hidden argument*/NULL);
		RuntimeObject* L_2 = ___permissions1;
		String_t* L_3 = ___nonce2;
		FacebookDelegate_1_tFD70485570645EBD2D9687F2FF918892642F2CC7 * L_4 = ___callback3;
		InterfaceActionInvoker4< String_t*, RuntimeObject*, String_t*, FacebookDelegate_1_tFD70485570645EBD2D9687F2FF918892642F2CC7 * >::Invoke(1 /* System.Void Facebook.Unity.Mobile.IMobileFacebook::LoginWithTrackingPreference(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>) */, IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var, L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, L_2, L_3, L_4);
		return;
	}

IL_0016:
	{
		RuntimeObject* L_5;
		L_5 = Mobile_get_MobileFacebookImpl_m437F86BC67BBD6A695FF7C3D3F3F7474EEC6BE00(/*hidden argument*/NULL);
		RuntimeObject* L_6 = ___permissions1;
		String_t* L_7 = ___nonce2;
		FacebookDelegate_1_tFD70485570645EBD2D9687F2FF918892642F2CC7 * L_8 = ___callback3;
		InterfaceActionInvoker4< String_t*, RuntimeObject*, String_t*, FacebookDelegate_1_tFD70485570645EBD2D9687F2FF918892642F2CC7 * >::Invoke(1 /* System.Void Facebook.Unity.Mobile.IMobileFacebook::LoginWithTrackingPreference(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>) */, IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var, L_5, _stringLiteralD0FFE255F631035C3E8FE88B4BA4AE40910A8DE5, L_6, L_7, L_8);
		return;
	}
}
// Facebook.Unity.Profile Facebook.Unity.FB/Mobile::CurrentProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B * Mobile_CurrentProfile_m7284FA1A7C9F6F956CDFAABBF5C53E1616EEEAEC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Mobile_get_MobileFacebookImpl_m437F86BC67BBD6A695FF7C3D3F3F7474EEC6BE00(/*hidden argument*/NULL);
		Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B * L_1;
		L_1 = InterfaceFuncInvoker0< Profile_tFDEBF01196059AD449AB3F5CBA4B35A75418751B * >::Invoke(22 /* Facebook.Unity.Profile Facebook.Unity.Mobile.IMobileFacebook::CurrentProfile() */, IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Facebook.Unity.FB/Mobile::FetchDeferredAppLinkData(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_FetchDeferredAppLinkData_m699A0DED4AB72B1030FC70587BD3149FEFA9E8E6 (FacebookDelegate_1_t7985F00DD82B081CE6E2EABA48C30DF084585653 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FacebookDelegate_1_t7985F00DD82B081CE6E2EABA48C30DF084585653 * L_0 = ___callback0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1;
		L_1 = Mobile_get_MobileFacebookImpl_m437F86BC67BBD6A695FF7C3D3F3F7474EEC6BE00(/*hidden argument*/NULL);
		FacebookDelegate_1_t7985F00DD82B081CE6E2EABA48C30DF084585653 * L_2 = ___callback0;
		InterfaceActionInvoker1< FacebookDelegate_1_t7985F00DD82B081CE6E2EABA48C30DF084585653 * >::Invoke(2 /* System.Void Facebook.Unity.Mobile.IMobileFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>) */, IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void Facebook.Unity.FB/Mobile::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_RefreshCurrentAccessToken_mDFD4430E898951ADC7754442A824414EDC5E953F (FacebookDelegate_1_tC629FECBE7259CF822092A82F13C68D04DF9FAE1 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Mobile_get_MobileFacebookImpl_m437F86BC67BBD6A695FF7C3D3F3F7474EEC6BE00(/*hidden argument*/NULL);
		FacebookDelegate_1_tC629FECBE7259CF822092A82F13C68D04DF9FAE1 * L_1 = ___callback0;
		InterfaceActionInvoker1< FacebookDelegate_1_tC629FECBE7259CF822092A82F13C68D04DF9FAE1 * >::Invoke(3 /* System.Void Facebook.Unity.Mobile.IMobileFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>) */, IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean Facebook.Unity.FB/Mobile::IsImplicitPurchaseLoggingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_IsImplicitPurchaseLoggingEnabled_m727334204A1D2CCD41C97E84E366749CC3CB5DAA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Mobile_get_MobileFacebookImpl_m437F86BC67BBD6A695FF7C3D3F3F7474EEC6BE00(/*hidden argument*/NULL);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Facebook.Unity.Mobile.IMobileFacebook::IsImplicitPurchaseLoggingEnabled() */, IMobileFacebook_t2AC718D6767E7940B3431EBF902F16261C725FC0_il2cpp_TypeInfo_var, L_0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A (OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Facebook.Unity.FB/OnDLLLoaded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDLLLoaded__ctor_m524C8CB030AA34950828BBFB626756362B024B09 (OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Facebook.Unity.FB/OnDLLLoaded::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDLLLoaded_Invoke_mF31E1325B324FF404699697ABB721C3EB363E91A (OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Facebook.Unity.FB/OnDLLLoaded::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDLLLoaded_BeginInvoke_m44359EF3A96F56D65444A3E56938DCEBA55AC516 (OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Facebook.Unity.FB/OnDLLLoaded::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDLLLoaded_EndInvoke_mED4FDBF9562395765B06A12EA0DC33953259B099 (OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Facebook.Unity.FacebookBase/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD3C79C7C8A8994591A04637B7660F1398A87F024 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E * L_0 = (U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E *)il2cpp_codegen_object_new(U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBC412126FCD2793E76D1C92DC01BEEBE9CD6C234(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.FacebookBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBC412126FCD2793E76D1C92DC01BEEBE9CD6C234 (U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.Unity.FacebookBase/<>c::<ValidateAppRequestArgs>b__41_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CValidateAppRequestArgsU3Eb__41_0_mD060061023E4FCBDF2E9F73A2A183FF3484043D3 (U3CU3Ec_t750A9359321D588B3B7C144E47646F13AA35272E * __this, String_t* ___toWhom0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___toWhom0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
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
// System.Void Facebook.Unity.FacebookLogger/DebugLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__ctor_mE2B884F73D8569444B9D30811DB23B699D4154C4 (DebugLogger_t0B7595AC84A793F4BE14579814CD27B762155823 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FacebookLogger/DebugLogger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_Log_mBB339BD64F77FE1650CBCEBC07E275079431C1B5 (DebugLogger_t0B7595AC84A793F4BE14579814CD27B762155823 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void Facebook.Unity.FacebookLogger/DebugLogger::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_Info_m0AE814A628ACEBD263964772FFA12649FBE8E16E (DebugLogger_t0B7595AC84A793F4BE14579814CD27B762155823 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.FacebookLogger/DebugLogger::Warn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_Warn_m05385FA8FF00824EA5AE8F5E42FFF1667D39315B (DebugLogger_t0B7595AC84A793F4BE14579814CD27B762155823 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_0, /*hidden argument*/NULL);
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
// System.Void Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayEventU3Ed__1__ctor_mA54D530B69357D98F551230413C4E95AAD6F349D (U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayEventU3Ed__1_System_IDisposable_Dispose_m5C7F18A01E147F19C119936BB2C5593FCFC39D5D (U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayEventU3Ed__1_MoveNext_mED81BF227411A4E33D36DDF69142F206CAB60694 (U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		int64_t L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, ((float)((float)L_3)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = __this->get_action_3();
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_5, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayEventU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6C2A861E51F1A20D88257DC1DAC6C658E7EBA0A3 (U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayEventU3Ed__1_System_Collections_IEnumerator_Reset_m05633EDF5F93FD5D0EA2187448F7A9EC6AF603D9 (U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayEventU3Ed__1_System_Collections_IEnumerator_Reset_m05633EDF5F93FD5D0EA2187448F7A9EC6AF603D9_RuntimeMethod_var)));
	}
}
// System.Object Facebook.Unity.FacebookScheduler/<DelayEvent>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayEventU3Ed__1_System_Collections_IEnumerator_get_Current_mC1B55819DC053987DBFCD70FC3A8C09E836B023D (U3CDelayEventU3Ed__1_t4DEF558C0B0BDF39B29BA823CA1FDB39F19918D0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Facebook.Unity.Gameroom.GameroomFacebook/OnComplete::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnComplete__ctor_m3C02708FF5A0A7116ABCB14FB4ABE3BFB0E1691C (OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Facebook.Unity.Gameroom.GameroomFacebook/OnComplete::Invoke(Facebook.Unity.ResultContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnComplete_Invoke_mFA9441C6402B460D7172A8EF5AE6F32DA753F964 (OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B * __this, ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * ___resultContainer0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resultContainer0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___resultContainer0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___resultContainer0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___resultContainer0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___resultContainer0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___resultContainer0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resultContainer0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * >::Invoke(targetMethod, targetThis, ___resultContainer0);
					else
						GenericVirtActionInvoker1< ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * >::Invoke(targetMethod, targetThis, ___resultContainer0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___resultContainer0);
					else
						VirtActionInvoker1< ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___resultContainer0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___resultContainer0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___resultContainer0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Facebook.Unity.Gameroom.GameroomFacebook/OnComplete::BeginInvoke(Facebook.Unity.ResultContainer,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnComplete_BeginInvoke_mC5A9B23468232D08B3ACA023A710A3F8FF88E042 (OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B * __this, ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * ___resultContainer0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___resultContainer0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Facebook.Unity.Gameroom.GameroomFacebook/OnComplete::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnComplete_EndInvoke_m2810DA112ED38ABAEE65AC2DFD28220DFCABFE4F (OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForPipeResponseU3Ed__4__ctor_m69270302EA68D1A607C204A4779113AC5B97A1DF (U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForPipeResponseU3Ed__4_System_IDisposable_Dispose_mD5C43101A330DA403CEF1A39E77CAEF36F265821 (U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForPipeResponseU3Ed__4_MoveNext_m586E3E56AA0A533EB1DA347315518B5AC61105D4 (U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameroomFacebookImplementation_tCA6BC9A7A0964C68CD37A8FE7277D9A750006032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameroomFacebookGameObject_t38419997B3A0F31405F077D3CF81B1D10CE22906 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameroomFacebookGameObject_t38419997B3A0F31405F077D3CF81B1D10CE22906 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0037;
	}

IL_0020:
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0037:
	{
		GameroomFacebookGameObject_t38419997B3A0F31405F077D3CF81B1D10CE22906 * L_4 = V_1;
		RuntimeObject* L_5;
		L_5 = GameroomFacebookGameObject_get_GameroomFacebookImpl_mD2F17EF6C11DF47C18E283698FCC8BFED632B322(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Facebook.Unity.Gameroom.IGameroomFacebookImplementation::HaveReceivedPipeResponse() */, IGameroomFacebookImplementation_tCA6BC9A7A0964C68CD37A8FE7277D9A750006032_il2cpp_TypeInfo_var, L_5);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		OnComplete_t1A7EEFEB3A3E443C15D3C60F70E969F8E38EC32B * L_7 = __this->get_onCompleteDelegate_3();
		GameroomFacebookGameObject_t38419997B3A0F31405F077D3CF81B1D10CE22906 * L_8 = V_1;
		RuntimeObject* L_9;
		L_9 = GameroomFacebookGameObject_get_GameroomFacebookImpl_mD2F17EF6C11DF47C18E283698FCC8BFED632B322(L_8, /*hidden argument*/NULL);
		String_t* L_10 = __this->get_callbackId_4();
		String_t* L_11;
		L_11 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String Facebook.Unity.Gameroom.IGameroomFacebookImplementation::GetPipeResponse(System.String) */, IGameroomFacebookImplementation_tCA6BC9A7A0964C68CD37A8FE7277D9A750006032_il2cpp_TypeInfo_var, L_9, L_10);
		ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * L_12 = (ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B *)il2cpp_codegen_object_new(ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B_il2cpp_TypeInfo_var);
		ResultContainer__ctor_m939D224D088ED02B5BD2C740893C9CD7A2766DF3(L_12, L_11, /*hidden argument*/NULL);
		OnComplete_Invoke_mFA9441C6402B460D7172A8EF5AE6F32DA753F964(L_7, L_12, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForPipeResponseU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF566E3C3BBD6DC9D4B3CD4FCE8C64FF7E9A6742D (U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForPipeResponseU3Ed__4_System_Collections_IEnumerator_Reset_mAAA94CA358C3552491249BCD67C9E9FDD43D742E (U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForPipeResponseU3Ed__4_System_Collections_IEnumerator_Reset_mAAA94CA358C3552491249BCD67C9E9FDD43D742E_RuntimeMethod_var)));
	}
}
// System.Object Facebook.Unity.Gameroom.GameroomFacebookGameObject/<WaitForPipeResponse>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForPipeResponseU3Ed__4_System_Collections_IEnumerator_get_Current_m2F97FF7B8D316932ADE5613C61BF27FA125F5D77 (U3CWaitForPipeResponseU3Ed__4_t3A858B87D4631DB5FC911C0038F69A6030B2AEBD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDict__ctor_mA63461CE527470C015BFBBBF460BED9CEE1CEDC8 (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		NativeDict_set_NumEntries_m99921AD52BE0E2A1954C42B129958636C1EAD005_inline(__this, 0, /*hidden argument*/NULL);
		NativeDict_set_Keys_m0CE47A9C700281F5564597F990EC8CBBE63C8104_inline(__this, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, /*hidden argument*/NULL);
		NativeDict_set_Values_m0F9502A5540BAAF5E5E9CBBE054F0DD23BD0FAFC_inline(__this, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::get_NumEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeDict_get_NumEntries_m64E5C35498C8F317B6A2F71BEF922AD790E8C20B (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CNumEntriesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_NumEntries(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDict_set_NumEntries_m99921AD52BE0E2A1954C42B129958636C1EAD005 (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CNumEntriesU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String[] Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* NativeDict_get_Keys_m0A5A4D87F437E8484346272E00BC744F1DDFFD12 (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3CKeysU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_Keys(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDict_set_Keys_m0CE47A9C700281F5564597F990EC8CBBE63C8104 (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3CKeysU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String[] Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* NativeDict_get_Values_m719512C6175F0367A072FD65FB0FDF5419CCF74D (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3CValuesU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict::set_Values(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDict_set_Values_m0F9502A5540BAAF5E5E9CBBE054F0DD23BD0FAFC (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3CValuesU3Ek__BackingField_2(L_0);
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
// System.Void Facebook.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m5B11E3199F650AB103A66AAE40DEDEC84AF2919B (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_0(L_1);
		return;
	}
}
// System.Char Facebook.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m3314056A4CABD6AB0DC8D6A28A70B5586038D617 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m71EBE8A19BA9B6314A352C556FCA7069AF4372A0 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m88AAF82591D892412311883F54A11A296832808F (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_m71EBE8A19BA9B6314A352C556FCA7069AF4372A0(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_4 = __this->get_json_0();
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}

IL_0023:
	{
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_m3314056A4CABD6AB0DC8D6A28A70B5586038D617(__this, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952, L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0008;
		}
	}

IL_0036:
	{
		StringBuilder_t * L_8 = V_0;
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m41C1E347F1092F00AEBB9F55CD1F96564FA02AF8 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		Parser_EatWhitespace_m7BF0E412EC0218A10A723C120C3637796DAE526F(__this, /*hidden argument*/NULL);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0016:
	{
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_m3314056A4CABD6AB0DC8D6A28A70B5586038D617(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		return (int32_t)(1);
	}

IL_00a9:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_9 = __this->get_json_0();
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		return (int32_t)(2);
	}

IL_00b7:
	{
		return (int32_t)(3);
	}

IL_00b9:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_0();
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		return (int32_t)(4);
	}

IL_00c7:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_13 = __this->get_json_0();
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		return (int32_t)(6);
	}

IL_00d5:
	{
		return (int32_t)(7);
	}

IL_00d7:
	{
		return (int32_t)(5);
	}

IL_00d9:
	{
		return (int32_t)(8);
	}

IL_00db:
	{
		String_t* L_15;
		L_15 = Parser_get_NextWord_m88AAF82591D892412311883F54A11A296832808F(__this, /*hidden argument*/NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		if (!L_16)
		{
			goto IL_0117;
		}
	}
	{
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_0117;
	}

IL_010e:
	{
		return (int32_t)(((int32_t)10));
	}

IL_0111:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0114:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0117:
	{
		return (int32_t)(0);
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m1FCD402180DCFE7B384E8329BD114869B97C0DF2 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t0050B6460A7019B352C623B39F613D2564AFC839_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		String_t* L_0 = ___jsonString0;
		Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * L_1 = (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 *)il2cpp_codegen_object_new(Parser_t0050B6460A7019B352C623B39F613D2564AFC839_il2cpp_TypeInfo_var);
		Parser__ctor_m5B11E3199F650AB103A66AAE40DEDEC84AF2919B(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * L_2 = V_0;
		RuntimeObject * L_3;
		L_3 = Parser_ParseValue_m8B5421FE65975813CC2C6BA10A358288646B6433(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1A, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		{
			Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0019;
			}
		}

IL_0013:
		{
			Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * L_5 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_0019:
		{
			IL2CPP_END_FINALLY(16)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void Facebook.MiniJSON.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m8949B73AFA380EA4CDA1703069DC664A90FCA08B (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method)
{
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_0, /*hidden argument*/NULL);
		__this->set_json_0((StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mA4F14890391AECD7B93388294B03D0FF2AB6C69A (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		int32_t L_3;
		L_3 = Parser_get_NextToken_m41C1E347F1092F00AEBB9F55CD1F96564FA02AF8(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0028:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		String_t* L_8;
		L_8 = Parser_ParseString_mC59F8D70ED67C470EDA8BE5C9E5D99071ABB3AED(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0036:
	{
		int32_t L_10;
		L_10 = Parser_get_NextToken_m41C1E347F1092F00AEBB9F55CD1F96564FA02AF8(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0041:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_0();
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = V_0;
		String_t* L_14 = V_1;
		RuntimeObject * L_15;
		L_15 = Parser_ParseValue_m8B5421FE65975813CC2C6BA10A358288646B6433(__this, /*hidden argument*/NULL);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_mA22E7D7A67AA4161DF3C8820E1448E4A37BC14B5 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = Parser_get_NextToken_m41C1E347F1092F00AEBB9F55CD1F96564FA02AF8(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)NULL;
	}

IL_002c:
	{
		V_1 = (bool)0;
		goto IL_003f;
	}

IL_0030:
	{
		int32_t L_7 = V_2;
		RuntimeObject * L_8;
		L_8 = Parser_ParseByToken_m7455DE77A9835D67A01DD5AAC0220734DD34AD85(__this, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = V_0;
		RuntimeObject * L_10 = V_3;
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_9, L_10, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_003f:
	{
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_12 = V_0;
		return L_12;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m8B5421FE65975813CC2C6BA10A358288646B6433 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Parser_get_NextToken_m41C1E347F1092F00AEBB9F55CD1F96564FA02AF8(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		RuntimeObject * L_2;
		L_2 = Parser_ParseByToken_m7455DE77A9835D67A01DD5AAC0220734DD34AD85(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m7455DE77A9835D67A01DD5AAC0220734DD34AD85 (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		String_t* L_1;
		L_1 = Parser_ParseString_mC59F8D70ED67C470EDA8BE5C9E5D99071ABB3AED(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_003d:
	{
		RuntimeObject * L_2;
		L_2 = Parser_ParseNumber_m541F6499F3D90269E1FB30C6BE51775D00E9204E(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0044:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3;
		L_3 = Parser_ParseObject_mA4F14890391AECD7B93388294B03D0FF2AB6C69A(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_004b:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4;
		L_4 = Parser_ParseArray_mA22E7D7A67AA4161DF3C8820E1448E4A37BC14B5(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0052:
	{
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		bool L_7 = ((bool)0);
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		return NULL;
	}

IL_0062:
	{
		return NULL;
	}
}
// System.String Facebook.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mC59F8D70ED67C470EDA8BE5C9E5D99071ABB3AED (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	StringBuilder_t * V_3 = NULL;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_0139;
	}

IL_0019:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = __this->get_json_0();
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_013f;
	}

IL_002e:
	{
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_m71EBE8A19BA9B6314A352C556FCA7069AF4372A0(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0131;
	}

IL_0044:
	{
		V_2 = (bool)0;
		goto IL_0139;
	}

IL_004b:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_8 = __this->get_json_0();
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0139;
	}

IL_0060:
	{
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_m71EBE8A19BA9B6314A352C556FCA7069AF4372A0(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0139;
	}

IL_0080:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0139;
	}

IL_0094:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0139;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0139;
	}

IL_00b7:
	{
		StringBuilder_t * L_20 = V_0;
		Il2CppChar L_21 = V_1;
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_20, L_21, /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00c1:
	{
		StringBuilder_t * L_23 = V_0;
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, 8, /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00cb:
	{
		StringBuilder_t * L_25 = V_0;
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_25, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00d6:
	{
		StringBuilder_t * L_27 = V_0;
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_27, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00e1:
	{
		StringBuilder_t * L_29 = V_0;
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00ec:
	{
		StringBuilder_t * L_31 = V_0;
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_31, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_00f7:
	{
		StringBuilder_t * L_33 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_33, /*hidden argument*/NULL);
		V_3 = L_33;
		V_4 = 0;
		goto IL_0115;
	}

IL_0102:
	{
		StringBuilder_t * L_34 = V_3;
		Il2CppChar L_35;
		L_35 = Parser_get_NextChar_m71EBE8A19BA9B6314A352C556FCA7069AF4372A0(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_34, L_35, /*hidden argument*/NULL);
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0115:
	{
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_0102;
		}
	}
	{
		StringBuilder_t * L_39 = V_0;
		StringBuilder_t * L_40 = V_3;
		String_t* L_41;
		L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_41, ((int32_t)16), /*hidden argument*/NULL);
		StringBuilder_t * L_43;
		L_43 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_39, ((int32_t)((uint16_t)L_42)), /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_0131:
	{
		StringBuilder_t * L_44 = V_0;
		Il2CppChar L_45 = V_1;
		StringBuilder_t * L_46;
		L_46 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_44, L_45, /*hidden argument*/NULL);
	}

IL_0139:
	{
		bool L_47 = V_2;
		if (L_47)
		{
			goto IL_0019;
		}
	}

IL_013f:
	{
		StringBuilder_t * L_48 = V_0;
		String_t* L_49;
		L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		return L_49;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m541F6499F3D90269E1FB30C6BE51775D00E9204E (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_t90934110F570CB6C1B781E405165DA26448897FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Parser_get_NextWord_m88AAF82591D892412311883F54A11A296832808F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		int32_t L_2;
		L_2 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t90934110F570CB6C1B781E405165DA26448897FA_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_4 = ((Json_t90934110F570CB6C1B781E405165DA26448897FA_StaticFields*)il2cpp_codegen_static_fields_for(Json_t90934110F570CB6C1B781E405165DA26448897FA_il2cpp_TypeInfo_var))->get_numberFormat_0();
		int64_t L_5;
		L_5 = Int64_Parse_m8DDFA7706B4470D748A591EA89D224D608BD756C(L_3, L_4, /*hidden argument*/NULL);
		int64_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0023:
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t90934110F570CB6C1B781E405165DA26448897FA_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_9 = ((Json_t90934110F570CB6C1B781E405165DA26448897FA_StaticFields*)il2cpp_codegen_static_fields_for(Json_t90934110F570CB6C1B781E405165DA26448897FA_il2cpp_TypeInfo_var))->get_numberFormat_0();
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = Double_Parse_m281C3FAE601723AC732D26BAFC6D61CEFD2E0F7D(L_8, L_9, /*hidden argument*/NULL);
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m7BF0E412EC0218A10A723C120C3637796DAE526F (Parser_t0050B6460A7019B352C623B39F613D2564AFC839 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_2 = __this->get_json_0();
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_002f;
		}
	}

IL_001c:
	{
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_m3314056A4CABD6AB0DC8D6A28A70B5586038D617(__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0002;
		}
	}

IL_002f:
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
// System.Void Facebook.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m5F570EEFE2926DE269D409D82D7B228618F965AF (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String Facebook.MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mD622658DD4C5AA7B77462AA59C28521A260A0033 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * L_0 = (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 *)il2cpp_codegen_object_new(Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45_il2cpp_TypeInfo_var);
		Serializer__ctor_m5F570EEFE2926DE269D409D82D7B228618F965AF(L_0, /*hidden argument*/NULL);
		Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		Serializer_SerializeValue_m485D12836E4DBD62F8C5FFF784F4DF4D825462B0(L_1, L_2, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m485D12836E4DBD62F8C5FFF784F4DF4D825462B0 (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		RuntimeObject * L_3 = ___value0;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_5 = V_2;
		Serializer_SerializeString_m5CC0915D42E800A03D719278884B704EE1555434(__this, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0027:
	{
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0047;
		}
	}
	{
		StringBuilder_t * L_7 = __this->get_builder_0();
		RuntimeObject * L_8 = ___value0;
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		String_t* L_10;
		L_10 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, L_10, /*hidden argument*/NULL);
		return;
	}

IL_0047:
	{
		RuntimeObject * L_12 = ___value0;
		RuntimeObject* L_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_0 = L_13;
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_14 = V_0;
		Serializer_SerializeArray_m0D97F807A413712CE227D4769067A596F1D9F607(__this, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0059:
	{
		RuntimeObject * L_15 = ___value0;
		RuntimeObject* L_16 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		V_1 = L_16;
		if (!L_16)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject* L_17 = V_1;
		Serializer_SerializeObject_mA7623F564833E4A433F8A82062FF67C8761BB5D3(__this, L_17, /*hidden argument*/NULL);
		return;
	}

IL_006b:
	{
		RuntimeObject * L_18 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject * L_19 = ___value0;
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		Serializer_SerializeString_m5CC0915D42E800A03D719278884B704EE1555434(__this, L_20, /*hidden argument*/NULL);
		return;
	}

IL_0080:
	{
		RuntimeObject * L_21 = ___value0;
		Serializer_SerializeOther_mC322DC2D3E8E293EAB9F8F891C8894DF40D85635(__this, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_mA7623F564833E4A433F8A82062FF67C8761BB5D3 (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (bool)1;
		StringBuilder_t * L_0 = __this->get_builder_0();
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___obj0;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			RuntimeObject* L_5 = V_1;
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			bool L_7 = V_0;
			if (L_7)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			StringBuilder_t * L_8 = __this->get_builder_0();
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			RuntimeObject * L_10 = V_2;
			String_t* L_11;
			L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			Serializer_SerializeString_m5CC0915D42E800A03D719278884B704EE1555434(__this, L_11, /*hidden argument*/NULL);
			StringBuilder_t * L_12 = __this->get_builder_0();
			StringBuilder_t * L_13;
			L_13 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_12, ((int32_t)58), /*hidden argument*/NULL);
			RuntimeObject* L_14 = ___obj0;
			RuntimeObject * L_15 = V_2;
			RuntimeObject * L_16;
			L_16 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_14, L_15);
			Serializer_SerializeValue_m485D12836E4DBD62F8C5FFF784F4DF4D825462B0(__this, L_16, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_005f:
		{
			RuntimeObject* L_17 = V_1;
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_20 = V_3;
			if (!L_20)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_21 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		StringBuilder_t * L_22 = __this->get_builder_0();
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_22, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m0D97F807A413712CE227D4769067A596F1D9F607 (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, RuntimeObject* ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_2 = ___array0;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0019:
		{
			RuntimeObject* L_4 = V_1;
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			StringBuilder_t * L_7 = __this->get_builder_0();
			StringBuilder_t * L_8;
			L_8 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0031:
		{
			RuntimeObject * L_9 = V_2;
			Serializer_SerializeValue_m485D12836E4DBD62F8C5FFF784F4DF4D825462B0(__this, L_9, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_003a:
		{
			RuntimeObject* L_10 = V_1;
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0019;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_13 = V_3;
			if (!L_13)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_14 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		StringBuilder_t * L_15 = __this->get_builder_0();
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_15, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m5CC0915D42E800A03D719278884B704EE1555434 (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_2 = ___str0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3;
		L_3 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0127;
	}

IL_001c:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00ca;
			}
			case 2:
			{
				goto IL_00a4;
			}
			case 3:
			{
				goto IL_00dd;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00b7;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00dd;
	}

IL_004f:
	{
		StringBuilder_t * L_11 = __this->get_builder_0();
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0065:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_007b:
	{
		StringBuilder_t * L_15 = __this->get_builder_0();
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0091:
	{
		StringBuilder_t * L_17 = __this->get_builder_0();
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00a4:
	{
		StringBuilder_t * L_19 = __this->get_builder_0();
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00b7:
	{
		StringBuilder_t * L_21 = __this->get_builder_0();
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00ca:
	{
		StringBuilder_t * L_23 = __this->get_builder_0();
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00dd:
	{
		Il2CppChar L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_00fd;
		}
	}
	{
		StringBuilder_t * L_29 = __this->get_builder_0();
		Il2CppChar L_30 = V_2;
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, L_30, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00fd:
	{
		StringBuilder_t * L_32 = __this->get_builder_0();
		int32_t L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = Convert_ToString_mA60945431DE8F2DFDF3A3E4C76C21703562F2906(L_33, ((int32_t)16), /*hidden argument*/NULL);
		String_t* L_35;
		L_35 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_34, 4, ((int32_t)48), /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_35, /*hidden argument*/NULL);
		StringBuilder_t * L_37;
		L_37 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, L_36, /*hidden argument*/NULL);
	}

IL_0123:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_0127:
	{
		int32_t L_39 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_41 = __this->get_builder_0();
		StringBuilder_t * L_42;
		L_42 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_41, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_mC322DC2D3E8E293EAB9F8F891C8894DF40D85635 (Serializer_tAA02CDBF4522C95199660B3A09CE7DF745189B45 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_3 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_4 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}

IL_0058:
	{
		StringBuilder_t * L_11 = __this->get_builder_0();
		RuntimeObject * L_12 = ___value0;
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, L_13, /*hidden argument*/NULL);
		return;
	}

IL_006b:
	{
		RuntimeObject * L_15 = ___value0;
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		Serializer_SerializeString_m5CC0915D42E800A03D719278884B704EE1555434(__this, L_16, /*hidden argument*/NULL);
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
// System.Void Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m752D3FB646DCF0E6883300CB7D998C47D0E15523 (U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_0::<SendSuccessResult>b__0(Facebook.Unity.IGraphResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CSendSuccessResultU3Eb__0_m62F28BAB4BEBBE3F2B6E748BA4EDBEE3DD09441B (U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * __this, RuntimeObject* ___graphResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookDelegate_1__ctor_mC843DA6C237FDF30CD73D0BB81B7AB680C7B33C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookDelegate_1_t6166F5FB96C236E90EFD544116294CBE2AFE6489_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResult_t3EE04071A472BD07988DE7119614748452A33666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_U3CSendSuccessResultU3Eb__1_m833866A5EF51D4D884D60B38BC2A2E733E33C17C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral586A13F06AE71843C594D008B796A8DE2A0A1597);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA304DCE1819EEDA733FB5961DF71438C48F96B);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E * L_0 = (U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_1__ctor_m5F079704E6409AEDCE0C1121CDD59D1F97CECE8A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E * L_1 = V_0;
		L_1->set_CSU24U3CU3E8__locals1_1(__this);
		RuntimeObject* L_2 = ___graphResult0;
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Facebook.Unity.IResult::get_Error() */, IResult_t3EE04071A472BD07988DE7119614748452A33666_il2cpp_TypeInfo_var, L_2);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2 * L_5 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_6 = ___graphResult0;
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Facebook.Unity.IResult::get_Error() */, IResult_t3EE04071A472BD07988DE7119614748452A33666_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFDA304DCE1819EEDA733FB5961DF71438C48F96B, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void Facebook.Unity.Editor.EditorFacebookMockDialog::SendErrorResult(System.String) */, L_5, L_8);
		return;
	}

IL_0036:
	{
		U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E * L_9 = V_0;
		RuntimeObject* L_10 = ___graphResult0;
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.IResult::get_ResultDictionary() */, IResult_t3EE04071A472BD07988DE7119614748452A33666_il2cpp_TypeInfo_var, L_10);
		RuntimeObject * L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_11, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		L_9->set_facebookID_0(((String_t*)IsInstSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E * L_13 = V_0;
		FacebookDelegate_1_t6166F5FB96C236E90EFD544116294CBE2AFE6489 * L_14 = (FacebookDelegate_1_t6166F5FB96C236E90EFD544116294CBE2AFE6489 *)il2cpp_codegen_object_new(FacebookDelegate_1_t6166F5FB96C236E90EFD544116294CBE2AFE6489_il2cpp_TypeInfo_var);
		FacebookDelegate_1__ctor_mC843DA6C237FDF30CD73D0BB81B7AB680C7B33C5(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_1_U3CSendSuccessResultU3Eb__1_m833866A5EF51D4D884D60B38BC2A2E733E33C17C_RuntimeMethod_var), /*hidden argument*/FacebookDelegate_1__ctor_mC843DA6C237FDF30CD73D0BB81B7AB680C7B33C5_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		FB_API_mE09565D77752519118D997DAF21BCF39809C8D9C(_stringLiteral586A13F06AE71843C594D008B796A8DE2A0A1597, 0, L_14, (RuntimeObject*)NULL, /*hidden argument*/NULL);
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
// System.Void Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_m5F079704E6409AEDCE0C1121CDD59D1F97CECE8A (U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.Unity.Editor.Dialogs.MockLoginDialog/<>c__DisplayClass4_1::<SendSuccessResult>b__1(Facebook.Unity.IGraphResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1_U3CSendSuccessResultU3Eb__1_m833866A5EF51D4D884D60B38BC2A2E733E33C17C (U3CU3Ec__DisplayClass4_1_tF3B60AC28B1DA1815EFA3E0A0C71A0199CF7FB1E * __this, RuntimeObject* ___permResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1_Invoke_mF716C18C29CE9E1B19B3EB56E8A376160D48EC34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResult_t3EE04071A472BD07988DE7119614748452A33666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_t90934110F570CB6C1B781E405165DA26448897FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral126A04A5A066C00B77AB4F3483884A7606F6BC5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30A7BF1FEE5DF8662ED83E80AA4537E34CC0361B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E1A3C74C7169410C083C38E4316E0B616B1FB85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5D04E432BAC10E5BF00FAEE5AD03DFA57F88C4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFADDF05B43A17EA6A8388C2C998770D78F8909EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA304DCE1819EEDA733FB5961DF71438C48F96B);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_4 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___permResult0;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Facebook.Unity.IResult::get_Error() */, IResult_t3EE04071A472BD07988DE7119614748452A33666_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2 * L_4 = L_3->get_U3CU3E4__this_0();
		RuntimeObject* L_5 = ___permResult0;
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Facebook.Unity.IResult::get_Error() */, IResult_t3EE04071A472BD07988DE7119614748452A33666_il2cpp_TypeInfo_var, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFDA304DCE1819EEDA733FB5961DF71438C48F96B, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void Facebook.Unity.Editor.EditorFacebookMockDialog::SendErrorResult(System.String) */, L_4, L_7);
		return;
	}

IL_002e:
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_8, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_8;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_9, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_1 = L_9;
		RuntimeObject* L_10 = ___permResult0;
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.IResult::get_ResultDictionary() */, IResult_t3EE04071A472BD07988DE7119614748452A33666_il2cpp_TypeInfo_var, L_10);
		RuntimeObject * L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_13;
		L_13 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233(((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)IsInstClass((RuntimeObject*)L_12, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_RuntimeMethod_var);
		V_3 = L_13;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_0057:
		{
			RuntimeObject * L_14;
			L_14 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var);
			V_4 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)CastclassClass((RuntimeObject*)L_14, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_15 = V_4;
			RuntimeObject * L_16;
			L_16 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_15, _stringLiteralFD4706B02823C71252FBF63A74CF03433A8DADF0, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			bool L_17;
			L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)), _stringLiteral30A7BF1FEE5DF8662ED83E80AA4537E34CC0361B, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_009b;
			}
		}

IL_0082:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = V_0;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_19 = V_4;
			RuntimeObject * L_20;
			L_20 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_19, _stringLiteral126A04A5A066C00B77AB4F3483884A7606F6BC5D, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_18, ((String_t*)IsInstSealed((RuntimeObject*)L_20, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			goto IL_00b2;
		}

IL_009b:
		{
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_21 = V_1;
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_22 = V_4;
			RuntimeObject * L_23;
			L_23 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_22, _stringLiteral126A04A5A066C00B77AB4F3483884A7606F6BC5D, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_21, ((String_t*)IsInstSealed((RuntimeObject*)L_23, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_00b2:
		{
			bool L_24;
			L_24 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0057;
			}
		}

IL_00bb:
		{
			IL2CPP_LEAVE(0xCB, FINALLY_00bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bd;
	}

FINALLY_00bd:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_RuntimeMethod_var);
		IL2CPP_END_FINALLY(189)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(189)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
	}

IL_00cb:
	{
		U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * L_25 = __this->get_CSU24U3CU3E8__locals1_1();
		MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2 * L_26 = L_25->get_U3CU3E4__this_0();
		String_t* L_27 = L_26->get_accessToken_8();
		String_t* L_28 = __this->get_facebookID_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_29;
		L_29 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		V_5 = L_29;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_30;
		L_30 = DateTime_AddDays_mEB8882A3289F39D7B10E5A1FB36A2ABF80328368((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_5), (60.0), /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_31 = V_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_32;
		L_32 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB((&L_33), L_32, /*hidden argument*/Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * L_34 = __this->get_CSU24U3CU3E8__locals1_1();
		String_t* L_35 = L_34->get_graphDomain_1();
		AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860 * L_36 = (AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860 *)il2cpp_codegen_object_new(AccessToken_tF9EFBA2CEF3CE0D0148C0606B2ABA2822EE7A860_il2cpp_TypeInfo_var);
		AccessToken__ctor_mEB4D1263B345F3EEF1946BE0385DD6436E772283(L_36, L_27, L_28, L_30, L_31, L_33, L_35, /*hidden argument*/NULL);
		String_t* L_37;
		L_37 = AccessToken_ToJson_m39A48AB52CDFA4DF7B98732C8AD1640205A5259F(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Json_t90934110F570CB6C1B781E405165DA26448897FA_il2cpp_TypeInfo_var);
		RuntimeObject * L_38;
		L_38 = Json_Deserialize_mBF2B07679B181FD8A09DB0BCE64B5FA60A6FAD44(L_37, /*hidden argument*/NULL);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_38, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var));
		RuntimeObject* L_39 = V_2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_40 = V_0;
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_39, _stringLiteralFADDF05B43A17EA6A8388C2C998770D78F8909EE, L_40);
		RuntimeObject* L_41 = V_2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_42 = V_1;
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_41, _stringLiteral3E1A3C74C7169410C083C38E4316E0B616B1FB85, L_42);
		U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * L_43 = __this->get_CSU24U3CU3E8__locals1_1();
		MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2 * L_44 = L_43->get_U3CU3E4__this_0();
		String_t* L_45;
		L_45 = EditorFacebookMockDialog_get_CallbackID_m200D3A018DE112B7612B0C689ACFB33D96E29865_inline(L_44, /*hidden argument*/NULL);
		bool L_46;
		L_46 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_016d;
		}
	}
	{
		RuntimeObject* L_47 = V_2;
		U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * L_48 = __this->get_CSU24U3CU3E8__locals1_1();
		MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2 * L_49 = L_48->get_U3CU3E4__this_0();
		String_t* L_50;
		L_50 = EditorFacebookMockDialog_get_CallbackID_m200D3A018DE112B7612B0C689ACFB33D96E29865_inline(L_49, /*hidden argument*/NULL);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_47, _stringLiteralA5D04E432BAC10E5BF00FAEE5AD03DFA57F88C4C, L_50);
	}

IL_016d:
	{
		U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * L_51 = __this->get_CSU24U3CU3E8__locals1_1();
		MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2 * L_52 = L_51->get_U3CU3E4__this_0();
		Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486 * L_53;
		L_53 = EditorFacebookMockDialog_get_Callback_m1F30F3AA15BF404641585B1725464AFFBB1EDAFE_inline(L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_019a;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_tFFE17CBA55A4ADFD4134AFE4F2EE38D1B54AE16C * L_54 = __this->get_CSU24U3CU3E8__locals1_1();
		MockLoginDialog_tFEDFA368A2910F869BF8B75A1A5139C624A7C9D2 * L_55 = L_54->get_U3CU3E4__this_0();
		Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486 * L_56;
		L_56 = EditorFacebookMockDialog_get_Callback_m1F30F3AA15BF404641585B1725464AFFBB1EDAFE_inline(L_55, /*hidden argument*/NULL);
		RuntimeObject* L_57 = V_2;
		ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B * L_58 = (ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B *)il2cpp_codegen_object_new(ResultContainer_t852EA92D2A1A023E8559B9AFC283F828A08A496B_il2cpp_TypeInfo_var);
		ResultContainer__ctor_mB3082CEB44917160D454502D68354CAE12E9FF8F(L_58, L_57, /*hidden argument*/NULL);
		Callback_1_Invoke_mF716C18C29CE9E1B19B3EB56E8A376160D48EC34(L_56, L_58, /*hidden argument*/Callback_1_Invoke_mF716C18C29CE9E1B19B3EB56E8A376160D48EC34_RuntimeMethod_var);
	}

IL_019a:
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
// System.Void Facebook.Unity.Utilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC2D9844299E770FE831E879A3A99A551A09CEAA7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4 * L_0 = (U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4 *)il2cpp_codegen_object_new(U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m17C9983FFD7EBF23C2EA0DFD7D481680685F5E81(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.Utilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m17C9983FFD7EBF23C2EA0DFD7D481680685F5E81 (U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.Unity.Utilities/<>c::<ParsePermissionFromResult>b__19_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CParsePermissionFromResultU3Eb__19_0_mF828B51ED7536D0B8B7071E5CD6C8F6EB38F68AB (U3CU3Ec_t9323A5928F0C9F85271B0520440149F7882703D4 * __this, RuntimeObject * ___permission0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___permission0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FacebookGameObject_get_Facebook_m22A35672C090818DEE30BF14F76D9AB1CD016930_inline (FacebookGameObject_t593C48B72DE2DE711EF88C55381CEB906611A472 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CFacebookU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * FB_get_OnDLLLoadedDelegate_mFE908A2E33D71D375D761FA79123CFE1F486818E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var);
		OnDLLLoaded_t01DFBB94F66D3521F7F71EBCE378C0E76CB7A56A * L_0 = ((FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_StaticFields*)il2cpp_codegen_static_fields_for(FB_t871BA2E575E6E52D816CFF03F092E58C0E2AFE85_il2cpp_TypeInfo_var))->get_U3COnDLLLoadedDelegateU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_NumEntries_m99921AD52BE0E2A1954C42B129958636C1EAD005_inline (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CNumEntriesU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_Keys_m0CE47A9C700281F5564597F990EC8CBBE63C8104_inline (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3CKeysU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeDict_set_Values_m0F9502A5540BAAF5E5E9CBBE054F0DD23BD0FAFC_inline (NativeDict_t814DD54137175EB0038887E695C264B4813BF653 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3CValuesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EditorFacebookMockDialog_get_CallbackID_m200D3A018DE112B7612B0C689ACFB33D96E29865_inline (EditorFacebookMockDialog_t64A7CED645DC99E008D7E1342ED6A1FD961068D3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCallbackIDU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486 * EditorFacebookMockDialog_get_Callback_m1F30F3AA15BF404641585B1725464AFFBB1EDAFE_inline (EditorFacebookMockDialog_t64A7CED645DC99E008D7E1342ED6A1FD961068D3 * __this, const RuntimeMethod* method)
{
	{
		Callback_1_tCD62A722963F6D493CCBF721C154F1D3236F2486 * L_0 = __this->get_U3CCallbackU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
