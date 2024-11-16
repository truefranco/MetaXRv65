// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceSDK_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VoiceSDK;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VoiceSDK()
	{
		if (!Z_Registration_Info_UPackage__Script_VoiceSDK.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VoiceSDK",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x24C19C19,
				0x49F28A27,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VoiceSDK.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VoiceSDK.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VoiceSDK(Z_Construct_UPackage__Script_VoiceSDK, TEXT("/Script/VoiceSDK"), Z_Registration_Info_UPackage__Script_VoiceSDK, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x24C19C19, 0x49F28A27));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
