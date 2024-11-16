// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voice/Events/VoiceEvents.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceEvents() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UVoiceEvents();
	WIT_API UClass* Z_Construct_UClass_UVoiceEvents_NoRegister();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitResponse();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnWitEventDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWitEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWitEventDelegate)
{
	OnWitEventDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnWitTranscriptionDelegate_Parms
		{
			FString Transcription;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transcription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Transcription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::NewProp_Transcription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::NewProp_Transcription = { "Transcription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnWitTranscriptionDelegate_Parms, Transcription), METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::NewProp_Transcription_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::NewProp_Transcription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::NewProp_Transcription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnWitTranscriptionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::_Script_Wit_eventOnWitTranscriptionDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWitTranscriptionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWitTranscriptionDelegate, const FString& Transcription)
{
	struct _Script_Wit_eventOnWitTranscriptionDelegate_Parms
	{
		FString Transcription;
	};
	_Script_Wit_eventOnWitTranscriptionDelegate_Parms Parms;
	Parms.Transcription=Transcription;
	OnWitTranscriptionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnWitResponseDelegate_Parms
		{
			bool bIsSuccessful;
			FWitResponse WitResponse;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSuccessful_MetaData[];
#endif
		static void NewProp_bIsSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WitResponse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WitResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_SetBit(void* Obj)
	{
		((_Script_Wit_eventOnWitResponseDelegate_Parms*)Obj)->bIsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful = { "bIsSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Wit_eventOnWitResponseDelegate_Parms), &Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_WitResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_WitResponse = { "WitResponse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnWitResponseDelegate_Parms, WitResponse), Z_Construct_UScriptStruct_FWitResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_WitResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_WitResponse_MetaData)) }; // 2374453616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_bIsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::NewProp_WitResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnWitResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::_Script_Wit_eventOnWitResponseDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWitResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWitResponseDelegate, bool bIsSuccessful, FWitResponse const& WitResponse)
{
	struct _Script_Wit_eventOnWitResponseDelegate_Parms
	{
		bool bIsSuccessful;
		FWitResponse WitResponse;
	};
	_Script_Wit_eventOnWitResponseDelegate_Parms Parms;
	Parms.bIsSuccessful=bIsSuccessful ? true : false;
	Parms.WitResponse=WitResponse;
	OnWitResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnWitErrorDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnWitErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::NewProp_HumanReadableMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::NewProp_HumanReadableMessage = { "HumanReadableMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnWitErrorDelegate_Parms, HumanReadableMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::NewProp_HumanReadableMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::NewProp_HumanReadableMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::NewProp_HumanReadableMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnWitErrorDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::_Script_Wit_eventOnWitErrorDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWitErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnWitErrorDelegate, const FString& ErrorMessage, const FString& HumanReadableMessage)
{
	struct _Script_Wit_eventOnWitErrorDelegate_Parms
	{
		FString ErrorMessage;
		FString HumanReadableMessage;
	};
	_Script_Wit_eventOnWitErrorDelegate_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	Parms.HumanReadableMessage=HumanReadableMessage;
	OnWitErrorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UVoiceEvents::StaticRegisterNativesUVoiceEvents()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoiceEvents);
	UClass* Z_Construct_UClass_UVoiceEvents_NoRegister()
	{
		return UVoiceEvents::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WitResponse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WitResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWitResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWitResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWitPartialResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWitPartialResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWitError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWitError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPartialTranscription_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPartialTranscription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFullTranscription_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFullTranscription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStartVoiceInput_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartVoiceInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStopVoiceInput_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopVoiceInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStopVoiceInputDueToInactivity_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopVoiceInputDueToInactivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStopVoiceInputDueToTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopVoiceInputDueToTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStopVoiceInputDueToDeactivation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopVoiceInputDueToDeactivation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMinimumWakeThresholdHit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMinimumWakeThresholdHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Container for all voice command events\n */" },
		{ "IncludePath", "Voice/Events/VoiceEvents.h" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Container for all voice command events" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_WitResponse_MetaData[] = {
		{ "Category", "Voice" },
		{ "Comment", "/**\n\x09 * The response we receive from Wit requests parsed into UObject structures. This response contains\n\x09 * information about the meaning of the speech or text that was sent\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "The response we receive from Wit requests parsed into UObject structures. This response contains\ninformation about the meaning of the speech or text that was sent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_WitResponse = { "WitResponse", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, WitResponse), Z_Construct_UScriptStruct_FWitResponse, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_WitResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_WitResponse_MetaData)) }; // 2374453616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitResponse_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call when a Wit request has been fully processed. The callback receives the full WitResponse\n\x09 * which can be used to do any required processing\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Callback to call when a Wit request has been fully processed. The callback receives the full WitResponse\nwhich can be used to do any required processing" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitResponse = { "OnWitResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, OnWitResponse), Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitResponse_MetaData)) }; // 3997116777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitPartialResponse_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call whenever a partial Response is received from VoiceService\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Callback to call whenever a partial Response is received from VoiceService" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitPartialResponse = { "OnWitPartialResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, OnWitPartialResponse), Z_Construct_UDelegateFunction_Wit_OnWitResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitPartialResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitPartialResponse_MetaData)) }; // 3997116777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitError_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call when there is a Wit error \n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Callback to call when there is a Wit error" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitError = { "OnWitError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, OnWitError), Z_Construct_UDelegateFunction_Wit_OnWitErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitError_MetaData)) }; // 2112623604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnPartialTranscription_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call whenever a partial transcription is received from VoiceService\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Callback to call whenever a partial transcription is received from VoiceService" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnPartialTranscription = { "OnPartialTranscription", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, OnPartialTranscription), Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnPartialTranscription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnPartialTranscription_MetaData)) }; // 2746204240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnFullTranscription_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call when a full transcription is received from VoiceService\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Callback to call when a full transcription is received from VoiceService" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnFullTranscription = { "OnFullTranscription", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, OnFullTranscription), Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnFullTranscription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnFullTranscription_MetaData)) }; // 2746204240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStartVoiceInput_MetaData[] = {
		{ "Comment", "/**\n\x09 * Called when voice capture starts capturing voice data\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Called when voice capture starts capturing voice data" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStartVoiceInput = { "OnStartVoiceInput", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, OnStartVoiceInput), Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStartVoiceInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStartVoiceInput_MetaData)) }; // 991225925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInput_MetaData[] = {
		{ "Comment", "/**\n\x09 * Called when voice capture stops capturing voice data\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Called when voice capture stops capturing voice data" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInput = { "OnStopVoiceInput", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, OnStopVoiceInput), Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInput_MetaData)) }; // 991225925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToInactivity_MetaData[] = {
		{ "Comment", "/**\n\x09 * Called when voice capture stops due to the input volume dropping below the required threshold for too long\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Called when voice capture stops due to the input volume dropping below the required threshold for too long" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToInactivity = { "OnStopVoiceInputDueToInactivity", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, OnStopVoiceInputDueToInactivity), Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToInactivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToInactivity_MetaData)) }; // 991225925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToTimeout_MetaData[] = {
		{ "Comment", "/**\n\x09 * Called when voice capture stops due to exceeding the maximum capture duration\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Called when voice capture stops due to exceeding the maximum capture duration" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToTimeout = { "OnStopVoiceInputDueToTimeout", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, OnStopVoiceInputDueToTimeout), Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToTimeout_MetaData)) }; // 991225925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToDeactivation_MetaData[] = {
		{ "Comment", "/**\n\x09 * Called when voice capture stops due to a call to deactivate\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Called when voice capture stops due to a call to deactivate" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToDeactivation = { "OnStopVoiceInputDueToDeactivation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, OnStopVoiceInputDueToDeactivation), Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToDeactivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToDeactivation_MetaData)) }; // 991225925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnMinimumWakeThresholdHit_MetaData[] = {
		{ "Comment", "/**\n\x09 * Called when the minimum wake threshold is hit\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Events/VoiceEvents.h" },
		{ "ToolTip", "Called when the minimum wake threshold is hit" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnMinimumWakeThresholdHit = { "OnMinimumWakeThresholdHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceEvents, OnMinimumWakeThresholdHit), Z_Construct_UDelegateFunction_Wit_OnWitEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnMinimumWakeThresholdHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnMinimumWakeThresholdHit_MetaData)) }; // 991225925
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoiceEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_WitResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitPartialResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnWitError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnPartialTranscription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnFullTranscription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStartVoiceInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToInactivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnStopVoiceInputDueToDeactivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceEvents_Statics::NewProp_OnMinimumWakeThresholdHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoiceEvents_Statics::ClassParams = {
		&UVoiceEvents::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoiceEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceEvents_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceEvents_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceEvents()
	{
		if (!Z_Registration_Info_UClass_UVoiceEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoiceEvents.OuterSingleton, Z_Construct_UClass_UVoiceEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoiceEvents.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UVoiceEvents>()
	{
		return UVoiceEvents::StaticClass();
	}
	UVoiceEvents::UVoiceEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceEvents);
	UVoiceEvents::~UVoiceEvents() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoiceEvents, UVoiceEvents::StaticClass, TEXT("UVoiceEvents"), &Z_Registration_Info_UClass_UVoiceEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoiceEvents), 2373863077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_881234616(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Events_VoiceEvents_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
