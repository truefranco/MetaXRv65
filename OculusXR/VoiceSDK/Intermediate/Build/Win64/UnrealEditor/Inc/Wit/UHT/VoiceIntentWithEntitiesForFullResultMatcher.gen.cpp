// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceIntentWithEntitiesForFullResultMatcher() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher();
	WIT_API UClass* Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UVoiceResponseMatcher();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitEntities();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitIntent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnEntitiesMatchedForFullResultDelegate_Parms
		{
			bool bIsSuccessful;
			FWitIntent Intent;
			TArray<FWitEntities> AllEntities;
			bool bIsFinal;
		};
		static void NewProp_bIsSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllEntities_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllEntities;
		static void NewProp_bIsFinal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFinal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_SetBit(void* Obj)
	{
		((_Script_Wit_eventOnEntitiesMatchedForFullResultDelegate_Parms*)Obj)->bIsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful = { "bIsSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Wit_eventOnEntitiesMatchedForFullResultDelegate_Parms), &Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_Intent = { "Intent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnEntitiesMatchedForFullResultDelegate_Parms, Intent), Z_Construct_UScriptStruct_FWitIntent, METADATA_PARAMS(nullptr, 0) }; // 3851899989
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_AllEntities_Inner = { "AllEntities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWitEntities, METADATA_PARAMS(nullptr, 0) }; // 3597677066
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_AllEntities = { "AllEntities", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnEntitiesMatchedForFullResultDelegate_Parms, AllEntities), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3597677066
	void Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_bIsFinal_SetBit(void* Obj)
	{
		((_Script_Wit_eventOnEntitiesMatchedForFullResultDelegate_Parms*)Obj)->bIsFinal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_bIsFinal = { "bIsFinal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Wit_eventOnEntitiesMatchedForFullResultDelegate_Parms), &Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_bIsFinal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_Intent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_AllEntities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_AllEntities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::NewProp_bIsFinal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnEntitiesMatchedForFullResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::_Script_Wit_eventOnEntitiesMatchedForFullResultDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEntitiesMatchedForFullResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEntitiesMatchedForFullResultDelegate, bool bIsSuccessful, FWitIntent Intent, const TArray<FWitEntities>& AllEntities, bool bIsFinal)
{
	struct _Script_Wit_eventOnEntitiesMatchedForFullResultDelegate_Parms
	{
		bool bIsSuccessful;
		FWitIntent Intent;
		TArray<FWitEntities> AllEntities;
		bool bIsFinal;
	};
	_Script_Wit_eventOnEntitiesMatchedForFullResultDelegate_Parms Parms;
	Parms.bIsSuccessful=bIsSuccessful ? true : false;
	Parms.Intent=Intent;
	Parms.AllEntities=AllEntities;
	Parms.bIsFinal=bIsFinal ? true : false;
	OnEntitiesMatchedForFullResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UVoiceIntentWithEntitiesForFullResultMatcher::StaticRegisterNativesUVoiceIntentWithEntitiesForFullResultMatcher()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoiceIntentWithEntitiesForFullResultMatcher);
	UClass* Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_NoRegister()
	{
		return UVoiceIntentWithEntitiesForFullResultMatcher::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsIntentRequired_MetaData[];
#endif
		static void NewProp_bIsIntentRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIntentRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntentConfidenceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntentConfidenceThreshold;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredEntityNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredEntityNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredEntityNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalEntityNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalEntityNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionalEntityNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityConfidenceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EntityConfidenceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIntentMatched_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIntentMatched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEntitiesMatchedForFullResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntitiesMatchedForFullResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoiceResponseMatcher,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * A simple response matcher. Examines a response from Wit.ai and checks to see if it contains the intent\n * and entities that we are looking for. If it does then we call a delegate for user-defined processing\n */" },
		{ "IncludePath", "Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h" },
		{ "ToolTip", "A simple response matcher. Examines a response from Wit.ai and checks to see if it contains the intent\nand entities that we are looking for. If it does then we call a delegate for user-defined processing" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_IntentName_MetaData[] = {
		{ "Category", "Intent" },
		{ "Comment", "/**\n\x09 * The name of the intent to match \n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h" },
		{ "ToolTip", "The name of the intent to match" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_IntentName = { "IntentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntitiesForFullResultMatcher, IntentName), METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_IntentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_IntentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_bIsIntentRequired_MetaData[] = {
		{ "Category", "Intent" },
		{ "Comment", "/**\n\x09 * Is the intent required to match?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h" },
		{ "ToolTip", "Is the intent required to match?" },
	};
#endif
	void Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_bIsIntentRequired_SetBit(void* Obj)
	{
		((UVoiceIntentWithEntitiesForFullResultMatcher*)Obj)->bIsIntentRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_bIsIntentRequired = { "bIsIntentRequired", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoiceIntentWithEntitiesForFullResultMatcher), &Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_bIsIntentRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_bIsIntentRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_bIsIntentRequired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_IntentConfidenceThreshold_MetaData[] = {
		{ "Category", "Intent" },
		{ "Comment", "/** \n\x09 * The confidence threshold to exceed to be considered a match\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h" },
		{ "ToolTip", "The confidence threshold to exceed to be considered a match" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_IntentConfidenceThreshold = { "IntentConfidenceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntitiesForFullResultMatcher, IntentConfidenceThreshold), METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_IntentConfidenceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_IntentConfidenceThreshold_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_RequiredEntityNames_Inner = { "RequiredEntityNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_RequiredEntityNames_MetaData[] = {
		{ "Category", "Entities" },
		{ "Comment", "/**\n\x09 * The names of the entities that must be matched\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h" },
		{ "ToolTip", "The names of the entities that must be matched" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_RequiredEntityNames = { "RequiredEntityNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntitiesForFullResultMatcher, RequiredEntityNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_RequiredEntityNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_RequiredEntityNames_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OptionalEntityNames_Inner = { "OptionalEntityNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OptionalEntityNames_MetaData[] = {
		{ "Category", "Entities" },
		{ "Comment", "/**\n\x09 * The names of the entities that are optional matches\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h" },
		{ "ToolTip", "The names of the entities that are optional matches" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OptionalEntityNames = { "OptionalEntityNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntitiesForFullResultMatcher, OptionalEntityNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OptionalEntityNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OptionalEntityNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_EntityConfidenceThreshold_MetaData[] = {
		{ "Category", "Entities" },
		{ "Comment", "/** \n\x09 * The confidence threshold to exceed to be considered a match\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h" },
		{ "ToolTip", "The confidence threshold to exceed to be considered a match" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_EntityConfidenceThreshold = { "EntityConfidenceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntitiesForFullResultMatcher, EntityConfidenceThreshold), METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_EntityConfidenceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_EntityConfidenceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OnIntentMatched_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delegate to call when this matcher makes a successful intent match but no entities match\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h" },
		{ "ToolTip", "Delegate to call when this matcher makes a successful intent match but no entities match" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OnIntentMatched = { "OnIntentMatched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntitiesForFullResultMatcher, OnIntentMatched), Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OnIntentMatched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OnIntentMatched_MetaData)) }; // 1764359158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OnEntitiesMatchedForFullResult_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delegate to call when this matcher makes a successful match against multiple entities\n\x09 *\n\x09 * Wit.ai support executing multi commands in one speech, e.g. set the box to red, and the cylinder to green.\n\x09 *\n\x09 * In that case each entity may have multi values, e,g red and green.\n\x09 * \n\x09 * UVoiceIntentWithEntitiesMatcher.OnEntitiesMatched only support one value, but OnEntitiesMatchedForFullResult support all values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntitiesForFullResultMatcher.h" },
		{ "ToolTip", "Delegate to call when this matcher makes a successful match against multiple entities\n\nWit.ai support executing multi commands in one speech, e.g. set the box to red, and the cylinder to green.\n\nIn that case each entity may have multi values, e,g red and green.\n\nUVoiceIntentWithEntitiesMatcher.OnEntitiesMatched only support one value, but OnEntitiesMatchedForFullResult support all values." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OnEntitiesMatchedForFullResult = { "OnEntitiesMatchedForFullResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntitiesForFullResultMatcher, OnEntitiesMatchedForFullResult), Z_Construct_UDelegateFunction_Wit_OnEntitiesMatchedForFullResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OnEntitiesMatchedForFullResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OnEntitiesMatchedForFullResult_MetaData)) }; // 1235233821
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_IntentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_bIsIntentRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_IntentConfidenceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_RequiredEntityNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_RequiredEntityNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OptionalEntityNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OptionalEntityNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_EntityConfidenceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OnIntentMatched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::NewProp_OnEntitiesMatchedForFullResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceIntentWithEntitiesForFullResultMatcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::ClassParams = {
		&UVoiceIntentWithEntitiesForFullResultMatcher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher()
	{
		if (!Z_Registration_Info_UClass_UVoiceIntentWithEntitiesForFullResultMatcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoiceIntentWithEntitiesForFullResultMatcher.OuterSingleton, Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoiceIntentWithEntitiesForFullResultMatcher.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UVoiceIntentWithEntitiesForFullResultMatcher>()
	{
		return UVoiceIntentWithEntitiesForFullResultMatcher::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceIntentWithEntitiesForFullResultMatcher);
	UVoiceIntentWithEntitiesForFullResultMatcher::~UVoiceIntentWithEntitiesForFullResultMatcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesForFullResultMatcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesForFullResultMatcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoiceIntentWithEntitiesForFullResultMatcher, UVoiceIntentWithEntitiesForFullResultMatcher::StaticClass, TEXT("UVoiceIntentWithEntitiesForFullResultMatcher"), &Z_Registration_Info_UClass_UVoiceIntentWithEntitiesForFullResultMatcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoiceIntentWithEntitiesForFullResultMatcher), 1366479715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesForFullResultMatcher_h_214580286(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesForFullResultMatcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntitiesForFullResultMatcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
