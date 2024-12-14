// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRAnchorsEventPolling.h"
#include "OculusXRHMD.h"
#include "OculusXRAnchorsModule.h"
#include "OculusXRAnchorManager.h"
#include "OculusXRAnchorDelegates.h"
#include "OculusXRAnchorBPFunctionLibrary.h"
#include "OculusXRAnchorTypesPrivate.h"
#include "OculusXRAnchorsUtil.h"
#include "Engine/Engine.h"
#include <vector>

namespace OculusXRAnchors
{
	template <typename T>
	void GetEventDataAs(ovrpEventDataBuffer& Buffer, T& OutEventData)
	{
		memcpy(&OutEventData, reinterpret_cast<uint8*>(&Buffer), sizeof(T));
	}

	// For template specializations that use the legacy event padding
	constexpr size_t LegacyOffset = 8;
	template <typename T>
	void GetLegacyEventDataAs(ovrpEventDataBuffer& Buffer, T& OutEventData)
	{
		OutEventData.EventType = Buffer.EventType;
		memcpy(((uint8*)&OutEventData) + LegacyOffset, Buffer.EventData, sizeof(T) - LegacyOffset);
	}

#define DECLARE_EVENT_DATA_CAST_SPECIALIZATION(T)                     \
	template <>                                                       \
	void GetEventDataAs(ovrpEventDataBuffer& Buffer, T& OutEventData) \
	{                                                                 \
		GetLegacyEventDataAs<T>(Buffer, OutEventData);                \
	}

	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventDataSpatialAnchorCreateComplete);
	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventDataSpaceSetStatusComplete);
	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventSpaceQueryResults);
	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventSpaceQueryComplete);
	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventSpaceStorageSaveResult);
	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventSpaceListSaveResult);
	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventSpaceStorageEraseResult);
	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventSpaceShareResult);
	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventDataSpaceDiscoveryComplete);
	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventSpaceDiscoveryResults);
	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventSpacesSaveResult);
	DECLARE_EVENT_DATA_CAST_SPECIALIZATION(ovrpEventSpacesEraseResult);

	void FOculusXRAnchorsEventPolling::OnPollEvent(ovrpEventDataBuffer* EventDataBuffer, bool& EventPollResult)
	{
		ovrpEventDataBuffer& buf = *EventDataBuffer;
		EventPollResult = true;

		switch (buf.EventType)
		{
			case ovrpEventType_SpatialAnchorCreateComplete:
			{
				ovrpEventDataSpatialAnchorCreateComplete AnchorCreateEvent;
				GetEventDataAs(buf, AnchorCreateEvent);

				const FOculusXRUInt64 RequestId(AnchorCreateEvent.requestId);
				const FOculusXRUInt64 Space(AnchorCreateEvent.space);
				const FOculusXRUUID BPUUID(AnchorCreateEvent.uuid.data);

				FOculusXRAnchorEventDelegates::OculusSpatialAnchorCreateComplete.Broadcast(RequestId, AnchorCreateEvent.result, Space, BPUUID);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpatialAnchorCreateComplete Request ID: %llu  --  Space: %llu  --  UUID: %s  --  Result: %d"),
					RequestId.GetValue(),
					Space.GetValue(),
					*BPUUID.ToString(),
					AnchorCreateEvent.result);

				break;
			}
			case ovrpEventType_SpaceSetComponentStatusComplete:
			{
				ovrpEventDataSpaceSetStatusComplete SetStatusEvent;
				GetEventDataAs(buf, SetStatusEvent);

				// translate to BP types
				const FOculusXRUInt64 RequestId(SetStatusEvent.requestId);
				const FOculusXRUInt64 Space(SetStatusEvent.space);
				EOculusXRSpaceComponentType BPSpaceComponentType = ConvertToUEComponentType(SetStatusEvent.componentType);
				const FOculusXRUUID BPUUID(SetStatusEvent.uuid.data);
				const bool bEnabled = (SetStatusEvent.enabled == ovrpBool_True);

				FOculusXRAnchorEventDelegates::OculusSpaceSetComponentStatusComplete.Broadcast(
					RequestId,
					SetStatusEvent.result,
					Space,
					BPUUID,
					BPSpaceComponentType,
					bEnabled);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpaceSetComponentStatusComplete Request ID: %llu  --  Type: %d  --  Enabled: %d  --  Space: %llu  --  Result: %d"),
					SetStatusEvent.requestId,
					SetStatusEvent.componentType,
					SetStatusEvent.enabled,
					SetStatusEvent.space,
					SetStatusEvent.result);

				break;
			}
			case ovrpEventType_SpaceQueryResults:
			{
				ovrpEventSpaceQueryResults QueryEvent;
				GetEventDataAs(buf, QueryEvent);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpaceQueryResults  Request ID: %llu"), QueryEvent.requestId);

				ovrpUInt32 ovrpOutCapacity = 0;
				auto getCapacityResult = FOculusXRHMDModule::GetPluginWrapper().RetrieveSpaceQueryResults(&QueryEvent.requestId, 0, &ovrpOutCapacity, nullptr);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("Space Query Results: Capacity Request -- Request ID: %llu  --  Capacity: %d  --  Result: %s"),
					QueryEvent.requestId,
					ovrpOutCapacity,
					*GetStringFromResult(GetResultFromOVRResult(getCapacityResult)));

				std::vector<ovrpSpaceQueryResult> spaceQueryResults(ovrpOutCapacity);
				auto getQueryResult = FOculusXRHMDModule::GetPluginWrapper().RetrieveSpaceQueryResults(&QueryEvent.requestId, spaceQueryResults.size(), &ovrpOutCapacity, spaceQueryResults.data());

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("Space Query Results: Retrieved Elements -- Request ID: %llu  --  Result: %s"),
					QueryEvent.requestId,
					*GetStringFromResult(GetResultFromOVRResult(getQueryResult)));

				if (OVRP_FAILURE(getCapacityResult) || OVRP_FAILURE(getQueryResult))
				{
					UE_LOG(LogOculusXRAnchors, Warning, TEXT("Failed to retrieve anchor data from space query results -- Request ID: %llu"), QueryEvent.requestId);
					return;
				}

				auto taskPtr = OculusXR::FAsyncRequestSystem::GetRequest<FGetAnchorsSharedWithGroup>(
					OculusXR::FAsyncRequestBase::RequestId{ QueryEvent.requestId });

				// If there is a valid get shared anchors request we can add to the found elements here and then exit without firing legacy event delegates
				if (taskPtr.IsValid())
				{
					TArray<EOculusXRSpaceComponentType> supportedTypes;
					TArray<FOculusXRAnchor> anchors;
					for (const auto& queryResultElement : spaceQueryResults)
					{
						UE_LOG(LogOculusXRAnchors, Verbose, TEXT("	Found Element: Space: %llu  --  UUID: %s"), queryResultElement.space, *FOculusXRUUID(queryResultElement.uuid.data).ToString());

						uint64 tempOut;
						FOculusXRAnchorManager::GetSupportedAnchorComponents(queryResultElement.space, supportedTypes);

						if (supportedTypes.Contains(EOculusXRSpaceComponentType::Locatable))
						{
							FOculusXRAnchorManager::SetSpaceComponentStatus(queryResultElement.space, EOculusXRSpaceComponentType::Locatable, true, 0.0f, tempOut);
						}

						if (supportedTypes.Contains(EOculusXRSpaceComponentType::Sharable))
						{
							FOculusXRAnchorManager::SetSpaceComponentStatus(queryResultElement.space, EOculusXRSpaceComponentType::Sharable, true, 0.0f, tempOut);
						}

						if (supportedTypes.Contains(EOculusXRSpaceComponentType::Storable))
						{
							FOculusXRAnchorManager::SetSpaceComponentStatus(queryResultElement.space, EOculusXRSpaceComponentType::Storable, true, 0.0f, tempOut);
						}

						anchors.Add(FOculusXRAnchor(queryResultElement.space, queryResultElement.uuid.data));
					}

					taskPtr->OnResultsAvailable(anchors);

					return;
				}

				FOculusXRUInt64 RequestId(QueryEvent.requestId);
				FOculusXRAnchorEventDelegates::OculusSpaceQueryResults.Broadcast(RequestId);

				for (const auto& queryResultElement : spaceQueryResults)
				{
					FOculusXRUInt64 anchorHandle(queryResultElement.space);
					FOculusXRUUID uuid(queryResultElement.uuid.data);

					UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpaceQueryResult -- Space: %llu -- UUID: %s"), anchorHandle.Value, *uuid.ToString());

					FOculusXRAnchorEventDelegates::OculusSpaceQueryResult.Broadcast(RequestId, anchorHandle, uuid);
				}

				break;
			}
			case ovrpEventType_SpaceQueryComplete:
			{
				ovrpEventSpaceQueryComplete QueryCompleteEvent;
				GetEventDataAs(buf, QueryCompleteEvent);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpaceQueryComplete Request ID: %llu  --  Result: %d"), QueryCompleteEvent.requestId, QueryCompleteEvent.result);

				auto taskPtr = OculusXR::FAsyncRequestSystem::GetRequest<FGetAnchorsSharedWithGroup>(
					OculusXR::FAsyncRequestBase::RequestId{ QueryCompleteEvent.requestId });

				// If there is a valid get shared anchors request we can complete and exit without firing legacy event delegates
				if (taskPtr.IsValid())
				{
					OculusXR::FAsyncRequestSystem::CompleteRequest<FGetAnchorsSharedWithGroup>(
						taskPtr->GetEventId(),
						FGetAnchorsSharedWithGroup::FResultType::FromResult(GetResultFromOVRResult(QueryCompleteEvent.result), taskPtr->GetRetrievedAnchors()));

					return;
				}

				// translate to BP types
				const FOculusXRUInt64 RequestId(QueryCompleteEvent.requestId);
				const bool bSucceeded = QueryCompleteEvent.result >= 0;

				FOculusXRAnchorEventDelegates::OculusSpaceQueryComplete.Broadcast(RequestId, QueryCompleteEvent.result);

				break;
			}
			case ovrpEventType_SpaceSaveComplete:
			{
				ovrpEventSpaceStorageSaveResult StorageResult;
				GetEventDataAs(buf, StorageResult);

				// translate to BP types
				const FOculusXRUUID uuid(StorageResult.uuid.data);
				const FOculusXRUInt64 FSpace(StorageResult.space);
				const FOculusXRUInt64 FRequest(StorageResult.requestId);
				const bool bResult = StorageResult.result >= 0;

				FOculusXRAnchorEventDelegates::OculusSpaceSaveComplete.Broadcast(FRequest, FSpace, bResult, StorageResult.result, uuid);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpaceSaveComplete  Request ID: %llu  --  Space: %llu  --  Result: %d"), StorageResult.requestId, StorageResult.space, StorageResult.result);

				break;
			}
			case ovrpEventType_SpaceListSaveResult:
			{
				ovrpEventSpaceListSaveResult SpaceListSaveResult;
				GetEventDataAs(buf, SpaceListSaveResult);

				FOculusXRUInt64 RequestId(SpaceListSaveResult.requestId);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpaceListSaveResult  Request ID: %llu  --  Result: %d"), SpaceListSaveResult.requestId, SpaceListSaveResult.result);
				FOculusXRAnchorEventDelegates::OculusSpaceListSaveComplete.Broadcast(RequestId, SpaceListSaveResult.result);

				break;
			}
			case ovrpEventType_SpaceEraseComplete:
			{
				ovrpEventSpaceStorageEraseResult SpaceEraseEvent;
				GetEventDataAs(buf, SpaceEraseEvent);

				// translate to BP types
				const FOculusXRUUID uuid(SpaceEraseEvent.uuid.data);
				const FOculusXRUInt64 FRequestId(SpaceEraseEvent.requestId);
				const FOculusXRUInt64 FResult(SpaceEraseEvent.result);
				const EOculusXRSpaceStorageLocation BPLocation = (SpaceEraseEvent.location == ovrpSpaceStorageLocation_Local) ? EOculusXRSpaceStorageLocation::Local : EOculusXRSpaceStorageLocation::Invalid;

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpaceEraseComplete  Request ID: %llu  --  Result: %d  -- UUID: %s"), SpaceEraseEvent.requestId, SpaceEraseEvent.result, *UOculusXRAnchorBPFunctionLibrary::AnchorUUIDToString(SpaceEraseEvent.uuid.data));

				FOculusXRAnchorEventDelegates::OculusSpaceEraseComplete.Broadcast(FRequestId, FResult.Value, uuid, BPLocation);
				break;
			}
			case ovrpEventType_SpaceShareResult:
			{
				ovrpEventSpaceShareResult SpaceShareSpaceResult;
				GetEventDataAs(buf, SpaceShareSpaceResult);

				FOculusXRUInt64 RequestId(SpaceShareSpaceResult.requestId);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpaceShareSpaceResult  Request ID: %llu  --  Result: %d"),
					SpaceShareSpaceResult.requestId,
					SpaceShareSpaceResult.result);

				FOculusXRAnchorEventDelegates::OculusSpaceShareComplete.Broadcast(RequestId, SpaceShareSpaceResult.result);

				break;
			}
			case ovrpEventType_SpaceDiscoveryComplete:
			{
				ovrpEventDataSpaceDiscoveryComplete SpaceDiscoveryCompleteEvent;
				GetEventDataAs(buf, SpaceDiscoveryCompleteEvent);

				FOculusXRUInt64 RequestId(SpaceDiscoveryCompleteEvent.requestId);
				FOculusXRUInt64 Result(SpaceDiscoveryCompleteEvent.result);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpaceDiscoveryComplete  Request ID: %llu  --  Result: %llu"), RequestId.GetValue(), Result.GetValue());
				FOculusXRAnchorEventDelegates::OculusAnchorsDiscoverComplete.Broadcast(RequestId, Result);

				break;
			}
			case ovrpEventType_SpaceDiscoveryResultsAvailable:
			{
				ovrpEventSpaceDiscoveryResults SpaceDiscoveryResultsEvent;
				GetEventDataAs(buf, SpaceDiscoveryResultsEvent);

				FOculusXRUInt64 RequestId(SpaceDiscoveryResultsEvent.requestId);

				ovrpSpaceDiscoveryResults OVRPResults = { 0, 0, nullptr };

				// get capacity
				bool GetCapacityResult = FOculusXRHMDModule::GetPluginWrapper().GetInitialized() && OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().RetrieveSpaceDiscoveryResults(RequestId, &OVRPResults));

				UE_LOG(LogOculusXRAnchors, Log, TEXT("ovrpEventType_SpaceDiscoveryResultsAvailable Request ID: %llu  --  Capacity: %d  --  Result: %d"),
					uint64(RequestId), OVRPResults.ResultCountOutput, GetCapacityResult);

				// get data
				OVRPResults.ResultCapacityInput = OVRPResults.ResultCountOutput;
				std::vector<ovrpSpaceDiscoveryResult> ResultsData(OVRPResults.ResultCountOutput);
				OVRPResults.Results = ResultsData.data();
				bool GetDiscoveryResult = FOculusXRHMDModule::GetPluginWrapper().GetInitialized() && OVRP_SUCCESS(FOculusXRHMDModule::GetPluginWrapper().RetrieveSpaceDiscoveryResults(RequestId, &OVRPResults));
				TArray<FOculusXRAnchorsDiscoverResult> SpaceDiscoveryResults;

				for (auto& Element : ResultsData)
				{
					UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpaceDiscoveryResultsAvailable Space: %llu  --  Result: %d"),
						Element.Space, GetDiscoveryResult);

					SpaceDiscoveryResults.Add(FOculusXRAnchorsDiscoverResult(Element.Space, Element.Uuid.data));
				}

				FOculusXRAnchorEventDelegates::OculusAnchorsDiscoverResults.Broadcast(RequestId, SpaceDiscoveryResults);

				break;
			}
			case ovrpEventType_SpacesSaveResult:
			{
				ovrpEventSpacesSaveResult SpacesSaveEvent;
				GetEventDataAs(buf, SpacesSaveEvent);

				FOculusXRUInt64 RequestId(SpacesSaveEvent.requestId);
				FOculusXRUInt64 Result(SpacesSaveEvent.result);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpacesSaveResult  Request ID: %llu  --  Result: %llu"), RequestId.GetValue(), Result.GetValue());
				FOculusXRAnchorEventDelegates::OculusAnchorsSaveComplete.Broadcast(RequestId, Result);

				break;
			}
			case ovrpEventType_SpacesEraseResult:
			{
				ovrpEventSpacesEraseResult SpacesEraseEvent;
				GetEventDataAs(buf, SpacesEraseEvent);

				FOculusXRUInt64 RequestId(SpacesEraseEvent.requestId);
				FOculusXRUInt64 Result(SpacesEraseEvent.result);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_SpacesEraseResult  Request ID: %llu  --  Result: %llu"), RequestId.GetValue(), Result.GetValue());
				FOculusXRAnchorEventDelegates::OculusAnchorsEraseComplete.Broadcast(RequestId, Result);

				break;
			}
			case ovrpEventType_ShareSpacesComplete:
			{
				ovrpEventShareSpacesComplete EventData;
				GetEventDataAs(buf, EventData);

				UE_LOG(LogOculusXRAnchors, Verbose, TEXT("ovrpEventType_ShareSpacesComplete  Request ID: %llu  --  Result: %s"),
					EventData.RequestId,
					*GetStringFromResult(GetResultFromOVRResult(EventData.Result)));

				auto taskPtr = OculusXR::FAsyncRequestSystem::GetRequest<FShareAnchorsWithGroups>(
					OculusXR::FAsyncRequestBase::RequestId{ EventData.RequestId });

				if (!taskPtr.IsValid())
				{
					UE_LOG(LogOculusXRAnchors, Error, TEXT("Failed to find matching share complete request in task system! Request ID: %llu"), EventData.RequestId);
					return;
				}

				OculusXR::FAsyncRequestSystem::CompleteRequest<FShareAnchorsWithGroups>(
					taskPtr->GetEventId(),
					FShareAnchorsWithGroups::FResultType::FromResult(
						GetResultFromOVRResult(EventData.Result),
						FShareAnchorsWithGroups::FResultValueType(taskPtr->GetGroups(), taskPtr->GetAnchors())));

				break;
			}
			case ovrpEventType_None:
			default:
			{
				EventPollResult = false;
				break;
			}
		}
	}
} // namespace OculusXRAnchors
