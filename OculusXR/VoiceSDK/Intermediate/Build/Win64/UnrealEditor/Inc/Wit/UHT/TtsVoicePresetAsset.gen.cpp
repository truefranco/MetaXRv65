// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTS/Configuration/TtsVoicePresetAsset.h"
#include "TTS/Configuration/TtsConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTtsVoicePresetAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UTtsVoicePresetAsset();
	WIT_API UClass* Z_Construct_UClass_UTtsVoicePresetAsset_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FTtsConfiguration();
// End Cross Module References
	void UTtsVoicePresetAsset::StaticRegisterNativesUTtsVoicePresetAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTtsVoicePresetAsset);
	UClass* Z_Construct_UClass_UTtsVoicePresetAsset_NoRegister()
	{
		return UTtsVoicePresetAsset::StaticClass();
	}
	struct Z_Construct_UClass_UTtsVoicePresetAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Synthesize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Synthesize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTtsVoicePresetAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsVoicePresetAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple data asset that stores a voice preset for text to speech\n */" },
		{ "IncludePath", "TTS/Configuration/TtsVoicePresetAsset.h" },
		{ "ModuleRelativePath", "Public/TTS/Configuration/TtsVoicePresetAsset.h" },
		{ "ToolTip", "A simple data asset that stores a voice preset for text to speech" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsVoicePresetAsset_Statics::NewProp_Synthesize_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "//** Synthesize endpoint configuration */\n" },
		{ "ModuleRelativePath", "Public/TTS/Configuration/TtsVoicePresetAsset.h" },
		{ "ToolTip", "/ Synthesize endpoint configuration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTtsVoicePresetAsset_Statics::NewProp_Synthesize = { "Synthesize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsVoicePresetAsset, Synthesize), Z_Construct_UScriptStruct_FTtsConfiguration, METADATA_PARAMS(Z_Construct_UClass_UTtsVoicePresetAsset_Statics::NewProp_Synthesize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsVoicePresetAsset_Statics::NewProp_Synthesize_MetaData)) }; // 2639599679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTtsVoicePresetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsVoicePresetAsset_Statics::NewProp_Synthesize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTtsVoicePresetAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTtsVoicePresetAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTtsVoicePresetAsset_Statics::ClassParams = {
		&UTtsVoicePresetAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTtsVoicePresetAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTtsVoicePresetAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTtsVoicePresetAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsVoicePresetAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTtsVoicePresetAsset()
	{
		if (!Z_Registration_Info_UClass_UTtsVoicePresetAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTtsVoicePresetAsset.OuterSingleton, Z_Construct_UClass_UTtsVoicePresetAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTtsVoicePresetAsset.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UTtsVoicePresetAsset>()
	{
		return UTtsVoicePresetAsset::StaticClass();
	}
	UTtsVoicePresetAsset::UTtsVoicePresetAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTtsVoicePresetAsset);
	UTtsVoicePresetAsset::~UTtsVoicePresetAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsVoicePresetAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsVoicePresetAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTtsVoicePresetAsset, UTtsVoicePresetAsset::StaticClass, TEXT("UTtsVoicePresetAsset"), &Z_Registration_Info_UClass_UTtsVoicePresetAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTtsVoicePresetAsset), 985853789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsVoicePresetAsset_h_2661738829(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsVoicePresetAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsVoicePresetAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
