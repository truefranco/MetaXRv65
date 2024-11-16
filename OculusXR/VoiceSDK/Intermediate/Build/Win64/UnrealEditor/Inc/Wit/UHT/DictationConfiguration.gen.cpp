// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dictation/Configuration/DictationConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDictationConfiguration() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FDictationConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DictationConfiguration;
class UScriptStruct* FDictationConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DictationConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DictationConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDictationConfiguration, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("DictationConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_DictationConfiguration.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FDictationConfiguration>()
{
	return FDictationConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDictationConfiguration_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoActivateInput_MetaData[];
#endif
		static void NewProp_bShouldAutoActivateInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoActivateInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRecordingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRecordingTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDictationConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dictation configuration for Wit.ai.\n */" },
		{ "ModuleRelativePath", "Public/Dictation/Configuration/DictationConfiguration.h" },
		{ "ToolTip", "Dictation configuration for Wit.ai." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDictationConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_VoiceExperienceTag_MetaData[] = {
		{ "Category", "Dictation|Configuration" },
		{ "Comment", "/** The tag of the voice experience to use for dictation activation */" },
		{ "ModuleRelativePath", "Public/Dictation/Configuration/DictationConfiguration.h" },
		{ "ToolTip", "The tag of the voice experience to use for dictation activation" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_VoiceExperienceTag = { "VoiceExperienceTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDictationConfiguration, VoiceExperienceTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_VoiceExperienceTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_VoiceExperienceTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_bShouldAutoActivateInput_MetaData[] = {
		{ "Category", "Dictation|Configuration" },
		{ "Comment", "/** Whether we should auto-activate voice input again on completion */" },
		{ "ModuleRelativePath", "Public/Dictation/Configuration/DictationConfiguration.h" },
		{ "ToolTip", "Whether we should auto-activate voice input again on completion" },
	};
#endif
	void Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_bShouldAutoActivateInput_SetBit(void* Obj)
	{
		((FDictationConfiguration*)Obj)->bShouldAutoActivateInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_bShouldAutoActivateInput = { "bShouldAutoActivateInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDictationConfiguration), &Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_bShouldAutoActivateInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_bShouldAutoActivateInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_bShouldAutoActivateInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_MaximumRecordingTime_MetaData[] = {
		{ "Category", "Dictation|Configuration" },
		{ "ClampMin", "60" },
		{ "Comment", "/** Maximum duration in seconds that we should continue dictation */" },
		{ "ModuleRelativePath", "Public/Dictation/Configuration/DictationConfiguration.h" },
		{ "ToolTip", "Maximum duration in seconds that we should continue dictation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_MaximumRecordingTime = { "MaximumRecordingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDictationConfiguration, MaximumRecordingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_MaximumRecordingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_MaximumRecordingTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDictationConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_VoiceExperienceTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_bShouldAutoActivateInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewProp_MaximumRecordingTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDictationConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"DictationConfiguration",
		sizeof(FDictationConfiguration),
		alignof(FDictationConfiguration),
		Z_Construct_UScriptStruct_FDictationConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDictationConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDictationConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDictationConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDictationConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_DictationConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DictationConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FDictationConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DictationConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Configuration_DictationConfiguration_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Configuration_DictationConfiguration_h_Statics::ScriptStructInfo[] = {
		{ FDictationConfiguration::StaticStruct, Z_Construct_UScriptStruct_FDictationConfiguration_Statics::NewStructOps, TEXT("DictationConfiguration"), &Z_Registration_Info_UScriptStruct_DictationConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDictationConfiguration), 3114918706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Configuration_DictationConfiguration_h_2080568981(TEXT("/Script/Wit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Configuration_DictationConfiguration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Configuration_DictationConfiguration_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
