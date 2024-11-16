// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Request/WitPartialResponseValidator.h"
#include "Wit/Request/WitResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitPartialResponseValidator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UWitPartialResponseValidator();
	WIT_API UClass* Z_Construct_UClass_UWitPartialResponseValidator_NoRegister();
	WIT_API UScriptStruct* Z_Construct_UScriptStruct_FWitResponse();
// End Cross Module References
	DEFINE_FUNCTION(IWitPartialResponseValidator::execValidatePartialResponse)
	{
		P_GET_STRUCT_REF(FWitResponse,Z_Param_Out_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidatePartialResponse_Implementation(Z_Param_Out_Response);
		P_NATIVE_END;
	}
	struct WitPartialResponseValidator_eventValidatePartialResponse_Parms
	{
		FWitResponse Response;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		WitPartialResponseValidator_eventValidatePartialResponse_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IWitPartialResponseValidator::ValidatePartialResponse(FWitResponse const& Response)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ValidatePartialResponse instead.");
		WitPartialResponseValidator_eventValidatePartialResponse_Parms Parms;
		return Parms.ReturnValue;
	}
	void UWitPartialResponseValidator::StaticRegisterNativesUWitPartialResponseValidator()
	{
		UClass* Class = UWitPartialResponseValidator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ValidatePartialResponse", &IWitPartialResponseValidator::execValidatePartialResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WitPartialResponseValidator_eventValidatePartialResponse_Parms, Response), Z_Construct_UScriptStruct_FWitResponse, METADATA_PARAMS(Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::NewProp_Response_MetaData)) }; // 2374453616
	void Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WitPartialResponseValidator_eventValidatePartialResponse_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WitPartialResponseValidator_eventValidatePartialResponse_Parms), &Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Validator" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitPartialResponseValidator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWitPartialResponseValidator, nullptr, "ValidatePartialResponse", nullptr, nullptr, sizeof(WitPartialResponseValidator_eventValidatePartialResponse_Parms), Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitPartialResponseValidator);
	UClass* Z_Construct_UClass_UWitPartialResponseValidator_NoRegister()
	{
		return UWitPartialResponseValidator::StaticClass();
	}
	struct Z_Construct_UClass_UWitPartialResponseValidator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitPartialResponseValidator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWitPartialResponseValidator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWitPartialResponseValidator_ValidatePartialResponse, "ValidatePartialResponse" }, // 2690760314
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitPartialResponseValidator_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Wit/Request/WitPartialResponseValidator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitPartialResponseValidator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWitPartialResponseValidator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitPartialResponseValidator_Statics::ClassParams = {
		&UWitPartialResponseValidator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWitPartialResponseValidator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitPartialResponseValidator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitPartialResponseValidator()
	{
		if (!Z_Registration_Info_UClass_UWitPartialResponseValidator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitPartialResponseValidator.OuterSingleton, Z_Construct_UClass_UWitPartialResponseValidator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitPartialResponseValidator.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UWitPartialResponseValidator>()
	{
		return UWitPartialResponseValidator::StaticClass();
	}
	UWitPartialResponseValidator::UWitPartialResponseValidator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitPartialResponseValidator);
	UWitPartialResponseValidator::~UWitPartialResponseValidator() {}
	static FName NAME_UWitPartialResponseValidator_ValidatePartialResponse = FName(TEXT("ValidatePartialResponse"));
	bool IWitPartialResponseValidator::Execute_ValidatePartialResponse(UObject* O, FWitResponse const& Response)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWitPartialResponseValidator::StaticClass()));
		WitPartialResponseValidator_eventValidatePartialResponse_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWitPartialResponseValidator_ValidatePartialResponse);
		if (Func)
		{
			Parms.Response=Response;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IWitPartialResponseValidator*)(O->GetNativeInterfaceAddress(UWitPartialResponseValidator::StaticClass())))
		{
			Parms.ReturnValue = I->ValidatePartialResponse_Implementation(Response);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitPartialResponseValidator, UWitPartialResponseValidator::StaticClass, TEXT("UWitPartialResponseValidator"), &Z_Registration_Info_UClass_UWitPartialResponseValidator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitPartialResponseValidator), 169124670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_3018139911(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
