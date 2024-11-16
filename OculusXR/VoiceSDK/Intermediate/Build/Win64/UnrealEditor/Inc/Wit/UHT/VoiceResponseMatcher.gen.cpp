// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voice/Matcher/VoiceResponseMatcher.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceResponseMatcher() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UVoiceResponseMatcher();
	WIT_API UClass* Z_Construct_UClass_UVoiceResponseMatcher_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UWitPartialResponseValidatorBase_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitResponse();
// End Cross Module References
	DEFINE_FUNCTION(UVoiceResponseMatcher::execOnWitResponse)
	{
		P_GET_UBOOL(Z_Param_bIsSuccessful);
		P_GET_STRUCT_REF(FWitResponse,Z_Param_Out_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWitResponse(Z_Param_bIsSuccessful,Z_Param_Out_Response);
		P_NATIVE_END;
	}
	void UVoiceResponseMatcher::StaticRegisterNativesUVoiceResponseMatcher()
	{
		UClass* Class = UVoiceResponseMatcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnWitResponse", &UVoiceResponseMatcher::execOnWitResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics
	{
		struct VoiceResponseMatcher_eventOnWitResponse_Parms
		{
			bool bIsSuccessful;
			FWitResponse Response;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSuccessful_MetaData[];
#endif
		static void NewProp_bIsSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessful;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_bIsSuccessful_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_bIsSuccessful_SetBit(void* Obj)
	{
		((VoiceResponseMatcher_eventOnWitResponse_Parms*)Obj)->bIsSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_bIsSuccessful = { "bIsSuccessful", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoiceResponseMatcher_eventOnWitResponse_Parms), &Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_bIsSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_bIsSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_bIsSuccessful_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoiceResponseMatcher_eventOnWitResponse_Parms, Response), Z_Construct_UScriptStruct_FWitResponse, METADATA_PARAMS(Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_Response_MetaData)) }; // 2374453616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_bIsSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Callback that is called when a Wit.ai response is received which is used to see if we have a match\n\x09 * \n\x09 * @param bIsSuccessful [in] true if the response was successful\n\x09 * @param Response [in] the full response as a UStruct\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceResponseMatcher.h" },
		{ "ToolTip", "Callback that is called when a Wit.ai response is received which is used to see if we have a match\n\n@param bIsSuccessful [in] true if the response was successful\n@param Response [in] the full response as a UStruct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceResponseMatcher, nullptr, "OnWitResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::VoiceResponseMatcher_eventOnWitResponse_Parms), Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoiceResponseMatcher);
	UClass* Z_Construct_UClass_UVoiceResponseMatcher_NoRegister()
	{
		return UVoiceResponseMatcher::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceResponseMatcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceExperienceTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VoiceExperienceTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlsoUsedForPartialResponse_MetaData[];
#endif
		static void NewProp_bIsAlsoUsedForPartialResponse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlsoUsedForPartialResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAcceptPartialResponseOncePastMatcherCriteria_MetaData[];
#endif
		static void NewProp_bAutoAcceptPartialResponseOncePastMatcherCriteria_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAcceptPartialResponseOncePastMatcherCriteria;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartialResponseValidator_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PartialResponseValidator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartialResponseValidatorInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PartialResponseValidatorInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceResponseMatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoiceResponseMatcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoiceResponseMatcher_OnWitResponse, "OnWitResponse" }, // 812558007
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceResponseMatcher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all response matchers. Implements shared functionality\n */" },
		{ "IncludePath", "Voice/Matcher/VoiceResponseMatcher.h" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceResponseMatcher.h" },
		{ "ToolTip", "Base class for all response matchers. Implements shared functionality" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_VoiceExperienceTag_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/**\n\x09 * The tag of the voice experience to use in case there is more than one. If the tag is empty use the first found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceResponseMatcher.h" },
		{ "ToolTip", "The tag of the voice experience to use in case there is more than one. If the tag is empty use the first found" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_VoiceExperienceTag = { "VoiceExperienceTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceResponseMatcher, VoiceExperienceTag), METADATA_PARAMS(Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_VoiceExperienceTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_VoiceExperienceTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bIsAlsoUsedForPartialResponse_MetaData[] = {
		{ "Category", "PartialResponse" },
		{ "Comment", "/** \n\x09 * Should this matcher also consider partial responses?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceResponseMatcher.h" },
		{ "ToolTip", "Should this matcher also consider partial responses?" },
	};
#endif
	void Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bIsAlsoUsedForPartialResponse_SetBit(void* Obj)
	{
		((UVoiceResponseMatcher*)Obj)->bIsAlsoUsedForPartialResponse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bIsAlsoUsedForPartialResponse = { "bIsAlsoUsedForPartialResponse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoiceResponseMatcher), &Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bIsAlsoUsedForPartialResponse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bIsAlsoUsedForPartialResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bIsAlsoUsedForPartialResponse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bAutoAcceptPartialResponseOncePastMatcherCriteria_MetaData[] = {
		{ "Category", "PartialResponse" },
		{ "Comment", "/** \n\x09 * Should we auto accept once the intent and confidence score are matched?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceResponseMatcher.h" },
		{ "ToolTip", "Should we auto accept once the intent and confidence score are matched?" },
	};
#endif
	void Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bAutoAcceptPartialResponseOncePastMatcherCriteria_SetBit(void* Obj)
	{
		((UVoiceResponseMatcher*)Obj)->bAutoAcceptPartialResponseOncePastMatcherCriteria = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bAutoAcceptPartialResponseOncePastMatcherCriteria = { "bAutoAcceptPartialResponseOncePastMatcherCriteria", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoiceResponseMatcher), &Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bAutoAcceptPartialResponseOncePastMatcherCriteria_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bAutoAcceptPartialResponseOncePastMatcherCriteria_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bAutoAcceptPartialResponseOncePastMatcherCriteria_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_PartialResponseValidator_MetaData[] = {
		{ "Category", "PartialResponse" },
		{ "Comment", "/** \n\x09 * PartialResponseValidator class which will be used to validate PartialResponse. Check IWitPartialResponseValidator for details.\n\x09 * Once the PartialResponseValidator's ValidatePartialResponse returns true, this method will auto accept it and cancel the request.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceResponseMatcher.h" },
		{ "ToolTip", "PartialResponseValidator class which will be used to validate PartialResponse. Check IWitPartialResponseValidator for details.\nOnce the PartialResponseValidator's ValidatePartialResponse returns true, this method will auto accept it and cancel the request." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_PartialResponseValidator = { "PartialResponseValidator", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceResponseMatcher, PartialResponseValidator), Z_Construct_UClass_UClass, Z_Construct_UClass_UWitPartialResponseValidatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_PartialResponseValidator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_PartialResponseValidator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_PartialResponseValidatorInstance_MetaData[] = {
		{ "Comment", "/** \n\x09 * The PartialResponseValidator instance which is created from the PartialResponseValidator class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Voice/Matcher/VoiceResponseMatcher.h" },
		{ "ToolTip", "The PartialResponseValidator instance which is created from the PartialResponseValidator class." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_PartialResponseValidatorInstance = { "PartialResponseValidatorInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoiceResponseMatcher, PartialResponseValidatorInstance), Z_Construct_UClass_UWitPartialResponseValidatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_PartialResponseValidatorInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_PartialResponseValidatorInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoiceResponseMatcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_VoiceExperienceTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bIsAlsoUsedForPartialResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_bAutoAcceptPartialResponseOncePastMatcherCriteria,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_PartialResponseValidator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceResponseMatcher_Statics::NewProp_PartialResponseValidatorInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceResponseMatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceResponseMatcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoiceResponseMatcher_Statics::ClassParams = {
		&UVoiceResponseMatcher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoiceResponseMatcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceResponseMatcher_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceResponseMatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceResponseMatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceResponseMatcher()
	{
		if (!Z_Registration_Info_UClass_UVoiceResponseMatcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoiceResponseMatcher.OuterSingleton, Z_Construct_UClass_UVoiceResponseMatcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoiceResponseMatcher.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UVoiceResponseMatcher>()
	{
		return UVoiceResponseMatcher::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceResponseMatcher);
	UVoiceResponseMatcher::~UVoiceResponseMatcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceResponseMatcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceResponseMatcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoiceResponseMatcher, UVoiceResponseMatcher::StaticClass, TEXT("UVoiceResponseMatcher"), &Z_Registration_Info_UClass_UVoiceResponseMatcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoiceResponseMatcher), 186617762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceResponseMatcher_h_310585208(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceResponseMatcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Voice_Matcher_VoiceResponseMatcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
