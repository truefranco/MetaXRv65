// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRExtensionPluginManager.h"

namespace OculusXR
{
	void FOculusXRExtensionPluginManager::StartupOpenXRPlugins()
	{
		OculusXRCoreExtensionPlugin.RegisterOpenXRExtensionPlugin();
		OculusXRPerformanceExtensionPlugin.RegisterOpenXRExtensionPlugin();
		OculusXRSimulatorExtensionPlugin.RegisterOpenXRExtensionPlugin();
		SystemInfoExtensionPlugin.RegisterOpenXRExtensionPlugin();
	}

	FOculusXRPerformanceExtensionPlugin& FOculusXRExtensionPluginManager::GetPerformanceExtensionPlugin()
	{
		return OculusXRPerformanceExtensionPlugin;
	}

	FSystemInfoExtensionPlugin& FOculusXRExtensionPluginManager::GetSystemInfoExtensionPlugin()
	{
		return SystemInfoExtensionPlugin;
	}

} // namespace OculusXR
