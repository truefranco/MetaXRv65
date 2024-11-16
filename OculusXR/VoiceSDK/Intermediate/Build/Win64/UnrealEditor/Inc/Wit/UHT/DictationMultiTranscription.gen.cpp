// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dictation/MultiTranscription/DictationMultiTranscription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDictationMultiTranscription() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_ADictationExperience_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UDictationMultiTranscription();
	WIT_API UClass* Z_Construct_UClass_UDictationMultiTranscription_NoRegister();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDictationMultiTranscription::execOnPartialTranscription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PartialTranscription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPartialTranscription(Z_Param_PartialTranscription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDictationMultiTranscription::execOnFullTranscription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FullTranscription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFullTranscription(Z_Param_FullTranscription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDictationMultiTranscription::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	void UDictationMultiTranscription::StaticRegisterNativesUDictationMultiTranscription()
	{
		UClass* Class = UDictationMultiTranscription::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UDictationMultiTranscription::execClear },
			{ "OnFullTranscription", &UDictationMultiTranscription::execOnFullTranscription },
			{ "OnPartialTranscription", &UDictationMultiTranscription::execOnPartialTranscription },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDictationMultiTranscription_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDictationMultiTranscription_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dictation|Multi" },
		{ "Comment", "/**\n\x09 * Clear the text and start again\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "Clear the text and start again" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDictationMultiTranscription_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDictationMultiTranscription, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDictationMultiTranscription_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDictationMultiTranscription_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDictationMultiTranscription_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDictationMultiTranscription_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics
	{
		struct DictationMultiTranscription_eventOnFullTranscription_Parms
		{
			FString FullTranscription;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullTranscription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullTranscription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::NewProp_FullTranscription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::NewProp_FullTranscription = { "FullTranscription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DictationMultiTranscription_eventOnFullTranscription_Parms, FullTranscription), METADATA_PARAMS(Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::NewProp_FullTranscription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::NewProp_FullTranscription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::NewProp_FullTranscription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callbacks that we will connect to the voice events */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "Callbacks that we will connect to the voice events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDictationMultiTranscription, nullptr, "OnFullTranscription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::DictationMultiTranscription_eventOnFullTranscription_Parms), Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics
	{
		struct DictationMultiTranscription_eventOnPartialTranscription_Parms
		{
			FString PartialTranscription;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartialTranscription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PartialTranscription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::NewProp_PartialTranscription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::NewProp_PartialTranscription = { "PartialTranscription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DictationMultiTranscription_eventOnPartialTranscription_Parms, PartialTranscription), METADATA_PARAMS(Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::NewProp_PartialTranscription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::NewProp_PartialTranscription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::NewProp_PartialTranscription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDictationMultiTranscription, nullptr, "OnPartialTranscription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::DictationMultiTranscription_eventOnPartialTranscription_Parms), Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDictationMultiTranscription);
	UClass* Z_Construct_UClass_UDictationMultiTranscription_NoRegister()
	{
		return UDictationMultiTranscription::StaticClass();
	}
	struct Z_Construct_UClass_UDictationMultiTranscription_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DictationExperienceTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DictationExperienceTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUseLimit_MetaData[];
#endif
		static void NewProp_bShouldUseLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxActivations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxActivations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoClearAfterMaxActivations_MetaData[];
#endif
		static void NewProp_bAutoClearAfterMaxActivations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoClearAfterMaxActivations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinesBetweenActivations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LinesBetweenActivations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationSeparator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActivationSeparator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTranscriptionUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTranscriptionUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ActivationCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DictationExperience_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DictationExperience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDictationMultiTranscription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDictationMultiTranscription_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDictationMultiTranscription_Clear, "Clear" }, // 3229444648
		{ &Z_Construct_UFunction_UDictationMultiTranscription_OnFullTranscription, "OnFullTranscription" }, // 4020570364
		{ &Z_Construct_UFunction_UDictationMultiTranscription_OnPartialTranscription, "OnPartialTranscription" }, // 1615297775
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationMultiTranscription_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Simple component for handling longer transcriptions across multiple requests\n */" },
		{ "IncludePath", "Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "Simple component for handling longer transcriptions across multiple requests" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_DictationExperienceTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The tag of the dictation experience to use in case there is more than one. If the tag is empty use the first found */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "The tag of the dictation experience to use in case there is more than one. If the tag is empty use the first found" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_DictationExperienceTag = { "DictationExperienceTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationMultiTranscription, DictationExperienceTag), METADATA_PARAMS(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_DictationExperienceTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_DictationExperienceTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bShouldUseLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether we use the max activations */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "Whether we use the max activations" },
	};
#endif
	void Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bShouldUseLimit_SetBit(void* Obj)
	{
		((UDictationMultiTranscription*)Obj)->bShouldUseLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bShouldUseLimit = { "bShouldUseLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDictationMultiTranscription), &Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bShouldUseLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bShouldUseLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bShouldUseLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_MaxActivations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The maximum number of activations before we stop adding more. This limits the max string length and requires a clear after */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "The maximum number of activations before we stop adding more. This limits the max string length and requires a clear after" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_MaxActivations = { "MaxActivations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationMultiTranscription, MaxActivations), METADATA_PARAMS(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_MaxActivations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_MaxActivations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bAutoClearAfterMaxActivations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** This forces a clear after we reach the max number of activations */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "This forces a clear after we reach the max number of activations" },
	};
#endif
	void Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bAutoClearAfterMaxActivations_SetBit(void* Obj)
	{
		((UDictationMultiTranscription*)Obj)->bAutoClearAfterMaxActivations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bAutoClearAfterMaxActivations = { "bAutoClearAfterMaxActivations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDictationMultiTranscription), &Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bAutoClearAfterMaxActivations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bAutoClearAfterMaxActivations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bAutoClearAfterMaxActivations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_LinesBetweenActivations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Number of lines to insert between activations */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "Number of lines to insert between activations" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_LinesBetweenActivations = { "LinesBetweenActivations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationMultiTranscription, LinesBetweenActivations), METADATA_PARAMS(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_LinesBetweenActivations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_LinesBetweenActivations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_ActivationSeparator_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A string separator to insert between activations */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "A string separator to insert between activations" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_ActivationSeparator = { "ActivationSeparator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationMultiTranscription, ActivationSeparator), METADATA_PARAMS(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_ActivationSeparator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_ActivationSeparator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_OnTranscriptionUpdated_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback to call whenever the transcription is updated\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "Callback to call whenever the transcription is updated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_OnTranscriptionUpdated = { "OnTranscriptionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationMultiTranscription, OnTranscriptionUpdated), Z_Construct_UDelegateFunction_Wit_OnWitTranscriptionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_OnTranscriptionUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_OnTranscriptionUpdated_MetaData)) }; // 2746204240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Dictation|Multi" },
		{ "Comment", "/** The current full text */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "The current full text" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationMultiTranscription, Text), METADATA_PARAMS(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_ActivationCount_MetaData[] = {
		{ "Category", "Dictation|Multi" },
		{ "Comment", "/** The current full text */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "The current full text" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_ActivationCount = { "ActivationCount", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationMultiTranscription, ActivationCount), METADATA_PARAMS(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_ActivationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_ActivationCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_DictationExperience_MetaData[] = {
		{ "Comment", "/**\n\x09 * The dictation experience that we will use\n\x09 */" },
		{ "ModuleRelativePath", "Public/Dictation/MultiTranscription/DictationMultiTranscription.h" },
		{ "ToolTip", "The dictation experience that we will use" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_DictationExperience = { "DictationExperience", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDictationMultiTranscription, DictationExperience), Z_Construct_UClass_ADictationExperience_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_DictationExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_DictationExperience_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDictationMultiTranscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_DictationExperienceTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bShouldUseLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_MaxActivations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_bAutoClearAfterMaxActivations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_LinesBetweenActivations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_ActivationSeparator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_OnTranscriptionUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_ActivationCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDictationMultiTranscription_Statics::NewProp_DictationExperience,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDictationMultiTranscription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDictationMultiTranscription>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDictationMultiTranscription_Statics::ClassParams = {
		&UDictationMultiTranscription::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDictationMultiTranscription_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDictationMultiTranscription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDictationMultiTranscription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDictationMultiTranscription()
	{
		if (!Z_Registration_Info_UClass_UDictationMultiTranscription.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDictationMultiTranscription.OuterSingleton, Z_Construct_UClass_UDictationMultiTranscription_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDictationMultiTranscription.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UDictationMultiTranscription>()
	{
		return UDictationMultiTranscription::StaticClass();
	}
	UDictationMultiTranscription::UDictationMultiTranscription(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDictationMultiTranscription);
	UDictationMultiTranscription::~UDictationMultiTranscription() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_MultiTranscription_DictationMultiTranscription_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_MultiTranscription_DictationMultiTranscription_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDictationMultiTranscription, UDictationMultiTranscription::StaticClass, TEXT("UDictationMultiTranscription"), &Z_Registration_Info_UClass_UDictationMultiTranscription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDictationMultiTranscription), 1737619377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_MultiTranscription_DictationMultiTranscription_h_3883243394(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_MultiTranscription_DictationMultiTranscription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Dictation_MultiTranscription_DictationMultiTranscription_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
