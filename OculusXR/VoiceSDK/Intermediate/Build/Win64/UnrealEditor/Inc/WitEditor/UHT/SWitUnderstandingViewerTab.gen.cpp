// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tool/UnderstandingViewer/SWitUnderstandingViewerTab.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWitUnderstandingViewerTab() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WitEditor();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitResponse();
	WITEDITOR_API UClass* Z_Construct_UClass_UWitResponseObject();
	WITEDITOR_API UClass* Z_Construct_UClass_UWitResponseObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWitResponseObject::execOnWitResponse)
	{
		P_GET_UBOOL(Z_Param_bIsSuccessful);
		P_GET_STRUCT_REF(FWitResponse,Z_Param_Out_WitResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWitResponse(Z_Param_bIsSuccessful,Z_Param_Out_WitResponse);
		P_NATIVE_END;
	}
	void UWitResponseObject::StaticRegisterNativesUWitResponseObject()
	{
		UClass* Class = UWitResponseObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnWitResponse", &UWitResponseObject::execOnWitResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics
	{
		struct WitResponseObject_eventOnWitResponse_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_bIsSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_bIsSuccessful_SetBit(void* Obj)
	{
		((WitResponseObject_eventOnWitResponse_Parms*)Obj)->bIsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_bIsSuccessful = { "bIsSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WitResponseObject_eventOnWitResponse_Parms), &Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_bIsSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_bIsSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_bIsSuccessful_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_WitResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_WitResponse = { "WitResponse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitResponseObject_eventOnWitResponse_Parms, WitResponse), Z_Construct_UScriptStruct_FWitResponse, METADATA_PARAMS(Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_WitResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_WitResponse_MetaData)) }; // 2374453616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_bIsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::NewProp_WitResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback to receive and update the response structure when Wit.ai responds */" },
		{ "ModuleRelativePath", "Private/Tool/UnderstandingViewer/SWitUnderstandingViewerTab.h" },
		{ "ToolTip", "Callback to receive and update the response structure when Wit.ai responds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitResponseObject, nullptr, "OnWitResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::WitResponseObject_eventOnWitResponse_Parms), Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitResponseObject_OnWitResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitResponseObject_OnWitResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitResponseObject);
	UClass* Z_Construct_UClass_UWitResponseObject_NoRegister()
	{
		return UWitResponseObject::StaticClass();
	}
	struct Z_Construct_UClass_UWitResponseObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitResponseObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WitEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWitResponseObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWitResponseObject_OnWitResponse, "OnWitResponse" }, // 3739787240
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitResponseObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UObject representation of the full JSON object used by Wit.ai responses. See the Wit.ai\n * documentation for the meaning of each specific field.\n */" },
		{ "IncludePath", "Tool/UnderstandingViewer/SWitUnderstandingViewerTab.h" },
		{ "ModuleRelativePath", "Private/Tool/UnderstandingViewer/SWitUnderstandingViewerTab.h" },
		{ "ToolTip", "UObject representation of the full JSON object used by Wit.ai responses. See the Wit.ai\ndocumentation for the meaning of each specific field." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitResponseObject_Statics::NewProp_Response_MetaData[] = {
		{ "Category", "Voice Experience" },
		{ "Comment", "/** The response received from Wit.ai */" },
		{ "ModuleRelativePath", "Private/Tool/UnderstandingViewer/SWitUnderstandingViewerTab.h" },
		{ "ToolTip", "The response received from Wit.ai" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWitResponseObject_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWitResponseObject, Response), Z_Construct_UScriptStruct_FWitResponse, METADATA_PARAMS(Z_Construct_UClass_UWitResponseObject_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWitResponseObject_Statics::NewProp_Response_MetaData)) }; // 2374453616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWitResponseObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWitResponseObject_Statics::NewProp_Response,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitResponseObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitResponseObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitResponseObject_Statics::ClassParams = {
		&UWitResponseObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWitResponseObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWitResponseObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWitResponseObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitResponseObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitResponseObject()
	{
		if (!Z_Registration_Info_UClass_UWitResponseObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitResponseObject.OuterSingleton, Z_Construct_UClass_UWitResponseObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitResponseObject.OuterSingleton;
	}
	template<> WITEDITOR_API UClass* StaticClass<UWitResponseObject>()
	{
		return UWitResponseObject::StaticClass();
	}
	UWitResponseObject::UWitResponseObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitResponseObject);
	UWitResponseObject::~UWitResponseObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_UnderstandingViewer_SWitUnderstandingViewerTab_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_UnderstandingViewer_SWitUnderstandingViewerTab_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitResponseObject, UWitResponseObject::StaticClass, TEXT("UWitResponseObject"), &Z_Registration_Info_UClass_UWitResponseObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitResponseObject), 2523045365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_UnderstandingViewer_SWitUnderstandingViewerTab_h_3237994265(TEXT("/Script/WitEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_UnderstandingViewer_SWitUnderstandingViewerTab_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_WitEditor_Private_Tool_UnderstandingViewer_SWitUnderstandingViewerTab_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
