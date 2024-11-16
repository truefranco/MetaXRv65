// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/Subsystem/PlatformIntegrationSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformIntegrationSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	PLATFORMINTEGRATION_API UClass* Z_Construct_UClass_UPlatformIntegrationSubsystem();
	PLATFORMINTEGRATION_API UClass* Z_Construct_UClass_UPlatformIntegrationSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlatformIntegration();
// End Cross Module References
	void UPlatformIntegrationSubsystem::StaticRegisterNativesUPlatformIntegrationSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformIntegrationSubsystem);
	UClass* Z_Construct_UClass_UPlatformIntegrationSubsystem_NoRegister()
	{
		return UPlatformIntegrationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformIntegrationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformIntegrationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformIntegration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformIntegrationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Inspired by WitRequestSubSystem.\n *  1. This class is doing traffic control, only one request a time, before response back or error or get deactivated, no one can make another call.\n *  2. The caller will need to call ActivateVoiceInput with config to occupy the subsystem\n *  3. To receive the responses, they caller need to bind to the config's delegate (subsystem wil then \"call the registed callback\"  same as WitRequestSubSystem, but much simple way, because jni callback can call this subsystem directly)\n *  4. The config will be hold for passing responses back to the caller.//TODO free the config after reponse received, and also unbind delegates in callers.\n *  4. Worth to mention: JNI callback is a static method, which can call this subsystem directly which is perfect! (inspired by Unreal's build-in Facebook plugin)\n */" },
		{ "IncludePath", "Subsystem/PlatformIntegrationSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystem/PlatformIntegrationSubsystem.h" },
		{ "ToolTip", "Inspired by WitRequestSubSystem.\n 1. This class is doing traffic control, only one request a time, before response back or error or get deactivated, no one can make another call.\n 2. The caller will need to call ActivateVoiceInput with config to occupy the subsystem\n 3. To receive the responses, they caller need to bind to the config's delegate (subsystem wil then \"call the registed callback\"  same as WitRequestSubSystem, but much simple way, because jni callback can call this subsystem directly)\n 4. The config will be hold for passing responses back to the caller.//TODO free the config after reponse received, and also unbind delegates in callers.\n 4. Worth to mention: JNI callback is a static method, which can call this subsystem directly which is perfect! (inspired by Unreal's build-in Facebook plugin)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformIntegrationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformIntegrationSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformIntegrationSubsystem_Statics::ClassParams = {
		&UPlatformIntegrationSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlatformIntegrationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformIntegrationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformIntegrationSubsystem()
	{
		if (!Z_Registration_Info_UClass_UPlatformIntegrationSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformIntegrationSubsystem.OuterSingleton, Z_Construct_UClass_UPlatformIntegrationSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformIntegrationSubsystem.OuterSingleton;
	}
	template<> PLATFORMINTEGRATION_API UClass* StaticClass<UPlatformIntegrationSubsystem>()
	{
		return UPlatformIntegrationSubsystem::StaticClass();
	}
	UPlatformIntegrationSubsystem::UPlatformIntegrationSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformIntegrationSubsystem);
	UPlatformIntegrationSubsystem::~UPlatformIntegrationSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_PlatformIntegration_Public_Subsystem_PlatformIntegrationSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_PlatformIntegration_Public_Subsystem_PlatformIntegrationSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformIntegrationSubsystem, UPlatformIntegrationSubsystem::StaticClass, TEXT("UPlatformIntegrationSubsystem"), &Z_Registration_Info_UClass_UPlatformIntegrationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformIntegrationSubsystem), 449809443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_PlatformIntegration_Public_Subsystem_PlatformIntegrationSubsystem_h_4032400383(TEXT("/Script/PlatformIntegration"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_PlatformIntegration_Public_Subsystem_PlatformIntegrationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OculusXR_VoiceSDK_Source_PlatformIntegration_Public_Subsystem_PlatformIntegrationSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
