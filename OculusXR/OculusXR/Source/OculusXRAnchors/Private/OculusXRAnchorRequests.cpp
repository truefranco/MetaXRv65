// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRAnchorsRequests.h"
#include "OculusXRAnchorsUtil.h"
#include "OculusXRHMDModule.h"
#include "OculusXRAnchorsModule.h"

namespace OculusXRAnchors
{
	OculusXR::FAsyncRequestBase::RequestId DetermineRequestId(ovrpResult Result, uint64 Id)
	{
		return OVRP_SUCCESS(Result) ? OculusXR::FAsyncRequestBase::RequestId(Id) : OculusXR::FAsyncRequestBase::RequestId(OculusXR::INVALID_TASK_REQUEST_ID);
	}

	FShareAnchorsWithGroups::FShareAnchorsWithGroups(const TArray<FOculusXRUUID>& TargetGroups, const TArray<FOculusXRUInt64>& AnchorsToShare)
		: Groups(TargetGroups)
		, Anchors(AnchorsToShare)
	{
	}

	void FShareAnchorsWithGroups::OnInitRequest()
	{
		TArray<ovrpUuid> groupUuids;
		groupUuids.Reserve(Groups.Num());
		for (auto& it : Groups)
		{
			ovrpUuid uuid;
			FMemory::Memcpy(uuid.data, it.UUIDBytes);
			groupUuids.Add(uuid);
		}

		TArray<uint64> spaceHandles;
		spaceHandles.Reserve(Anchors.Num());
		for (auto& it : Anchors)
		{
			spaceHandles.Add(it.Value);
		}

		TSharedPtr<ovrpShareSpacesGroupRecipientInfo> groupRecipientInfo = MakeShared<ovrpShareSpacesGroupRecipientInfo>();
		groupRecipientInfo->GroupCount = groupUuids.Num();
		groupRecipientInfo->GroupUuids = groupUuids.GetData();

		ovrpShareSpacesInfo shareInfo;
		shareInfo.SpaceCount = spaceHandles.Num();
		shareInfo.Spaces = spaceHandles.GetData();
		shareInfo.RecipientType = ovrpShareSpacesRecipientType_Group;
		shareInfo.RecipientInfo = groupRecipientInfo.Get();

		ovrpUInt64 requestId;
		ovrpResult result = FOculusXRHMDModule::GetPluginWrapper().ShareSpaces2(&shareInfo, &requestId);

		SetRequestId(DetermineRequestId(result, requestId));
		SetInitialResult(GetResultFromOVRResult(result));

		UE_LOG(LogOculusXRAnchors, Log, TEXT("Started FShareAnchorsWithGroups: RequestId: %llu -- EventId: %llu -- Result: %s"), GetRequestId().Id, GetEventId().Id, *GetStringFromResult(GetResultFromOVRResult(result)));
	}

	FGetAnchorsSharedWithGroup::FGetAnchorsSharedWithGroup(const FOculusXRUUID& TargetGroup)
		: Group(TargetGroup)
	{
	}

	void FGetAnchorsSharedWithGroup::OnResultsAvailable(const TArray<FOculusXRAnchor>& Results)
	{
		RetrievedAnchors += Results;
	}

	void FGetAnchorsSharedWithGroup::OnInitRequest()
	{
		constexpr int32 maxSpaces = 1024;
		constexpr double timeout = 0;

		ovrpSpaceQueryInfo2 queryInfo;
		queryInfo.queryType = ovrpSpaceQueryType_Action;
		queryInfo.maxQuerySpaces = maxSpaces;
		queryInfo.timeout = timeout;
		queryInfo.location = ovrpSpaceStorageLocation_Cloud;
		queryInfo.actionType = ovrpSpaceQueryActionType_Load;
		queryInfo.filterType = ovrpSpaceQueryFilterType_GroupUuid;
		FMemory::Memcpy(queryInfo.groupUuidInfo.groupUuid.data, Group.UUIDBytes);

		ovrpUInt64 requestId;
		ovrpResult result = FOculusXRHMDModule::GetPluginWrapper().QuerySpaces2(&queryInfo, &requestId);

		SetRequestId(DetermineRequestId(result, requestId));
		SetInitialResult(GetResultFromOVRResult(result));

		UE_LOG(LogOculusXRAnchors, Log, TEXT("Started FGetAnchorsSharedWithGroup: RequestId: %llu -- EventId: %llu -- Result: %s"), GetRequestId().Id, GetEventId().Id, *GetStringFromResult(GetResultFromOVRResult(result)));
	}
} // namespace OculusXRAnchors
