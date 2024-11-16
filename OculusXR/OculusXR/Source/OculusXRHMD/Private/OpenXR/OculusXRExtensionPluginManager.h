// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once
#include "CoreMinimal.h"
#include "Misc/EngineVersionComparison.h"
#include "OculusXRCoreExtensionPlugin.h"
#include "OculusXRPerformanceExtensionPlugin.h"
#include "OculusXRSimulatorExtensionPlugin.h"
#include "OculusXRSystemInfoExtensionPlugin.h"

namespace OculusXR
{

	class FOculusXRExtensionPluginManager
	{
	public:
		FOculusXRExtensionPluginManager(){};
		virtual ~FOculusXRExtensionPluginManager() {}

		void StartupOpenXRPlugins();

		FOculusXRCoreExtensionPlugin OculusXRCoreExtensionPlugin;
		FOculusXRPerformanceExtensionPlugin OculusXRPerformanceExtensionPlugin;
		FOculusXRSimulatorExtensionPlugin OculusXRSimulatorExtensionPlugin;
		FSystemInfoExtensionPlugin SystemInfoExtensionPlugin;
		FOculusXRPerformanceExtensionPlugin& GetPerformanceExtensionPlugin();
		FSystemInfoExtensionPlugin& GetSystemInfoExtensionPlugin();
	};

} // namespace OculusXR
