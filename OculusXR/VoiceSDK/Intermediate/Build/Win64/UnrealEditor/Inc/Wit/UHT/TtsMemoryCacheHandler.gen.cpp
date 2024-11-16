// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTS/Cache/Memory/TtsMemoryCacheHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTtsMemoryCacheHandler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UTtsMemoryCacheHandler();
	WIT_API UClass* Z_Construct_UClass_UTtsMemoryCacheHandler_NoRegister();
// End Cross Module References
	void UTtsMemoryCacheHandler::StaticRegisterNativesUTtsMemoryCacheHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTtsMemoryCacheHandler);
	UClass* Z_Construct_UClass_UTtsMemoryCacheHandler_NoRegister()
	{
		return UTtsMemoryCacheHandler::StaticClass();
	}
	struct Z_Construct_UClass_UTtsMemoryCacheHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTtsMemoryCacheHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsMemoryCacheHandler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract class for implementing a memory cache. This should be the base if you want to implement your own memory cache implementation\n */" },
		{ "IncludePath", "TTS/Cache/Memory/TtsMemoryCacheHandler.h" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Memory/TtsMemoryCacheHandler.h" },
		{ "ToolTip", "Abstract class for implementing a memory cache. This should be the base if you want to implement your own memory cache implementation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTtsMemoryCacheHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTtsMemoryCacheHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTtsMemoryCacheHandler_Statics::ClassParams = {
		&UTtsMemoryCacheHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UTtsMemoryCacheHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsMemoryCacheHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTtsMemoryCacheHandler()
	{
		if (!Z_Registration_Info_UClass_UTtsMemoryCacheHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTtsMemoryCacheHandler.OuterSingleton, Z_Construct_UClass_UTtsMemoryCacheHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTtsMemoryCacheHandler.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UTtsMemoryCacheHandler>()
	{
		return UTtsMemoryCacheHandler::StaticClass();
	}
	UTtsMemoryCacheHandler::UTtsMemoryCacheHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTtsMemoryCacheHandler);
	UTtsMemoryCacheHandler::~UTtsMemoryCacheHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCacheHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCacheHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTtsMemoryCacheHandler, UTtsMemoryCacheHandler::StaticClass, TEXT("UTtsMemoryCacheHandler"), &Z_Registration_Info_UClass_UTtsMemoryCacheHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTtsMemoryCacheHandler), 1050514223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCacheHandler_h_2604653874(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCacheHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Memory_TtsMemoryCacheHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
