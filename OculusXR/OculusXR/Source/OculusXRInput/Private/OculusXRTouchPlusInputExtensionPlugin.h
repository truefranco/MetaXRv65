// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "khronos/openxr/openxr.h"

#include "CoreMinimal.h"
#include "IOculusXRInputModule.h"
#include "IOpenXRExtensionPlugin.h"

namespace OculusXRInput
{

	class FTouchPlusInputExtensionPlugin : public IOpenXRExtensionPlugin
	{
	public:
		void RegisterOpenXRExtensionPlugin()
		{
#if defined(WITH_OCULUS_BRANCH)
			RegisterOpenXRExtensionModularFeature();
#endif
		}

		// IOpenXRExtensionPlugin
		virtual bool GetRequiredExtensions(TArray<const ANSICHAR*>& OutExtensions) override;
		virtual void PostCreateInstance(XrInstance InInstance) override;
		virtual bool GetInteractionProfile(XrInstance InInstance, FString& OutKeyPrefix, XrPath& OutPath, bool& OutHasHaptics) override;

	private:
		XrPath InteractionProfile;
	};

} // namespace OculusXRInput
