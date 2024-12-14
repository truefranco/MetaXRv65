// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
    public class OculusXRColocation : ModuleRules
    {
        public OculusXRColocation(ReadOnlyTargetRules Target) : base(Target)
        {
            bUseUnity = true;

            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "OculusXRHMD",
                    "OVRPluginXR",
                    "OculusXRAnchors",
                    "OculusXRAsyncRequest"
                });

            PrivateIncludePaths.AddRange(
                new string[] {
                    "OculusXRHMD/Private",
                    "OculusXRAnchors/Private",
                });

            PublicIncludePaths.AddRange(
                new string[] {
                    "Runtime/Engine/Classes/Components",
                });
        }
    }
}
