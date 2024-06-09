// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXROpenXRHMDPrivate.h"
#include "RHICommandList.h"
#include "RenderingThread.h"

namespace OculusXR
{

	bool InGameThread()
	{
		if (GIsGameThreadIdInitialized)
		{
			return FPlatformTLS::GetCurrentThreadId() == GGameThreadId;
		}
		return true;
	}

	bool InRenderThread()
	{
		if (GIsThreadedRendering && !GIsRenderingThreadSuspended.Load(EMemoryOrder::Relaxed))
		{
			return IsInParallelRenderingThread();
		}
		return InGameThread();
	}

	bool InRHIThread()
	{
		if (GIsThreadedRendering && !GIsRenderingThreadSuspended.Load(EMemoryOrder::Relaxed))
		{
			if (IsRHIThreadRunning())
			{
				if (IsInRHIThread())
				{
					return true;
				}

				if (IsInActualRenderingThread())
				{
					return GetImmediateCommandList_ForRenderCommand().Bypass();
				}

				return false;
			}
			else
			{
				return IsInActualRenderingThread();
			}
		}
		return InGameThread();
	}

} // namespace OculusXR
