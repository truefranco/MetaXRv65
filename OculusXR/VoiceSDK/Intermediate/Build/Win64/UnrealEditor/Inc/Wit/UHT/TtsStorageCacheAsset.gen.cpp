// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTS/Cache/Storage/Asset/TtsStorageCacheAsset.h"
#include "TTS/Configuration/TtsConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTtsStorageCacheAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UTtsStorageCacheAsset();
	WIT_API UClass* Z_Construct_UClass_UTtsStorageCacheAsset_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FTtsConfiguration();
// End Cross Module References
	void UTtsStorageCacheAsset::StaticRegisterNativesUTtsStorageCacheAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTtsStorageCacheAsset);
	UClass* Z_Construct_UClass_UTtsStorageCacheAsset_NoRegister()
	{
		return UTtsStorageCacheAsset::StaticClass();
	}
	struct Z_Construct_UClass_UTtsStorageCacheAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClipSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClipData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClipData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTtsStorageCacheAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsStorageCacheAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple data asset that stores the binary representation of a clip\n */" },
		{ "IncludePath", "TTS/Cache/Storage/Asset/TtsStorageCacheAsset.h" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Storage/Asset/TtsStorageCacheAsset.h" },
		{ "ToolTip", "A simple data asset that stores the binary representation of a clip" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipSettings_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/** The settings that were used to generate the clip */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Storage/Asset/TtsStorageCacheAsset.h" },
		{ "ToolTip", "The settings that were used to generate the clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipSettings = { "ClipSettings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsStorageCacheAsset, ClipSettings), Z_Construct_UScriptStruct_FTtsConfiguration, METADATA_PARAMS(Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipSettings_MetaData)) }; // 2639599679
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipData_Inner = { "ClipData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipData_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/** The data of the clip */" },
		{ "ModuleRelativePath", "Public/TTS/Cache/Storage/Asset/TtsStorageCacheAsset.h" },
		{ "ToolTip", "The data of the clip" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipData = { "ClipData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsStorageCacheAsset, ClipData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTtsStorageCacheAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsStorageCacheAsset_Statics::NewProp_ClipData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTtsStorageCacheAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTtsStorageCacheAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTtsStorageCacheAsset_Statics::ClassParams = {
		&UTtsStorageCacheAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTtsStorageCacheAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTtsStorageCacheAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTtsStorageCacheAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsStorageCacheAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTtsStorageCacheAsset()
	{
		if (!Z_Registration_Info_UClass_UTtsStorageCacheAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTtsStorageCacheAsset.OuterSingleton, Z_Construct_UClass_UTtsStorageCacheAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTtsStorageCacheAsset.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UTtsStorageCacheAsset>()
	{
		return UTtsStorageCacheAsset::StaticClass();
	}
	UTtsStorageCacheAsset::UTtsStorageCacheAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTtsStorageCacheAsset);
	UTtsStorageCacheAsset::~UTtsStorageCacheAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Storage_Asset_TtsStorageCacheAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Storage_Asset_TtsStorageCacheAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTtsStorageCacheAsset, UTtsStorageCacheAsset::StaticClass, TEXT("UTtsStorageCacheAsset"), &Z_Registration_Info_UClass_UTtsStorageCacheAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTtsStorageCacheAsset), 2320886996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Storage_Asset_TtsStorageCacheAsset_h_3886125646(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Storage_Asset_TtsStorageCacheAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Cache_Storage_Asset_TtsStorageCacheAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
