// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRSceneEventHandling.h"

#include "OculusXRHMD.h"
#include "IOculusXRSceneModule.h"
#include "OculusXRSceneDelegates.h"
#include "OculusXRSceneEventDelegates.h"

namespace OculusXRScene
{
	template <typename T>
	void GetEventData(ovrpEventDataBuffer& Buffer, T& OutEventData)
	{
		unsigned char* BufData = Buffer.EventData;
		BufData -= sizeof(Buffer.EventType); // Offset buffer data to get to the actual event payload

		memcpy(&OutEventData, BufData, sizeof(T));
	}

	void FOculusXRSceneEventHandling::OnPollEvent(ovrpEventDataBuffer* EventDataBuffer, bool& EventPollResult)
	{
		ovrpEventDataBuffer& buf = *EventDataBuffer;
		EventPollResult = true;

		switch (buf.EventType)
		{


			case ovrpEventType_None:
			default:
			{
				EventPollResult = false;
				break;
			}
		}
	}
} // namespace OculusXRScene
