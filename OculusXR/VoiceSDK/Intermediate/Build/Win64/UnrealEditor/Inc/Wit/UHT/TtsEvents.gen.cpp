// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TTS/Events/TtsEvents.h"
#include "TTS/Configuration/TtsConfiguration.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTtsEvents() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UTtsEvents();
	WIT_API UClass* Z_Construct_UClass_UTtsEvents_NoRegister();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FTtsConfiguration();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitVoicesResponse();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnSynthesizeResponseDelegate_Parms
		{
			bool bIsSuccessful;
			USoundWave* SoundWave;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSuccessful_MetaData[];
#endif
		static void NewProp_bIsSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessful;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_SetBit(void* Obj)
	{
		((_Script_Wit_eventOnSynthesizeResponseDelegate_Parms*)Obj)->bIsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful = { "bIsSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Wit_eventOnSynthesizeResponseDelegate_Parms), &Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnSynthesizeResponseDelegate_Parms, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::NewProp_SoundWave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TTS/Events/TtsEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnSynthesizeResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::_Script_Wit_eventOnSynthesizeResponseDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSynthesizeResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSynthesizeResponseDelegate, bool bIsSuccessful, USoundWave* SoundWave)
{
	struct _Script_Wit_eventOnSynthesizeResponseDelegate_Parms
	{
		bool bIsSuccessful;
		USoundWave* SoundWave;
	};
	_Script_Wit_eventOnSynthesizeResponseDelegate_Parms Parms;
	Parms.bIsSuccessful=bIsSuccessful ? true : false;
	Parms.SoundWave=SoundWave;
	OnSynthesizeResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnSynthesizeErrorDelegate_Parms
		{
			FString ErrorMessage;
			FString HumanReadableMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumanReadableMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HumanReadableMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnSynthesizeErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::NewProp_HumanReadableMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::NewProp_HumanReadableMessage = { "HumanReadableMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnSynthesizeErrorDelegate_Parms, HumanReadableMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::NewProp_HumanReadableMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::NewProp_HumanReadableMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::NewProp_HumanReadableMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TTS/Events/TtsEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnSynthesizeErrorDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::_Script_Wit_eventOnSynthesizeErrorDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSynthesizeErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSynthesizeErrorDelegate, const FString& ErrorMessage, const FString& HumanReadableMessage)
{
	struct _Script_Wit_eventOnSynthesizeErrorDelegate_Parms
	{
		FString ErrorMessage;
		FString HumanReadableMessage;
	};
	_Script_Wit_eventOnSynthesizeErrorDelegate_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	Parms.HumanReadableMessage=HumanReadableMessage;
	OnSynthesizeErrorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnSynthesizeRawResponseDelegate_Parms
		{
			FString ClipId;
			TArray<uint8> BinaryData;
			FTtsConfiguration ClipSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClipId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BinaryData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinaryData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BinaryData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClipSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_ClipId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_ClipId = { "ClipId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnSynthesizeRawResponseDelegate_Parms, ClipId), METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_ClipId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_ClipId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_BinaryData_Inner = { "BinaryData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_BinaryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_BinaryData = { "BinaryData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnSynthesizeRawResponseDelegate_Parms, BinaryData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_BinaryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_BinaryData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_ClipSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_ClipSettings = { "ClipSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnSynthesizeRawResponseDelegate_Parms, ClipSettings), Z_Construct_UScriptStruct_FTtsConfiguration, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_ClipSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_ClipSettings_MetaData)) }; // 2639599679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_ClipId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_BinaryData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_BinaryData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::NewProp_ClipSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TTS/Events/TtsEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnSynthesizeRawResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::_Script_Wit_eventOnSynthesizeRawResponseDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSynthesizeRawResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSynthesizeRawResponseDelegate, const FString& ClipId, TArray<uint8> const& BinaryData, FTtsConfiguration const& ClipSettings)
{
	struct _Script_Wit_eventOnSynthesizeRawResponseDelegate_Parms
	{
		FString ClipId;
		TArray<uint8> BinaryData;
		FTtsConfiguration ClipSettings;
	};
	_Script_Wit_eventOnSynthesizeRawResponseDelegate_Parms Parms;
	Parms.ClipId=ClipId;
	Parms.BinaryData=BinaryData;
	Parms.ClipSettings=ClipSettings;
	OnSynthesizeRawResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UTtsEvents::StaticRegisterNativesUTtsEvents()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTtsEvents);
	UClass* Z_Construct_UClass_UTtsEvents_NoRegister()
	{
		return UTtsEvents::StaticClass();
	}
	struct Z_Construct_UClass_UTtsEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoicesResponse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoicesResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSynthesizeRawResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSynthesizeRawResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSynthesizeResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSynthesizeResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSynthesizeError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSynthesizeError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTtsEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsEvents_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Container for all TTS events\n */" },
		{ "IncludePath", "TTS/Events/TtsEvents.h" },
		{ "ModuleRelativePath", "Public/TTS/Events/TtsEvents.h" },
		{ "ToolTip", "Container for all TTS events" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsEvents_Statics::NewProp_VoicesResponse_MetaData[] = {
		{ "Category", "TTS" },
		{ "Comment", "/**\n\x09 * The response we receive from Wit requests parsed into UObject structures\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Events/TtsEvents.h" },
		{ "ToolTip", "The response we receive from Wit requests parsed into UObject structures" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTtsEvents_Statics::NewProp_VoicesResponse = { "VoicesResponse", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsEvents, VoicesResponse), Z_Construct_UScriptStruct_FWitVoicesResponse, METADATA_PARAMS(Z_Construct_UClass_UTtsEvents_Statics::NewProp_VoicesResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsEvents_Statics::NewProp_VoicesResponse_MetaData)) }; // 428644139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeRawResponse_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call when a synthesize request has been fully processed. The callback receives the raw response data\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Events/TtsEvents.h" },
		{ "ToolTip", "Callback to call when a synthesize request has been fully processed. The callback receives the raw response data" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeRawResponse = { "OnSynthesizeRawResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsEvents, OnSynthesizeRawResponse), Z_Construct_UDelegateFunction_Wit_OnSynthesizeRawResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeRawResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeRawResponse_MetaData)) }; // 1601994010
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeResponse_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call when a synthesize request has been fully processed. The callback receives a USoundWave containing the received wav\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Events/TtsEvents.h" },
		{ "ToolTip", "Callback to call when a synthesize request has been fully processed. The callback receives a USoundWave containing the received wav" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeResponse = { "OnSynthesizeResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsEvents, OnSynthesizeResponse), Z_Construct_UDelegateFunction_Wit_OnSynthesizeResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeResponse_MetaData)) }; // 4096562600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeError_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call when a synthesize error occurs\n\x09 */" },
		{ "ModuleRelativePath", "Public/TTS/Events/TtsEvents.h" },
		{ "ToolTip", "Callback to call when a synthesize error occurs" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeError = { "OnSynthesizeError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTtsEvents, OnSynthesizeError), Z_Construct_UDelegateFunction_Wit_OnSynthesizeErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeError_MetaData)) }; // 2419986845
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTtsEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsEvents_Statics::NewProp_VoicesResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeRawResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTtsEvents_Statics::NewProp_OnSynthesizeError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTtsEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTtsEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTtsEvents_Statics::ClassParams = {
		&UTtsEvents::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTtsEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTtsEvents_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTtsEvents_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTtsEvents_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTtsEvents()
	{
		if (!Z_Registration_Info_UClass_UTtsEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTtsEvents.OuterSingleton, Z_Construct_UClass_UTtsEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTtsEvents.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UTtsEvents>()
	{
		return UTtsEvents::StaticClass();
	}
	UTtsEvents::UTtsEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTtsEvents);
	UTtsEvents::~UTtsEvents() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTtsEvents, UTtsEvents::StaticClass, TEXT("UTtsEvents"), &Z_Registration_Info_UClass_UTtsEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTtsEvents), 1832232648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_2800383329(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_TTS_Events_TtsEvents_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
