// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class OculusXROpenXRHMD : ModuleRules
	{
		public OculusXROpenXRHMD(ReadOnlyTargetRules Target) : base(Target)
		{
			bUseUnity = true;

			var EngineDir = Path.GetFullPath(Target.RelativeEnginePath);

			PublicIncludePaths.AddRange(
				new string[] {
					// Relative to Engine\Plugins\OculusXR\Source\OculusOpenXR\Source
					Path.Combine(EngineDir, "Plugins/Runtime/OpenXR/Source/OpenXRHMD/Private"),
					Path.Combine(EngineDir, "Source/Runtime/Renderer/Private"),
					Path.Combine(EngineDir, "Source/Runtime/OpenGLDrv/Private"),
					Path.Combine(EngineDir, "Source/Runtime/Engine/Classes/Components"),
					Path.Combine(EngineDir, "Source/Runtime/Engine/Classes/Kismet"),
				});

			PublicIncludePathModuleNames.AddRange(
				new string[] {
					"Launch",
					"OpenXRHMD",
				});

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
					"InputCore",
					"RHI",
					"RHICore",
					"RenderCore",
					"Renderer",
					"Slate",
					"SlateCore",
					"ImageWrapper",
					"MediaAssets",
					"Analytics",
					"OpenGLDrv",
					"VulkanRHI",
					"HeadMountedDisplay",
					"KhronosOpenXRHeaders",					
					"OculusOpenXRLoader",
					"Projects",
				});

			if (Target.Version.MajorVersion < 5 || (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion < 3))
			{
				PublicDependencyModuleNames.AddRange(
					new string[]
					{
						"OpenXRHMD",
					});
			}

			if (Target.Version.MajorVersion > 5 || (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion >= 3))
			{
				PublicDependencyModuleNames.AddRange(
					new string[]
					{
						"XRBase",
					});
			}

			if (Target.bBuildEditor == true)
			{
				PrivateDependencyModuleNames.Add("UnrealEd");
			}

			AddEngineThirdPartyPrivateStaticDependencies(Target, "OpenGL");

			if (Target.Platform == UnrealTargetPlatform.Win64)
			{
				// D3D
				{
					PrivateDependencyModuleNames.AddRange(
						new string[]
						{
							"D3D11RHI",
							"D3D12RHI",
						});


					PublicIncludePaths.AddRange(
						new string[]
						{
							Path.Combine(EngineDir, "Source/Runtime/Windows/D3D11RHI/Private"),
							Path.Combine(EngineDir, "Source/Runtime/Windows/D3D11RHI/Private/Windows"),
							Path.Combine(EngineDir, "Source/Runtime/D3D12RHI/Private"),
							Path.Combine(EngineDir, "Source/Runtime/D3D12RHI/Private/Windows"),
						});

					AddEngineThirdPartyPrivateStaticDependencies(Target, "DX11");
					AddEngineThirdPartyPrivateStaticDependencies(Target, "DX12");
					AddEngineThirdPartyPrivateStaticDependencies(Target, "NVAPI");
					AddEngineThirdPartyPrivateStaticDependencies(Target, "DX11Audio");
					AddEngineThirdPartyPrivateStaticDependencies(Target, "DirectSound");
					AddEngineThirdPartyPrivateStaticDependencies(Target, "NVAftermath");
					AddEngineThirdPartyPrivateStaticDependencies(Target, "IntelMetricsDiscovery");
					AddEngineThirdPartyPrivateStaticDependencies(Target, "IntelExtensionsFramework");
				}

				// Vulkan
				{
					AddEngineThirdPartyPrivateStaticDependencies(Target, "Vulkan");
				}
			}
			else if (Target.Platform == UnrealTargetPlatform.Android)
			{
				PrivateIncludePaths.AddRange(
						new string[]
						{
						});

				// Vulkan
				{
					AddEngineThirdPartyPrivateStaticDependencies(Target, "Vulkan");
				}
			}
		}
	}
}
