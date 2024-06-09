// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "khronos/openxr/openxr.h"
#include "RHI.h"
#include "HeadMountedDisplayTypes.h"

#ifdef WITH_OCULUS_BRANCH
#include "OpenXRCore.h"
#endif

namespace OculusXR
{
	/** Check currently executing from Game thread */
	OCULUSXROPENXRHMD_API bool InGameThread();

	FORCEINLINE void CheckInGameThread()
	{
#if DO_CHECK
		check(InGameThread());
#endif
	}

	/** Check currently executing from Render thread */
	OCULUSXROPENXRHMD_API bool InRenderThread();

	FORCEINLINE void CheckInRenderThread()
	{
#if DO_CHECK
		check(InRenderThread());
#endif
	}

	/** Check currently executing from RHI thread */
	OCULUSXROPENXRHMD_API bool InRHIThread();

	FORCEINLINE void CheckInRHIThread()
	{
#if DO_CHECK
		check(InRHIThread());
#endif
	}

#if defined(WITH_OCULUS_BRANCH) && 0
	template <typename T>
	static void XRGetInstanceProcAddr(XrInstance InInstance, const char* Name, T* Function)
	{
		if (XR_FAILED(OpenXRDynamicAPI::xrGetInstanceProcAddr(InInstance, Name, reinterpret_cast<PFN_xrVoidFunction*>(Function))))
		{
			UE_LOG(LogHMD, Fatal, TEXT("Failed to bind OpenXR entry %s."), ANSI_TO_TCHAR(Name));
		}
	}

	template <typename T>
	static void XRGetInstanceProcAddr(XrInstance InInstance, const char* Name, TOptional<T>* Function)
	{
		if (XR_FAILED(OpenXRDynamicAPI::xrGetInstanceProcAddr(InInstance, Name, reinterpret_cast<PFN_xrVoidFunction*>(Function))))
		{
			UE_LOG(LogHMD, Warning, TEXT("Unable to bind optional OpenXR entry %s."), ANSI_TO_TCHAR(Name));
		}
	}
#else
	// Don't call xrGetInstanceProcAddr on marketplace build. This prevents the linker
	// from adding a dependency on OpenXr. On the marketplace build OpenXR loading is
	// currently disabled
	template <typename T>
	static void XRGetInstanceProcAddr(XrInstance InInstance, const char* Name, T* Function)
	{
		(void)InInstance;
		(void)Name;
		(void)Function;
		UE_LOG(LogHMD, Warning, TEXT("Failed to bind OpenXR entry %s."), ANSI_TO_TCHAR(Name));
	}

	template <typename T>
	static void XRGetInstanceProcAddr(XrInstance InInstance, const char* Name, TOptional<T>* Function)
	{
		(void)InInstance;
		(void)Name;
		(void)Function;
		UE_LOG(LogHMD, Warning, TEXT("Unable to bind optional OpenXR entry %s."), ANSI_TO_TCHAR(Name));
	}
#endif

} // namespace OculusXR
