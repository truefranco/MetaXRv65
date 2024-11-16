// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTS/Configuration/TtsConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTtsConfiguration() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UEnum* Z_Construct_UEnum_Wit_ETtsStorageCacheLocation();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FTtsConfiguration();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETtsStorageCacheLocation;
	static UEnum* ETtsStorageCacheLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETtsStorageCacheLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETtsStorageCacheLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Wit_ETtsStorageCacheLocation, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("ETtsStorageCacheLocation"));
		}
		return Z_Registration_Info_UEnum_ETtsStorageCacheLocation.OuterSingleton;
	}
	template<> WIT_API UEnum* StaticEnum<ETtsStorageCacheLocation>()
	{
		return ETtsStorageCacheLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_Wit_ETtsStorageCacheLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Wit_ETtsStorageCacheLocation_Statics::Enumerators[] = {
		{ "ETtsStorageCacheLocation::Default", (int64)ETtsStorageCacheLocation::Default },
		{ "ETtsStorageCacheLocation::None", (int64)ETtsStorageCacheLocation::None },
		{ "ETtsStorageCacheLocation::Content", (int64)ETtsStorageCacheLocation::Content },
		{ "ETtsStorageCacheLocation::Persistent", (int64)ETtsStorageCacheLocation::Persistent },
		{ "ETtsStorageCacheLocation::Temporary", (int64)ETtsStorageCacheLocation::Temporary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Wit_ETtsStorageCacheLocation_Statics::Enum_MetaDataParams[] = {
		{ "Content.Comment", "// Do not cache\n" },
		{ "Content.Name", "ETtsStorageCacheLocation::Content" },
		{ "Content.ToolTip", "Do not cache" },
		{ "Default.Name", "ETtsStorageCacheLocation::Default" },
		{ "ModuleRelativePath", "Public/TTS/Configuration/TtsConfiguration.h" },
		{ "None.Comment", "// Use the default cache location specified in the storage cache\n" },
		{ "None.Name", "ETtsStorageCacheLocation::None" },
		{ "None.ToolTip", "Use the default cache location specified in the storage cache" },
		{ "Persistent.Comment", "// Use the content folder. Use this for clips you want to to package into your app\n" },
		{ "Persistent.Name", "ETtsStorageCacheLocation::Persistent" },
		{ "Persistent.ToolTip", "Use the content folder. Use this for clips you want to to package into your app" },
		{ "Temporary.Comment", "// Use the persistent app folder. Use this for clips you want to persist across runs of your app\n" },
		{ "Temporary.Name", "ETtsStorageCacheLocation::Temporary" },
		{ "Temporary.ToolTip", "Use the persistent app folder. Use this for clips you want to persist across runs of your app" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Wit_ETtsStorageCacheLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		"ETtsStorageCacheLocation",
		"ETtsStorageCacheLocation",
		Z_Construct_UEnum_Wit_ETtsStorageCacheLocation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_ETtsStorageCacheLocation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Wit_ETtsStorageCacheLocation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Wit_ETtsStorageCacheLocation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Wit_ETtsStorageCacheLocation()
	{
		if (!Z_Registration_Info_UEnum_ETtsStorageCacheLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETtsStorageCacheLocation.InnerSingleton, Z_Construct_UEnum_Wit_ETtsStorageCacheLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETtsStorageCacheLocation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TtsConfiguration;
class UScriptStruct* FTtsConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TtsConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TtsConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTtsConfiguration, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("TtsConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_TtsConfiguration.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FTtsConfiguration>()
{
	return FTtsConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTtsConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Voice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Voice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StorageCacheLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StorageCacheLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StorageCacheLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTtsConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Voice configuration for /synthesize endpoint of Wit.ai.\n */" },
		{ "ModuleRelativePath", "Public/TTS/Configuration/TtsConfiguration.h" },
		{ "ToolTip", "Voice configuration for /synthesize endpoint of Wit.ai." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTtsConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/** The text we want to convert */" },
		{ "ModuleRelativePath", "Public/TTS/Configuration/TtsConfiguration.h" },
		{ "ToolTip", "The text we want to convert" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTtsConfiguration, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Voice_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/** The voice name that should be used */" },
		{ "ModuleRelativePath", "Public/TTS/Configuration/TtsConfiguration.h" },
		{ "ToolTip", "The voice name that should be used" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTtsConfiguration, Voice), METADATA_PARAMS(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Voice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Voice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Style_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/** The voice style that should be used */" },
		{ "ModuleRelativePath", "Public/TTS/Configuration/TtsConfiguration.h" },
		{ "ToolTip", "The voice style that should be used" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTtsConfiguration, Style), METADATA_PARAMS(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "TTS" },
		{ "ClampMax", "200" },
		{ "ClampMin", "50" },
		{ "Comment", "/** How fast the voice will be spoken with 50 being slow, 200 fast. Default is 100 */" },
		{ "ModuleRelativePath", "Public/TTS/Configuration/TtsConfiguration.h" },
		{ "ToolTip", "How fast the voice will be spoken with 50 being slow, 200 fast. Default is 100" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTtsConfiguration, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "TTS" },
		{ "ClampMax", "400" },
		{ "ClampMin", "25" },
		{ "Comment", "/** Pitch of the voice. This can range between 25% and 400% */" },
		{ "ModuleRelativePath", "Public/TTS/Configuration/TtsConfiguration.h" },
		{ "ToolTip", "Pitch of the voice. This can range between 25% and 400%" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTtsConfiguration, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "TTS" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Gain of the voice. This can range between 0% and 100% */" },
		{ "ModuleRelativePath", "Public/TTS/Configuration/TtsConfiguration.h" },
		{ "ToolTip", "Gain of the voice. This can range between 0% and 100%" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTtsConfiguration, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Gain_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_StorageCacheLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_StorageCacheLocation_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/** If set to default this uses the globally specified cache location. Any other value acts as an override */" },
		{ "ModuleRelativePath", "Public/TTS/Configuration/TtsConfiguration.h" },
		{ "ToolTip", "If set to default this uses the globally specified cache location. Any other value acts as an override" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_StorageCacheLocation = { "StorageCacheLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTtsConfiguration, StorageCacheLocation), Z_Construct_UEnum_Wit_ETtsStorageCacheLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_StorageCacheLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_StorageCacheLocation_MetaData)) }; // 1614051526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTtsConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Voice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_StorageCacheLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewProp_StorageCacheLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTtsConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"TtsConfiguration",
		sizeof(FTtsConfiguration),
		alignof(FTtsConfiguration),
		Z_Construct_UScriptStruct_FTtsConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTtsConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTtsConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_TtsConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TtsConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FTtsConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TtsConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsConfiguration_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsConfiguration_h_Statics::EnumInfo[] = {
		{ ETtsStorageCacheLocation_StaticEnum, TEXT("ETtsStorageCacheLocation"), &Z_Registration_Info_UEnum_ETtsStorageCacheLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1614051526U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsConfiguration_h_Statics::ScriptStructInfo[] = {
		{ FTtsConfiguration::StaticStruct, Z_Construct_UScriptStruct_FTtsConfiguration_Statics::NewStructOps, TEXT("TtsConfiguration"), &Z_Registration_Info_UScriptStruct_TtsConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTtsConfiguration), 2639599679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsConfiguration_h_2128327933(TEXT("/Script/Wit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsConfiguration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsConfiguration_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsConfiguration_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Configuration_TtsConfiguration_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
