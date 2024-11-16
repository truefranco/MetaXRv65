// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Dictation/WitDictationService.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitDictationService() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_AVoiceExperience_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UDictationService();
	WIT_API UClass* Z_Construct_UClass_UWitDictationService();
	WIT_API UClass* Z_Construct_UClass_UWitDictationService_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitResponse();
// End Cross Module References
	DEFINE_FUNCTION(UWitDictationService::execOnWitError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
		P_GET_PROPERTY(FStrProperty,Z_Param_HumanReadableMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWitError(Z_Param_ErrorMessage,Z_Param_HumanReadableMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWitDictationService::execOnWitResponse)
	{
		P_GET_UBOOL(Z_Param_bIsSuccessful);
		P_GET_STRUCT_REF(FWitResponse,Z_Param_Out_WitResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWitResponse(Z_Param_bIsSuccessful,Z_Param_Out_WitResponse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWitDictationService::execOnStopVoiceInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopVoiceInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWitDictationService::execOnStartVoiceInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartVoiceInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWitDictationService::execOnPartialTranscription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Transcription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPartialTranscription(Z_Param_Transcription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWitDictationService::execOnFullTranscription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Transcription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFullTranscription(Z_Param_Transcription);
		P_NATIVE_END;
	}
	void UWitDictationService::StaticRegisterNativesUWitDictationService()
	{
		UClass* Class = UWitDictationService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFullTranscription", &UWitDictationService::execOnFullTranscription },
			{ "OnPartialTranscription", &UWitDictationService::execOnPartialTranscription },
			{ "OnStartVoiceInput", &UWitDictationService::execOnStartVoiceInput },
			{ "OnStopVoiceInput", &UWitDictationService::execOnStopVoiceInput },
			{ "OnWitError", &UWitDictationService::execOnWitError },
			{ "OnWitResponse", &UWitDictationService::execOnWitResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics
	{
		struct WitDictationService_eventOnFullTranscription_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::NewProp_Transcription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::NewProp_Transcription = { "Transcription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitDictationService_eventOnFullTranscription_Parms, Transcription), METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::NewProp_Transcription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::NewProp_Transcription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::NewProp_Transcription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callbacks that we will connect to the voice events */" },
		{ "ModuleRelativePath", "Public/Wit/Dictation/WitDictationService.h" },
		{ "ToolTip", "Callbacks that we will connect to the voice events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitDictationService, nullptr, "OnFullTranscription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::WitDictationService_eventOnFullTranscription_Parms), Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitDictationService_OnFullTranscription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitDictationService_OnFullTranscription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics
	{
		struct WitDictationService_eventOnPartialTranscription_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::NewProp_Transcription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::NewProp_Transcription = { "Transcription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitDictationService_eventOnPartialTranscription_Parms, Transcription), METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::NewProp_Transcription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::NewProp_Transcription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::NewProp_Transcription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wit/Dictation/WitDictationService.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitDictationService, nullptr, "OnPartialTranscription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::WitDictationService_eventOnPartialTranscription_Parms), Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitDictationService_OnPartialTranscription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitDictationService_OnPartialTranscription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWitDictationService_OnStartVoiceInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnStartVoiceInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wit/Dictation/WitDictationService.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitDictationService_OnStartVoiceInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitDictationService, nullptr, "OnStartVoiceInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnStartVoiceInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnStartVoiceInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitDictationService_OnStartVoiceInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitDictationService_OnStartVoiceInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWitDictationService_OnStopVoiceInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnStopVoiceInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wit/Dictation/WitDictationService.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitDictationService_OnStopVoiceInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitDictationService, nullptr, "OnStopVoiceInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnStopVoiceInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnStopVoiceInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitDictationService_OnStopVoiceInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitDictationService_OnStopVoiceInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWitDictationService_OnWitError_Statics
	{
		struct WitDictationService_eventOnWitError_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitDictationService_eventOnWitError_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::NewProp_HumanReadableMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::NewProp_HumanReadableMessage = { "HumanReadableMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitDictationService_eventOnWitError_Parms, HumanReadableMessage), METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::NewProp_HumanReadableMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::NewProp_HumanReadableMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::NewProp_HumanReadableMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wit/Dictation/WitDictationService.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitDictationService, nullptr, "OnWitError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::WitDictationService_eventOnWitError_Parms), Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitDictationService_OnWitError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitDictationService_OnWitError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics
	{
		struct WitDictationService_eventOnWitResponse_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_bIsSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_bIsSuccessful_SetBit(void* Obj)
	{
		((WitDictationService_eventOnWitResponse_Parms*)Obj)->bIsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_bIsSuccessful = { "bIsSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WitDictationService_eventOnWitResponse_Parms), &Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_bIsSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_bIsSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_bIsSuccessful_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_WitResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_WitResponse = { "WitResponse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitDictationService_eventOnWitResponse_Parms, WitResponse), Z_Construct_UScriptStruct_FWitResponse, METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_WitResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_WitResponse_MetaData)) }; // 2374453616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_bIsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::NewProp_WitResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wit/Dictation/WitDictationService.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitDictationService, nullptr, "OnWitResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::WitDictationService_eventOnWitResponse_Parms), Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitDictationService_OnWitResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitDictationService_OnWitResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitDictationService);
	UClass* Z_Construct_UClass_UWitDictationService_NoRegister()
	{
		return UWitDictationService::StaticClass();
	}
	struct Z_Construct_UClass_UWitDictationService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceExperience_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceExperience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitDictationService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDictationService,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWitDictationService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWitDictationService_OnFullTranscription, "OnFullTranscription" }, // 1649310160
		{ &Z_Construct_UFunction_UWitDictationService_OnPartialTranscription, "OnPartialTranscription" }, // 4292429198
		{ &Z_Construct_UFunction_UWitDictationService_OnStartVoiceInput, "OnStartVoiceInput" }, // 1496098427
		{ &Z_Construct_UFunction_UWitDictationService_OnStopVoiceInput, "OnStopVoiceInput" }, // 886219093
		{ &Z_Construct_UFunction_UWitDictationService_OnWitError, "OnWitError" }, // 343269117
		{ &Z_Construct_UFunction_UWitDictationService_OnWitResponse, "OnWitResponse" }, // 4271300479
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitDictationService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Component that encapsulates the Wit dictation API. Provides functionality for long form speech to text\n * using Wit.ai\n */" },
		{ "IncludePath", "Wit/Dictation/WitDictationService.h" },
		{ "ModuleRelativePath", "Public/Wit/Dictation/WitDictationService.h" },
		{ "ToolTip", "Component that encapsulates the Wit dictation API. Provides functionality for long form speech to text\nusing Wit.ai" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitDictationService_Statics::NewProp_VoiceExperience_MetaData[] = {
		{ "Comment", "/**\n\x09 * The voice experience that dictation will use\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/Dictation/WitDictationService.h" },
		{ "ToolTip", "The voice experience that dictation will use" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWitDictationService_Statics::NewProp_VoiceExperience = { "VoiceExperience", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitDictationService, VoiceExperience), Z_Construct_UClass_AVoiceExperience_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWitDictationService_Statics::NewProp_VoiceExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitDictationService_Statics::NewProp_VoiceExperience_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWitDictationService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitDictationService_Statics::NewProp_VoiceExperience,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitDictationService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitDictationService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitDictationService_Statics::ClassParams = {
		&UWitDictationService::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWitDictationService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWitDictationService_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWitDictationService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitDictationService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitDictationService()
	{
		if (!Z_Registration_Info_UClass_UWitDictationService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitDictationService.OuterSingleton, Z_Construct_UClass_UWitDictationService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitDictationService.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UWitDictationService>()
	{
		return UWitDictationService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitDictationService);
	UWitDictationService::~UWitDictationService() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Dictation_WitDictationService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Dictation_WitDictationService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitDictationService, UWitDictationService::StaticClass, TEXT("UWitDictationService"), &Z_Registration_Info_UClass_UWitDictationService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitDictationService), 429097997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Dictation_WitDictationService_h_3703779735(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Dictation_WitDictationService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Dictation_WitDictationService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
