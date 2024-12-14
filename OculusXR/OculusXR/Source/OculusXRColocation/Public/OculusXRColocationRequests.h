// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "OculusXRAsyncRequestSystem.h"
#include "OculusXRAsyncRequest.h"
#include "OculusXRColocationSession.h"
#include "OculusXRColocationTypes.h"

DECLARE_DELEGATE_OneParam(FOculusXRColocationSessionFoundDelegate, const FOculusXRColocationSession&);

namespace OculusXRColocation
{
	struct FAsyncResultColocationDiscoverySuccess
	{
		bool operator()(EColocationResult Val) { return Val == EColocationResult::Success || Val == EColocationResult::Success_AlreadyAdvertising || Val == EColocationResult::Success_AlreadyDiscovering; }
	};

	template <typename TDerived, typename TValueType>
	using FAsyncColocationRequest = OculusXR::FAsyncRequest<TDerived, EColocationResult, TValueType, FAsyncResultColocationDiscoverySuccess>;

	// Discover nearby sessions
	struct OCULUSXRCOLOCATION_API FDiscoverSessionsRequest :
		FAsyncColocationRequest<FDiscoverSessionsRequest, TArray<FOculusXRColocationSession>>
	{
	public:
		void BindOnSessionFound(const FOculusXRColocationSessionFoundDelegate& OnSessionFound);
		void OnSessionFound(FOculusXRColocationSession&& Session);

		const TArray<FOculusXRColocationSession>& GetFoundSessions() const { return FoundSessions; }

	protected:
		virtual void OnInitRequest() override;

	private:
		FOculusXRColocationSessionFoundDelegate OnFoundSessionCallback;
		TArray<FOculusXRColocationSession> FoundSessions;
	};

	// Start advertisement, creates a session internally
	struct OCULUSXRCOLOCATION_API FStartSessionAdvertisementRequest :
		FAsyncColocationRequest<FStartSessionAdvertisementRequest, FOculusXRColocationSession>
	{
	public:
		FStartSessionAdvertisementRequest(const TArray<uint8>& SessionData);

		const TArray<uint8>& GetData() const { return Data; }

	protected:
		virtual void OnInitRequest() override;

	private:
		TArray<uint8> Data;
	};

	// Stop advertisement, stops advertising and destroys the internal session
	struct OCULUSXRCOLOCATION_API FStopSessionAdvertisementRequest :
		FAsyncColocationRequest<FStopSessionAdvertisementRequest, FOculusXRColocationSession>
	{
	protected:
		virtual void OnInitRequest() override;
	};
} // namespace OculusXRColocation
