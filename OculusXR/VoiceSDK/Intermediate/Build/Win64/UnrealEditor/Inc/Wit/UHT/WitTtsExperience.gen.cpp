// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/TTS/WitTtsExperience.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitTtsExperience() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_ATtsExperience();
	WIT_API UClass* Z_Construct_UClass_AWitTtsExperience();
	WIT_API UClass* Z_Construct_UClass_AWitTtsExperience_NoRegister();
// End Cross Module References
	void AWitTtsExperience::StaticRegisterNativesAWitTtsExperience()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWitTtsExperience);
	UClass* Z_Construct_UClass_AWitTtsExperience_NoRegister()
	{
		return AWitTtsExperience::StaticClass();
	}
	struct Z_Construct_UClass_AWitTtsExperience_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWitTtsExperience_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATtsExperience,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitTtsExperience_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Top level actor for Wit TTS interactions\n */" },
		{ "IncludePath", "Wit/TTS/WitTtsExperience.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Wit/TTS/WitTtsExperience.h" },
		{ "ToolTip", "Top level actor for Wit TTS interactions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWitTtsExperience_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWitTtsExperience>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWitTtsExperience_Statics::ClassParams = {
		&AWitTtsExperience::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWitTtsExperience_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWitTtsExperience_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWitTtsExperience()
	{
		if (!Z_Registration_Info_UClass_AWitTtsExperience.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWitTtsExperience.OuterSingleton, Z_Construct_UClass_AWitTtsExperience_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWitTtsExperience.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<AWitTtsExperience>()
	{
		return AWitTtsExperience::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWitTtsExperience);
	AWitTtsExperience::~AWitTtsExperience() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsExperience_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsExperience_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWitTtsExperience, AWitTtsExperience::StaticClass, TEXT("AWitTtsExperience"), &Z_Registration_Info_UClass_AWitTtsExperience, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWitTtsExperience), 2221974948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsExperience_h_3843712033(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsExperience_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_TTS_WitTtsExperience_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
