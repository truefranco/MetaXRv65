// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformIntegrationBridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformIntegrationBridge() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PLATFORMINTEGRATION_API UClass* Z_Construct_UClass_UPlatformIntegrationBridge();
	PLATFORMINTEGRATION_API UClass* Z_Construct_UClass_UPlatformIntegrationBridge_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlatformIntegration();
// End Cross Module References
	void UPlatformIntegrationBridge::StaticRegisterNativesUPlatformIntegrationBridge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformIntegrationBridge);
	UClass* Z_Construct_UClass_UPlatformIntegrationBridge_NoRegister()
	{
		return UPlatformIntegrationBridge::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformIntegrationBridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformIntegrationBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformIntegration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformIntegrationBridge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformIntegrationBridge.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/PlatformIntegrationBridge.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformIntegrationBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformIntegrationBridge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformIntegrationBridge_Statics::ClassParams = {
		&UPlatformIntegrationBridge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformIntegrationBridge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformIntegrationBridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformIntegrationBridge()
	{
		if (!Z_Registration_Info_UClass_UPlatformIntegrationBridge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformIntegrationBridge.OuterSingleton, Z_Construct_UClass_UPlatformIntegrationBridge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformIntegrationBridge.OuterSingleton;
	}
	template<> PLATFORMINTEGRATION_API UClass* StaticClass<UPlatformIntegrationBridge>()
	{
		return UPlatformIntegrationBridge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformIntegrationBridge);
	UPlatformIntegrationBridge::~UPlatformIntegrationBridge() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_PlatformIntegration_Classes_PlatformIntegrationBridge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_PlatformIntegration_Classes_PlatformIntegrationBridge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformIntegrationBridge, UPlatformIntegrationBridge::StaticClass, TEXT("UPlatformIntegrationBridge"), &Z_Registration_Info_UClass_UPlatformIntegrationBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformIntegrationBridge), 1655308567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_PlatformIntegration_Classes_PlatformIntegrationBridge_h_2085440132(TEXT("/Script/PlatformIntegration"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_PlatformIntegration_Classes_PlatformIntegrationBridge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_PlatformIntegration_Classes_PlatformIntegrationBridge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
