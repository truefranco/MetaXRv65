// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composer/Events/ComposerEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposerEvents() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UComposerContextMap_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerEvents();
	WIT_API UClass* Z_Construct_UClass_UComposerEvents_NoRegister();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnComposerActiveEventDelegate__DelegateSignature();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnComposerSessionEventDelegate_Parms
		{
			UComposerContextMap* ContextMap;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics::NewProp_ContextMap = { "ContextMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnComposerSessionEventDelegate_Parms, ContextMap), Z_Construct_UClass_UComposerContextMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics::NewProp_ContextMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnComposerSessionEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics::_Script_Wit_eventOnComposerSessionEventDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnComposerSessionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnComposerSessionEventDelegate, UComposerContextMap* ContextMap)
{
	struct _Script_Wit_eventOnComposerSessionEventDelegate_Parms
	{
		UComposerContextMap* ContextMap;
	};
	_Script_Wit_eventOnComposerSessionEventDelegate_Parms Parms;
	Parms.ContextMap=ContextMap;
	OnComposerSessionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Wit_OnComposerActiveEventDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnComposerActiveEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnComposerActiveEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnComposerActiveEventDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnComposerActiveEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnComposerActiveEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnComposerActiveEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnComposerActiveEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnComposerActiveEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnComposerActiveEventDelegate)
{
	OnComposerActiveEventDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	void UComposerEvents::StaticRegisterNativesUComposerEvents()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposerEvents);
	UClass* Z_Construct_UClass_UComposerEvents_NoRegister()
	{
		return UComposerEvents::StaticClass();
	}
	struct Z_Construct_UClass_UComposerEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComposerSessionBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComposerSessionBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComposerSessionEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComposerSessionEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComposerSessionChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComposerSessionChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComposerContextMapChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComposerContextMapChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComposerActivation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComposerActivation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComposerResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComposerResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComposerError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComposerError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComposerExpectsInput_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComposerExpectsInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComposerSpeakPhrase_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComposerSpeakPhrase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComposerPerformAction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComposerPerformAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComposerComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComposerComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposerEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Container for all composer events\n */" },
		{ "IncludePath", "Composer/Events/ComposerEvents.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Container for all composer events" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionBegin_MetaData[] = {
		{ "Category", "Composer|Events" },
		{ "Comment", "/**\n\x09 * Callback for composer session start\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Callback for composer session start" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionBegin = { "OnComposerSessionBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerEvents, OnComposerSessionBegin), Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionBegin_MetaData)) }; // 1189422385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionEnd_MetaData[] = {
		{ "Category", "Composer|Events" },
		{ "Comment", "/**\n\x09 * Callback for composer session end\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Callback for composer session end" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionEnd = { "OnComposerSessionEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerEvents, OnComposerSessionEnd), Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionEnd_MetaData)) }; // 1189422385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionChange_MetaData[] = {
		{ "Category", "Composer|Events" },
		{ "Comment", "/**\n\x09 * Callback when active composer session changes\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Callback when active composer session changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionChange = { "OnComposerSessionChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerEvents, OnComposerSessionChange), Z_Construct_UDelegateFunction_Wit_OnComposerActiveEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionChange_MetaData)) }; // 293509477
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerContextMapChange_MetaData[] = {
		{ "Category", "Composer|Events" },
		{ "Comment", "/**\n\x09 * Callback when the context map is updated\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Callback when the context map is updated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerContextMapChange = { "OnComposerContextMapChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerEvents, OnComposerContextMapChange), Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerContextMapChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerContextMapChange_MetaData)) }; // 1189422385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerActivation_MetaData[] = {
		{ "Category", "Composer|Events" },
		{ "Comment", "/**\n\x09 * Callback when the service is activated\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Callback when the service is activated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerActivation = { "OnComposerActivation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerEvents, OnComposerActivation), Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerActivation_MetaData)) }; // 1189422385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerResponse_MetaData[] = {
		{ "Category", "Composer|Events" },
		{ "Comment", "/**\n\x09 * Callback for a composer response\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Callback for a composer response" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerResponse = { "OnComposerResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerEvents, OnComposerResponse), Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerResponse_MetaData)) }; // 1189422385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerError_MetaData[] = {
		{ "Category", "Composer|Events" },
		{ "Comment", "/**\n\x09 * Callback when a composer error happens\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Callback when a composer error happens" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerError = { "OnComposerError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerEvents, OnComposerError), Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerError_MetaData)) }; // 1189422385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerExpectsInput_MetaData[] = {
		{ "Category", "Composer|Events" },
		{ "Comment", "/**\n\x09 * Callback for when a composer graph expects input\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Callback for when a composer graph expects input" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerExpectsInput = { "OnComposerExpectsInput", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerEvents, OnComposerExpectsInput), Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerExpectsInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerExpectsInput_MetaData)) }; // 1189422385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSpeakPhrase_MetaData[] = {
		{ "Category", "Composer|Events" },
		{ "Comment", "/**\n\x09 * Callback for when a composer graph will read a phrase\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Callback for when a composer graph will read a phrase" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSpeakPhrase = { "OnComposerSpeakPhrase", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerEvents, OnComposerSpeakPhrase), Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSpeakPhrase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSpeakPhrase_MetaData)) }; // 1189422385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerPerformAction_MetaData[] = {
		{ "Category", "Composer|Events" },
		{ "Comment", "/**\n\x09 * Callback for when a composer graph should perform an action\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Callback for when a composer graph should perform an action" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerPerformAction = { "OnComposerPerformAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerEvents, OnComposerPerformAction), Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerPerformAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerPerformAction_MetaData)) }; // 1189422385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerComplete_MetaData[] = {
		{ "Category", "Composer|Events" },
		{ "Comment", "/**\n\x09 * Callback for when a composer graph is completed\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Events/ComposerEvents.h" },
		{ "ToolTip", "Callback for when a composer graph is completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerComplete = { "OnComposerComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerEvents, OnComposerComplete), Z_Construct_UDelegateFunction_Wit_OnComposerSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerComplete_MetaData)) }; // 1189422385
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposerEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSessionChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerContextMapChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerActivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerExpectsInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerSpeakPhrase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerPerformAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerEvents_Statics::NewProp_OnComposerComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposerEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposerEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposerEvents_Statics::ClassParams = {
		&UComposerEvents::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComposerEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComposerEvents_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerEvents_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposerEvents()
	{
		if (!Z_Registration_Info_UClass_UComposerEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposerEvents.OuterSingleton, Z_Construct_UClass_UComposerEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposerEvents.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UComposerEvents>()
	{
		return UComposerEvents::StaticClass();
	}
	UComposerEvents::UComposerEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposerEvents);
	UComposerEvents::~UComposerEvents() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Events_ComposerEvents_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Events_ComposerEvents_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposerEvents, UComposerEvents::StaticClass, TEXT("UComposerEvents"), &Z_Registration_Info_UClass_UComposerEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposerEvents), 1688045199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Events_ComposerEvents_h_2810387581(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Events_ComposerEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Events_ComposerEvents_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
