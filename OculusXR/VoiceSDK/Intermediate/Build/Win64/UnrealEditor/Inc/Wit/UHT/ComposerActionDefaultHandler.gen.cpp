// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Composer/Handlers/Action/ComposerActionDefaultHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposerActionDefaultHandler() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UComposerActionDefaultHandler();
	WIT_API UClass* Z_Construct_UClass_UComposerActionDefaultHandler_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UComposerActionHandler();
	WIT_API UClass* Z_Construct_UClass_UComposerContextMap_NoRegister();
	WIT_API UFunction* Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics
	{
		struct _Script_Wit_eventOnComposerActionDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnComposerActionDelegate_Parms, Action), METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::NewProp_ContextMap = { "ContextMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Wit_eventOnComposerActionDelegate_Parms, ContextMap), Z_Construct_UClass_UComposerContextMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::NewProp_ContextMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Composer/Handlers/Action/ComposerActionDefaultHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Wit, nullptr, "OnComposerActionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::_Script_Wit_eventOnComposerActionDelegate_Parms), Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnComposerActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnComposerActionDelegate, const FString& Action, UComposerContextMap* ContextMap)
{
	struct _Script_Wit_eventOnComposerActionDelegate_Parms
	{
		FString Action;
		UComposerContextMap* ContextMap;
	};
	_Script_Wit_eventOnComposerActionDelegate_Parms Parms;
	Parms.Action=Action;
	Parms.ContextMap=ContextMap;
	OnComposerActionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UComposerActionDefaultHandler::StaticRegisterNativesUComposerActionDefaultHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposerActionDefaultHandler);
	UClass* Z_Construct_UClass_UComposerActionDefaultHandler_NoRegister()
	{
		return UComposerActionDefaultHandler::StaticClass();
	}
	struct Z_Construct_UClass_UComposerActionDefaultHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPerformAction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerformAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposerActionDefaultHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComposerActionHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerActionDefaultHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Meta" },
		{ "Comment", "/**\n * Default class for implementing a composer action handler. \n */" },
		{ "IncludePath", "Composer/Handlers/Action/ComposerActionDefaultHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Action/ComposerActionDefaultHandler.h" },
		{ "ToolTip", "Default class for implementing a composer action handler." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposerActionDefaultHandler_Statics::NewProp_OnPerformAction_MetaData[] = {
		{ "Category", "Composer|Action" },
		{ "Comment", "/**\n\x09 * Blueprint event that can be implemented to perform the action\n\x09 */" },
		{ "ModuleRelativePath", "Public/Composer/Handlers/Action/ComposerActionDefaultHandler.h" },
		{ "ToolTip", "Blueprint event that can be implemented to perform the action" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComposerActionDefaultHandler_Statics::NewProp_OnPerformAction = { "OnPerformAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposerActionDefaultHandler, OnPerformAction), Z_Construct_UDelegateFunction_Wit_OnComposerActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComposerActionDefaultHandler_Statics::NewProp_OnPerformAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerActionDefaultHandler_Statics::NewProp_OnPerformAction_MetaData)) }; // 2878083928
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposerActionDefaultHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposerActionDefaultHandler_Statics::NewProp_OnPerformAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposerActionDefaultHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposerActionDefaultHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposerActionDefaultHandler_Statics::ClassParams = {
		&UComposerActionDefaultHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComposerActionDefaultHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposerActionDefaultHandler_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComposerActionDefaultHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposerActionDefaultHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposerActionDefaultHandler()
	{
		if (!Z_Registration_Info_UClass_UComposerActionDefaultHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposerActionDefaultHandler.OuterSingleton, Z_Construct_UClass_UComposerActionDefaultHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposerActionDefaultHandler.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UComposerActionDefaultHandler>()
	{
		return UComposerActionDefaultHandler::StaticClass();
	}
	UComposerActionDefaultHandler::UComposerActionDefaultHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposerActionDefaultHandler);
	UComposerActionDefaultHandler::~UComposerActionDefaultHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Action_ComposerActionDefaultHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Action_ComposerActionDefaultHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposerActionDefaultHandler, UComposerActionDefaultHandler::StaticClass, TEXT("UComposerActionDefaultHandler"), &Z_Registration_Info_UClass_UComposerActionDefaultHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposerActionDefaultHandler), 1358863030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Action_ComposerActionDefaultHandler_h_1256666306(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Action_ComposerActionDefaultHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Composer_Handlers_Action_ComposerActionDefaultHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
