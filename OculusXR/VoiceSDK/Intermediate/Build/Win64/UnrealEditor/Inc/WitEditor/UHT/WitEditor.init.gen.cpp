// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WitEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WitEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_WitEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WitEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xD4799CEE,
				0xF2613728,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WitEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WitEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WitEditor(Z_Construct_UPackage__Script_WitEditor, TEXT("/Script/WitEditor"), Z_Registration_Info_UPackage__Script_WitEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD4799CEE, 0xF2613728));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
