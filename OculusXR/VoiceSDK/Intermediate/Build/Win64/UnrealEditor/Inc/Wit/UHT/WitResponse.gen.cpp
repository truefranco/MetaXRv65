// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitResponse() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitAppDefinition();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitComposerResponse();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitEntities();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitEntity();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitEntityDefinition();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitEntityInterval();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitEntityNormalized();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitEntityShortDefinition();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitEntityValue();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitIntent();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitIntentDefinition();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitResponse();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitTrait();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitTraitDefinition();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitTraitValueDefinition();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitVoiceDefinition();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitVoicesResponse();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitIntent;
class UScriptStruct* FWitIntent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitIntent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitIntent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitIntent, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitIntent"));
	}
	return Z_Registration_Info_UScriptStruct_WitIntent.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitIntent>()
{
	return FWitIntent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitIntent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitIntent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON intent object used by Wit.ai. See the Wit.ai\n * documentation for the meaning of each specific field.\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON intent object used by Wit.ai. See the Wit.ai\ndocumentation for the meaning of each specific field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitIntent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitIntent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitIntent, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitIntent, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitIntent, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Confidence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitIntent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitIntent_Statics::NewProp_Confidence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitIntent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitIntent",
		sizeof(FWitIntent),
		alignof(FWitIntent),
		Z_Construct_UScriptStruct_FWitIntent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitIntent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitIntent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitIntent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitIntent()
	{
		if (!Z_Registration_Info_UScriptStruct_WitIntent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitIntent.InnerSingleton, Z_Construct_UScriptStruct_FWitIntent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitIntent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitEntityInterval;
class UScriptStruct* FWitEntityInterval::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitEntityInterval.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitEntityInterval.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitEntityInterval, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitEntityInterval"));
	}
	return Z_Registration_Info_UScriptStruct_WitEntityInterval.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitEntityInterval>()
{
	return FWitEntityInterval::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitEntityInterval_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Unit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Grain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Product_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Product;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityInterval_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON entity interval object used by Wit.ai. See the Wit.ai\n * documentation for the meaning of each specific field.\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON entity interval object used by Wit.ai. See the Wit.ai\ndocumentation for the meaning of each specific field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitEntityInterval>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityInterval, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Unit_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityInterval, Unit), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Unit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Grain_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Grain = { "Grain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityInterval, Grain), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Grain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Grain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Product_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Product = { "Product", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityInterval, Product), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Product_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Product_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitEntityInterval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Grain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewProp_Product,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitEntityInterval_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitEntityInterval",
		sizeof(FWitEntityInterval),
		alignof(FWitEntityInterval),
		Z_Construct_UScriptStruct_FWitEntityInterval_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityInterval_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityInterval_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityInterval_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitEntityInterval()
	{
		if (!Z_Registration_Info_UScriptStruct_WitEntityInterval.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitEntityInterval.InnerSingleton, Z_Construct_UScriptStruct_FWitEntityInterval_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitEntityInterval.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitEntityNormalized;
class UScriptStruct* FWitEntityNormalized::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitEntityNormalized.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitEntityNormalized.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitEntityNormalized, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitEntityNormalized"));
	}
	return Z_Registration_Info_UScriptStruct_WitEntityNormalized.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitEntityNormalized>()
{
	return FWitEntityNormalized::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitEntityNormalized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON entity normalized object used by Wit.ai. See the Wit.ai\n * documentation for the meaning of each specific field.\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON entity normalized object used by Wit.ai. See the Wit.ai\ndocumentation for the meaning of each specific field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitEntityNormalized>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityNormalized, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewProp_Unit_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityNormalized, Unit), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewProp_Unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewProp_Unit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewProp_Unit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitEntityNormalized",
		sizeof(FWitEntityNormalized),
		alignof(FWitEntityNormalized),
		Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitEntityNormalized()
	{
		if (!Z_Registration_Info_UScriptStruct_WitEntityNormalized.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitEntityNormalized.InnerSingleton, Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitEntityNormalized.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitEntityValue;
class UScriptStruct* FWitEntityValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitEntityValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitEntityValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitEntityValue, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitEntityValue"));
	}
	return Z_Registration_Info_UScriptStruct_WitEntityValue.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitEntityValue>()
{
	return FWitEntityValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitEntityValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Grain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_To;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON entity value object used by Wit.ai. See the Wit.ai\n * documentation for the meaning of each specific field.\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON entity value object used by Wit.ai. See the Wit.ai\ndocumentation for the meaning of each specific field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitEntityValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityValue, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Grain_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Grain = { "Grain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityValue, Grain), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Grain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Grain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_From_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityValue, From), Z_Construct_UScriptStruct_FWitEntityInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_From_MetaData)) }; // 2246195683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_To_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityValue, To), Z_Construct_UScriptStruct_FWitEntityInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_To_MetaData)) }; // 2246195683
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitEntityValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_Grain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewProp_To,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitEntityValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitEntityValue",
		sizeof(FWitEntityValue),
		alignof(FWitEntityValue),
		Z_Construct_UScriptStruct_FWitEntityValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitEntityValue()
	{
		if (!Z_Registration_Info_UScriptStruct_WitEntityValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitEntityValue.InnerSingleton, Z_Construct_UScriptStruct_FWitEntityValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitEntityValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitEntity;
class UScriptStruct* FWitEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitEntity, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitEntity"));
	}
	return Z_Registration_Info_UScriptStruct_WitEntity.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitEntity>()
{
	return FWitEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Unit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Grain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_To;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normalized_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normalized;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON entity object used by Wit.ai. See the Wit.ai\n * documentation for the meaning of each specific field.\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON entity object used by Wit.ai. See the Wit.ai\ndocumentation for the meaning of each specific field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitEntity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Role), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Role_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Body), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Confidence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Unit_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Unit), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Unit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Grain_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Grain = { "Grain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Grain), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Grain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Grain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_End_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, End), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_From_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, From), Z_Construct_UScriptStruct_FWitEntityInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_From_MetaData)) }; // 2246195683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_To_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, To), Z_Construct_UScriptStruct_FWitEntityInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_To_MetaData)) }; // 2246195683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Normalized_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Normalized = { "Normalized", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Normalized), Z_Construct_UScriptStruct_FWitEntityNormalized, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Normalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Normalized_MetaData)) }; // 2821481377
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitEntityValue, METADATA_PARAMS(nullptr, 0) }; // 706248041
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntity, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Values_MetaData)) }; // 706248041
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Confidence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Grain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Normalized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntity_Statics::NewProp_Values,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitEntity",
		sizeof(FWitEntity),
		alignof(FWitEntity),
		Z_Construct_UScriptStruct_FWitEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_WitEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitEntity.InnerSingleton, Z_Construct_UScriptStruct_FWitEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitEntity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitTrait;
class UScriptStruct* FWitTrait::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitTrait.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitTrait.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitTrait, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitTrait"));
	}
	return Z_Registration_Info_UScriptStruct_WitTrait.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitTrait>()
{
	return FWitTrait::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitTrait_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTrait_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON trait object used by Wit.ai. See the Wit.ai\n * documentation for the meaning of each specific field.\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON trait object used by Wit.ai. See the Wit.ai\ndocumentation for the meaning of each specific field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitTrait_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitTrait>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitTrait, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitTrait, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitTrait, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Confidence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTrait_Statics::NewProp_Confidence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitTrait_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitTrait",
		sizeof(FWitTrait),
		alignof(FWitTrait),
		Z_Construct_UScriptStruct_FWitTrait_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTrait_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTrait_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTrait_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitTrait()
	{
		if (!Z_Registration_Info_UScriptStruct_WitTrait.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitTrait.InnerSingleton, Z_Construct_UScriptStruct_FWitTrait_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitTrait.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitEntities;
class UScriptStruct* FWitEntities::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitEntities.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitEntities.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitEntities, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitEntities"));
	}
	return Z_Registration_Info_UScriptStruct_WitEntities.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitEntities>()
{
	return FWitEntities::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitEntities_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntities_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitEntities_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitEntities>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntities, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitEntity, METADATA_PARAMS(nullptr, 0) }; // 3633864035
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Entities_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntities, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Entities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Entities_MetaData)) }; // 3633864035
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitEntities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Entities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntities_Statics::NewProp_Entities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitEntities_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitEntities",
		sizeof(FWitEntities),
		alignof(FWitEntities),
		Z_Construct_UScriptStruct_FWitEntities_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntities_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntities_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntities_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitEntities()
	{
		if (!Z_Registration_Info_UScriptStruct_WitEntities.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitEntities.InnerSingleton, Z_Construct_UScriptStruct_FWitEntities_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitEntities.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitResponse;
class UScriptStruct* FWitResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitResponse, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitResponse"));
	}
	return Z_Registration_Info_UScriptStruct_WitResponse.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitResponse>()
{
	return FWitResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Intents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entities_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Entities_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Entities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllEntities_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllEntities_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllEntities_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AllEntities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Traits_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Traits_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Traits_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Traits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Is_Final_MetaData[];
#endif
		static void NewProp_Is_Final_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Is_Final;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the full JSON object used by Wit.ai responses. See the Wit.ai\n * documentation for the meaning of each specific field.\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the full JSON object used by Wit.ai responses. See the Wit.ai\ndocumentation for the meaning of each specific field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitResponse, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Intents_Inner = { "Intents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitIntent, METADATA_PARAMS(nullptr, 0) }; // 3851899989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Intents_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Intents = { "Intents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitResponse, Intents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Intents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Intents_MetaData)) }; // 3851899989
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Entities_ValueProp = { "Entities", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWitEntity, METADATA_PARAMS(nullptr, 0) }; // 3633864035
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Entities_Key_KeyProp = { "Entities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Entities_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/**\n\x09 * Technically, each key can have multi Entities.\n\x09 * But to simplify this, and also because Unreal does not support Nested structure,\n\x09 * The value - FWitEntity only contains the very first Entity.\n\x09 * This works for most of cases.\n\x09 *\n\x09 * If you are looking for all entities, then please check AllEntities. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Technically, each key can have multi Entities.\nBut to simplify this, and also because Unreal does not support Nested structure,\nThe value - FWitEntity only contains the very first Entity.\nThis works for most of cases.\n\nIf you are looking for all entities, then please check AllEntities." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitResponse, Entities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Entities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Entities_MetaData)) }; // 3633864035
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_AllEntities_ValueProp = { "AllEntities", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWitEntities, METADATA_PARAMS(nullptr, 0) }; // 3597677066
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_AllEntities_Key_KeyProp = { "AllEntities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_AllEntities_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_AllEntities = { "AllEntities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitResponse, AllEntities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_AllEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_AllEntities_MetaData)) }; // 3597677066
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Traits_ValueProp = { "Traits", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWitTrait, METADATA_PARAMS(nullptr, 0) }; // 1845966268
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Traits_Key_KeyProp = { "Traits_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Traits_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Traits = { "Traits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitResponse, Traits), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Traits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Traits_MetaData)) }; // 1845966268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Is_Final_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Is_Final_SetBit(void* Obj)
	{
		((FWitResponse*)Obj)->Is_Final = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Is_Final = { "Is_Final", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWitResponse), &Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Is_Final_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Is_Final_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Is_Final_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Intents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Intents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Entities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Entities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Entities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_AllEntities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_AllEntities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_AllEntities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Traits_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Traits_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Traits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitResponse_Statics::NewProp_Is_Final,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitResponse",
		sizeof(FWitResponse),
		alignof(FWitResponse),
		Z_Construct_UScriptStruct_FWitResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_WitResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitResponse.InnerSingleton, Z_Construct_UScriptStruct_FWitResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitVoiceDefinition;
class UScriptStruct* FWitVoiceDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitVoiceDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitVoiceDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitVoiceDefinition, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitVoiceDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_WitVoiceDefinition.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitVoiceDefinition>()
{
	return FWitVoiceDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locale_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Locale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Gender;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Styles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Styles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Styles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON voice preset object. See the Wit.ai\n * documentation for the meaning of each specific field.\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON voice preset object. See the Wit.ai\ndocumentation for the meaning of each specific field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitVoiceDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitVoiceDefinition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Locale_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitVoiceDefinition, Locale), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Locale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Locale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitVoiceDefinition, Gender), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Gender_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Styles_Inner = { "Styles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Styles_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Styles = { "Styles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitVoiceDefinition, Styles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Styles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Styles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Locale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Gender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Styles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewProp_Styles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitVoiceDefinition",
		sizeof(FWitVoiceDefinition),
		alignof(FWitVoiceDefinition),
		Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitVoiceDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_WitVoiceDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitVoiceDefinition.InnerSingleton, Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitVoiceDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitVoicesResponse;
class UScriptStruct* FWitVoicesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitVoicesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitVoicesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitVoicesResponse, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitVoicesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_WitVoicesResponse.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitVoicesResponse>()
{
	return FWitVoicesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitVoicesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_En_US_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_En_US_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_En_US;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the full JSON object used by Wit.ai /voices response. See the Wit.ai\n * documentation for the meaning of each specific field.\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the full JSON object used by Wit.ai /voices response. See the Wit.ai\ndocumentation for the meaning of each specific field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitVoicesResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::NewProp_En_US_Inner = { "En_US", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitVoiceDefinition, METADATA_PARAMS(nullptr, 0) }; // 2598368557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::NewProp_En_US_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::NewProp_En_US = { "En_US", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitVoicesResponse, En_US), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::NewProp_En_US_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::NewProp_En_US_MetaData)) }; // 2598368557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::NewProp_En_US_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::NewProp_En_US,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitVoicesResponse",
		sizeof(FWitVoicesResponse),
		alignof(FWitVoicesResponse),
		Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitVoicesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_WitVoicesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitVoicesResponse.InnerSingleton, Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitVoicesResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitComposerResponse;
class UScriptStruct* FWitComposerResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitComposerResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitComposerResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitComposerResponse, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitComposerResponse"));
	}
	return Z_Registration_Info_UScriptStruct_WitComposerResponse.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitComposerResponse>()
{
	return FWitComposerResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitComposerResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expects_Input_MetaData[];
#endif
		static void NewProp_Expects_Input_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Expects_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitComposerResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the full JSON object returned by Wit.ai composer\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the full JSON object returned by Wit.ai composer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitComposerResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Expects_Input_MetaData[] = {
		{ "Category", "Composer" },
		{ "Comment", "/** Is input expected to follow? */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Is input expected to follow?" },
	};
#endif
	void Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Expects_Input_SetBit(void* Obj)
	{
		((FWitComposerResponse*)Obj)->Expects_Input = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Expects_Input = { "Expects_Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWitComposerResponse), &Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Expects_Input_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Expects_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Expects_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Composer" },
		{ "Comment", "/** String identifier of the action to perform */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "String identifier of the action to perform" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitComposerResponse, Action), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Response_MetaData[] = {
		{ "Category", "Composer" },
		{ "Comment", "/** The full speech response */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The full speech response" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitComposerResponse, Response), Z_Construct_UScriptStruct_FWitResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Response_MetaData)) }; // 2374453616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitComposerResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Expects_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewProp_Response,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitComposerResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitComposerResponse",
		sizeof(FWitComposerResponse),
		alignof(FWitComposerResponse),
		Z_Construct_UScriptStruct_FWitComposerResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitComposerResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitComposerResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitComposerResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitComposerResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_WitComposerResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitComposerResponse.InnerSingleton, Z_Construct_UScriptStruct_FWitComposerResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitComposerResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitEntityShortDefinition;
class UScriptStruct* FWitEntityShortDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitEntityShortDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitEntityShortDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitEntityShortDefinition, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitEntityShortDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_WitEntityShortDefinition.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitEntityShortDefinition>()
{
	return FWitEntityShortDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON entity object used by /intents endpoint\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON entity object used by /intents endpoint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitEntityShortDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The name of the entity as defined in Wit.ai */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The name of the entity as defined in Wit.ai" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityShortDefinition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The entity's unique id */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The entity's unique id" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityShortDefinition, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitEntityShortDefinition",
		sizeof(FWitEntityShortDefinition),
		alignof(FWitEntityShortDefinition),
		Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitEntityShortDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_WitEntityShortDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitEntityShortDefinition.InnerSingleton, Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitEntityShortDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitEntityDefinition;
class UScriptStruct* FWitEntityDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitEntityDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitEntityDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitEntityDefinition, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitEntityDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_WitEntityDefinition.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitEntityDefinition>()
{
	return FWitEntityDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitEntityDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Lookups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lookups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Lookups;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Roles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Roles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON entity object used by Wit.ai /entities endpoint \n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON entity object used by Wit.ai /entities endpoint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitEntityDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The name of the entity as defined in Wit.ai */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The name of the entity as defined in Wit.ai" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityDefinition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The entity's unique id */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The entity's unique id" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityDefinition, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Lookups_Inner = { "Lookups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Lookups_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The lookups associated with this entity */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The lookups associated with this entity" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Lookups = { "Lookups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityDefinition, Lookups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Lookups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Lookups_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Roles_Inner = { "Roles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Roles_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The roles associated with this entity */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The roles associated with this entity" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitEntityDefinition, Roles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Roles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Lookups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Lookups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Roles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewProp_Roles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitEntityDefinition",
		sizeof(FWitEntityDefinition),
		alignof(FWitEntityDefinition),
		Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitEntityDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_WitEntityDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitEntityDefinition.InnerSingleton, Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitEntityDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitIntentDefinition;
class UScriptStruct* FWitIntentDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitIntentDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitIntentDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitIntentDefinition, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitIntentDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_WitIntentDefinition.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitIntentDefinition>()
{
	return FWitIntentDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitIntentDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON intent definition object returned by Wit.ai /intents endpoint\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON intent definition object returned by Wit.ai /intents endpoint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitIntentDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The name of the intent as defined in Wit.ai */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The name of the intent as defined in Wit.ai" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitIntentDefinition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The intent's unique id */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The intent's unique id" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitIntentDefinition, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitEntityShortDefinition, METADATA_PARAMS(nullptr, 0) }; // 2497912660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Entities_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The entities associated with this intent */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The entities associated with this intent" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitIntentDefinition, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Entities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Entities_MetaData)) }; // 2497912660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Entities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewProp_Entities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitIntentDefinition",
		sizeof(FWitIntentDefinition),
		alignof(FWitIntentDefinition),
		Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitIntentDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_WitIntentDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitIntentDefinition.InnerSingleton, Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitIntentDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitTraitValueDefinition;
class UScriptStruct* FWitTraitValueDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitTraitValueDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitTraitValueDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitTraitValueDefinition, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitTraitValueDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_WitTraitValueDefinition.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitTraitValueDefinition>()
{
	return FWitTraitValueDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON trait value object used by Wit.ai /traits endpoint\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON trait value object used by Wit.ai /traits endpoint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitTraitValueDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The name of the trait value as defined in Wit.ai */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The name of the trait value as defined in Wit.ai" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitTraitValueDefinition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The value of the trait */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The value of the trait" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitTraitValueDefinition, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitTraitValueDefinition",
		sizeof(FWitTraitValueDefinition),
		alignof(FWitTraitValueDefinition),
		Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitTraitValueDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_WitTraitValueDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitTraitValueDefinition.InnerSingleton, Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitTraitValueDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitTraitDefinition;
class UScriptStruct* FWitTraitDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitTraitDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitTraitDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitTraitDefinition, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitTraitDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_WitTraitDefinition.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitTraitDefinition>()
{
	return FWitTraitDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitTraitDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON trait definition object returned by Wit.ai /traits endpoint\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON trait definition object returned by Wit.ai /traits endpoint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitTraitDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The name of the trait as defined in Wit.ai */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The name of the trait as defined in Wit.ai" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitTraitDefinition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The trait's unique id */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The trait's unique id" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitTraitDefinition, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitTraitValueDefinition, METADATA_PARAMS(nullptr, 0) }; // 3630341605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The values associated with the trait */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The values associated with the trait" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitTraitDefinition, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Values_MetaData)) }; // 3630341605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewProp_Values,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitTraitDefinition",
		sizeof(FWitTraitDefinition),
		alignof(FWitTraitDefinition),
		Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitTraitDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_WitTraitDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitTraitDefinition.InnerSingleton, Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitTraitDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WitAppDefinition;
class UScriptStruct* FWitAppDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WitAppDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WitAppDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWitAppDefinition, (UObject*)Z_Construct_UPackage__Script_Wit(), TEXT("WitAppDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_WitAppDefinition.OuterSingleton;
}
template<> WIT_API UScriptStruct* StaticStruct<FWitAppDefinition>()
{
	return FWitAppDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWitAppDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lang_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Lang;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Private_MetaData[];
#endif
		static void NewProp_Private_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Private;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_At_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created_At;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Is_App_For_Token_MetaData[];
#endif
		static void NewProp_Is_App_For_Token_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Is_App_For_Token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of the JSON app definition object returned by Wit.ai /apps endpoint\n */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Representation of the JSON app definition object returned by Wit.ai /apps endpoint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWitAppDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The name of the app as defined in Wit.ai */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The name of the app as defined in Wit.ai" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppDefinition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The app's unique id */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The app's unique id" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppDefinition, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Lang_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The language the app is defined in */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The language the app is defined in" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Lang = { "Lang", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppDefinition, Lang), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Lang_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Lang_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Private_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** Unused */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "Unused" },
	};
#endif
	void Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Private_SetBit(void* Obj)
	{
		((FWitAppDefinition*)Obj)->Private = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Private = { "Private", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWitAppDefinition), &Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Private_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Private_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Private_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Created_At_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The timestamp when the app was created */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "The timestamp when the app was created" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Created_At = { "Created_At", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWitAppDefinition, Created_At), METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Created_At_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Created_At_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Is_App_For_Token_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** If this is the app associated with the token that was supplied */" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitResponse.h" },
		{ "ToolTip", "If this is the app associated with the token that was supplied" },
	};
#endif
	void Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Is_App_For_Token_SetBit(void* Obj)
	{
		((FWitAppDefinition*)Obj)->Is_App_For_Token = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Is_App_For_Token = { "Is_App_For_Token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWitAppDefinition), &Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Is_App_For_Token_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Is_App_For_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Is_App_For_Token_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWitAppDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Lang,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Private,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Created_At,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewProp_Is_App_For_Token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWitAppDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
		nullptr,
		&NewStructOps,
		"WitAppDefinition",
		sizeof(FWitAppDefinition),
		alignof(FWitAppDefinition),
		Z_Construct_UScriptStruct_FWitAppDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWitAppDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWitAppDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_WitAppDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WitAppDefinition.InnerSingleton, Z_Construct_UScriptStruct_FWitAppDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WitAppDefinition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitResponse_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitResponse_h_Statics::ScriptStructInfo[] = {
		{ FWitIntent::StaticStruct, Z_Construct_UScriptStruct_FWitIntent_Statics::NewStructOps, TEXT("WitIntent"), &Z_Registration_Info_UScriptStruct_WitIntent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitIntent), 3851899989U) },
		{ FWitEntityInterval::StaticStruct, Z_Construct_UScriptStruct_FWitEntityInterval_Statics::NewStructOps, TEXT("WitEntityInterval"), &Z_Registration_Info_UScriptStruct_WitEntityInterval, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitEntityInterval), 2246195683U) },
		{ FWitEntityNormalized::StaticStruct, Z_Construct_UScriptStruct_FWitEntityNormalized_Statics::NewStructOps, TEXT("WitEntityNormalized"), &Z_Registration_Info_UScriptStruct_WitEntityNormalized, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitEntityNormalized), 2821481377U) },
		{ FWitEntityValue::StaticStruct, Z_Construct_UScriptStruct_FWitEntityValue_Statics::NewStructOps, TEXT("WitEntityValue"), &Z_Registration_Info_UScriptStruct_WitEntityValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitEntityValue), 706248041U) },
		{ FWitEntity::StaticStruct, Z_Construct_UScriptStruct_FWitEntity_Statics::NewStructOps, TEXT("WitEntity"), &Z_Registration_Info_UScriptStruct_WitEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitEntity), 3633864035U) },
		{ FWitTrait::StaticStruct, Z_Construct_UScriptStruct_FWitTrait_Statics::NewStructOps, TEXT("WitTrait"), &Z_Registration_Info_UScriptStruct_WitTrait, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitTrait), 1845966268U) },
		{ FWitEntities::StaticStruct, Z_Construct_UScriptStruct_FWitEntities_Statics::NewStructOps, TEXT("WitEntities"), &Z_Registration_Info_UScriptStruct_WitEntities, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitEntities), 3597677066U) },
		{ FWitResponse::StaticStruct, Z_Construct_UScriptStruct_FWitResponse_Statics::NewStructOps, TEXT("WitResponse"), &Z_Registration_Info_UScriptStruct_WitResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitResponse), 2374453616U) },
		{ FWitVoiceDefinition::StaticStruct, Z_Construct_UScriptStruct_FWitVoiceDefinition_Statics::NewStructOps, TEXT("WitVoiceDefinition"), &Z_Registration_Info_UScriptStruct_WitVoiceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitVoiceDefinition), 2598368557U) },
		{ FWitVoicesResponse::StaticStruct, Z_Construct_UScriptStruct_FWitVoicesResponse_Statics::NewStructOps, TEXT("WitVoicesResponse"), &Z_Registration_Info_UScriptStruct_WitVoicesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitVoicesResponse), 428644139U) },
		{ FWitComposerResponse::StaticStruct, Z_Construct_UScriptStruct_FWitComposerResponse_Statics::NewStructOps, TEXT("WitComposerResponse"), &Z_Registration_Info_UScriptStruct_WitComposerResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitComposerResponse), 2375128245U) },
		{ FWitEntityShortDefinition::StaticStruct, Z_Construct_UScriptStruct_FWitEntityShortDefinition_Statics::NewStructOps, TEXT("WitEntityShortDefinition"), &Z_Registration_Info_UScriptStruct_WitEntityShortDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitEntityShortDefinition), 2497912660U) },
		{ FWitEntityDefinition::StaticStruct, Z_Construct_UScriptStruct_FWitEntityDefinition_Statics::NewStructOps, TEXT("WitEntityDefinition"), &Z_Registration_Info_UScriptStruct_WitEntityDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitEntityDefinition), 4037537821U) },
		{ FWitIntentDefinition::StaticStruct, Z_Construct_UScriptStruct_FWitIntentDefinition_Statics::NewStructOps, TEXT("WitIntentDefinition"), &Z_Registration_Info_UScriptStruct_WitIntentDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitIntentDefinition), 830516219U) },
		{ FWitTraitValueDefinition::StaticStruct, Z_Construct_UScriptStruct_FWitTraitValueDefinition_Statics::NewStructOps, TEXT("WitTraitValueDefinition"), &Z_Registration_Info_UScriptStruct_WitTraitValueDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitTraitValueDefinition), 3630341605U) },
		{ FWitTraitDefinition::StaticStruct, Z_Construct_UScriptStruct_FWitTraitDefinition_Statics::NewStructOps, TEXT("WitTraitDefinition"), &Z_Registration_Info_UScriptStruct_WitTraitDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitTraitDefinition), 3507528680U) },
		{ FWitAppDefinition::StaticStruct, Z_Construct_UScriptStruct_FWitAppDefinition_Statics::NewStructOps, TEXT("WitAppDefinition"), &Z_Registration_Info_UScriptStruct_WitAppDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWitAppDefinition), 1226559691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitResponse_h_1636721403(TEXT("/Script/Wit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitResponse_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
