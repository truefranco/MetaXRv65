// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Composer/WitComposerService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitComposerService() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_AVoiceExperience_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerActionHandler_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerContextMap_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerEvents_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerSpeechHandler_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UWitComposerService();
	WIT_API UClass* Z_Construct_UClass_UWitComposerService_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWitComposerService::execGetContextMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComposerContextMap**)Z_Param__Result=P_THIS->GetContextMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWitComposerService::execSetContextMap)
	{
		P_GET_OBJECT(UComposerContextMap,Z_Param_NewContextMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContextMap(Z_Param_NewContextMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWitComposerService::execGetDefaultSessionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UWitComposerService::GetDefaultSessionId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWitComposerService::execEndSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWitComposerService::execStartSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewSessionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSession(Z_Param_NewSessionId);
		P_NATIVE_END;
	}
	void UWitComposerService::StaticRegisterNativesUWitComposerService()
	{
		UClass* Class = UWitComposerService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndSession", &UWitComposerService::execEndSession },
			{ "GetContextMap", &UWitComposerService::execGetContextMap },
			{ "GetDefaultSessionId", &UWitComposerService::execGetDefaultSessionId },
			{ "SetContextMap", &UWitComposerService::execSetContextMap },
			{ "StartSession", &UWitComposerService::execStartSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWitComposerService_EndSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitComposerService_EndSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|Session" },
		{ "Comment", "/**\n\x09 * End the current composer session\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerService.h" },
		{ "ToolTip", "End the current composer session" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitComposerService_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitComposerService, nullptr, "EndSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitComposerService_EndSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitComposerService_EndSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitComposerService_EndSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitComposerService_EndSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics
	{
		struct WitComposerService_eventGetContextMap_Parms
		{
			UComposerContextMap* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitComposerService_eventGetContextMap_Parms, ReturnValue), Z_Construct_UClass_UComposerContextMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Access the the context map\n\x09 *\n\x09 * @return the current context map\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerService.h" },
		{ "ToolTip", "Access the the context map\n\n@return the current context map" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitComposerService, nullptr, "GetContextMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics::WitComposerService_eventGetContextMap_Parms), Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitComposerService_GetContextMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitComposerService_GetContextMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics
	{
		struct WitComposerService_eventGetDefaultSessionId_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitComposerService_eventGetDefaultSessionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|Session" },
		{ "Comment", "/**\n\x09 * Creates a default session id\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerService.h" },
		{ "ToolTip", "Creates a default session id" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitComposerService, nullptr, "GetDefaultSessionId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics::WitComposerService_eventGetDefaultSessionId_Parms), Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics
	{
		struct WitComposerService_eventSetContextMap_Parms
		{
			UComposerContextMap* NewContextMap;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewContextMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics::NewProp_NewContextMap = { "NewContextMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitComposerService_eventSetContextMap_Parms, NewContextMap), Z_Construct_UClass_UComposerContextMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics::NewProp_NewContextMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Update the context map\n\x09 *\n\x09 * @param NewContextMap [in] the context map\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerService.h" },
		{ "ToolTip", "Update the context map\n\n@param NewContextMap [in] the context map" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitComposerService, nullptr, "SetContextMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics::WitComposerService_eventSetContextMap_Parms), Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitComposerService_SetContextMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitComposerService_SetContextMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWitComposerService_StartSession_Statics
	{
		struct WitComposerService_eventStartSession_Parms
		{
			FString NewSessionId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewSessionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWitComposerService_StartSession_Statics::NewProp_NewSessionId = { "NewSessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitComposerService_eventStartSession_Parms, NewSessionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitComposerService_StartSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitComposerService_StartSession_Statics::NewProp_NewSessionId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitComposerService_StartSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer|Session" },
		{ "Comment", "/**\n\x09 * Start a new composer session\n\x09 *\n\x09 * @param NewSessionId [in] the session id to use. If empty then the default session id will be used\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerService.h" },
		{ "ToolTip", "Start a new composer session\n\n@param NewSessionId [in] the session id to use. If empty then the default session id will be used" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitComposerService_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitComposerService, nullptr, "StartSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWitComposerService_StartSession_Statics::WitComposerService_eventStartSession_Parms), Z_Construct_UFunction_UWitComposerService_StartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitComposerService_StartSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitComposerService_StartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitComposerService_StartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitComposerService_StartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitComposerService_StartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitComposerService);
	UClass* Z_Construct_UClass_UWitComposerService_NoRegister()
	{
		return UWitComposerService::StaticClass();
	}
	struct Z_Construct_UClass_UWitComposerService_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeechHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeechHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentContextMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentContextMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitComposerService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWitComposerService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWitComposerService_EndSession, "EndSession" }, // 2287567246
		{ &Z_Construct_UFunction_UWitComposerService_GetContextMap, "GetContextMap" }, // 4005054727
		{ &Z_Construct_UFunction_UWitComposerService_GetDefaultSessionId, "GetDefaultSessionId" }, // 1641670271
		{ &Z_Construct_UFunction_UWitComposerService_SetContextMap, "SetContextMap" }, // 2524702637
		{ &Z_Construct_UFunction_UWitComposerService_StartSession, "StartSession" }, // 3051267304
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitComposerService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Component that encapsulates the Wit Composer API. Provides functionality for making complex interactive experiences\n */" },
		{ "IncludePath", "Wit/Composer/WitComposerService.h" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerService.h" },
		{ "ToolTip", "Component that encapsulates the Wit Composer API. Provides functionality for making complex interactive experiences" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitComposerService_Statics::NewProp_VoiceExperience_MetaData[] = {
		{ "Comment", "/**\n\x09 * The voice experience that composer will use\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerService.h" },
		{ "ToolTip", "The voice experience that composer will use" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWitComposerService_Statics::NewProp_VoiceExperience = { "VoiceExperience", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitComposerService, VoiceExperience), Z_Construct_UClass_AVoiceExperience_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWitComposerService_Statics::NewProp_VoiceExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitComposerService_Statics::NewProp_VoiceExperience_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitComposerService_Statics::NewProp_EventHandler_MetaData[] = {
		{ "Comment", "/**\n\x09 * The event handler that this service should use in callbacks\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerService.h" },
		{ "ToolTip", "The event handler that this service should use in callbacks" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWitComposerService_Statics::NewProp_EventHandler = { "EventHandler", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitComposerService, EventHandler), Z_Construct_UClass_UComposerEvents_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWitComposerService_Statics::NewProp_EventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitComposerService_Statics::NewProp_EventHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitComposerService_Statics::NewProp_ActionHandler_MetaData[] = {
		{ "Comment", "/**\n\x09 * Action handler to handle any actions from a composer graph\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerService.h" },
		{ "ToolTip", "Action handler to handle any actions from a composer graph" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWitComposerService_Statics::NewProp_ActionHandler = { "ActionHandler", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitComposerService, ActionHandler), Z_Construct_UClass_UComposerActionHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWitComposerService_Statics::NewProp_ActionHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitComposerService_Statics::NewProp_ActionHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitComposerService_Statics::NewProp_SpeechHandler_MetaData[] = {
		{ "Comment", "/**\n\x09 * Speech handler to handle any speech from a composer graph\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerService.h" },
		{ "ToolTip", "Speech handler to handle any speech from a composer graph" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWitComposerService_Statics::NewProp_SpeechHandler = { "SpeechHandler", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitComposerService, SpeechHandler), Z_Construct_UClass_UComposerSpeechHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWitComposerService_Statics::NewProp_SpeechHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitComposerService_Statics::NewProp_SpeechHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitComposerService_Statics::NewProp_CurrentContextMap_MetaData[] = {
		{ "BlueprintGetter", "GetContextMap" },
		{ "BlueprintSetter", "SetContextMap" },
		{ "Category", "Composer|ContextMap" },
		{ "Comment", "/**\n\x09 * Current context map being used with the composer service\n\x09 */" },
		{ "ModuleRelativePath", "Public/Wit/Composer/WitComposerService.h" },
		{ "ToolTip", "Current context map being used with the composer service" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWitComposerService_Statics::NewProp_CurrentContextMap = { "CurrentContextMap", nullptr, (EPropertyFlags)0x0040000000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitComposerService, CurrentContextMap), Z_Construct_UClass_UComposerContextMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWitComposerService_Statics::NewProp_CurrentContextMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitComposerService_Statics::NewProp_CurrentContextMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWitComposerService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitComposerService_Statics::NewProp_VoiceExperience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitComposerService_Statics::NewProp_EventHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitComposerService_Statics::NewProp_ActionHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitComposerService_Statics::NewProp_SpeechHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitComposerService_Statics::NewProp_CurrentContextMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitComposerService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitComposerService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitComposerService_Statics::ClassParams = {
		&UWitComposerService::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWitComposerService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWitComposerService_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWitComposerService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitComposerService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitComposerService()
	{
		if (!Z_Registration_Info_UClass_UWitComposerService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitComposerService.OuterSingleton, Z_Construct_UClass_UWitComposerService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitComposerService.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UWitComposerService>()
	{
		return UWitComposerService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitComposerService);
	UWitComposerService::~UWitComposerService() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Composer_WitComposerService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Composer_WitComposerService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitComposerService, UWitComposerService::StaticClass, TEXT("UWitComposerService"), &Z_Registration_Info_UClass_UWitComposerService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitComposerService), 243759305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Composer_WitComposerService_h_3716707596(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Composer_WitComposerService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Composer_WitComposerService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
