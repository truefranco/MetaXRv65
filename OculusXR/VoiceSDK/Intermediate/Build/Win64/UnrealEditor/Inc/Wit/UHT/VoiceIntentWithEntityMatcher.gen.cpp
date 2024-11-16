// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voice/Matcher/VoiceIntentWithEntityMatcher.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceIntentWithEntityMatcher() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UVoiceIntentWithEntityMatcher();
	WIT_API UClass* Z_Construct_UClass_UVoiceIntentWithEntityMatcher_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UVoiceResponseMatcher();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitEntity();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitIntent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnEntityMatchedDelegate_Parms
		{
			FWitIntent Intent;
			FWitEntity Entity;
			FString Value;
			bool bIsFinal;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_bIsFinal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFinal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_Intent = { "Intent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnEntityMatchedDelegate_Parms, Intent), Z_Construct_UScriptStruct_FWitIntent, METADATA_PARAMS(nullptr, 0) }; // 3851899989
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnEntityMatchedDelegate_Parms, Entity), Z_Construct_UScriptStruct_FWitEntity, METADATA_PARAMS(nullptr, 0) }; // 3633864035
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnEntityMatchedDelegate_Parms, Value), METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_bIsFinal_SetBit(void* Obj)
	{
		((_Script_Wit_eventOnEntityMatchedDelegate_Parms*)Obj)->bIsFinal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_bIsFinal = { "bIsFinal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Wit_eventOnEntityMatchedDelegate_Parms), &Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_bIsFinal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_Intent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::NewProp_bIsFinal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntityMatcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnEntityMatchedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::_Script_Wit_eventOnEntityMatchedDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEntityMatchedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEntityMatchedDelegate, FWitIntent Intent, FWitEntity Entity, const FString& Value, bool bIsFinal)
{
	struct _Script_Wit_eventOnEntityMatchedDelegate_Parms
	{
		FWitIntent Intent;
		FWitEntity Entity;
		FString Value;
		bool bIsFinal;
	};
	_Script_Wit_eventOnEntityMatchedDelegate_Parms Parms;
	Parms.Intent=Intent;
	Parms.Entity=Entity;
	Parms.Value=Value;
	Parms.bIsFinal=bIsFinal ? true : false;
	OnEntityMatchedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UVoiceIntentWithEntityMatcher::StaticRegisterNativesUVoiceIntentWithEntityMatcher()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoiceIntentWithEntityMatcher);
	UClass* Z_Construct_UClass_UVoiceIntentWithEntityMatcher_NoRegister()
	{
		return UVoiceIntentWithEntityMatcher::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredEntityName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredEntityName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityConfidenceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EntityConfidenceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIntentMatched_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIntentMatched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEntityMatched_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntityMatched;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoiceResponseMatcher,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * A simple response matcher. Examines a response from Wit.ai and checks to see if it contains the intent\n * and entities that we are looking for. If it does then we call a delegate for user-defined processing\n */" },
		{ "IncludePath", "Voice/Matcher/VoiceIntentWithEntityMatcher.h" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntityMatcher.h" },
		{ "ToolTip", "A simple response matcher. Examines a response from Wit.ai and checks to see if it contains the intent\nand entities that we are looking for. If it does then we call a delegate for user-defined processing" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_IntentName_MetaData[] = {
		{ "Category", "Intent" },
		{ "Comment", "/**\n\x09 * The name of the intent to match \n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntityMatcher.h" },
		{ "ToolTip", "The name of the intent to match" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_IntentName = { "IntentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntityMatcher, IntentName), METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_IntentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_IntentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_bIsIntentRequired_MetaData[] = {
		{ "Category", "Intent" },
		{ "Comment", "/**\n\x09 * Is the intent required to match?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntityMatcher.h" },
		{ "ToolTip", "Is the intent required to match?" },
	};
#endif
	void Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_bIsIntentRequired_SetBit(void* Obj)
	{
		((UVoiceIntentWithEntityMatcher*)Obj)->bIsIntentRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_bIsIntentRequired = { "bIsIntentRequired", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoiceIntentWithEntityMatcher), &Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_bIsIntentRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_bIsIntentRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_bIsIntentRequired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_IntentConfidenceThreshold_MetaData[] = {
		{ "Category", "Intent" },
		{ "Comment", "/** \n\x09 * The confidence threshold to exceed to be considered a match\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntityMatcher.h" },
		{ "ToolTip", "The confidence threshold to exceed to be considered a match" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_IntentConfidenceThreshold = { "IntentConfidenceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntityMatcher, IntentConfidenceThreshold), METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_IntentConfidenceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_IntentConfidenceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_RequiredEntityName_MetaData[] = {
		{ "Category", "Entity" },
		{ "Comment", "/**\n\x09 * The names of the entities to match \n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntityMatcher.h" },
		{ "ToolTip", "The names of the entities to match" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_RequiredEntityName = { "RequiredEntityName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntityMatcher, RequiredEntityName), METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_RequiredEntityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_RequiredEntityName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_EntityConfidenceThreshold_MetaData[] = {
		{ "Category", "Entity" },
		{ "Comment", "/** \n\x09 * The confidence threshold to exceed to be considered a match\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntityMatcher.h" },
		{ "ToolTip", "The confidence threshold to exceed to be considered a match" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_EntityConfidenceThreshold = { "EntityConfidenceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntityMatcher, EntityConfidenceThreshold), METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_EntityConfidenceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_EntityConfidenceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_OnIntentMatched_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delegate to call when this matcher makes a successful intent match but no entities match\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntityMatcher.h" },
		{ "ToolTip", "Delegate to call when this matcher makes a successful intent match but no entities match" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_OnIntentMatched = { "OnIntentMatched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntityMatcher, OnIntentMatched), Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_OnIntentMatched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_OnIntentMatched_MetaData)) }; // 1764359158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_OnEntityMatched_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delegate to call when this matcher makes a successful match for a single entity\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentWithEntityMatcher.h" },
		{ "ToolTip", "Delegate to call when this matcher makes a successful match for a single entity" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_OnEntityMatched = { "OnEntityMatched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentWithEntityMatcher, OnEntityMatched), Z_Construct_UDelegateFunction_Wit_OnEntityMatchedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_OnEntityMatched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_OnEntityMatched_MetaData)) }; // 2473175621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_IntentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_bIsIntentRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_IntentConfidenceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_RequiredEntityName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_EntityConfidenceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_OnIntentMatched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::NewProp_OnEntityMatched,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceIntentWithEntityMatcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::ClassParams = {
		&UVoiceIntentWithEntityMatcher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceIntentWithEntityMatcher()
	{
		if (!Z_Registration_Info_UClass_UVoiceIntentWithEntityMatcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoiceIntentWithEntityMatcher.OuterSingleton, Z_Construct_UClass_UVoiceIntentWithEntityMatcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoiceIntentWithEntityMatcher.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UVoiceIntentWithEntityMatcher>()
	{
		return UVoiceIntentWithEntityMatcher::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceIntentWithEntityMatcher);
	UVoiceIntentWithEntityMatcher::~UVoiceIntentWithEntityMatcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntityMatcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntityMatcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoiceIntentWithEntityMatcher, UVoiceIntentWithEntityMatcher::StaticClass, TEXT("UVoiceIntentWithEntityMatcher"), &Z_Registration_Info_UClass_UVoiceIntentWithEntityMatcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoiceIntentWithEntityMatcher), 225648784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntityMatcher_h_457253003(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntityMatcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentWithEntityMatcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
