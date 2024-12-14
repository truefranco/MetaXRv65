// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "IOculusXRHMDModule.h"
#include "IOculusXRColocationModule.h"

#define LOCTEXT_NAMESPACE "OculusColocation"

//-------------------------------------------------------------------------------------------------
// FOculusXRColocationModule
//-------------------------------------------------------------------------------------------------

#if OCULUS_HMD_SUPPORTED_PLATFORMS

DECLARE_LOG_CATEGORY_EXTERN(LogOculusXRColocation, Log, All);

class FOculusXRColocationModule : public IOculusXRColocationModule
{
public:
	virtual ~FOculusXRColocationModule() = default;

	// IModuleInterface interface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

#else // OCULUS_HMD_SUPPORTED_PLATFORMS

class FOculusXRColocationModule : public FDefaultModuleImpl
{
};

#endif // OCULUS_HMD_SUPPORTED_PLATFORMS

#undef LOCTEXT_NAMESPACE
