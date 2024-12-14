// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRColocationEventPolling.h"
#include "OculusXRColocationModule.h"
#include "OculusXRColocationRequests.h"
#include "OculusXRColocationSubsystem.h"
#include "OculusXRColocationUtil.h"
#include "OculusXRHMDPrivate.h"
#include "OculusXRHMDModule.h"
#include "Engine/Engine.h"

namespace OculusXRColocation
{
	template <typename T>
	void GetEventDataAs(ovrpEventDataBuffer& Buffer, T& OutEventData)
	{
		memcpy(&OutEventData, reinterpret_cast<uint8*>(&Buffer), sizeof(T));
	}

	void FColocationEventPolling::OnPollEvent(ovrpEventDataBuffer* EventDataBuffer, bool& EventPollResult)
	{
		ovrpEventDataBuffer& buf = *EventDataBuffer;

		EventPollResult = true;

		switch (buf.EventType)
		{
			case ovrpEventType_StartColocationAdvertisementComplete:
			{
				ovrpEventStartColocationAdvertisementComplete eventData;
				GetEventDataAs(buf, eventData);

				UE_LOG(LogOculusXRColocation, Log, TEXT("ovrpEventStartColocationAdvertisementComplete: Request ID: %llu  --  SessionUuid: %s  --  Result: %s"),
					eventData.AdvertisementRequestId,
					*FOculusXRUUID(eventData.AdvertisementUuid.data).ToString(),
					*GetStringFromResult(GetResultFromOVRResult(eventData.Result)));

				auto taskPtr = OculusXR::FAsyncRequestSystem::GetRequest<FStartSessionAdvertisementRequest>(
					OculusXR::FAsyncRequestBase::RequestId{ eventData.AdvertisementRequestId });

				if (!taskPtr.IsValid())
				{
					UE_LOG(LogOculusXRColocation, Error, TEXT("Failed to find matching request in task system! Request ID: %llu"), eventData.AdvertisementRequestId);
					return;
				}

				if (OVRP_SUCCESS(eventData.Result))
				{
					UOculusXRColocationSubsystem::Get()->AssignLocalColocationSessionData(eventData.AdvertisementUuid.data, taskPtr->GetData());
				}

				OculusXR::FAsyncRequestSystem::CompleteRequest<FStartSessionAdvertisementRequest>(
					taskPtr->GetEventId(),
					FStartSessionAdvertisementRequest::FResultType::FromResult(
						GetResultFromOVRResult(eventData.Result),
						UOculusXRColocationSubsystem::Get()->GetLocalSession()));

				break;
			}
			case ovrpEventType_ColocationAdvertisementComplete:
			{
				ovrpEventColocationAdvertisementComplete eventData;
				GetEventDataAs(buf, eventData);

				UE_LOG(LogOculusXRColocation, Log, TEXT("ovrpEventColocationAdvertisementComplete: Request ID: %llu  --  Result: %s"),
					eventData.AdvertisementRequestId,
					*GetStringFromResult(GetResultFromOVRResult(eventData.Result)));

				auto taskPtr = OculusXR::FAsyncRequestSystem::GetRequest<FStopSessionAdvertisementRequest>(
					OculusXR::FAsyncRequestBase::RequestId{ eventData.AdvertisementRequestId });

				if (!taskPtr.IsValid())
				{
					UE_LOG(LogOculusXRColocation, Warning, TEXT("Failed to find matching request in task system for stopping advertisement. It's possible the session was stopped for hardware reasons. Request ID: %llu"), eventData.AdvertisementRequestId);
					return;
				}

				OculusXR::FAsyncRequestSystem::CompleteRequest<FStopSessionAdvertisementRequest>(
					taskPtr->GetEventId(),
					FStartSessionAdvertisementRequest::FResultType::FromResult(GetResultFromOVRResult(eventData.Result), UOculusXRColocationSubsystem::Get()->GetLocalSession()));

				UOculusXRColocationSubsystem::Get()->ClearLocalColocationSession();

				break;
			}
			case ovrpEventType_StopColocationAdvertisementComplete:
			{
				ovrpEventStopColocationAdvertisementComplete eventData;
				GetEventDataAs(buf, eventData);
				// no-op maybe
				break;
			}
			case ovrpEventType_StartColocationDiscoveryComplete:
			{
				ovrpEventStartColocationDiscoveryComplete eventData;
				GetEventDataAs(buf, eventData);

				UE_LOG(LogOculusXRColocation, Log, TEXT("ovrpEventStartColocationDiscoveryComplete: Request ID: %llu  --  Result: %s"),
					eventData.DiscoveryRequestId,
					*GetStringFromResult(GetResultFromOVRResult(eventData.Result)));

				auto taskPtr = OculusXR::FAsyncRequestSystem::GetRequest<FDiscoverSessionsRequest>(
					OculusXR::FAsyncRequestBase::RequestId{ eventData.DiscoveryRequestId });

				// Failed to start so we complete the task now, otherwise it stays running in success case
				if (OVRP_FAILURE(eventData.Result))
				{
					if (!taskPtr.IsValid())
					{
						UE_LOG(LogOculusXRColocation, Error, TEXT("Failed to find matching request in task system! Request ID: %llu"), eventData.DiscoveryRequestId);
						return;
					}

					OculusXR::FAsyncRequestSystem::CompleteRequest<FDiscoverSessionsRequest>(
						taskPtr->GetEventId(),
						FDiscoverSessionsRequest::FResultType::FromError(GetResultFromOVRResult(eventData.Result)));
				}
				else
				{
					UOculusXRColocationSubsystem::Get()->SetDiscoveryRequest(taskPtr);
				}

				break;
			}
			case ovrpEventType_ColocationDiscoveryResult:
			{
				ovrpEventColocationDiscoveryResult eventData;
				GetEventDataAs(buf, eventData);

				UE_LOG(LogOculusXRColocation, Log, TEXT("ovrpEventColocationDiscoveryResult: Request ID: %llu  --  FoundSessionUuid: %s"),
					eventData.DiscoveryRequestId,
					*FOculusXRUUID(eventData.AdvertisementUuid.data).ToString());

				auto taskPtr = OculusXR::FAsyncRequestSystem::GetRequest<FDiscoverSessionsRequest>(
					OculusXR::FAsyncRequestBase::RequestId{ eventData.DiscoveryRequestId });

				if (!taskPtr.IsValid())
				{
					UE_LOG(LogOculusXRColocation, Error, TEXT("Failed to find matching request in task system! Request ID: %llu"), eventData.DiscoveryRequestId);
					return;
				}

				FOculusXRColocationSession session;
				session.Uuid = eventData.AdvertisementUuid.data;
				session.Metadata = TArray<uint8>(eventData.Buffer, eventData.BufferSize);

				taskPtr->OnSessionFound(std::move(session));

				break;
			}
			case ovrpEventType_ColocationDiscoveryComplete:
			{
				ovrpEventColocationDiscoveryComplete eventData;
				GetEventDataAs(buf, eventData);

				UE_LOG(LogOculusXRColocation, Log, TEXT("ovrpEventColocationDiscoveryComplete: Request ID: %llu  --  Result: %s"),
					eventData.DiscoveryRequestId,
					*GetStringFromResult(GetResultFromOVRResult(eventData.Result)));

				UOculusXRColocationSubsystem::Get()->ClearDiscoveryRequest();

				auto taskPtr = OculusXR::FAsyncRequestSystem::GetRequest<FDiscoverSessionsRequest>(
					OculusXR::FAsyncRequestBase::RequestId{ eventData.DiscoveryRequestId });

				if (!taskPtr.IsValid())
				{
					UE_LOG(LogOculusXRColocation, Warning, TEXT("Failed to find matching request in task system for stopping discovery. It's possible discovery was stopped for hardware reasons. Request ID: %llu"), eventData.DiscoveryRequestId);
					return;
				}

				OculusXR::FAsyncRequestSystem::CompleteRequest<FDiscoverSessionsRequest>(
					taskPtr->GetEventId(),
					FDiscoverSessionsRequest::FResultType::FromResult(GetResultFromOVRResult(eventData.Result), taskPtr->GetFoundSessions()));

				break;
			}
			case ovrpEventType_StopColocationDiscoveryComplete:
			{
				ovrpEventStopColocationDiscoveryComplete eventData;
				GetEventDataAs(buf, eventData);
				// no-op
				break;
			}

			default:
			{
				EventPollResult = false;
				return;
			}
		}
	}
} // namespace OculusXRColocation
