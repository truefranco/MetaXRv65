// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composer/Configuration/ComposerConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposerConfiguration() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FComposerConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComposerConfiguration;
class UScriptStruct* FComposerConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComposerConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComposerConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComposerConfiguration, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("ComposerConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_ComposerConfiguration.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FComposerConfiguration>()
{
	return FComposerConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComposerConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceExperienceTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VoiceExperienceTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRouteVoiceServiceToComposer_MetaData[];
#endif
		static void NewProp_bShouldRouteVoiceServiceToComposer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRouteVoiceServiceToComposer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoActivateInput_MetaData[];
#endif
		static void NewProp_bShouldAutoActivateInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoActivateInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoEndSession_MetaData[];
#endif
		static void NewProp_bShouldAutoEndSession_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoEndSession;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoClearContextMap_MetaData[];
#endif
		static void NewProp_bShouldAutoClearContextMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoClearContextMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinueDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContinueDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposerConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Composer configuration for Wit.ai.\n */" },
		{ "ModuleRelativePath", "Public/Composer/Configuration/ComposerConfiguration.h" },
		{ "ToolTip", "Composer configuration for Wit.ai." },
	};
#endif
	void* Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComposerConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_VoiceExperienceTag_MetaData[] = {
		{ "Category", "Composer|Configuration" },
		{ "Comment", "/** The tag of the voice experience to use for voice activation */" },
		{ "ModuleRelativePath", "Public/Composer/Configuration/ComposerConfiguration.h" },
		{ "ToolTip", "The tag of the voice experience to use for voice activation" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_VoiceExperienceTag = { "VoiceExperienceTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComposerConfiguration, VoiceExperienceTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_VoiceExperienceTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_VoiceExperienceTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldRouteVoiceServiceToComposer_MetaData[] = {
		{ "Category", "Composer|Configuration" },
		{ "Comment", "/** Should we redirect the voice service inputs and outputs to composer? */" },
		{ "ModuleRelativePath", "Public/Composer/Configuration/ComposerConfiguration.h" },
		{ "ToolTip", "Should we redirect the voice service inputs and outputs to composer?" },
	};
#endif
	void Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldRouteVoiceServiceToComposer_SetBit(void* Obj)
	{
		((FComposerConfiguration*)Obj)->bShouldRouteVoiceServiceToComposer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldRouteVoiceServiceToComposer = { "bShouldRouteVoiceServiceToComposer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FComposerConfiguration), &Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldRouteVoiceServiceToComposer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldRouteVoiceServiceToComposer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldRouteVoiceServiceToComposer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoActivateInput_MetaData[] = {
		{ "Category", "Composer|Configuration" },
		{ "Comment", "/** Should input be auto-activated when it is required? */" },
		{ "ModuleRelativePath", "Public/Composer/Configuration/ComposerConfiguration.h" },
		{ "ToolTip", "Should input be auto-activated when it is required?" },
	};
#endif
	void Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoActivateInput_SetBit(void* Obj)
	{
		((FComposerConfiguration*)Obj)->bShouldAutoActivateInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoActivateInput = { "bShouldAutoActivateInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FComposerConfiguration), &Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoActivateInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoActivateInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoActivateInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoEndSession_MetaData[] = {
		{ "Category", "Composer|Configuration" },
		{ "Comment", "/** Should the session be automatically ended when the composer graph ends? */" },
		{ "ModuleRelativePath", "Public/Composer/Configuration/ComposerConfiguration.h" },
		{ "ToolTip", "Should the session be automatically ended when the composer graph ends?" },
	};
#endif
	void Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoEndSession_SetBit(void* Obj)
	{
		((FComposerConfiguration*)Obj)->bShouldAutoEndSession = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoEndSession = { "bShouldAutoEndSession", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FComposerConfiguration), &Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoEndSession_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoEndSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoEndSession_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoClearContextMap_MetaData[] = {
		{ "Category", "Composer|Configuration" },
		{ "Comment", "/** Should the context map be automatically cleared when the composer graph ends? */" },
		{ "ModuleRelativePath", "Public/Composer/Configuration/ComposerConfiguration.h" },
		{ "ToolTip", "Should the context map be automatically cleared when the composer graph ends?" },
	};
#endif
	void Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoClearContextMap_SetBit(void* Obj)
	{
		((FComposerConfiguration*)Obj)->bShouldAutoClearContextMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoClearContextMap = { "bShouldAutoClearContextMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FComposerConfiguration), &Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoClearContextMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoClearContextMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoClearContextMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_ContinueDelay_MetaData[] = {
		{ "Category", "Composer|Configuration" },
		{ "Comment", "/** Delay from action completion and response to listen for graph continuation */" },
		{ "ModuleRelativePath", "Public/Composer/Configuration/ComposerConfiguration.h" },
		{ "ToolTip", "Delay from action completion and response to listen for graph continuation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_ContinueDelay = { "ContinueDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComposerConfiguration, ContinueDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_ContinueDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_ContinueDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComposerConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_VoiceExperienceTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldRouteVoiceServiceToComposer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoActivateInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoEndSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_bShouldAutoClearContextMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewProp_ContinueDelay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComposerConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"ComposerConfiguration",
		sizeof(FComposerConfiguration),
		alignof(FComposerConfiguration),
		Z_Construct_UScriptStruct_FComposerConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComposerConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComposerConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_ComposerConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComposerConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FComposerConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComposerConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Configuration_ComposerConfiguration_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Configuration_ComposerConfiguration_h_Statics::ScriptStructInfo[] = {
		{ FComposerConfiguration::StaticStruct, Z_Construct_UScriptStruct_FComposerConfiguration_Statics::NewStructOps, TEXT("ComposerConfiguration"), &Z_Registration_Info_UScriptStruct_ComposerConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComposerConfiguration), 2646161497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Configuration_ComposerConfiguration_h_2109241263(TEXT("/Script/Wit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Configuration_ComposerConfiguration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Configuration_ComposerConfiguration_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
