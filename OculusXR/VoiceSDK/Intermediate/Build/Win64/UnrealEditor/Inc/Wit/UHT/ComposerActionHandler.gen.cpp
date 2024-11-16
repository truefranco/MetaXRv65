// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composer/Handlers/Action/ComposerActionHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposerActionHandler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UComposerActionHandler();
	WIT_API UClass* Z_Construct_UClass_UComposerActionHandler_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerContextMap_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComposerActionHandler::execMarkActionComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkActionComplete(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerActionHandler::execIsPerformingAction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPerformingAction(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposerActionHandler::execPerformAction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Action);
		P_GET_OBJECT(UComposerContextMap,Z_Param_ContextMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformAction(Z_Param_Action,Z_Param_ContextMap);
		P_NATIVE_END;
	}
	void UComposerActionHandler::StaticRegisterNativesUComposerActionHandler()
	{
		UClass* Class = UComposerActionHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPerformingAction", &UComposerActionHandler::execIsPerformingAction },
			{ "MarkActionComplete", &UComposerActionHandler::execMarkActionComplete },
			{ "PerformAction", &UComposerActionHandler::execPerformAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics
	{
		struct ComposerActionHandler_eventIsPerformingAction_Parms
		{
			FString Action;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerActionHandler_eventIsPerformingAction_Parms, Action), METADATA_PARAMS(Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::NewProp_Action_MetaData)) };
	void Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposerActionHandler_eventIsPerformingAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposerActionHandler_eventIsPerformingAction_Parms), &Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Action/ComposerActionHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerActionHandler, nullptr, "IsPerformingAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::ComposerActionHandler_eventIsPerformingAction_Parms), Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics
	{
		struct ComposerActionHandler_eventMarkActionComplete_Parms
		{
			FString Action;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerActionHandler_eventMarkActionComplete_Parms, Action), METADATA_PARAMS(Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Action/ComposerActionHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerActionHandler, nullptr, "MarkActionComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::ComposerActionHandler_eventMarkActionComplete_Parms), Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics
	{
		struct ComposerActionHandler_eventPerformAction_Parms
		{
			FString Action;
			UComposerContextMap* ContextMap;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerActionHandler_eventPerformAction_Parms, Action), METADATA_PARAMS(Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::NewProp_ContextMap = { "ContextMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposerActionHandler_eventPerformAction_Parms, ContextMap), Z_Construct_UClass_UComposerContextMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::NewProp_ContextMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composer" },
		{ "Comment", "/**\n\x09 * IComposerActionHandlerBase default implementation\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Action/ComposerActionHandler.h" },
		{ "ToolTip", "IComposerActionHandlerBase default implementation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposerActionHandler, nullptr, "PerformAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::ComposerActionHandler_eventPerformAction_Parms), Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposerActionHandler_PerformAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposerActionHandler_PerformAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposerActionHandler);
	UClass* Z_Construct_UClass_UComposerActionHandler_NoRegister()
	{
		return UComposerActionHandler::StaticClass();
	}
	struct Z_Construct_UClass_UComposerActionHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposerActionHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComposerActionHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComposerActionHandler_IsPerformingAction, "IsPerformingAction" }, // 1923268901
		{ &Z_Construct_UFunction_UComposerActionHandler_MarkActionComplete, "MarkActionComplete" }, // 2668176173
		{ &Z_Construct_UFunction_UComposerActionHandler_PerformAction, "PerformAction" }, // 3294636644
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerActionHandler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract class for implementing a composer action handler. This should be the base if you want to implement your own action handler implementation\n */" },
		{ "IncludePath", "Composer/Handlers/Action/ComposerActionHandler.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Action/ComposerActionHandler.h" },
		{ "ToolTip", "Abstract class for implementing a composer action handler. This should be the base if you want to implement your own action handler implementation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposerActionHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposerActionHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposerActionHandler_Statics::ClassParams = {
		&UComposerActionHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UComposerActionHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerActionHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposerActionHandler()
	{
		if (!Z_Registration_Info_UClass_UComposerActionHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposerActionHandler.OuterSingleton, Z_Construct_UClass_UComposerActionHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposerActionHandler.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UComposerActionHandler>()
	{
		return UComposerActionHandler::StaticClass();
	}
	UComposerActionHandler::UComposerActionHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposerActionHandler);
	UComposerActionHandler::~UComposerActionHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Action_ComposerActionHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Action_ComposerActionHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposerActionHandler, UComposerActionHandler::StaticClass, TEXT("UComposerActionHandler"), &Z_Registration_Info_UClass_UComposerActionHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposerActionHandler), 402467568U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Action_ComposerActionHandler_h_185163500(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Action_ComposerActionHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Action_ComposerActionHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
