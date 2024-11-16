// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voice/Experience/VoiceExperience.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceExperience() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_AVoiceExperience();
	WIT_API UClass* Z_Construct_UClass_AVoiceExperience_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UVoiceEvents_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UVoiceService_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitResponse();
// End Cross Module References
	DEFINE_FUNCTION(AVoiceExperience::execAcceptPartialResponseAndCancelRequest)
	{
		P_GET_STRUCT_REF(FWitResponse,Z_Param_Out_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptPartialResponseAndCancelRequest(Z_Param_Out_Response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execSendTranscriptionWithRequestOptions)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendTranscriptionWithRequestOptions(Z_Param_Text,Z_Param_RequestOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execSendTranscription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendTranscription(Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execIsRequestInProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRequestInProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execIsVoiceStreamingActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVoiceStreamingActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execGetVoiceInputVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVoiceInputVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execIsVoiceInputActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVoiceInputActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execDeactivateAndAbortRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeactivateAndAbortRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execDeactivateVoiceInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeactivateVoiceInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execActivateVoiceInputImmediatelyWithRequestOptions)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateVoiceInputImmediatelyWithRequestOptions(Z_Param_RequestOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execActivateVoiceInputImmediately)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateVoiceInputImmediately();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execActivateVoiceInputWithRequestOptions)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateVoiceInputWithRequestOptions(Z_Param_RequestOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoiceExperience::execActivateVoiceInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateVoiceInput();
		P_NATIVE_END;
	}
	void AVoiceExperience::StaticRegisterNativesAVoiceExperience()
	{
		UClass* Class = AVoiceExperience::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptPartialResponseAndCancelRequest", &AVoiceExperience::execAcceptPartialResponseAndCancelRequest },
			{ "ActivateVoiceInput", &AVoiceExperience::execActivateVoiceInput },
			{ "ActivateVoiceInputImmediately", &AVoiceExperience::execActivateVoiceInputImmediately },
			{ "ActivateVoiceInputImmediatelyWithRequestOptions", &AVoiceExperience::execActivateVoiceInputImmediatelyWithRequestOptions },
			{ "ActivateVoiceInputWithRequestOptions", &AVoiceExperience::execActivateVoiceInputWithRequestOptions },
			{ "DeactivateAndAbortRequest", &AVoiceExperience::execDeactivateAndAbortRequest },
			{ "DeactivateVoiceInput", &AVoiceExperience::execDeactivateVoiceInput },
			{ "GetVoiceInputVolume", &AVoiceExperience::execGetVoiceInputVolume },
			{ "IsRequestInProgress", &AVoiceExperience::execIsRequestInProgress },
			{ "IsVoiceInputActive", &AVoiceExperience::execIsVoiceInputActive },
			{ "IsVoiceStreamingActive", &AVoiceExperience::execIsVoiceStreamingActive },
			{ "SendTranscription", &AVoiceExperience::execSendTranscription },
			{ "SendTranscriptionWithRequestOptions", &AVoiceExperience::execSendTranscriptionWithRequestOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics
	{
		struct VoiceExperience_eventAcceptPartialResponseAndCancelRequest_Parms
		{
			FWitResponse Response;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoiceExperience_eventAcceptPartialResponseAndCancelRequest_Parms, Response), Z_Construct_UScriptStruct_FWitResponse, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::NewProp_Response_MetaData)) }; // 2374453616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "AcceptPartialResponseAndCancelRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::VoiceExperience_eventAcceptPartialResponseAndCancelRequest_Parms), Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics
	{
		struct VoiceExperience_eventActivateVoiceInput_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceExperience_eventActivateVoiceInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoiceExperience_eventActivateVoiceInput_Parms), &Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "Comment", "/**\n\x09 * IVoiceService overrides\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
		{ "ToolTip", "IVoiceService overrides" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "ActivateVoiceInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::VoiceExperience_eventActivateVoiceInput_Parms), Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics
	{
		struct VoiceExperience_eventActivateVoiceInputImmediately_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceExperience_eventActivateVoiceInputImmediately_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoiceExperience_eventActivateVoiceInputImmediately_Parms), &Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "ActivateVoiceInputImmediately", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::VoiceExperience_eventActivateVoiceInputImmediately_Parms), Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics
	{
		struct VoiceExperience_eventActivateVoiceInputImmediatelyWithRequestOptions_Parms
		{
			FString RequestOptions;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequestOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::NewProp_RequestOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::NewProp_RequestOptions = { "RequestOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoiceExperience_eventActivateVoiceInputImmediatelyWithRequestOptions_Parms, RequestOptions), METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::NewProp_RequestOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::NewProp_RequestOptions_MetaData)) };
	void Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceExperience_eventActivateVoiceInputImmediatelyWithRequestOptions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoiceExperience_eventActivateVoiceInputImmediatelyWithRequestOptions_Parms), &Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::NewProp_RequestOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "ActivateVoiceInputImmediatelyWithRequestOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::VoiceExperience_eventActivateVoiceInputImmediatelyWithRequestOptions_Parms), Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics
	{
		struct VoiceExperience_eventActivateVoiceInputWithRequestOptions_Parms
		{
			FString RequestOptions;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequestOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::NewProp_RequestOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::NewProp_RequestOptions = { "RequestOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoiceExperience_eventActivateVoiceInputWithRequestOptions_Parms, RequestOptions), METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::NewProp_RequestOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::NewProp_RequestOptions_MetaData)) };
	void Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceExperience_eventActivateVoiceInputWithRequestOptions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoiceExperience_eventActivateVoiceInputWithRequestOptions_Parms), &Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::NewProp_RequestOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "ActivateVoiceInputWithRequestOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::VoiceExperience_eventActivateVoiceInputWithRequestOptions_Parms), Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics
	{
		struct VoiceExperience_eventDeactivateAndAbortRequest_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceExperience_eventDeactivateAndAbortRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoiceExperience_eventDeactivateAndAbortRequest_Parms), &Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "DeactivateAndAbortRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::VoiceExperience_eventDeactivateAndAbortRequest_Parms), Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics
	{
		struct VoiceExperience_eventDeactivateVoiceInput_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceExperience_eventDeactivateVoiceInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoiceExperience_eventDeactivateVoiceInput_Parms), &Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "DeactivateVoiceInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::VoiceExperience_eventDeactivateVoiceInput_Parms), Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics
	{
		struct VoiceExperience_eventGetVoiceInputVolume_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoiceExperience_eventGetVoiceInputVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "GetVoiceInputVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics::VoiceExperience_eventGetVoiceInputVolume_Parms), Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics
	{
		struct VoiceExperience_eventIsRequestInProgress_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceExperience_eventIsRequestInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoiceExperience_eventIsRequestInProgress_Parms), &Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "IsRequestInProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::VoiceExperience_eventIsRequestInProgress_Parms), Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics
	{
		struct VoiceExperience_eventIsVoiceInputActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceExperience_eventIsVoiceInputActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoiceExperience_eventIsVoiceInputActive_Parms), &Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "IsVoiceInputActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::VoiceExperience_eventIsVoiceInputActive_Parms), Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics
	{
		struct VoiceExperience_eventIsVoiceStreamingActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoiceExperience_eventIsVoiceStreamingActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoiceExperience_eventIsVoiceStreamingActive_Parms), &Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "IsVoiceStreamingActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::VoiceExperience_eventIsVoiceStreamingActive_Parms), Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics
	{
		struct VoiceExperience_eventSendTranscription_Parms
		{
			FString Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoiceExperience_eventSendTranscription_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "SendTranscription", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::VoiceExperience_eventSendTranscription_Parms), Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_SendTranscription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_SendTranscription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics
	{
		struct VoiceExperience_eventSendTranscriptionWithRequestOptions_Parms
		{
			FString Text;
			FString RequestOptions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequestOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoiceExperience_eventSendTranscriptionWithRequestOptions_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::NewProp_RequestOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::NewProp_RequestOptions = { "RequestOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoiceExperience_eventSendTranscriptionWithRequestOptions_Parms, RequestOptions), METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::NewProp_RequestOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::NewProp_RequestOptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::NewProp_RequestOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoiceExperience, nullptr, "SendTranscriptionWithRequestOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::VoiceExperience_eventSendTranscriptionWithRequestOptions_Parms), Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoiceExperience);
	UClass* Z_Construct_UClass_AVoiceExperience_NoRegister()
	{
		return AVoiceExperience::StaticClass();
	}
	struct Z_Construct_UClass_AVoiceExperience_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceService_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceService;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Configuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceEvents_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoiceExperience_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoiceExperience_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoiceExperience_AcceptPartialResponseAndCancelRequest, "AcceptPartialResponseAndCancelRequest" }, // 3488471729
		{ &Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInput, "ActivateVoiceInput" }, // 72753167
		{ &Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediately, "ActivateVoiceInputImmediately" }, // 1633338556
		{ &Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputImmediatelyWithRequestOptions, "ActivateVoiceInputImmediatelyWithRequestOptions" }, // 1788389919
		{ &Z_Construct_UFunction_AVoiceExperience_ActivateVoiceInputWithRequestOptions, "ActivateVoiceInputWithRequestOptions" }, // 4289059454
		{ &Z_Construct_UFunction_AVoiceExperience_DeactivateAndAbortRequest, "DeactivateAndAbortRequest" }, // 2177914421
		{ &Z_Construct_UFunction_AVoiceExperience_DeactivateVoiceInput, "DeactivateVoiceInput" }, // 553464963
		{ &Z_Construct_UFunction_AVoiceExperience_GetVoiceInputVolume, "GetVoiceInputVolume" }, // 4067145295
		{ &Z_Construct_UFunction_AVoiceExperience_IsRequestInProgress, "IsRequestInProgress" }, // 1355122449
		{ &Z_Construct_UFunction_AVoiceExperience_IsVoiceInputActive, "IsVoiceInputActive" }, // 2765064825
		{ &Z_Construct_UFunction_AVoiceExperience_IsVoiceStreamingActive, "IsVoiceStreamingActive" }, // 1334448140
		{ &Z_Construct_UFunction_AVoiceExperience_SendTranscription, "SendTranscription" }, // 3010600619
		{ &Z_Construct_UFunction_AVoiceExperience_SendTranscriptionWithRequestOptions, "SendTranscriptionWithRequestOptions" }, // 2443980323
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoiceExperience_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * The base class of VoiceExperience\n */" },
		{ "IncludePath", "Voice/Experience/VoiceExperience.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
		{ "ToolTip", "The base class of VoiceExperience" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoiceExperience_Statics::NewProp_VoiceService_MetaData[] = {
		{ "Comment", "/**\n\x09 * The underlying voice service that implements the voice functionality\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
		{ "ToolTip", "The underlying voice service that implements the voice functionality" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoiceExperience_Statics::NewProp_VoiceService = { "VoiceService", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoiceExperience, VoiceService), Z_Construct_UClass_UVoiceService_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoiceExperience_Statics::NewProp_VoiceService_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoiceExperience_Statics::NewProp_VoiceService_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoiceExperience_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "Voice" },
		{ "Comment", "/**\n\x09 * The configuration that will be used \n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
		{ "ToolTip", "The configuration that will be used" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoiceExperience_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoiceExperience, Configuration), Z_Construct_UClass_UWitAppConfigurationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoiceExperience_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoiceExperience_Statics::NewProp_Configuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoiceExperience_Statics::NewProp_VoiceEvents_MetaData[] = {
		{ "Category", "Voice" },
		{ "Comment", "/**\n\x09 * The events used by the voice service\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Voice/Experience/VoiceExperience.h" },
		{ "ToolTip", "The events used by the voice service" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoiceExperience_Statics::NewProp_VoiceEvents = { "VoiceEvents", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoiceExperience, VoiceEvents), Z_Construct_UClass_UVoiceEvents_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoiceExperience_Statics::NewProp_VoiceEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoiceExperience_Statics::NewProp_VoiceEvents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoiceExperience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoiceExperience_Statics::NewProp_VoiceService,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoiceExperience_Statics::NewProp_Configuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoiceExperience_Statics::NewProp_VoiceEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoiceExperience_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoiceExperience>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoiceExperience_Statics::ClassParams = {
		&AVoiceExperience::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVoiceExperience_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoiceExperience_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVoiceExperience_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoiceExperience_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoiceExperience()
	{
		if (!Z_Registration_Info_UClass_AVoiceExperience.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoiceExperience.OuterSingleton, Z_Construct_UClass_AVoiceExperience_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoiceExperience.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<AVoiceExperience>()
	{
		return AVoiceExperience::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoiceExperience);
	AVoiceExperience::~AVoiceExperience() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoiceExperience, AVoiceExperience::StaticClass, TEXT("AVoiceExperience"), &Z_Registration_Info_UClass_AVoiceExperience, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoiceExperience), 3945668382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_1869697786(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Experience_VoiceExperience_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
