// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRPassthroughLayer.h"

#include "XRThreadUtils.h"
#include "ProceduralMeshComponent.h"
#include "Materials/Material.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/MeshComponent.h"
#include "OculusXRHMDPrivate.h"
#include "OculusXRPassthroughXRFunctions.h"
#include "OculusXRPassthroughXR.h"

namespace XRPassthrough
{

	FPassthroughLayer::FPassthroughLayer(XrPassthroughFB PassthroughInstance, TWeakPtr<FPassthroughXR> Extension)
		: PassthroughExtension(Extension)
		, LayerDesc{}
		, XrPassthroughLayer{ XR_NULL_HANDLE }
		, XrCompositionLayerHeader{}
		, XrPassthroughInstance(PassthroughInstance)
	{
	}

	FPassthroughLayer::~FPassthroughLayer()
	{
		if (IsInGameThread())
		{
			ExecuteOnRenderThread([this]() {
				if (XrPassthroughLayer != XR_NULL_HANDLE)
				{
					xrDestroyPassthroughLayerFB(XrPassthroughLayer);
				}
			});
		}
		else
		{
			if (XrPassthroughLayer != XR_NULL_HANDLE)
			{
				xrDestroyPassthroughLayerFB(XrPassthroughLayer);
			}
		}
	}

	static UWorld* GetWorld()
	{
		UWorld* World = nullptr;
		for (const FWorldContext& Context : GEngine->GetWorldContexts())
		{
			if (Context.WorldType == EWorldType::Game || Context.WorldType == EWorldType::PIE)
			{
				World = Context.World();
			}
		}
		return World;
	}

	bool FPassthroughLayer::IsPassthoughLayerDesc(const IStereoLayers::FLayerDesc& LayerDesc)
	{
		return LayerDesc.HasShape<FReconstructedLayer>() || LayerDesc.HasShape<FUserDefinedLayer>();
	}

	bool FPassthroughLayer::CanReuseResources(const IStereoLayers::FLayerDesc& InLayerDesc) const
	{
		if (!IsPassthoughLayerDesc(InLayerDesc) || InLayerDesc.HasShape<FReconstructedLayer>() != LayerDesc.HasShape<FReconstructedLayer>() || InLayerDesc.HasShape<FUserDefinedLayer>() != LayerDesc.HasShape<FUserDefinedLayer>())
		{
			return false;
		}
		return true;
	}

	bool FPassthroughLayer::Initialize_RenderThread(XrSession InSession, const IStereoLayers::FLayerDesc& InLayerDesc)
	{
		check(IsPassthoughLayerDesc(InLayerDesc));
		OculusXRHMD::CheckInRenderThread();

		if (!CanReuseResources(InLayerDesc))
		{
			Session = InSession;

			if (XrPassthroughLayer != XR_NULL_HANDLE)
			{
				xrDestroyPassthroughLayerFB(XrPassthroughLayer);
				XrPassthroughLayer = XR_NULL_HANDLE;
			}

			if (InLayerDesc.HasShape<FReconstructedLayer>() || InLayerDesc.HasShape<FUserDefinedLayer>())
			{
				XrPassthroughLayerCreateInfoFB PassthroughLayerCreateInfo = { XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB };
				PassthroughLayerCreateInfo.passthrough = XrPassthroughInstance;
				PassthroughLayerCreateInfo.purpose = InLayerDesc.HasShape<FReconstructedLayer>() ? XR_PASSTHROUGH_LAYER_PURPOSE_RECONSTRUCTION_FB : XR_PASSTHROUGH_LAYER_PURPOSE_PROJECTED_FB;

				if (!XR_SUCCEEDED(xrCreatePassthroughLayerFB(Session, &PassthroughLayerCreateInfo, &XrPassthroughLayer)))
				{
					return false;
				}

				if (!XR_SUCCEEDED(xrPassthroughLayerResumeFB(XrPassthroughLayer)))
				{
					return false;
				}
			}
		}

		LayerDesc = InLayerDesc;

		if (!UserDefinedGeometryMap)
		{
			UserDefinedGeometryMap = MakeShared<TMap<FString, FPassthroughMesh>, ESPMode::ThreadSafe>();
		}

		if (!PassthroughPokeActorMap)
		{
			PassthroughPokeActorMap = MakeShared<TMap<FString, FPassthroughPokeActor>, ESPMode::ThreadSafe>();
		}

		return true;
	}

	bool FPassthroughLayer::BuildPassthroughPokeActor(OculusXRHMD::FOculusPassthroughMeshRef PassthroughMesh, FPassthroughPokeActor& OutPassthroughPokeActor)
	{
		UWorld* World = GetWorld();

		if (!World || !PassthroughExtension.IsValid())
		{
			return false;
		}

		const FString BaseComponentName = FString::Printf(TEXT("OculusPassthroughPoke_%d"), LayerDesc.Id);
		const FName ComponentName(*BaseComponentName);
		AActor* PassthoughPokeActor = World->SpawnActor<AActor>();
		UProceduralMeshComponent* PassthoughPokeComponentPtr = NewObject<UProceduralMeshComponent>(PassthoughPokeActor, ComponentName);
		PassthoughPokeComponentPtr->RegisterComponent();

		const TArray<int32>& Triangles = PassthroughMesh->GetTriangles();
		const TArray<FVector>& Vertices = PassthroughMesh->GetVertices();
		TArray<FVector> Normals;
		TArray<FVector2D> UV0;
		TArray<FLinearColor> VertexColors;
		TArray<FProcMeshTangent> Tangents;

		PassthoughPokeComponentPtr->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, false);

		UMaterial* PokeAHoleMaterial = PassthroughExtension.Pin()->GetSettings()->PokeAHoleMaterial;

		if (PokeAHoleMaterial)
		{
			UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(PokeAHoleMaterial, nullptr);
			PassthoughPokeComponentPtr->SetMaterial(0, DynamicMaterial);
		}

		OutPassthroughPokeActor.PokeAHoleActor = PassthoughPokeActor;
		OutPassthroughPokeActor.PokeAHoleComponentPtr = PassthoughPokeComponentPtr;

		return true;
	}

	void FPassthroughLayer::UpdatePassthroughPokeActors_GameThread()
	{
		if (LayerDesc.HasShape<FUserDefinedLayer>())
		{
			const FUserDefinedLayer& UserDefinedLayerProps = LayerDesc.GetShape<FUserDefinedLayer>();
			const TArray<FUserDefinedGeometryDesc>& UserGeometryList = UserDefinedLayerProps.UserGeometryList;
			TSet<FString> UsedSet = {};

			if (PassthroughSupportsDepth())
			{
				for (const FUserDefinedGeometryDesc& GeometryDesc : UserGeometryList)
				{
					const FString MeshName = GeometryDesc.MeshName;
					UsedSet.Add(MeshName);

					FPassthroughPokeActor* FoundPassthroughPokeActor = PassthroughPokeActorMap->Find(MeshName);
					if (!FoundPassthroughPokeActor)
					{
						OculusXRHMD::FOculusPassthroughMeshRef GeomPassthroughMesh = GeometryDesc.PassthroughMesh;
						if (GeomPassthroughMesh)
						{
							FPassthroughPokeActor PassthroughPokeActor;
							if (BuildPassthroughPokeActor(GeomPassthroughMesh, PassthroughPokeActor))
							{
								PassthroughPokeActor.PokeAHoleComponentPtr->SetWorldTransform(GeometryDesc.Transform);
								PassthroughPokeActorMap->Add(MeshName, PassthroughPokeActor);
							}
						}
					}
					else if (GeometryDesc.bUpdateTransform)
					{
						(*FoundPassthroughPokeActor).PokeAHoleComponentPtr->SetWorldTransform(GeometryDesc.Transform);
					}
				}
			}

			// find actors that no longer exist
			TArray<FString> ItemsToRemove;
			for (auto& Entry : *UserDefinedGeometryMap)
			{
				if (!UsedSet.Contains(Entry.Key))
				{
					ItemsToRemove.Add(Entry.Key);
				}
			}

			for (FString Entry : ItemsToRemove)
			{
				FPassthroughPokeActor* PassthroughPokeActor = PassthroughPokeActorMap->Find(Entry);
				if (PassthroughPokeActor)
				{
					UWorld* World = GetWorld();
					if (World)
					{
						World->DestroyActor(PassthroughPokeActor->PokeAHoleActor);
					}
				}
				PassthroughPokeActorMap->Remove(Entry);
			}
		}
	}

	void FPassthroughLayer::UpdatePassthroughStyle_RenderThread(const FEdgeStyleParameters& EdgeStyleParameters)
	{
		if (!PassthroughExtension.IsValid())
		{
			return;
		}

		XrPassthroughStyleFB Style = { XR_TYPE_PASSTHROUGH_STYLE_FB };

		Style.textureOpacityFactor = EdgeStyleParameters.TextureOpacityFactor;

		Style.edgeColor = { 0, 0, 0, 0 };
		if (EdgeStyleParameters.bEnableEdgeColor)
		{
			Style.edgeColor = {
				EdgeStyleParameters.EdgeColor.R,
				EdgeStyleParameters.EdgeColor.G,
				EdgeStyleParameters.EdgeColor.B,
				EdgeStyleParameters.EdgeColor.A
			};
		}

		/// Color map
		union AllColorMapDescriptors
		{
			XrPassthroughColorMapMonoToRgbaFB rgba;
			XrPassthroughColorMapMonoToMonoFB mono;
			XrPassthroughBrightnessContrastSaturationFB bcs;
			XrPassthroughColorMapLutMETA lut;
			XrPassthroughColorMapInterpolatedLutMETA interpLut;
		};
		AllColorMapDescriptors colorMap;
		if (PassthroughExtension.Pin()->GetSettings()->bExtColorLutAvailable && EdgeStyleParameters.bEnableColorMap)
		{
			void* colorMapDataDestination = nullptr;
			unsigned int expectedColorMapDataSize = 0;
			switch (EdgeStyleParameters.ColorMapType)
			{
				case ColorMapType_None:
					break;
				case ColorMapType_GrayscaleToColor:
					colorMap.rgba = { XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB };
					expectedColorMapDataSize = sizeof(colorMap.rgba.textureColorMap);
					colorMapDataDestination = colorMap.rgba.textureColorMap;
					Style.next = &colorMap.rgba;
					break;
				case ColorMapType_Grayscale:
					colorMap.mono = { XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB };
					expectedColorMapDataSize = sizeof(colorMap.mono.textureColorMap);
					colorMapDataDestination = colorMap.mono.textureColorMap;
					Style.next = &colorMap.mono;
					break;
				case ColorMapType_ColorAdjustment:
					colorMap.bcs = { XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB };
					expectedColorMapDataSize = 3 * sizeof(float);
					colorMapDataDestination = &colorMap.bcs.brightness;
					Style.next = &colorMap.bcs;
					break;
				case ColorMapType_ColorLut:
					colorMap.lut = { XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META };
					colorMap.lut.colorLut = reinterpret_cast<const XrPassthroughColorLutMETA&>(EdgeStyleParameters.ColorLutDesc.ColorLuts[0]);
					colorMap.lut.weight = EdgeStyleParameters.ColorLutDesc.Weight;
					Style.next = &colorMap.lut;
					break;
				case ColorMapType_ColorLut_Interpolated:
					colorMap.interpLut = { XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META };
					colorMap.interpLut.sourceColorLut = reinterpret_cast<const XrPassthroughColorLutMETA&>(EdgeStyleParameters.ColorLutDesc.ColorLuts[0]);
					colorMap.interpLut.targetColorLut = reinterpret_cast<const XrPassthroughColorLutMETA&>(EdgeStyleParameters.ColorLutDesc.ColorLuts[1]);
					colorMap.interpLut.weight = EdgeStyleParameters.ColorLutDesc.Weight;
					Style.next = &colorMap.lut;
					break;
				default:
					UE_LOG(LogTemp, Error, TEXT("Passthrough style has unexpected color map type: %i"), EdgeStyleParameters.ColorMapType);
					return;
			}

			// Validate color map data size and copy it over
			if (colorMapDataDestination != nullptr)
			{
				if (EdgeStyleParameters.ColorMapData.Num() != expectedColorMapDataSize)
				{
					UE_LOG(LogTemp, Error,
						TEXT("Passthrough color map size for type %i is expected to be %i instead of %i"),
						EdgeStyleParameters.ColorMapType,
						expectedColorMapDataSize,
						EdgeStyleParameters.ColorMapData.Num());
					return;
				}

				uint8* ColorMapData = (uint8*)EdgeStyleParameters.ColorMapData.GetData();
				memcpy(colorMapDataDestination, ColorMapData, expectedColorMapDataSize);
			}
		}

		XrResult Result = xrPassthroughLayerSetStyleFB(XrPassthroughLayer, &Style);
		if (!XR_SUCCEEDED(Result))
		{
			UE_LOG(LogHMD, Error, TEXT("Failed setting passthrough style"));
			return;
		}
	}

	static FMatrix TransformToPassthroughSpace(FTransform Transform, float WorldToMetersScale, FTransform TrackingToWorld)
	{
		const FVector WorldToMetersScaleInv = FVector(WorldToMetersScale).Reciprocal();
		FTransform TransformWorld = Transform * TrackingToWorld.Inverse();
		TransformWorld.MultiplyScale3D(WorldToMetersScaleInv);
		TransformWorld.ScaleTranslation(WorldToMetersScaleInv);
		const FMatrix TransformWorldScaled = TransformWorld.ToMatrixWithScale();

		const FMatrix SwapAxisMatrix(
			FPlane(0.0f, 0.0f, -1.0f, 0.0f),
			FPlane(1.0f, 0.0f, 0.0f, 0.0f),
			FPlane(0.0f, 1.0f, 0.0f, 0.0f),
			FPlane(0.0f, 0.0f, 0.0f, 1.0f));

		return TransformWorldScaled * SwapAxisMatrix;
	}

	void FPassthroughLayer::UpdatePassthrough_RenderThread(FRHICommandListImmediate& RHICmdList, XrSpace Space, XrTime Time, float WorldToMetersScale, FTransform TrackingToWorld)
	{
		check(IsInRenderingThread());

		if (LayerDesc.HasShape<FReconstructedLayer>())
		{
			const FReconstructedLayer& ReconstructedLayerProps = LayerDesc.GetShape<FReconstructedLayer>();
			UpdatePassthroughStyle_RenderThread(ReconstructedLayerProps.EdgeStyleParameters);
		}
		else if (LayerDesc.HasShape<FUserDefinedLayer>())
		{
			const FUserDefinedLayer& UserDefinedLayerProps = LayerDesc.GetShape<FUserDefinedLayer>();
			UpdatePassthroughStyle_RenderThread(UserDefinedLayerProps.EdgeStyleParameters);
		}

		if (LayerDesc.HasShape<FUserDefinedLayer>())
		{
			const FUserDefinedLayer& UserDefinedLayerProps = LayerDesc.GetShape<FUserDefinedLayer>();
			const TArray<FUserDefinedGeometryDesc>& UserGeometryList = UserDefinedLayerProps.UserGeometryList;
			TSet<FString> UsedSet;

			for (const FUserDefinedGeometryDesc& GeometryDesc : UserGeometryList)
			{
				const FString MeshName = GeometryDesc.MeshName;
				UsedSet.Add(MeshName);

				FPassthroughMesh* LayerPassthroughMesh = UserDefinedGeometryMap->Find(MeshName);
				if (!LayerPassthroughMesh)
				{
					OculusXRHMD::FOculusPassthroughMeshRef GeomPassthroughMesh = GeometryDesc.PassthroughMesh;
					if (GeomPassthroughMesh)
					{
						const FMatrix Transform = TransformToPassthroughSpace(GeometryDesc.Transform, WorldToMetersScale, TrackingToWorld);
						XrTriangleMeshFB MeshHandle = 0;
						XrGeometryInstanceFB InstanceHandle = 0;
						AddPassthroughMesh_RenderThread(GeomPassthroughMesh->GetVertices(), GeomPassthroughMesh->GetTriangles(), Transform, Space, MeshHandle, InstanceHandle);
						UserDefinedGeometryMap->Add(MeshName, FPassthroughMesh(MeshHandle, InstanceHandle, GeometryDesc.Transform));
					}
				}
				else if (!GeometryDesc.Transform.Equals(LayerPassthroughMesh->LastTransform))
				{
					const FMatrix Transform = TransformToPassthroughSpace(GeometryDesc.Transform, WorldToMetersScale, TrackingToWorld);
					UpdatePassthroughMeshTransform_RenderThread(LayerPassthroughMesh->InstanceHandle, Transform, Space, Time);
					LayerPassthroughMesh->LastTransform = GeometryDesc.Transform;
				}
			}

			// find meshes that no longer exist
			TArray<FString> ItemsToRemove;
			for (auto& Entry : *UserDefinedGeometryMap)
			{
				if (!UsedSet.Contains(Entry.Key))
				{
					ItemsToRemove.Add(Entry.Key);
				}
			}

			for (FString Entry : ItemsToRemove)
			{
				FPassthroughMesh* PassthroughMesh = UserDefinedGeometryMap->Find(Entry);
				if (PassthroughMesh)
				{
					const XrTriangleMeshFB MeshHandle = PassthroughMesh->MeshHandle;
					const XrGeometryInstanceFB InstanceHandle = PassthroughMesh->InstanceHandle;
					RemovePassthroughMesh_RenderThread(MeshHandle, InstanceHandle);
				}
				else
				{
					UE_LOG(LogHMD, Error, TEXT("PassthroughMesh: %s doesn't exist."), *Entry);
					return;
				}

				UserDefinedGeometryMap->Remove(Entry);
			}
		}
	}

	const XrCompositionLayerBaseHeader* FPassthroughLayer::GetXrCompositionLayerHeader()
	{
		OculusXRHMD::CheckInRHIThread();
		if (XrPassthroughLayer != nullptr)
		{
			XrCompositionLayerPassthroughFB& CompositionLayer = XrCompositionLayerHeader;
			memset(&CompositionLayer, 0, sizeof(CompositionLayer));
			CompositionLayer.type = XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB;
			CompositionLayer.layerHandle = XrPassthroughLayer;
			CompositionLayer.flags = XR_COMPOSITION_LAYER_BLEND_TEXTURE_SOURCE_ALPHA_BIT;
			CompositionLayer.space = XR_NULL_HANDLE;
			return reinterpret_cast<const XrCompositionLayerBaseHeader*>(&CompositionLayer);
		}
		return nullptr;
	}

	bool FPassthroughLayer::IsBackgroundLayer() const
	{
		return (LayerDesc.HasShape<FReconstructedLayer>() && (LayerDesc.GetShape<FReconstructedLayer>().PassthroughLayerOrder == PassthroughLayerOrder_Underlay))
			|| (LayerDesc.HasShape<FUserDefinedLayer>() && (LayerDesc.GetShape<FUserDefinedLayer>().PassthroughLayerOrder == PassthroughLayerOrder_Underlay));
	}

	bool FPassthroughLayer::IsOverlayLayer() const
	{
		return (LayerDesc.HasShape<FReconstructedLayer>() && (LayerDesc.GetShape<FReconstructedLayer>().PassthroughLayerOrder == PassthroughLayerOrder_Overlay))
			|| (LayerDesc.HasShape<FUserDefinedLayer>() && (LayerDesc.GetShape<FUserDefinedLayer>().PassthroughLayerOrder == PassthroughLayerOrder_Overlay));
	}

	bool FPassthroughLayer::PassthroughSupportsDepth() const
	{
		return ((LayerDesc.Flags & IStereoLayers::LAYER_FLAG_SUPPORT_DEPTH) != 0) && LayerDesc.HasShape<FUserDefinedLayer>();
	}

	// Code taken from OVRPlugin (InsightMrManager.cpp)
	static bool DecomposeTransformMatrix(FMatrix Transform, XrPosef& OutPose, XrVector3f& OutScale)
	{
		// First, extract the translation (position) and scale.
		FVector3f position = FVector3f(Transform.GetOrigin());
		FVector3f scale = FVector3f(Transform.GetScaleVector());
		if (scale.X == 0 || scale.Y == 0 || scale.Z == 0)
		{
			return false;
		}

		// Then obtain the rotation matrix, with scale removed.
		FMatrix rotationMatrix(
			FVector(Transform.M[0][0] / scale.X,
				Transform.M[0][1] / scale.X,
				Transform.M[0][2] / scale.X),
			FVector(Transform.M[1][0] / scale.Y,
				Transform.M[1][1] / scale.Y,
				Transform.M[1][2] / scale.Y),
			FVector(Transform.M[2][0] / scale.Z,
				Transform.M[2][1] / scale.Z,
				Transform.M[2][2] / scale.Z),
			FVector::ZeroVector);

		// Cross-product of X and Y should give the Z axis.
		// If the actual Z axis points the other way, the scale needs to be inverted.
		const FVector tempZ = FVector::CrossProduct(rotationMatrix.GetScaledAxis(EAxis::X), rotationMatrix.GetScaledAxis(EAxis::Y));
		const float axisDotProduct = rotationMatrix.M[2][0] * tempZ.X + rotationMatrix.M[2][1] * tempZ.Y + rotationMatrix.M[2][2] * tempZ.Z;
		const bool axisFlip = axisDotProduct < 0;
		if (axisFlip)
		{
			rotationMatrix.M[0][2] = -rotationMatrix.M[0][2];
			rotationMatrix.M[1][2] = -rotationMatrix.M[1][2];
			rotationMatrix.M[2][2] = -rotationMatrix.M[2][2];
		}

		// Zero determinant means the matrix does not define 3 basis vectors.
		if (rotationMatrix.RotDeterminant() == 0)
		{
			return false;
		}

		// Extract the rotation quaternion from the rotation matrix
		FQuat uerotation = rotationMatrix.ToQuat();

		XrQuaternionf rotation;
		rotation.x = uerotation.X;
		rotation.y = uerotation.Y;
		rotation.z = uerotation.Z;
		rotation.w = uerotation.W;

		if (axisFlip)
		{
			// Flip the scale to account for the axis flip within the mesh
			scale.Z = -scale.Z;
			// Quaternion with (w, -x, -y, -z) would match what Unity provided exactly.
			// Since there's an axis flip, need to mirror the transform, which means
			// inverting w and z. The correct result is then (-w, -x, -y, z).
			rotation.w = -rotation.w;
			rotation.x = -rotation.x;
			rotation.y = -rotation.y;
		}

		OutScale = XrVector3f{ scale.X, scale.Y, scale.Z };
		OutPose = XrPosef{ rotation, XrVector3f{ position.X, position.Y, position.Z } };

		return true;
	}

	void FPassthroughLayer::AddPassthroughMesh_RenderThread(const TArray<FVector>& Vertices, const TArray<int32>& Triangles, FMatrix Transformation, XrSpace Space, XrTriangleMeshFB& OutMeshHandle, XrGeometryInstanceFB& OutInstanceHandle)
	{
		OculusXRHMD::CheckInRenderThread();

		XrTriangleMeshFB MeshHandle = 0;
		XrGeometryInstanceFB InstanceHandle = 0;

		// Explicit conversion is needed since FVector contains double elements.
		// Converting Vertices.Data() to float* causes issues when memory is parsed.
		TArray<XrVector3f> VertexData;
		VertexData.SetNumUninitialized(Vertices.Num());

		size_t i = 0;
		for (const FVector& vertex : Vertices)
		{
			VertexData[i++] = { (float)vertex.X, (float)vertex.Y, (float)vertex.Z };
		}

		TArray<uint32_t> TriangleData;
		TriangleData.SetNumUninitialized(Triangles.Num());

		i = 0;
		for (const int32& tri : Triangles)
		{
			TriangleData[i++] = (uint32_t)tri;
		}

		XrTriangleMeshCreateInfoFB TriangleMeshInfo = { XR_TYPE_TRIANGLE_MESH_CREATE_INFO_FB };
		TriangleMeshInfo.flags = 0; // not mutable
		TriangleMeshInfo.windingOrder = XR_WINDING_ORDER_UNKNOWN_FB;
		TriangleMeshInfo.vertexCount = Vertices.Num();
		TriangleMeshInfo.vertexBuffer = VertexData.GetData();
		TriangleMeshInfo.triangleCount = Triangles.Num() / 3;

		TriangleMeshInfo.indexBuffer = TriangleData.GetData();

		if (XR_FAILED(xrCreateTriangleMeshFB.GetValue()(Session, &TriangleMeshInfo, &MeshHandle)))
		{
			UE_LOG(LogHMD, Error, TEXT("Failed creating passthrough mesh surface."));
			return;
		}

		XrGeometryInstanceCreateInfoFB createInfo = { XR_TYPE_GEOMETRY_INSTANCE_CREATE_INFO_FB };

		bool result = DecomposeTransformMatrix(Transformation, createInfo.pose, createInfo.scale);
		if (!result)
		{
			UE_LOG(LogHMD, Error, TEXT("Failed decomposing the transform matrix."));
			return;
		}

		createInfo.layer = XrPassthroughLayer;
		createInfo.mesh = MeshHandle;
		createInfo.baseSpace = Space;

		if (XR_FAILED(xrCreateGeometryInstanceFB(Session, &createInfo, &InstanceHandle)))
		{
			UE_LOG(LogHMD, Error, TEXT("Failed adding passthrough mesh surface to scene."));
			return;
		}

		OutMeshHandle = MeshHandle;
		OutInstanceHandle = InstanceHandle;
	}

	void FPassthroughLayer::UpdatePassthroughMeshTransform_RenderThread(XrGeometryInstanceFB InstanceHandle, FMatrix Transformation, XrSpace Space, XrTime Time)
	{
		OculusXRHMD::CheckInRenderThread();

		XrGeometryInstanceTransformFB UpdateInfo = { XR_TYPE_GEOMETRY_INSTANCE_TRANSFORM_FB };
		bool result = DecomposeTransformMatrix(Transformation, UpdateInfo.pose, UpdateInfo.scale);
		if (!result)
		{
			UE_LOG(LogHMD, Error, TEXT("Failed decomposing the transform matrix."));
			return;
		}

		UpdateInfo.baseSpace = Space;
		UpdateInfo.time = Time;

		if (XR_FAILED(xrGeometryInstanceSetTransformFB(InstanceHandle, &UpdateInfo)))
		{
			UE_LOG(LogHMD, Error, TEXT("Failed updating passthrough mesh surface transform."));
			return;
		}
	}

	void FPassthroughLayer::RemovePassthroughMesh_RenderThread(XrTriangleMeshFB MeshHandle, XrGeometryInstanceFB InstanceHandle)
	{
		OculusXRHMD::CheckInRenderThread();

		if (XR_FAILED(xrDestroyGeometryInstanceFB(InstanceHandle)))
		{
			UE_LOG(LogHMD, Error, TEXT("Failed removing passthrough surface from scene."));
			return;
		}

		if (XR_FAILED(xrDestroyTriangleMeshFB.GetValue()(MeshHandle)))
		{
			UE_LOG(LogHMD, Error, TEXT("Failed destroying passthrough surface mesh."));
			return;
		}
	}

} // namespace XRPassthrough
