/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#pragma once

struct FMRUKOutline
{
	TArray<FVector2D> Vertices;
	TArray<int32> Indices;
};

TArray<int32> MRUKTriangulatePoints(const TArray<FVector2D>& Vertices);

TArray<int32> MRUKTriangulateMesh(const FMRUKOutline& Outline);

FMRUKOutline MRUKComputeOutline(const TArray<FVector2D>& Vertices, TArray<TArray<FVector2D>> Holes);
