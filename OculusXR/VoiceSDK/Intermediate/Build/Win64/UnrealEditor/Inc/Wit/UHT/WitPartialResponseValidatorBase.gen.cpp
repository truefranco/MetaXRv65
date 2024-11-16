// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wit/Request/WitPartialResponseValidatorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitPartialResponseValidatorBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Wit();
	WIT_API UClass* Z_Construct_UClass_UWitPartialResponseValidator_NoRegister();
	WIT_API UClass* Z_Construct_UClass_UWitPartialResponseValidatorBase();
	WIT_API UClass* Z_Construct_UClass_UWitPartialResponseValidatorBase_NoRegister();
// End Cross Module References
	void UWitPartialResponseValidatorBase::StaticRegisterNativesUWitPartialResponseValidatorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWitPartialResponseValidatorBase);
	UClass* Z_Construct_UClass_UWitPartialResponseValidatorBase_NoRegister()
	{
		return UWitPartialResponseValidatorBase::StaticClass();
	}
	struct Z_Construct_UClass_UWitPartialResponseValidatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWitPartialResponseValidatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Wit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWitPartialResponseValidatorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Wit/Request/WitPartialResponseValidatorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Wit/Request/WitPartialResponseValidatorBase.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWitPartialResponseValidatorBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWitPartialResponseValidator_NoRegister, (int32)VTABLE_OFFSET(UWitPartialResponseValidatorBase, IWitPartialResponseValidator), false },  // 169124670
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWitPartialResponseValidatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWitPartialResponseValidatorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWitPartialResponseValidatorBase_Statics::ClassParams = {
		&UWitPartialResponseValidatorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWitPartialResponseValidatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWitPartialResponseValidatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWitPartialResponseValidatorBase()
	{
		if (!Z_Registration_Info_UClass_UWitPartialResponseValidatorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWitPartialResponseValidatorBase.OuterSingleton, Z_Construct_UClass_UWitPartialResponseValidatorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWitPartialResponseValidatorBase.OuterSingleton;
	}
	template<> WIT_API UClass* StaticClass<UWitPartialResponseValidatorBase>()
	{
		return UWitPartialResponseValidatorBase::StaticClass();
	}
	UWitPartialResponseValidatorBase::UWitPartialResponseValidatorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWitPartialResponseValidatorBase);
	UWitPartialResponseValidatorBase::~UWitPartialResponseValidatorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidatorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidatorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWitPartialResponseValidatorBase, UWitPartialResponseValidatorBase::StaticClass, TEXT("UWitPartialResponseValidatorBase"), &Z_Registration_Info_UClass_UWitPartialResponseValidatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWitPartialResponseValidatorBase), 1316932550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidatorBase_h_450351993(TEXT("/Script/Wit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidatorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_Wit_Public_Wit_Request_WitPartialResponseValidatorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
