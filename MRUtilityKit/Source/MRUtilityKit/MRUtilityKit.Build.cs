/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

using UnrealBuildTool;

public class MRUtilityKit : ModuleRules
{
	public MRUtilityKit(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"RenderCore",
				"Projects"
			});


		if (Target.Version.MajorVersion > 5 || (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion >= 3))
		{
			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"XRBase",
				});
		}


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"OculusXRHMD",
				"OculusXRAnchors",
				"OculusXRScene",
				"Json",
				"ProceduralMeshComponent",
				"HeadMountedDisplay",
			});
	}
}
