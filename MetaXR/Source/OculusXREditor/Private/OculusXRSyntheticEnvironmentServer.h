// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

DEFINE_LOG_CATEGORY_STATIC(LogMetaXRSES, Log, All);

struct FProcHandle;

/**  */
class FMetaXRSES
{
public:
	static void LaunchGameRoom();
	static void LaunchLivingRoom();
	static void LaunchBedroom();
	static void StopServer();

private:
	static void LaunchEnvironment(FString EnvironmentName);
	static void LaunchLocalSharingServer();
	static bool LaunchProcess(FString BinaryPath, FString Arguments, FString LogContext, FProcHandle& OutProcHandle);
	static void StopProcess(FProcHandle& ProcHandle, FString LogContext);

	static FString GetMetaXRSimPackagePath();
	static FString GetSynthEnvServerPath();
	static FString GetLocalSharingServerPath();

	static FProcHandle EnvProcHandle;
	static FProcHandle LSSProcHandle;
};
