// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once
#include "CoreMinimal.h"
#include "OculusXREnvironmentDepthExtensionPlugin.h"
#include "OculusXRCoreExtensionPlugin.h"
#include "OculusXRGuardianExtensionPlugin.h"
#include "OculusXRLayerExtensionPlugin.h"
#include "OculusXRPerformanceExtensionPlugin.h"
#include "OculusXRSimulatorExtensionPlugin.h"
#include "OculusXRSystemInfoExtensionPlugin.h"

namespace OculusXR
{

	class FExtensionPluginManager
	{
	public:
		FExtensionPluginManager(){};
		virtual ~FExtensionPluginManager() {}

		void StartupOpenXRPlugins();

		FCoreExtensionPlugin CoreExtensionPlugin;
		FPerformanceExtensionPlugin PerformanceExtensionPlugin;
		FXRSimulatorExtensionPlugin XRSimulatorExtensionPlugin;
		FGuardianExtensionPlugin GuardianExtensionPlugin;
		FLayerExtensionPlugin LayerExtensionPlugin;
#ifdef WITH_OCULUS_BRANCH
		FEnvironmentDepthExtensionPlugin EnvironmentDepthExtensionPlugin;
#endif

		FSystemInfoExtensionPlugin SystemInfoExtensionPlugin;
		FPerformanceExtensionPlugin& GetPerformanceExtensionPlugin();
		FSystemInfoExtensionPlugin& GetSystemInfoExtensionPlugin();
		FGuardianExtensionPlugin& GetGuardianExtensionPlugin();
		FLayerExtensionPlugin& GetLayerExtensionPlugin();
	};

} // namespace OculusXR
