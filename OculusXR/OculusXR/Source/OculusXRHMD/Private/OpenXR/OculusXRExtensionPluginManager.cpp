// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRExtensionPluginManager.h"

namespace OculusXR
{
	void FExtensionPluginManager::StartupOpenXRPlugins()
	{
		CoreExtensionPlugin.RegisterOpenXRExtensionPlugin();
		PerformanceExtensionPlugin.RegisterOpenXRExtensionPlugin();
		XRSimulatorExtensionPlugin.RegisterOpenXRExtensionPlugin();
		SystemInfoExtensionPlugin.RegisterOpenXRExtensionPlugin();
		GuardianExtensionPlugin.RegisterOpenXRExtensionPlugin();
		LayerExtensionPlugin.RegisterOpenXRExtensionPlugin();
#ifdef WITH_OCULUS_BRANCH
		EnvironmentDepthExtensionPlugin.RegisterOpenXRExtensionPlugin();
#endif
	}

	FPerformanceExtensionPlugin& FExtensionPluginManager::GetPerformanceExtensionPlugin()
	{
		return PerformanceExtensionPlugin;
	}

	FSystemInfoExtensionPlugin& FExtensionPluginManager::GetSystemInfoExtensionPlugin()
	{
		return SystemInfoExtensionPlugin;
	}

	FGuardianExtensionPlugin& FExtensionPluginManager::GetGuardianExtensionPlugin()
	{
		return GuardianExtensionPlugin;
	}

	FLayerExtensionPlugin& FExtensionPluginManager::GetLayerExtensionPlugin()
	{
		return LayerExtensionPlugin;
	}

} // namespace OculusXR
