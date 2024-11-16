// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTS/Service/TtsService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTtsService() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UTtsEvents_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UTtsMemoryCacheHandler_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UTtsService();
	WIT_API UClass* Z_Construct_UClass_UTtsService_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UTtsStorageCacheHandler_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UTtsVoicePresetAsset_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister();
// End Cross Module References
	void UTtsService::StaticRegisterNativesUTtsService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTtsService);
	UClass* Z_Construct_UClass_UTtsService_NoRegister()
	{
		return UTtsService::StaticClass();
	}
	struct Z_Construct_UClass_UTtsService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Configuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoicePreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoicePreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryCacheHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryCacheHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StorageCacheHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StorageCacheHandler;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTtsService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsService_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Base class implementation of a TTS service\n */" },
		{ "IncludePath", "TTS/Service/TtsService.h" },
		{ "ModuleRelativePath", "Public/TTS/Service/TtsService.h" },
		{ "ToolTip", "Base class implementation of a TTS service" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsService_Statics::NewProp_Configuration_MetaData[] = {
		{ "Comment", "/**\n\x09 * The configuration that this service should use\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Service/TtsService.h" },
		{ "ToolTip", "The configuration that this service should use" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTtsService_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsService, Configuration), Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTtsService_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsService_Statics::NewProp_Configuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsService_Statics::NewProp_VoicePreset_MetaData[] = {
		{ "Comment", "/**\n\x09 * The Wit TTS Voice Preset that will be used by Wit.ai\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Service/TtsService.h" },
		{ "ToolTip", "The Wit TTS Voice Preset that will be used by Wit.ai" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTtsService_Statics::NewProp_VoicePreset = { "VoicePreset", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsService, VoicePreset), Z_Construct_UClass_UTtsVoicePresetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTtsService_Statics::NewProp_VoicePreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsService_Statics::NewProp_VoicePreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsService_Statics::NewProp_EventHandler_MetaData[] = {
		{ "Comment", "/**\n\x09 * The events that this service should use in callbacks\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TTS/Service/TtsService.h" },
		{ "ToolTip", "The events that this service should use in callbacks" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTtsService_Statics::NewProp_EventHandler = { "EventHandler", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsService, EventHandler), Z_Construct_UClass_UTtsEvents_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTtsService_Statics::NewProp_EventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsService_Statics::NewProp_EventHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsService_Statics::NewProp_MemoryCacheHandler_MetaData[] = {
		{ "Comment", "/**\n\x09  * Memory cache to store converted voice clips as USoundWave\n\x09  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TTS/Service/TtsService.h" },
		{ "ToolTip", "Memory cache to store converted voice clips as USoundWave" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTtsService_Statics::NewProp_MemoryCacheHandler = { "MemoryCacheHandler", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsService, MemoryCacheHandler), Z_Construct_UClass_UTtsMemoryCacheHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTtsService_Statics::NewProp_MemoryCacheHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsService_Statics::NewProp_MemoryCacheHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsService_Statics::NewProp_StorageCacheHandler_MetaData[] = {
		{ "Comment", "/**\n\x09 * Storage cache to store converted voice clips as raw data on disk\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TTS/Service/TtsService.h" },
		{ "ToolTip", "Storage cache to store converted voice clips as raw data on disk" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTtsService_Statics::NewProp_StorageCacheHandler = { "StorageCacheHandler", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsService, StorageCacheHandler), Z_Construct_UClass_UTtsStorageCacheHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTtsService_Statics::NewProp_StorageCacheHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsService_Statics::NewProp_StorageCacheHandler_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTtsService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsService_Statics::NewProp_Configuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsService_Statics::NewProp_VoicePreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsService_Statics::NewProp_EventHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsService_Statics::NewProp_MemoryCacheHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsService_Statics::NewProp_StorageCacheHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTtsService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTtsService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTtsService_Statics::ClassParams = {
		&UTtsService::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTtsService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTtsService_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UTtsService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTtsService()
	{
		if (!Z_Registration_Info_UClass_UTtsService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTtsService.OuterSingleton, Z_Construct_UClass_UTtsService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTtsService.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UTtsService>()
	{
		return UTtsService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTtsService);
	UTtsService::~UTtsService() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Service_TtsService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Service_TtsService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTtsService, UTtsService::StaticClass, TEXT("UTtsService"), &Z_Registration_Info_UClass_UTtsService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTtsService), 2342786984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Service_TtsService_h_4138493974(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Service_TtsService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Service_TtsService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
