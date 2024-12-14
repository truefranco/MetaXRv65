// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "khronos/openxr/openxr.h"
#include "IStereoLayers.h"
#include "OculusXRPassthroughLayerShapes.h"
#include "OculusXRPassthroughMesh.h"

class UProceduralMeshComponent;

namespace XRPassthrough
{
	class FPassthroughXR;

	class FPassthroughLayer
	{
	private:
		struct FPassthroughMesh
		{
			FPassthroughMesh(XrTriangleMeshFB MeshHandle, XrGeometryInstanceFB InstanceHandle, FTransform Transform)
				: MeshHandle(MeshHandle)
				, InstanceHandle(InstanceHandle)
				, LastTransform(Transform)
			{
			}
			XrTriangleMeshFB MeshHandle;
			XrGeometryInstanceFB InstanceHandle;
			FTransform LastTransform;
		};
		typedef TSharedPtr<TMap<FString, FPassthroughMesh>, ESPMode::ThreadSafe> FUserDefinedGeometryMapPtr;

		struct FPassthroughPokeActor
		{
			FPassthroughPokeActor(){};
			FPassthroughPokeActor(UProceduralMeshComponent* PokeAHoleComponentPtr, AActor* PokeAHoleActor)
				: PokeAHoleComponentPtr(PokeAHoleComponentPtr)
				, PokeAHoleActor(PokeAHoleActor){};
			UProceduralMeshComponent* PokeAHoleComponentPtr;
			AActor* PokeAHoleActor;
		};

		typedef TSharedPtr<TMap<FString, FPassthroughPokeActor>, ESPMode::ThreadSafe> FPassthroughPokeActorMapPtr;

	public:
		static bool IsPassthoughLayerDesc(const IStereoLayers::FLayerDesc& LayerDesc);
		FPassthroughLayer(XrPassthroughFB PassthroughInstance, TWeakPtr<FPassthroughXR> Extension);
		virtual ~FPassthroughLayer();
		bool CanReuseResources(const IStereoLayers::FLayerDesc& LayerDesc) const;

		bool Initialize_RenderThread(XrSession InSession, const IStereoLayers::FLayerDesc& LayerDesc);
		bool BuildPassthroughPokeActor(OculusXRHMD::FOculusPassthroughMeshRef PassthroughMesh, FPassthroughPokeActor& OutPassthroughPokeActor);
		void UpdatePassthroughPokeActors_GameThread();
		void UpdatePassthroughStyle_RenderThread(const FEdgeStyleParameters& EdgeStyleParameters);
		void UpdatePassthrough_RenderThread(FRHICommandListImmediate& RHICmdList, XrSpace Space, XrTime Time, float WorldToMetersScale, FTransform TrackingToWorld);

		const XrCompositionLayerBaseHeader* GetXrCompositionLayerHeader();
		bool IsBackgroundLayer() const;
		bool IsOverlayLayer() const;
		bool PassthroughSupportsDepth() const;
		const IStereoLayers::FLayerDesc& GetDesc() const { return LayerDesc; };

		void AddPassthroughMesh_RenderThread(const TArray<FVector>& Vertices, const TArray<int32>& Triangles, FMatrix Transformation, XrSpace Space, XrTriangleMeshFB& OutMeshHandle, XrGeometryInstanceFB& OutInstanceHandle);
		void UpdatePassthroughMeshTransform_RenderThread(XrGeometryInstanceFB InstanceHandle, FMatrix Transformation, XrSpace Space, XrTime Time);
		void RemovePassthroughMesh_RenderThread(XrTriangleMeshFB MeshHandle, XrGeometryInstanceFB InstanceHandle);

	private:
		TWeakPtr<FPassthroughXR> PassthroughExtension;

		FUserDefinedGeometryMapPtr UserDefinedGeometryMap;
		FPassthroughPokeActorMapPtr PassthroughPokeActorMap;

		XrSession Session;
		IStereoLayers::FLayerDesc LayerDesc;
		XrPassthroughLayerFB XrPassthroughLayer;
		XrCompositionLayerPassthroughFB XrCompositionLayerHeader;
		XrPassthroughFB XrPassthroughInstance;
	};

	typedef TSharedPtr<FPassthroughLayer, ESPMode::ThreadSafe> FPassthroughLayerPtr;

	struct FLayerDesc_CompareId
	{
		FORCEINLINE bool operator()(const IStereoLayers::FLayerDesc& A, const IStereoLayers::FLayerDesc& B) const
		{
			return A.GetLayerId() < B.GetLayerId();
		}
	};

	struct FLayerDesc_ComparePriority
	{
		FORCEINLINE int32 GetLayerTypePriority(const IStereoLayers::FLayerDesc& LayerDesc) const
		{
			const bool IsPokeAHole = ((LayerDesc.Flags & IStereoLayers::LAYER_FLAG_SUPPORT_DEPTH) != 0) && LayerDesc.HasShape<FUserDefinedLayer>();
			bool IsUnderlay = false;

			if (LayerDesc.HasShape<FReconstructedLayer>())
			{
				const FReconstructedLayer& ReconstructedLayerProps = LayerDesc.GetShape<FReconstructedLayer>();
				IsUnderlay = (ReconstructedLayerProps.PassthroughLayerOrder == PassthroughLayerOrder_Underlay);
			}
			else if (LayerDesc.HasShape<FUserDefinedLayer>())
			{
				const FUserDefinedLayer& UserDefinedLayerProps = LayerDesc.GetShape<FUserDefinedLayer>();
				IsUnderlay = (UserDefinedLayerProps.PassthroughLayerOrder == PassthroughLayerOrder_Underlay);
			}

			const int32 Priority = IsUnderlay ? -2 : IsPokeAHole ? -1
																 : 1;
			return Priority;
		}

		FORCEINLINE bool operator()(const IStereoLayers::FLayerDesc& A, const IStereoLayers::FLayerDesc& B) const
		{
			// First order layers by type
			const int32 PassA = GetLayerTypePriority(A);
			const int32 PassB = GetLayerTypePriority(B);

			if (PassA != PassB)
			{
				return PassA < PassB;
			}

			// Draw layers by ascending priority
			if (A.Priority != B.Priority)
			{
				return A.Priority < B.Priority;
			}

			// Draw layers by ascending id
			return A.Id < B.Id;
		}

		FORCEINLINE bool operator()(const FPassthroughLayerPtr& A, const FPassthroughLayerPtr& B) const
		{
			return (*this)(A->GetDesc(), B->GetDesc());
		}
	};

} // namespace XRPassthrough
