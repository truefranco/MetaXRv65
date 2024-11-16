// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dictation/Experience/DictationExperience.h"
#include "Dictation/Configuration/DictationConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDictationExperience() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_ADictationExperience();
	WIT_API UClass* Z_Construct_UClass_ADictationExperience_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UDictationEvents_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UDictationService_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FDictationConfiguration();
// End Cross Module References
	DEFINE_FUNCTION(ADictationExperience::execIsRequestInProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRequestInProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADictationExperience::execIsDictationActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDictationActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADictationExperience::execDeactivateDictation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeactivateDictation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADictationExperience::execActivateDictationImmediately)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateDictationImmediately();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADictationExperience::execActivateDictationWithRequestOptions)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateDictationWithRequestOptions(Z_Param_RequestOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADictationExperience::execActivateDictation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateDictation();
		P_NATIVE_END;
	}
	void ADictationExperience::StaticRegisterNativesADictationExperience()
	{
		UClass* Class = ADictationExperience::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateDictation", &ADictationExperience::execActivateDictation },
			{ "ActivateDictationImmediately", &ADictationExperience::execActivateDictationImmediately },
			{ "ActivateDictationWithRequestOptions", &ADictationExperience::execActivateDictationWithRequestOptions },
			{ "DeactivateDictation", &ADictationExperience::execDeactivateDictation },
			{ "IsDictationActive", &ADictationExperience::execIsDictationActive },
			{ "IsRequestInProgress", &ADictationExperience::execIsRequestInProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics
	{
		struct DictationExperience_eventActivateDictation_Parms
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
	void Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DictationExperience_eventActivateDictation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DictationExperience_eventActivateDictation_Parms), &Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dictation" },
		{ "Comment", "/**\n\x09 * IDictationService overrides\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dictation/Experience/DictationExperience.h" },
		{ "ToolTip", "IDictationService overrides" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADictationExperience, nullptr, "ActivateDictation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::DictationExperience_eventActivateDictation_Parms), Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADictationExperience_ActivateDictation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADictationExperience_ActivateDictation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics
	{
		struct DictationExperience_eventActivateDictationImmediately_Parms
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
	void Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DictationExperience_eventActivateDictationImmediately_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DictationExperience_eventActivateDictationImmediately_Parms), &Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dictation" },
		{ "ModuleRelativePath", "Public/Dictation/Experience/DictationExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADictationExperience, nullptr, "ActivateDictationImmediately", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::DictationExperience_eventActivateDictationImmediately_Parms), Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics
	{
		struct DictationExperience_eventActivateDictationWithRequestOptions_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::NewProp_RequestOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::NewProp_RequestOptions = { "RequestOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DictationExperience_eventActivateDictationWithRequestOptions_Parms, RequestOptions), METADATA_PARAMS(Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::NewProp_RequestOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::NewProp_RequestOptions_MetaData)) };
	void Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DictationExperience_eventActivateDictationWithRequestOptions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DictationExperience_eventActivateDictationWithRequestOptions_Parms), &Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::NewProp_RequestOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dictation" },
		{ "ModuleRelativePath", "Public/Dictation/Experience/DictationExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADictationExperience, nullptr, "ActivateDictationWithRequestOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::DictationExperience_eventActivateDictationWithRequestOptions_Parms), Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics
	{
		struct DictationExperience_eventDeactivateDictation_Parms
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
	void Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DictationExperience_eventDeactivateDictation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DictationExperience_eventDeactivateDictation_Parms), &Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dictation" },
		{ "ModuleRelativePath", "Public/Dictation/Experience/DictationExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADictationExperience, nullptr, "DeactivateDictation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::DictationExperience_eventDeactivateDictation_Parms), Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADictationExperience_DeactivateDictation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADictationExperience_DeactivateDictation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics
	{
		struct DictationExperience_eventIsDictationActive_Parms
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
	void Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DictationExperience_eventIsDictationActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DictationExperience_eventIsDictationActive_Parms), &Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dictation" },
		{ "ModuleRelativePath", "Public/Dictation/Experience/DictationExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADictationExperience, nullptr, "IsDictationActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::DictationExperience_eventIsDictationActive_Parms), Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADictationExperience_IsDictationActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADictationExperience_IsDictationActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics
	{
		struct DictationExperience_eventIsRequestInProgress_Parms
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
	void Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DictationExperience_eventIsRequestInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DictationExperience_eventIsRequestInProgress_Parms), &Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dictation" },
		{ "ModuleRelativePath", "Public/Dictation/Experience/DictationExperience.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADictationExperience, nullptr, "IsRequestInProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::DictationExperience_eventIsRequestInProgress_Parms), Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADictationExperience_IsRequestInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADictationExperience_IsRequestInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADictationExperience);
	UClass* Z_Construct_UClass_ADictationExperience_NoRegister()
	{
		return ADictationExperience::StaticClass();
	}
	struct Z_Construct_UClass_ADictationExperience_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DictationService_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DictationService;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DictationEvents_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DictationEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADictationExperience_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADictationExperience_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADictationExperience_ActivateDictation, "ActivateDictation" }, // 875134966
		{ &Z_Construct_UFunction_ADictationExperience_ActivateDictationImmediately, "ActivateDictationImmediately" }, // 366707941
		{ &Z_Construct_UFunction_ADictationExperience_ActivateDictationWithRequestOptions, "ActivateDictationWithRequestOptions" }, // 1085714096
		{ &Z_Construct_UFunction_ADictationExperience_DeactivateDictation, "DeactivateDictation" }, // 2536079132
		{ &Z_Construct_UFunction_ADictationExperience_IsDictationActive, "IsDictationActive" }, // 1090405071
		{ &Z_Construct_UFunction_ADictationExperience_IsRequestInProgress, "IsRequestInProgress" }, // 3711524342
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADictationExperience_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * The base class of dictation experiences\n */" },
		{ "IncludePath", "Dictation/Experience/DictationExperience.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Dictation/Experience/DictationExperience.h" },
		{ "ToolTip", "The base class of dictation experiences" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADictationExperience_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "Dictation" },
		{ "Comment", "/**\n\x09 * The configuration that will be used by the dictation service\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dictation/Experience/DictationExperience.h" },
		{ "ToolTip", "The configuration that will be used by the dictation service" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADictationExperience_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADictationExperience, Configuration), Z_Construct_UScriptStruct_FDictationConfiguration, METADATA_PARAMS(Z_Construct_UClass_ADictationExperience_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADictationExperience_Statics::NewProp_Configuration_MetaData)) }; // 3114918706
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADictationExperience_Statics::NewProp_DictationService_MetaData[] = {
		{ "Comment", "/**\n\x09 * The underlying dictation service that implements the dictation functionality\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dictation/Experience/DictationExperience.h" },
		{ "ToolTip", "The underlying dictation service that implements the dictation functionality" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADictationExperience_Statics::NewProp_DictationService = { "DictationService", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADictationExperience, DictationService), Z_Construct_UClass_UDictationService_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADictationExperience_Statics::NewProp_DictationService_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADictationExperience_Statics::NewProp_DictationService_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADictationExperience_Statics::NewProp_DictationEvents_MetaData[] = {
		{ "Category", "Dictation" },
		{ "Comment", "/**\n\x09 * The events used by the dictation service\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dictation/Experience/DictationExperience.h" },
		{ "ToolTip", "The events used by the dictation service" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADictationExperience_Statics::NewProp_DictationEvents = { "DictationEvents", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADictationExperience, DictationEvents), Z_Construct_UClass_UDictationEvents_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADictationExperience_Statics::NewProp_DictationEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADictationExperience_Statics::NewProp_DictationEvents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADictationExperience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADictationExperience_Statics::NewProp_Configuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADictationExperience_Statics::NewProp_DictationService,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADictationExperience_Statics::NewProp_DictationEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADictationExperience_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADictationExperience>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADictationExperience_Statics::ClassParams = {
		&ADictationExperience::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADictationExperience_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADictationExperience_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ADictationExperience_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADictationExperience_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADictationExperience()
	{
		if (!Z_Registration_Info_UClass_ADictationExperience.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADictationExperience.OuterSingleton, Z_Construct_UClass_ADictationExperience_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADictationExperience.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<ADictationExperience>()
	{
		return ADictationExperience::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADictationExperience);
	ADictationExperience::~ADictationExperience() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Experience_DictationExperience_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Experience_DictationExperience_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADictationExperience, ADictationExperience::StaticClass, TEXT("ADictationExperience"), &Z_Registration_Info_UClass_ADictationExperience, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADictationExperience), 1359915112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Experience_DictationExperience_h_1155208530(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Experience_DictationExperience_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_Experience_DictationExperience_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
