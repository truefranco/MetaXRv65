// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Configuration/WitAppConfiguration.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitAppConfiguration() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitAppConfiguration();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitAppDataConfiguration();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitAppDefinition();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitEntityDefinition();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitIntentDefinition();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitTraitDefinition();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitVoiceDefinition();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitAppAdvancedConfiguration;
class UScriptStruct* FWitAppAdvancedConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitAppAdvancedConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitAppAdvancedConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitAppAdvancedConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_WitAppAdvancedConfiguration.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitAppAdvancedConfiguration>()
{
	return FWitAppAdvancedConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlatformIntegrationEnabled_MetaData[];
#endif
		static void NewProp_bIsPlatformIntegrationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlatformIntegrationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomHttpTimeout_MetaData[];
#endif
		static void NewProp_bIsCustomHttpTimeout_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomHttpTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HttpTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HttpTimeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wit advanced application configuration\n */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "Wit advanced application configuration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitAppAdvancedConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsPlatformIntegrationEnabled_MetaData[] = {
		{ "Category", "Platform Integration" },
		{ "Comment", "/** Should we use platform integration? */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "Should we use platform integration?" },
	};
#endif
	void Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsPlatformIntegrationEnabled_SetBit(void* Obj)
	{
		((FWitAppAdvancedConfiguration*)Obj)->bIsPlatformIntegrationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsPlatformIntegrationEnabled = { "bIsPlatformIntegrationEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWitAppAdvancedConfiguration), &Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsPlatformIntegrationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsPlatformIntegrationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsPlatformIntegrationEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "Request" },
		{ "Comment", "/** Specifies the base URL to use when making requests to Wit.ai. If left empty this will use the default base URL */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "Specifies the base URL to use when making requests to Wit.ai. If left empty this will use the default base URL" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppAdvancedConfiguration, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_ApiVersion_MetaData[] = {
		{ "Category", "Request Overrides" },
		{ "Comment", "/** The optional API version to use when making requests to Wit.ai */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "The optional API version to use when making requests to Wit.ai" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_ApiVersion = { "ApiVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppAdvancedConfiguration, ApiVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_ApiVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_ApiVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsCustomHttpTimeout_MetaData[] = {
		{ "Category", "Request Overrides" },
		{ "Comment", "/** Should we use a custom HTTP request timeout? */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "Should we use a custom HTTP request timeout?" },
	};
#endif
	void Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsCustomHttpTimeout_SetBit(void* Obj)
	{
		((FWitAppAdvancedConfiguration*)Obj)->bIsCustomHttpTimeout = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsCustomHttpTimeout = { "bIsCustomHttpTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWitAppAdvancedConfiguration), &Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsCustomHttpTimeout_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsCustomHttpTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsCustomHttpTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_HttpTimeout_MetaData[] = {
		{ "Category", "Request Overrides" },
		{ "ClampMax", "180" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Custom request timeout in seconds. This is only used if bIsCustomHttpTimeout is set to true */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "Custom request timeout in seconds. This is only used if bIsCustomHttpTimeout is set to true" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_HttpTimeout = { "HttpTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppAdvancedConfiguration, HttpTimeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_HttpTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_HttpTimeout_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsPlatformIntegrationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_ApiVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_bIsCustomHttpTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewProp_HttpTimeout,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitAppAdvancedConfiguration",
		sizeof(FWitAppAdvancedConfiguration),
		alignof(FWitAppAdvancedConfiguration),
		Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_WitAppAdvancedConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitAppAdvancedConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitAppAdvancedConfiguration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitAppDataConfiguration;
class UScriptStruct* FWitAppDataConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitAppDataConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitAppDataConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitAppDataConfiguration, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitAppDataConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_WitAppDataConfiguration.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitAppDataConfiguration>()
{
	return FWitAppDataConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Application_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Application;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Intents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Traits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Traits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Traits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Voices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Voices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Voices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wit application data configuration. This contains all the data such as entities and intents that have been defined for the application\n */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "Wit application data configuration. This contains all the data such as entities and intents that have been defined for the application" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitAppDataConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Application_MetaData[] = {
		{ "Category", "Application" },
		{ "Comment", "/** Basic application data */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "Basic application data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Application = { "Application", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppDataConfiguration, Application), Z_Construct_UScriptStruct_FWitAppDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Application_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Application_MetaData)) }; // 1226559691
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Intents_Inner = { "Intents", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitIntentDefinition, METADATA_PARAMS(nullptr, 0) }; // 830516219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Intents_MetaData[] = {
		{ "Category", "Intents" },
		{ "Comment", "/** List of intents available in the app */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "List of intents available in the app" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Intents = { "Intents", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppDataConfiguration, Intents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Intents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Intents_MetaData)) }; // 830516219
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitEntityDefinition, METADATA_PARAMS(nullptr, 0) }; // 4037537821
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Entities_MetaData[] = {
		{ "Category", "Entities" },
		{ "Comment", "/** List of entities available in the app */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "List of entities available in the app" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppDataConfiguration, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Entities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Entities_MetaData)) }; // 4037537821
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Traits_Inner = { "Traits", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitTraitDefinition, METADATA_PARAMS(nullptr, 0) }; // 3507528680
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Traits_MetaData[] = {
		{ "Category", "Traits" },
		{ "Comment", "/** List of traits available in the app */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "List of traits available in the app" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Traits = { "Traits", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppDataConfiguration, Traits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Traits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Traits_MetaData)) }; // 3507528680
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Voices_Inner = { "Voices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitVoiceDefinition, METADATA_PARAMS(nullptr, 0) }; // 2598368557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Voices_MetaData[] = {
		{ "Category", "Voices" },
		{ "Comment", "/** List of voices available in the app */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "List of voices available in the app" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Voices = { "Voices", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppDataConfiguration, Voices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Voices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Voices_MetaData)) }; // 2598368557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Application,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Intents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Intents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Entities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Entities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Traits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Traits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Voices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewProp_Voices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitAppDataConfiguration",
		sizeof(FWitAppDataConfiguration),
		alignof(FWitAppDataConfiguration),
		Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitAppDataConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_WitAppDataConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitAppDataConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitAppDataConfiguration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitAppConfiguration;
class UScriptStruct* FWitAppConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitAppConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitAppConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitAppConfiguration, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitAppConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_WitAppConfiguration.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitAppConfiguration>()
{
	return FWitAppConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitAppConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerAccessToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAccessToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientAccessToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientAccessToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Advanced_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Advanced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wit general application configuration\n */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "Wit general application configuration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitAppConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_ServerAccessToken_MetaData[] = {
		{ "Category", "Token" },
		{ "Comment", "/** The server access token to use when calling Wit. This can be obtained from your App setup on Wit.ai */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "The server access token to use when calling Wit. This can be obtained from your App setup on Wit.ai" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_ServerAccessToken = { "ServerAccessToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppConfiguration, ServerAccessToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_ServerAccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_ServerAccessToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_ClientAccessToken_MetaData[] = {
		{ "Category", "Token" },
		{ "Comment", "/** The client access token to use when calling Wit. This can be obtained from your App setup on Wit.ai */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "The client access token to use when calling Wit. This can be obtained from your App setup on Wit.ai" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_ClientAccessToken = { "ClientAccessToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppConfiguration, ClientAccessToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_ClientAccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_ClientAccessToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_Advanced_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Advanced configuration */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "Advanced configuration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_Advanced = { "Advanced", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppConfiguration, Advanced), Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_Advanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_Advanced_MetaData)) }; // 4208105986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** Data configuration */" },
		{ "ModuleRelativePath", "Public/Wit/Configuration/WitAppConfiguration.h" },
		{ "ToolTip", "Data configuration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppConfiguration, Data), Z_Construct_UScriptStruct_FWitAppDataConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_Data_MetaData)) }; // 1726032294
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_ServerAccessToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_ClientAccessToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_Advanced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitAppConfiguration",
		sizeof(FWitAppConfiguration),
		alignof(FWitAppConfiguration),
		Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitAppConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_WitAppConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitAppConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitAppConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Configuration_WitAppConfiguration_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Configuration_WitAppConfiguration_h_Statics::ScriptStructInfo[] = {
		{ FWitAppAdvancedConfiguration::StaticStruct, Z_Construct_UScriptStruct_FWitAppAdvancedConfiguration_Statics::NewStructOps, TEXT("WitAppAdvancedConfiguration"), &Z_Registration_Info_UScriptStruct_WitAppAdvancedConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitAppAdvancedConfiguration), 4208105986U) },
		{ FWitAppDataConfiguration::StaticStruct, Z_Construct_UScriptStruct_FWitAppDataConfiguration_Statics::NewStructOps, TEXT("WitAppDataConfiguration"), &Z_Registration_Info_UScriptStruct_WitAppDataConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitAppDataConfiguration), 1726032294U) },
		{ FWitAppConfiguration::StaticStruct, Z_Construct_UScriptStruct_FWitAppConfiguration_Statics::NewStructOps, TEXT("WitAppConfiguration"), &Z_Registration_Info_UScriptStruct_WitAppConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitAppConfiguration), 3839312586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Configuration_WitAppConfiguration_h_1511593671(TEXT("/Script/Wit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Configuration_WitAppConfiguration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Configuration_WitAppConfiguration_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
