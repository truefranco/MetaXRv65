// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Dictation/WitDictationExperience.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitDictationExperience() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_ADictationExperience();
	WIT_API UClass* Z_Construct_UClass_AWitDictationExperience();
	WIT_API UClass* Z_Construct_UClass_AWitDictationExperience_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UWitDictationService_NoRegister();
// End Cross Module References
	void AWitDictationExperience::StaticRegisterNativesAWitDictationExperience()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWitDictationExperience);
	UClass* Z_Construct_UClass_AWitDictationExperience_NoRegister()
	{
		return AWitDictationExperience::StaticClass();
	}
	struct Z_Construct_UClass_AWitDictationExperience_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WitDictationService_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WitDictationService;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWitDictationExperience_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADictationExperience,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitDictationExperience_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Top level actor for Wit dictation interactions\n */" },
		{ "IncludePath", "Wit/Dictation/WitDictationExperience.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Wit/Dictation/WitDictationExperience.h" },
		{ "ToolTip", "Top level actor for Wit dictation interactions" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitDictationExperience_Statics::NewProp_WitDictationService_MetaData[] = {
		{ "Comment", "/**\n\x09 * The wit dictation service\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wit/Dictation/WitDictationExperience.h" },
		{ "ToolTip", "The wit dictation service" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitDictationExperience_Statics::NewProp_WitDictationService = { "WitDictationService", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWitDictationExperience, WitDictationService), Z_Construct_UClass_UWitDictationService_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitDictationExperience_Statics::NewProp_WitDictationService_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWitDictationExperience_Statics::NewProp_WitDictationService_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWitDictationExperience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitDictationExperience_Statics::NewProp_WitDictationService,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWitDictationExperience_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWitDictationExperience>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWitDictationExperience_Statics::ClassParams = {
		&AWitDictationExperience::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWitDictationExperience_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWitDictationExperience_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWitDictationExperience_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWitDictationExperience_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWitDictationExperience()
	{
		if (!Z_Registration_Info_UClass_AWitDictationExperience.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWitDictationExperience.OuterSingleton, Z_Construct_UClass_AWitDictationExperience_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWitDictationExperience.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<AWitDictationExperience>()
	{
		return AWitDictationExperience::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWitDictationExperience);
	AWitDictationExperience::~AWitDictationExperience() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Dictation_WitDictationExperience_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Dictation_WitDictationExperience_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWitDictationExperience, AWitDictationExperience::StaticClass, TEXT("AWitDictationExperience"), &Z_Registration_Info_UClass_AWitDictationExperience, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWitDictationExperience), 2175816667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Dictation_WitDictationExperience_h_1488185288(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Dictation_WitDictationExperience_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Dictation_WitDictationExperience_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
