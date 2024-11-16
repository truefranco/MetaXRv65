// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voice/Configuration/VoiceConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceConfiguration() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UEnum* Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceConfiguration();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoiceCaptureEmulationMode;
	static UEnum* EVoiceCaptureEmulationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoiceCaptureEmulationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoiceCaptureEmulationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("EVoiceCaptureEmulationMode"));
		}
		return Z_Registration_Info_UEnum_EVoiceCaptureEmulationMode.OuterSingleton;
	}
	template<> WIT_API UEnum* StaticEnum<EVoiceCaptureEmulationMode>()
	{
		return EVoiceCaptureEmulationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode_Statics::Enumerators[] = {
		{ "EVoiceCaptureEmulationMode::None", (int64)EVoiceCaptureEmulationMode::None },
		{ "EVoiceCaptureEmulationMode::AlwaysUseSoundWave", (int64)EVoiceCaptureEmulationMode::AlwaysUseSoundWave },
		{ "EVoiceCaptureEmulationMode::AlwaysUseTTS", (int64)EVoiceCaptureEmulationMode::AlwaysUseTTS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysUseSoundWave.Name", "EVoiceCaptureEmulationMode::AlwaysUseSoundWave" },
		{ "AlwaysUseTTS.Comment", "//TODO disable this for UE5\n" },
		{ "AlwaysUseTTS.Name", "EVoiceCaptureEmulationMode::AlwaysUseTTS" },
		{ "AlwaysUseTTS.ToolTip", "TODO disable this for UE5" },
		{ "Comment", "/**\n * Emulation modes\n */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "None.Name", "EVoiceCaptureEmulationMode::None" },
		{ "ToolTip", "Emulation modes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		"EVoiceCaptureEmulationMode",
		"EVoiceCaptureEmulationMode",
		Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode()
	{
		if (!Z_Registration_Info_UEnum_EVoiceCaptureEmulationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoiceCaptureEmulationMode.InnerSingleton, Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoiceCaptureEmulationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoiceConfiguration;
class UScriptStruct* FVoiceConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoiceConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceConfiguration, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("VoiceConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_VoiceConfiguration.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FVoiceConfiguration>()
{
	return FVoiceConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoiceConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MicNoiseThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MicNoiseThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WakeMinimumVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WakeMinimumVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WakeMinimumTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WakeMinimumTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepAliveMinimumVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KeepAliveMinimumVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepAliveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KeepAliveTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRecordingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRecordingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWavFileRecordingEnabled_MetaData[];
#endif
		static void NewProp_bIsWavFileRecordingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWavFileRecordingEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EmulationCaptureMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmulationCaptureMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EmulationCaptureMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmulationCaptureSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmulationCaptureSoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TtsExperienceTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TtsExperienceTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Voice configuration for /speech endpoint of Wit.ai.\n */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "ToolTip", "Voice configuration for /speech endpoint of Wit.ai." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_MicNoiseThreshold_MetaData[] = {
		{ "Category", "Activation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The mic noise threshold\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "ToolTip", "The mic noise threshold" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_MicNoiseThreshold = { "MicNoiseThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceConfiguration, MicNoiseThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_MicNoiseThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_MicNoiseThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_WakeMinimumVolume_MetaData[] = {
		{ "Category", "Activation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Until we reach this minimum voice volume the data will not start streaming to Wit.ai\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "ToolTip", "Until we reach this minimum voice volume the data will not start streaming to Wit.ai" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_WakeMinimumVolume = { "WakeMinimumVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceConfiguration, WakeMinimumVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_WakeMinimumVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_WakeMinimumVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_WakeMinimumTime_MetaData[] = {
		{ "Category", "Activation" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Until we reach this amount of time the data will not start streaming to Wit.ai\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "ToolTip", "Until we reach this amount of time the data will not start streaming to Wit.ai" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_WakeMinimumTime = { "WakeMinimumTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceConfiguration, WakeMinimumTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_WakeMinimumTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_WakeMinimumTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_KeepAliveMinimumVolume_MetaData[] = {
		{ "Category", "Keep Alive" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The minimum voice volume for keeping the voice input active\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "ToolTip", "The minimum voice volume for keeping the voice input active" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_KeepAliveMinimumVolume = { "KeepAliveMinimumVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceConfiguration, KeepAliveMinimumVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_KeepAliveMinimumVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_KeepAliveMinimumVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_KeepAliveTime_MetaData[] = {
		{ "Category", "Keep Alive" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * If we don't receive any voice input for this amount of time when we automatically deactivate the voice input \n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "ToolTip", "If we don't receive any voice input for this amount of time when we automatically deactivate the voice input" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_KeepAliveTime = { "KeepAliveTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceConfiguration, KeepAliveTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_KeepAliveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_KeepAliveTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_MaximumRecordingTime_MetaData[] = {
		{ "Category", "Keep Alive" },
		{ "ClampMax", "300" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * If the voice input goes on longer than this then we automatically deactivate.\n\x09 * 20 seconds is the hard limit for the /speech endpoint\n\x09 * 300 seconds is the hard limit for the /dictation endpoint\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "ToolTip", "If the voice input goes on longer than this then we automatically deactivate.\n20 seconds is the hard limit for the /speech endpoint\n300 seconds is the hard limit for the /dictation endpoint" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_MaximumRecordingTime = { "MaximumRecordingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceConfiguration, MaximumRecordingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_MaximumRecordingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_MaximumRecordingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_bIsWavFileRecordingEnabled_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n\x09 * If set to true this will record the voice input and write it to a named wav file for debugging. The output file will be written to\n\x09 * the project folder's Saved/BouncedWavFiles folder as Wit/RecordedVoiceInput.wav\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "ToolTip", "If set to true this will record the voice input and write it to a named wav file for debugging. The output file will be written to\nthe project folder's Saved/BouncedWavFiles folder as Wit/RecordedVoiceInput.wav" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_bIsWavFileRecordingEnabled_SetBit(void* Obj)
	{
		((FVoiceConfiguration*)Obj)->bIsWavFileRecordingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_bIsWavFileRecordingEnabled = { "bIsWavFileRecordingEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVoiceConfiguration), &Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_bIsWavFileRecordingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_bIsWavFileRecordingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_bIsWavFileRecordingEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureMode_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n\x09 * If set to true this will allow the use of the null voice capture as a fallback if the mic capture cannot be found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "ToolTip", "If set to true this will allow the use of the null voice capture as a fallback if the mic capture cannot be found" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureMode = { "EmulationCaptureMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceConfiguration, EmulationCaptureMode), Z_Construct_UEnum_Wit_EVoiceCaptureEmulationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureMode_MetaData)) }; // 1887667253
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureSoundWave_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n\x09 * If set then specifies the sound wave to use for null voice capture\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "ToolTip", "If set then specifies the sound wave to use for null voice capture" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureSoundWave = { "EmulationCaptureSoundWave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceConfiguration, EmulationCaptureSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureSoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_TtsExperienceTag_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n\x09 * If set then the TtsExperience's response will be used for null voice capture\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Configuration/VoiceConfiguration.h" },
		{ "ToolTip", "If set then the TtsExperience's response will be used for null voice capture" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_TtsExperienceTag = { "TtsExperienceTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoiceConfiguration, TtsExperienceTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_TtsExperienceTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_TtsExperienceTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_MicNoiseThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_WakeMinimumVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_WakeMinimumTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_KeepAliveMinimumVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_KeepAliveTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_MaximumRecordingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_bIsWavFileRecordingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_EmulationCaptureSoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewProp_TtsExperienceTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"VoiceConfiguration",
		sizeof(FVoiceConfiguration),
		alignof(FVoiceConfiguration),
		Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoiceConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_VoiceConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoiceConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoiceConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Configuration_VoiceConfiguration_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Configuration_VoiceConfiguration_h_Statics::EnumInfo[] = {
		{ EVoiceCaptureEmulationMode_StaticEnum, TEXT("EVoiceCaptureEmulationMode"), &Z_Registration_Info_UEnum_EVoiceCaptureEmulationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1887667253U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Configuration_VoiceConfiguration_h_Statics::ScriptStructInfo[] = {
		{ FVoiceConfiguration::StaticStruct, Z_Construct_UScriptStruct_FVoiceConfiguration_Statics::NewStructOps, TEXT("VoiceConfiguration"), &Z_Registration_Info_UScriptStruct_VoiceConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoiceConfiguration), 2144799283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Configuration_VoiceConfiguration_h_3954234986(TEXT("/Script/Wit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Configuration_VoiceConfiguration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Configuration_VoiceConfiguration_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Configuration_VoiceConfiguration_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Configuration_VoiceConfiguration_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
