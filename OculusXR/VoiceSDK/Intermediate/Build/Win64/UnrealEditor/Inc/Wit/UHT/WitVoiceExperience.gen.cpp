// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Voice/WitVoiceExperience.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitVoiceExperience() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_AVoiceExperience();
	WIT_API UClass* Z_Construct_UClass_AWitVoiceExperience();
	WIT_API UClass* Z_Construct_UClass_AWitVoiceExperience_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UWitVoiceService_NoRegister();
// End Cross Module References
	void AWitVoiceExperience::StaticRegisterNativesAWitVoiceExperience()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWitVoiceExperience);
	UClass* Z_Construct_UClass_AWitVoiceExperience_NoRegister()
	{
		return AWitVoiceExperience::StaticClass();
	}
	struct Z_Construct_UClass_AWitVoiceExperience_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WitVoiceService_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WitVoiceService;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWitVoiceExperience_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVoiceExperience,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitVoiceExperience_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Top level actor for Wit voice interactions. You can create a blueprint class off this actor and add whatever intent and entity matchers\n * you need to implement your voice experience\n */" },
		{ "IncludePath", "Wit/Voice/WitVoiceExperience.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Wit/Voice/WitVoiceExperience.h" },
		{ "ToolTip", "Top level actor for Wit voice interactions. You can create a blueprint class off this actor and add whatever intent and entity matchers\nyou need to implement your voice experience" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitVoiceExperience_Statics::NewProp_WitVoiceService_MetaData[] = {
		{ "Comment", "/**\n\x09 * The wit voice service\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wit/Voice/WitVoiceExperience.h" },
		{ "ToolTip", "The wit voice service" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitVoiceExperience_Statics::NewProp_WitVoiceService = { "WitVoiceService", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWitVoiceExperience, WitVoiceService), Z_Construct_UClass_UWitVoiceService_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitVoiceExperience_Statics::NewProp_WitVoiceService_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWitVoiceExperience_Statics::NewProp_WitVoiceService_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWitVoiceExperience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitVoiceExperience_Statics::NewProp_WitVoiceService,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWitVoiceExperience_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWitVoiceExperience>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWitVoiceExperience_Statics::ClassParams = {
		&AWitVoiceExperience::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWitVoiceExperience_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWitVoiceExperience_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWitVoiceExperience_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWitVoiceExperience_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWitVoiceExperience()
	{
		if (!Z_Registration_Info_UClass_AWitVoiceExperience.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWitVoiceExperience.OuterSingleton, Z_Construct_UClass_AWitVoiceExperience_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWitVoiceExperience.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<AWitVoiceExperience>()
	{
		return AWitVoiceExperience::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWitVoiceExperience);
	AWitVoiceExperience::~AWitVoiceExperience() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Voice_WitVoiceExperience_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Voice_WitVoiceExperience_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWitVoiceExperience, AWitVoiceExperience::StaticClass, TEXT("AWitVoiceExperience"), &Z_Registration_Info_UClass_AWitVoiceExperience, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWitVoiceExperience), 75791214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Voice_WitVoiceExperience_h_3189098640(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Voice_WitVoiceExperience_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Voice_WitVoiceExperience_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
