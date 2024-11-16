// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformIntegration_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PlatformIntegration;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PlatformIntegration()
	{
		if (!Z_Registration_Info_UPackage__Script_PlatformIntegration.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PlatformIntegration",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFAC8130B,
				0x2AB10CCC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PlatformIntegration.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PlatformIntegration.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PlatformIntegration(Z_Construct_UPackage__Script_PlatformIntegration, TEXT("/Script/PlatformIntegration"), Z_Registration_Info_UPackage__Script_PlatformIntegration, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFAC8130B, 0x2AB10CCC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
