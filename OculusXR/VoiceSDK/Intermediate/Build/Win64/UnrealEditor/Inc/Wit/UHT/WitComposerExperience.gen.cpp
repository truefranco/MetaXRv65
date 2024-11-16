// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Composer/WitComposerExperience.h"
#include "Composer/Configuration/ComposerConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitComposerExperience() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_AWitComposerExperience();
	WIT_API UClass* Z_Construct_UClass_AWitComposerExperience_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerActionHandler_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerEvents_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerSpeechHandler_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UWitComposerService_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FComposerConfiguration();
// End Cross Module References
	void AWitComposerExperience::StaticRegisterNativesAWitComposerExperience()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWitComposerExperience);
	UClass* Z_Construct_UClass_AWitComposerExperience_NoRegister()
	{
		return AWitComposerExperience::StaticClass();
	}
	struct Z_Construct_UClass_AWitComposerExperience_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeechHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeechHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComposerService_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComposerService;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWitComposerExperience_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitComposerExperience_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Top level actor for Wit composer interactions\n */" },
		{ "IncludePath", "Wit/Composer/WitComposerExperience.h" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerExperience.h" },
		{ "ToolTip", "Top level actor for Wit composer interactions" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "Composer|Configuration" },
		{ "Comment", "/**\n\x09 * The configuration that will be used by composer\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerExperience.h" },
		{ "ToolTip", "The configuration that will be used by composer" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWitComposerExperience, Configuration), Z_Construct_UScriptStruct_FComposerConfiguration, METADATA_PARAMS(Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_Configuration_MetaData)) }; // 2646161497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_EventHandler_MetaData[] = {
		{ "Category", "Composer|Handlers" },
		{ "Comment", "/**\n\x09 * The events used by the composer service\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerExperience.h" },
		{ "ToolTip", "The events used by the composer service" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_EventHandler = { "EventHandler", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWitComposerExperience, EventHandler), Z_Construct_UClass_UComposerEvents_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_EventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_EventHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_ActionHandler_MetaData[] = {
		{ "Category", "Composer|Handlers" },
		{ "Comment", "/**\n\x09 * The action handler used by the composer service\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerExperience.h" },
		{ "ToolTip", "The action handler used by the composer service" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_ActionHandler = { "ActionHandler", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWitComposerExperience, ActionHandler), Z_Construct_UClass_UComposerActionHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_ActionHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_ActionHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_SpeechHandler_MetaData[] = {
		{ "Category", "Composer|Handlers" },
		{ "Comment", "/**\n\x09 * The speech handler user by the composer service\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerExperience.h" },
		{ "ToolTip", "The speech handler user by the composer service" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_SpeechHandler = { "SpeechHandler", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWitComposerExperience, SpeechHandler), Z_Construct_UClass_UComposerSpeechHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_SpeechHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_SpeechHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_ComposerService_MetaData[] = {
		{ "Comment", "/**\n\x09 * The underlying composer service that implements the composer functionality\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerExperience.h" },
		{ "ToolTip", "The underlying composer service that implements the composer functionality" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_ComposerService = { "ComposerService", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWitComposerExperience, ComposerService), Z_Construct_UClass_UWitComposerService_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_ComposerService_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_ComposerService_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWitComposerExperience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_Configuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_EventHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_ActionHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_SpeechHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitComposerExperience_Statics::NewProp_ComposerService,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWitComposerExperience_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWitComposerExperience>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWitComposerExperience_Statics::ClassParams = {
		&AWitComposerExperience::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWitComposerExperience_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWitComposerExperience_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWitComposerExperience_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWitComposerExperience_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWitComposerExperience()
	{
		if (!Z_Registration_Info_UClass_AWitComposerExperience.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWitComposerExperience.OuterSingleton, Z_Construct_UClass_AWitComposerExperience_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWitComposerExperience.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<AWitComposerExperience>()
	{
		return AWitComposerExperience::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWitComposerExperience);
	AWitComposerExperience::~AWitComposerExperience() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Composer_WitComposerExperience_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Composer_WitComposerExperience_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWitComposerExperience, AWitComposerExperience::StaticClass, TEXT("AWitComposerExperience"), &Z_Registration_Info_UClass_AWitComposerExperience, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWitComposerExperience), 455138369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Composer_WitComposerExperience_h_1369610299(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Composer_WitComposerExperience_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Composer_WitComposerExperience_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
