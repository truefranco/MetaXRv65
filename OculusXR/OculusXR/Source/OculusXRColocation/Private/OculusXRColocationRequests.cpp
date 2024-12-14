// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRColocationRequests.h"
#include "OculusXRColocationModule.h"
#include "OculusXRColocationUtil.h"
#include "OculusXRColocationSession.h"
#include "OculusXRHMDModule.h"

namespace OculusXRColocation
{
	OculusXR::FAsyncRequestBase::RequestId DetermineRequestId(ovrpResult Result, uint64 Id)
	{
		return OVRP_SUCCESS(Result) ? OculusXR::FAsyncRequestBase::RequestId(Id) : OculusXR::FAsyncRequestBase::RequestId(OculusXR::INVALID_TASK_REQUEST_ID);
	}

	void FDiscoverSessionsRequest::BindOnSessionFound(const FOculusXRColocationSessionFoundDelegate& OnSessionFound)
	{
		OnFoundSessionCallback = OnSessionFound;
	}

	void FDiscoverSessionsRequest::OnSessionFound(FOculusXRColocationSession&& Session)
	{
		auto index = FoundSessions.Emplace(Session);
		OnFoundSessionCallback.ExecuteIfBound(FoundSessions[index]);
	}

	void FDiscoverSessionsRequest::OnInitRequest()
	{
		ovrpUInt64 requestId;
		ovrpResult result = FOculusXRHMDModule::GetPluginWrapper().StartColocationDiscovery(&requestId);
		UE_LOG(LogOculusXRColocation, Log, TEXT("Starting colocation session discovery. RequestID: %llu, Launch async result: %d"), requestId, result);

		SetRequestId(DetermineRequestId(result, requestId));
		SetInitialResult(GetResultFromOVRResult(result));
	}

	FStartSessionAdvertisementRequest::FStartSessionAdvertisementRequest(const TArray<uint8>& SessionData)
		: Data(SessionData)
	{
	}

	void FStartSessionAdvertisementRequest::OnInitRequest()
	{
		ovrpColocationAdvertisementStartInfo startInfo;
		startInfo.Buffer = Data.GetData();
		startInfo.BufferSize = Data.Num();

		ovrpUInt64 requestId;
		ovrpResult result = FOculusXRHMDModule::GetPluginWrapper().StartColocationAdvertisement(&startInfo, &requestId);

		SetRequestId(DetermineRequestId(result, requestId));
		SetInitialResult(GetResultFromOVRResult(result));
	}

	void FStopSessionAdvertisementRequest::OnInitRequest()
	{
		ovrpUInt64 requestId;
		ovrpResult result = FOculusXRHMDModule::GetPluginWrapper().StopColocationAdvertisement(&requestId);

		SetRequestId(DetermineRequestId(result, requestId));
		SetInitialResult(GetResultFromOVRResult(result));
	}
} // namespace OculusXRColocation
