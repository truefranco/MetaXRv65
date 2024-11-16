// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voice/Matcher/VoiceIntentMatcher.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceIntentMatcher() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UVoiceIntentMatcher();
	WIT_API UClass* Z_Construct_UClass_UVoiceIntentMatcher_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UVoiceResponseMatcher();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitIntent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnIntentMatchedDelegate_Parms
		{
			FWitIntent Intent;
			bool bIsFinal;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intent;
		static void NewProp_bIsFinal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFinal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::NewProp_Intent = { "Intent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnIntentMatchedDelegate_Parms, Intent), Z_Construct_UScriptStruct_FWitIntent, METADATA_PARAMS(nullptr, 0) }; // 3851899989
	void Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::NewProp_bIsFinal_SetBit(void* Obj)
	{
		((_Script_Wit_eventOnIntentMatchedDelegate_Parms*)Obj)->bIsFinal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::NewProp_bIsFinal = { "bIsFinal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Wit_eventOnIntentMatchedDelegate_Parms), &Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::NewProp_bIsFinal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::NewProp_Intent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::NewProp_bIsFinal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentMatcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnIntentMatchedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::_Script_Wit_eventOnIntentMatchedDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnIntentMatchedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIntentMatchedDelegate, FWitIntent Intent, bool bIsFinal)
{
	struct _Script_Wit_eventOnIntentMatchedDelegate_Parms
	{
		FWitIntent Intent;
		bool bIsFinal;
	};
	_Script_Wit_eventOnIntentMatchedDelegate_Parms Parms;
	Parms.Intent=Intent;
	Parms.bIsFinal=bIsFinal ? true : false;
	OnIntentMatchedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UVoiceIntentMatcher::StaticRegisterNativesUVoiceIntentMatcher()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoiceIntentMatcher);
	UClass* Z_Construct_UClass_UVoiceIntentMatcher_NoRegister()
	{
		return UVoiceIntentMatcher::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceIntentMatcher_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntentConfidenceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntentConfidenceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIntentMatched_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIntentMatched;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceIntentMatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoiceResponseMatcher,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentMatcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * A simple response matcher. Examines a response from Wit.ai and checks to see if it contains the intent\n * that we are looking for. If it does then we call a delegate for user-defined processing\n */" },
		{ "IncludePath", "Voice/Matcher/VoiceIntentMatcher.h" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentMatcher.h" },
		{ "ToolTip", "A simple response matcher. Examines a response from Wit.ai and checks to see if it contains the intent\nthat we are looking for. If it does then we call a delegate for user-defined processing" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_IntentName_MetaData[] = {
		{ "Category", "Intent" },
		{ "Comment", "/** \n\x09 * The name of the intent to match \n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentMatcher.h" },
		{ "ToolTip", "The name of the intent to match" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_IntentName = { "IntentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentMatcher, IntentName), METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_IntentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_IntentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_IntentConfidenceThreshold_MetaData[] = {
		{ "Category", "Intent" },
		{ "Comment", "/** \n\x09 * The confidence threshold to exceed to be considered a match\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentMatcher.h" },
		{ "ToolTip", "The confidence threshold to exceed to be considered a match" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_IntentConfidenceThreshold = { "IntentConfidenceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentMatcher, IntentConfidenceThreshold), METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_IntentConfidenceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_IntentConfidenceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_OnIntentMatched_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delegate to call when this matcher makes a successful match\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceIntentMatcher.h" },
		{ "ToolTip", "Delegate to call when this matcher makes a successful match" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_OnIntentMatched = { "OnIntentMatched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceIntentMatcher, OnIntentMatched), Z_Construct_UDelegateFunction_Wit_OnIntentMatchedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_OnIntentMatched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_OnIntentMatched_MetaData)) }; // 1764359158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoiceIntentMatcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_IntentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_IntentConfidenceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceIntentMatcher_Statics::NewProp_OnIntentMatched,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceIntentMatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceIntentMatcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoiceIntentMatcher_Statics::ClassParams = {
		&UVoiceIntentMatcher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoiceIntentMatcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentMatcher_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceIntentMatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceIntentMatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceIntentMatcher()
	{
		if (!Z_Registration_Info_UClass_UVoiceIntentMatcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoiceIntentMatcher.OuterSingleton, Z_Construct_UClass_UVoiceIntentMatcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoiceIntentMatcher.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UVoiceIntentMatcher>()
	{
		return UVoiceIntentMatcher::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceIntentMatcher);
	UVoiceIntentMatcher::~UVoiceIntentMatcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentMatcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentMatcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoiceIntentMatcher, UVoiceIntentMatcher::StaticClass, TEXT("UVoiceIntentMatcher"), &Z_Registration_Info_UClass_UVoiceIntentMatcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoiceIntentMatcher), 1068668579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentMatcher_h_2035878770(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentMatcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceIntentMatcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
