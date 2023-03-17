#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
extern void ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (void);
// 0x00000002 System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
extern void ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F (void);
// 0x00000003 System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
extern void ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF (void);
// 0x00000004 Unity.Collections.NativeArray`1<System.Byte> UnityEngine.ImageConversion::EncodeNativeArrayToJPG(Unity.Collections.NativeArray`1<T>,UnityEngine.Experimental.Rendering.GraphicsFormat,System.UInt32,System.UInt32,System.UInt32,System.Int32)
// 0x00000005 System.Void* UnityEngine.ImageConversion::UnsafeEncodeNativeArrayToJPG(System.Void*,System.Int32&,UnityEngine.Experimental.Rendering.GraphicsFormat,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern void ImageConversion_UnsafeEncodeNativeArrayToJPG_m19AB03A1F3E5019BEDA20CC0D3A15A760932E53D (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945,
	ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F,
	ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF,
	NULL,
	ImageConversion_UnsafeEncodeNativeArrayToJPG_m19AB03A1F3E5019BEDA20CC0D3A15A760932E53D,
};
static const int32_t s_InvokerIndices[5] = 
{
	11847,
	10318,
	9146,
	0,
	7804,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000004, { 0, 2 } },
};
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t7F385DF47AE8A1EC870566CC984AE8566363EAB7_m519470E989AD2C4568D3904E5B6ED36A726772AE;
extern const uint32_t g_rgctx_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisT_t7F385DF47AE8A1EC870566CC984AE8566363EAB7_mFD221EF64968C641FC063BD7CDA732DDED160732;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t7F385DF47AE8A1EC870566CC984AE8566363EAB7_m519470E989AD2C4568D3904E5B6ED36A726772AE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisT_t7F385DF47AE8A1EC870566CC984AE8566363EAB7_mFD221EF64968C641FC063BD7CDA732DDED160732 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_ImageConversionModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_ImageConversionModule_CodeGenModule = 
{
	"UnityEngine.ImageConversionModule.dll",
	5,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
