/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#include "MRUtilityKitGeometry.h"

#include "MRUtilityKit.h"

namespace
{
	bool IsConvex(const FVector2D& PrevPoint, const FVector2D& CurrPoint, const FVector2D& NextPoint)
	{
		const FVector2D Edge1 = PrevPoint - CurrPoint;
		const FVector2D Edge2 = NextPoint - CurrPoint;

		const double CrossProductZ = Edge1.X * Edge2.Y - Edge1.Y * Edge2.X;

		return CrossProductZ <= 0;
	}

	bool PointInTriangle(const FVector2D& A, const FVector2D& B, const FVector2D& C, const FVector2D& P)
	{
		const FVector2D AB = B - A;
		const FVector2D BC = C - B;
		const FVector2D CA = A - C;

		const FVector2D AP = P - A;
		const FVector2D BP = P - B;
		const FVector2D CP = P - C;

		const double CrossProductZ1 = AB.X * AP.Y - AB.Y * AP.X;
		const double CrossProductZ2 = BC.X * BP.Y - BC.Y * BP.X;
		const double CrossProductZ3 = CA.X * CP.Y - CA.Y * CP.X;

		return ((CrossProductZ1 >= 0) && (CrossProductZ2 >= 0) && (CrossProductZ3 >= 0)) || ((CrossProductZ1 <= 0) && (CrossProductZ2 <= 0) && (CrossProductZ3 <= 0));
	}

	bool IsEar(const TArray<FVector2D>& Vertices, const TArray<int32>& Indices, int32 PrevIndex, int32 CurrIndex, int32 NextIndex)
	{
		const int32 NumPoints = Indices.Num();

		const FVector2D& PrevPoint = Vertices[PrevIndex];
		const FVector2D& CurrPoint = Vertices[CurrIndex];
		const FVector2D& NextPoint = Vertices[NextIndex];

		for (int32 i = 0; i < NumPoints; ++i)
		{
			const int32 Index = Indices[i];
			if (Index != PrevIndex && Index != CurrIndex && Index != NextIndex)
			{
				const FVector2D TestPoint = Vertices[Index];

				if (PointInTriangle(PrevPoint, CurrPoint, NextPoint, TestPoint))
				{
					return false;
				}
			}
		}

		return true;
	}
} // namespace

TArray<int32> MRUKTriangulatePoints(const TArray<FVector2D>& Vertices)
{
	TArray<int32> Indices;

	Indices.Reserve(Vertices.Num());
	for (int i = 0; i < Vertices.Num(); ++i)
	{
		Indices.Push(i);
	}

	return MRUKTriangulateMesh({ Vertices, Indices });
}

TArray<int32> MRUKTriangulateMesh(const FMRUKOutline& Outline)
{
	const TArray<FVector2D>& Vertices = Outline.Vertices;
	TArray<int32> Indices = Outline.Indices;
	TArray<int32> Triangles;
	Triangles.Reserve(3 * FMath::Max(Indices.Num() - 2, 0));

	while (Indices.Num() > 3)
	{
		bool EarFound = false;

		for (int32 i = 0; i < Indices.Num(); ++i)
		{
			int32 PrevIndex = Indices[(i + Indices.Num() - 1) % Indices.Num()];
			int32 CurrIndex = Indices[i];
			int32 NextIndex = Indices[(i + 1) % Indices.Num()];

			if (IsConvex(Vertices[PrevIndex], Vertices[CurrIndex], Vertices[NextIndex]) && IsEar(Vertices, Indices, PrevIndex, CurrIndex, NextIndex))
			{
				Triangles.Add(PrevIndex);
				Triangles.Add(CurrIndex);
				Triangles.Add(NextIndex);

				Indices.RemoveAt(i);
				EarFound = true;
				break;
			}
		}

		if (!EarFound)
		{
			UE_LOG(LogMRUK, Error, TEXT("Failed to triangulate points."));
			break;
		}
	}

	if (Indices.Num() == 3)
	{
		Triangles.Append(Indices);
	}

	return Triangles;
}

FMRUKOutline MRUKComputeOutline(const TArray<FVector2D>& Vertices, TArray<TArray<FVector2D>> Holes)
{
	FMRUKOutline Outline{};
	Outline.Vertices = Vertices;

	int32 TotalVerticesCount = Vertices.Num();
	for (const TArray<FVector2D>& Hole : Holes)
	{
		TotalVerticesCount += Hole.Num();
	}

	Outline.Vertices.Reserve(TotalVerticesCount);
	Outline.Indices.Reserve(TotalVerticesCount + 2 * Holes.Num());

	for (int32 I = 0; I < Vertices.Num(); ++I)
	{
		Outline.Indices.Push(I);
	}

	while (Holes.Num() > 0)
	{
		double MaxX = -DBL_MAX;
		int32 HoleToMerge = -1;
		int32 VertexToMerge = -1;
		for (int32 I = 0; I < Holes.Num(); ++I)
		{
			const TArray<FVector2D>& Hole = Holes[I];
			check(Hole.Num() == 4);
			for (int32 J = 0; J < Hole.Num(); ++J)
			{
				const FVector2D& Vertex = Hole[J];
				if (Vertex.X > MaxX)
				{
					MaxX = Vertex.X;
					HoleToMerge = I;
					VertexToMerge = J;
				}
			}
		}
		check(Holes.Num() > 0);
		check(HoleToMerge != -1);

		const FVector2D& HolePosition = Holes[HoleToMerge][VertexToMerge];
		double ClosestXIntersection = DBL_MAX;
		int32 MergeWithIndex = -1;
		FVector2D MergeWith{};
		for (int32 I = 0; I < Outline.Indices.Num(); ++I)
		{
			const int32 I1 = Outline.Indices[I];
			const int32 I2 = Outline.Indices[(I + 1) % Outline.Indices.Num()];

			const FVector2D& P1 = Outline.Vertices[I1];
			const FVector2D& P2 = Outline.Vertices[I2];

			if ((P1.Y != P2.Y) && (P2.Y >= HolePosition.Y && P1.Y <= HolePosition.Y))
			{
				const double Frac = (HolePosition.Y - P1.Y) / (P2.Y - P1.Y);
				const double XIntersection = P1.X + Frac * (P2.X - P1.X);
				if (XIntersection >= HolePosition.X && XIntersection < ClosestXIntersection)
				{
					ClosestXIntersection = XIntersection;
					MergeWithIndex = I;
					MergeWith = P1;
				}
			}
		}
		if (MergeWithIndex != -1)
		{
			FVector2D Intersection(ClosestXIntersection, HolePosition.Y);
			const int32 MergeWithVertexIndex = Outline.Indices[MergeWithIndex];
			for (int32 I = 0; I < Outline.Indices.Num(); ++I)
			{
				const int32 PrevVertexIndex = Outline.Indices[(I + Outline.Indices.Num() - 1) % Outline.Indices.Num()];
				const int32 VertexIndex = Outline.Indices[I];
				const int32 NextVertexIndex = Outline.Indices[(I + 1) % Outline.Indices.Num()];

				FVector2D PrevVertex = Outline.Vertices[PrevVertexIndex];
				FVector2D CandidateVertex = Outline.Vertices[VertexIndex];
				FVector2D NextVertex = Outline.Vertices[NextVertexIndex];
				if (MergeWithVertexIndex != VertexIndex && !IsConvex(PrevVertex, CandidateVertex, NextVertex))
				{
					if (CandidateVertex.X < MergeWith.X && CandidateVertex.X > HolePosition.X && PointInTriangle(HolePosition, MergeWith, Intersection, CandidateVertex))
					{
						MergeWith = CandidateVertex;
						MergeWithIndex = I;
					}
				}
			}

			const int32 StartIndex = Outline.Vertices.Num();
			const int32 HoleVertexCount = Holes[HoleToMerge].Num();
			TArray<int32> InsertedIndices;
			InsertedIndices.Reserve(HoleVertexCount + 2);
			Outline.Vertices.Append(Holes[HoleToMerge]);
			for (int32 J = 0; J < HoleVertexCount; ++J)
			{
				InsertedIndices.Push(StartIndex + (J + VertexToMerge) % HoleVertexCount);
			}
			InsertedIndices.Add(StartIndex + VertexToMerge);
			InsertedIndices.Add(Outline.Indices[MergeWithIndex]);
			Outline.Indices.Insert(InsertedIndices, MergeWithIndex + 1);
		}
		Holes.RemoveAt(HoleToMerge);
	}

	return Outline;
}
