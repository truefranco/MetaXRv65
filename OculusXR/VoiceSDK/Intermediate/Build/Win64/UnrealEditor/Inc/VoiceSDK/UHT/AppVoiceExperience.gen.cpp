// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voice/AppVoiceExperience.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppVoiceExperience() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VoiceSDK();
	VOICESDK_API UClass* Z_Construct_UClass_AAppVoiceExperience();
	VOICESDK_API UClass* Z_Construct_UClass_AAppVoiceExperience_NoRegister();
	VOICESDK_API UClass* Z_Construct_UClass_UPlatformVoiceService_NoRegister();
	WIT_API UClass* Z_Construct_UClass_AVoiceExperience();
	WIT_API UClass* Z_Construct_UClass_UWitVoiceService_NoRegister();
// End Cross Module References
	void AAppVoiceExperience::StaticRegisterNativesAAppVoiceExperience()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAppVoiceExperience);
	UClass* Z_Construct_UClass_AAppVoiceExperience_NoRegister()
	{
		return AAppVoiceExperience::StaticClass();
	}
	struct Z_Construct_UClass_AAppVoiceExperience_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WitVoiceService_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WitVoiceService;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVoiceService_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformVoiceService;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAppVoiceExperience_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVoiceExperience,
		(UObject* (*)())Z_Construct_UPackage__Script_VoiceSDK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAppVoiceExperience_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Top level actor for App voice interactions. You can create a blueprint class off this actor and add whatever intent and entity matchers\n * you need to implement your voice experience\n */" },
		{ "IncludePath", "Voice/AppVoiceExperience.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Voice/AppVoiceExperience.h" },
		{ "ToolTip", "Top level actor for App voice interactions. You can create a blueprint class off this actor and add whatever intent and entity matchers\nyou need to implement your voice experience" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAppVoiceExperience_Statics::NewProp_WitVoiceService_MetaData[] = {
		{ "Comment", "/**\n\x09 * The wit voice service\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Voice/AppVoiceExperience.h" },
		{ "ToolTip", "The wit voice service" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAppVoiceExperience_Statics::NewProp_WitVoiceService = { "WitVoiceService", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAppVoiceExperience, WitVoiceService), Z_Construct_UClass_UWitVoiceService_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAppVoiceExperience_Statics::NewProp_WitVoiceService_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAppVoiceExperience_Statics::NewProp_WitVoiceService_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAppVoiceExperience_Statics::NewProp_PlatformVoiceService_MetaData[] = {
		{ "Comment", "/**\n\x09 * The platform voice service\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Voice/AppVoiceExperience.h" },
		{ "ToolTip", "The platform voice service" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAppVoiceExperience_Statics::NewProp_PlatformVoiceService = { "PlatformVoiceService", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAppVoiceExperience, PlatformVoiceService), Z_Construct_UClass_UPlatformVoiceService_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAppVoiceExperience_Statics::NewProp_PlatformVoiceService_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAppVoiceExperience_Statics::NewProp_PlatformVoiceService_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAppVoiceExperience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAppVoiceExperience_Statics::NewProp_WitVoiceService,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAppVoiceExperience_Statics::NewProp_PlatformVoiceService,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAppVoiceExperience_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAppVoiceExperience>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAppVoiceExperience_Statics::ClassParams = {
		&AAppVoiceExperience::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAppVoiceExperience_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAppVoiceExperience_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAppVoiceExperience_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAppVoiceExperience_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAppVoiceExperience()
	{
		if (!Z_Registration_Info_UClass_AAppVoiceExperience.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAppVoiceExperience.OuterSingleton, Z_Construct_UClass_AAppVoiceExperience_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAppVoiceExperience.OuterSingleton;
	}
	template<> VOICESDK_API UClass* StaticClass<AAppVoiceExperience>()
	{
		return AAppVoiceExperience::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAppVoiceExperience);
	AAppVoiceExperience::~AAppVoiceExperience() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_VoiceSDK_Public_Voice_AppVoiceExperience_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_VoiceSDK_Public_Voice_AppVoiceExperience_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAppVoiceExperience, AAppVoiceExperience::StaticClass, TEXT("AAppVoiceExperience"), &Z_Registration_Info_UClass_AAppVoiceExperience, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAppVoiceExperience), 4068834185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_VoiceSDK_Public_Voice_AppVoiceExperience_h_3250957308(TEXT("/Script/VoiceSDK"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_VoiceSDK_Public_Voice_AppVoiceExperience_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_VoiceSDK_Public_Voice_AppVoiceExperience_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
