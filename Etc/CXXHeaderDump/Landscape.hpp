#ifndef UE4SS_SDK_Landscape_HPP
#define UE4SS_SDK_Landscape_HPP

#include "Landscape_enums.hpp"

struct FForeignControlPointData
{
}; // Size: 0x1

struct FForeignSplineSegmentData
{
}; // Size: 0x1

struct FForeignWorldSplineData
{
}; // Size: 0x1

struct FGizmoSelectData
{
}; // Size: 0x50

struct FGrassInput
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    class ULandscapeGrassType* GrassType;                                             // 0x0008 (size: 0x8)
    FExpressionInput Input;                                                           // 0x0010 (size: 0xC)

}; // Size: 0x28

struct FGrassVariety
{
    class UStaticMesh* GrassMesh;                                                     // 0x0000 (size: 0x8)
    FPerPlatformFloat GrassDensity;                                                   // 0x0008 (size: 0x4)
    bool bUseGrid;                                                                    // 0x000C (size: 0x1)
    float PlacementJitter;                                                            // 0x0010 (size: 0x4)
    FPerPlatformInt StartCullDistance;                                                // 0x0014 (size: 0x4)
    FPerPlatformInt EndCullDistance;                                                  // 0x0018 (size: 0x4)
    int32 MinLOD;                                                                     // 0x001C (size: 0x4)
    EGrassScaling Scaling;                                                            // 0x0020 (size: 0x1)
    FFloatInterval ScaleX;                                                            // 0x0024 (size: 0x8)
    FFloatInterval ScaleY;                                                            // 0x002C (size: 0x8)
    FFloatInterval ScaleZ;                                                            // 0x0034 (size: 0x8)
    bool RandomRotation;                                                              // 0x003C (size: 0x1)
    bool AlignToSurface;                                                              // 0x003D (size: 0x1)
    bool bUseLandscapeLightmap;                                                       // 0x003E (size: 0x1)
    FLightingChannels LightingChannels;                                               // 0x003F (size: 0x1)
    bool bReceivesDecals;                                                             // 0x0040 (size: 0x1)
    bool bCastDynamicShadow;                                                          // 0x0041 (size: 0x1)
    bool bKeepInstanceBufferCPUCopy;                                                  // 0x0042 (size: 0x1)

}; // Size: 0x48

struct FHeightmapData
{
    class UTexture2D* Texture;                                                        // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLandscapeComponentMaterialOverride
{
    FPerPlatformInt LODIndex;                                                         // 0x0000 (size: 0x4)
    class UMaterialInterface* Material;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLandscapeEditToolRenderData
{
    class UMaterialInterface* ToolMaterial;                                           // 0x0000 (size: 0x8)
    class UMaterialInterface* GizmoMaterial;                                          // 0x0008 (size: 0x8)
    int32 SelectedType;                                                               // 0x0010 (size: 0x4)
    int32 DebugChannelR;                                                              // 0x0014 (size: 0x4)
    int32 DebugChannelG;                                                              // 0x0018 (size: 0x4)
    int32 DebugChannelB;                                                              // 0x001C (size: 0x4)
    class UTexture2D* DataTexture;                                                    // 0x0020 (size: 0x8)
    class UTexture2D* LayerContributionTexture;                                       // 0x0028 (size: 0x8)
    class UTexture2D* DirtyTexture;                                                   // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FLandscapeEditorLayerSettings
{
}; // Size: 0x1

struct FLandscapeImportLayerInfo
{
}; // Size: 0x1

struct FLandscapeInfoLayerSettings
{
    class ULandscapeLayerInfoObject* LayerInfoObj;                                    // 0x0000 (size: 0x8)
    FName LayerName;                                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLandscapeLayer
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    FName Name;                                                                       // 0x0010 (size: 0x8)
    bool bVisible;                                                                    // 0x0018 (size: 0x1)
    bool bLocked;                                                                     // 0x0019 (size: 0x1)
    float HeightmapAlpha;                                                             // 0x001C (size: 0x4)
    float WeightmapAlpha;                                                             // 0x0020 (size: 0x4)
    TEnumAsByte<ELandscapeBlendMode> BlendMode;                                       // 0x0024 (size: 0x1)
    TArray<FLandscapeLayerBrush> Brushes;                                             // 0x0028 (size: 0x10)
    TMap<class ULandscapeLayerInfoObject*, class bool> WeightmapLayerAllocationBlend; // 0x0038 (size: 0x50)

}; // Size: 0x88

struct FLandscapeLayerBrush
{
}; // Size: 0x1

struct FLandscapeLayerComponentData
{
    FHeightmapData HeightmapData;                                                     // 0x0000 (size: 0x8)
    FWeightmapData WeightmapData;                                                     // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FLandscapeLayerStruct
{
    class ULandscapeLayerInfoObject* LayerInfoObj;                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLandscapeProxyMaterialOverride
{
    FPerPlatformInt LODIndex;                                                         // 0x0000 (size: 0x4)
    class UMaterialInterface* Material;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLandscapeSplineConnection
{
    class ULandscapeSplineSegment* Segment;                                           // 0x0000 (size: 0x8)
    uint8 End;                                                                        // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FLandscapeSplineInterpPoint
{
    FVector Center;                                                                   // 0x0000 (size: 0xC)
    FVector Left;                                                                     // 0x000C (size: 0xC)
    FVector Right;                                                                    // 0x0018 (size: 0xC)
    FVector FalloffLeft;                                                              // 0x0024 (size: 0xC)
    FVector FalloffRight;                                                             // 0x0030 (size: 0xC)
    FVector LayerLeft;                                                                // 0x003C (size: 0xC)
    FVector LayerRight;                                                               // 0x0048 (size: 0xC)
    FVector LayerFalloffLeft;                                                         // 0x0054 (size: 0xC)
    FVector LayerFalloffRight;                                                        // 0x0060 (size: 0xC)
    float StartEndFalloff;                                                            // 0x006C (size: 0x4)

}; // Size: 0x70

struct FLandscapeSplineMeshEntry
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    TArray<class UMaterialInterface*> MaterialOverrides;                              // 0x0008 (size: 0x10)
    uint8 bCenterH;                                                                   // 0x0018 (size: 0x1)
    FVector2D CenterAdjust;                                                           // 0x001C (size: 0x8)
    uint8 bScaleToWidth;                                                              // 0x0024 (size: 0x1)
    FVector Scale;                                                                    // 0x0028 (size: 0xC)
    TEnumAsByte<LandscapeSplineMeshOrientation> Orientation;                          // 0x0034 (size: 0x1)
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;                                   // 0x0035 (size: 0x1)
    TEnumAsByte<ESplineMeshAxis::Type> UpAxis;                                        // 0x0036 (size: 0x1)

}; // Size: 0x38

struct FLandscapeSplineSegmentConnection
{
    class ULandscapeSplineControlPoint* ControlPoint;                                 // 0x0000 (size: 0x8)
    float TangentLen;                                                                 // 0x0008 (size: 0x4)
    FName SocketName;                                                                 // 0x000C (size: 0x8)

}; // Size: 0x18

struct FLayerBlendInput
{
    FName LayerName;                                                                  // 0x0000 (size: 0x8)
    TEnumAsByte<ELandscapeLayerBlendType> BlendType;                                  // 0x0008 (size: 0x1)
    FExpressionInput LayerInput;                                                      // 0x000C (size: 0xC)
    FExpressionInput HeightInput;                                                     // 0x0020 (size: 0xC)
    float PreviewWeight;                                                              // 0x0034 (size: 0x4)
    FVector ConstLayerInput;                                                          // 0x0038 (size: 0xC)
    float ConstHeightInput;                                                           // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FWeightmapData
{
    TArray<class UTexture2D*> Textures;                                               // 0x0000 (size: 0x10)
    TArray<FWeightmapLayerAllocationInfo> LayerAllocations;                           // 0x0010 (size: 0x10)
    TArray<class ULandscapeWeightmapUsage*> TextureUsages;                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FWeightmapLayerAllocationInfo
{
    class ULandscapeLayerInfoObject* LayerInfo;                                       // 0x0000 (size: 0x8)
    uint8 WeightmapTextureIndex;                                                      // 0x0008 (size: 0x1)
    uint8 WeightmapTextureChannel;                                                    // 0x0009 (size: 0x1)

}; // Size: 0x10

class AControlPointMeshActor : public AActor
{
    class UControlPointMeshComponent* ControlPointMeshComponent;                      // 0x0218 (size: 0x8)

}; // Size: 0x220

class ALandscape : public ALandscapeProxy
{
}; // Size: 0x510

class ALandscapeBlueprintBrushBase : public AActor
{

    void RequestLandscapeUpdate();
    class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName);
    void Initialize(const FTransform& InLandscapeTransform, const FIntPoint& InLandscapeSize, const FIntPoint& InLandscapeRenderTargetSize);
    void GetBlueprintRenderDependencies(TArray<class UTexture2D*>& OutStreamableAssets);
}; // Size: 0x218

class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
}; // Size: 0x268

class ALandscapeGizmoActor : public AActor
{
}; // Size: 0x218

class ALandscapeMeshProxyActor : public AActor
{
    class ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent;                  // 0x0218 (size: 0x8)

}; // Size: 0x220

class ALandscapeProxy : public AActor
{
    class ULandscapeSplinesComponent* SplineComponent;                                // 0x0218 (size: 0x8)
    FGuid LandscapeGuid;                                                              // 0x0220 (size: 0x10)
    FIntPoint LandscapeSectionOffset;                                                 // 0x0230 (size: 0x8)
    int32 MaxLODLevel;                                                                // 0x0238 (size: 0x4)
    float LODDistanceFactor;                                                          // 0x023C (size: 0x4)
    TEnumAsByte<ELandscapeLODFalloff::Type> LODFalloff;                               // 0x0240 (size: 0x1)
    float ComponentScreenSizeToUseSubSections;                                        // 0x0244 (size: 0x4)
    float LOD0ScreenSize;                                                             // 0x0248 (size: 0x4)
    float LOD0DistributionSetting;                                                    // 0x024C (size: 0x4)
    float LODDistributionSetting;                                                     // 0x0250 (size: 0x4)
    float TessellationComponentScreenSize;                                            // 0x0254 (size: 0x4)
    bool UseTessellationComponentScreenSizeFalloff;                                   // 0x0258 (size: 0x1)
    float TessellationComponentScreenSizeFalloff;                                     // 0x025C (size: 0x4)
    int32 OccluderGeometryLOD;                                                        // 0x0260 (size: 0x4)
    int32 StaticLightingLOD;                                                          // 0x0264 (size: 0x4)
    class UPhysicalMaterial* DefaultPhysMaterial;                                     // 0x0268 (size: 0x8)
    float StreamingDistanceMultiplier;                                                // 0x0270 (size: 0x4)
    class UMaterialInterface* LandscapeMaterial;                                      // 0x0278 (size: 0x8)
    class UMaterialInterface* LandscapeHoleMaterial;                                  // 0x0280 (size: 0x8)
    TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride;               // 0x0288 (size: 0x10)
    TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures;                     // 0x0298 (size: 0x10)
    int32 VirtualTextureNumLods;                                                      // 0x02A8 (size: 0x4)
    int32 VirtualTextureLodBias;                                                      // 0x02AC (size: 0x4)
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                  // 0x02B0 (size: 0x1)
    float NegativeZBoundsExtension;                                                   // 0x02B4 (size: 0x4)
    float PositiveZBoundsExtension;                                                   // 0x02B8 (size: 0x4)
    TArray<class ULandscapeComponent*> LandscapeComponents;                           // 0x02C0 (size: 0x10)
    TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;       // 0x02D0 (size: 0x10)
    TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;       // 0x02E0 (size: 0x10)
    bool bHasLandscapeGrass;                                                          // 0x0354 (size: 0x1)
    float StaticLightingResolution;                                                   // 0x0358 (size: 0x4)
    uint8 bCastStaticShadow;                                                          // 0x035C (size: 0x1)
    uint8 bCastShadowAsTwoSided;                                                      // 0x035C (size: 0x1)
    uint8 bCastFarShadow;                                                             // 0x035C (size: 0x1)
    uint8 bAffectDistanceFieldLighting;                                               // 0x0360 (size: 0x1)
    FLightingChannels LightingChannels;                                               // 0x0361 (size: 0x1)
    uint8 bUseMaterialPositionOffsetInStaticLighting;                                 // 0x0364 (size: 0x1)
    uint8 bRenderCustomDepth;                                                         // 0x0364 (size: 0x1)
    int32 CustomDepthStencilValue;                                                    // 0x0368 (size: 0x4)
    float LDMaxDrawDistance;                                                          // 0x036C (size: 0x4)
    FLightmassPrimitiveSettings LightmassSettings;                                    // 0x0370 (size: 0x18)
    int32 CollisionMipLevel;                                                          // 0x0388 (size: 0x4)
    int32 SimpleCollisionMipLevel;                                                    // 0x038C (size: 0x4)
    float CollisionThickness;                                                         // 0x0390 (size: 0x4)
    FBodyInstance BodyInstance;                                                       // 0x0398 (size: 0x110)
    uint8 bGenerateOverlapEvents;                                                     // 0x04A8 (size: 0x1)
    uint8 bBakeMaterialPositionOffsetIntoCollision;                                   // 0x04A8 (size: 0x1)
    int32 ComponentSizeQuads;                                                         // 0x04AC (size: 0x4)
    int32 SubsectionSizeQuads;                                                        // 0x04B0 (size: 0x4)
    int32 NumSubsections;                                                             // 0x04B4 (size: 0x4)
    uint8 bUsedForNavigation;                                                         // 0x04B8 (size: 0x1)
    bool bUseDynamicMaterialInstance;                                                 // 0x04BC (size: 0x1)
    ENavDataGatheringMode NavigationGeometryGatheringMode;                            // 0x04BD (size: 0x1)
    bool bUseLandscapeForCullingInvisibleHLODVertices;                                // 0x04BE (size: 0x1)
    bool bHasLayersContent;                                                           // 0x04BF (size: 0x1)
    TMap<class UTexture2D*, class ULandscapeWeightmapUsage*> WeightmapUsageMap;       // 0x04C0 (size: 0x50)

    void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);
    void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UTexture* Value);
    void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);
    void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
    void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
    void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
    void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
    void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
    void ChangeLODDistanceFactor(float InLODDistanceFactor);
    void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
}; // Size: 0x510

class ALandscapeStreamingProxy : public ALandscapeProxy
{
    TLazyObjectPtr<class ALandscape> LandscapeActor;                                  // 0x0510 (size: 0x1C)

}; // Size: 0x530

class UControlPointMeshComponent : public UStaticMeshComponent
{
    float VirtualTextureMainPassMaxDrawDistance;                                      // 0x0468 (size: 0x4)

}; // Size: 0x470

class ULandscapeComponent : public UPrimitiveComponent
{
    int32 SectionBaseX;                                                               // 0x03D8 (size: 0x4)
    int32 SectionBaseY;                                                               // 0x03DC (size: 0x4)
    int32 ComponentSizeQuads;                                                         // 0x03E0 (size: 0x4)
    int32 SubsectionSizeQuads;                                                        // 0x03E4 (size: 0x4)
    int32 NumSubsections;                                                             // 0x03E8 (size: 0x4)
    class UMaterialInterface* OverrideMaterial;                                       // 0x03F0 (size: 0x8)
    class UMaterialInterface* OverrideHoleMaterial;                                   // 0x03F8 (size: 0x8)
    TArray<FLandscapeComponentMaterialOverride> OverrideMaterials;                    // 0x0400 (size: 0x10)
    TArray<class UMaterialInstanceConstant*> MaterialInstances;                       // 0x0410 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> MaterialInstancesDynamic;                 // 0x0420 (size: 0x10)
    TArray<int8> LODIndexToMaterialIndex;                                             // 0x0430 (size: 0x10)
    TArray<int8> MaterialIndexToDisabledTessellationMaterial;                         // 0x0440 (size: 0x10)
    class UTexture2D* XYOffsetmapTexture;                                             // 0x0450 (size: 0x8)
    FVector4 WeightmapScaleBias;                                                      // 0x0460 (size: 0x10)
    float WeightmapSubsectionOffset;                                                  // 0x0470 (size: 0x4)
    FVector4 HeightmapScaleBias;                                                      // 0x0480 (size: 0x10)
    FBox CachedLocalBox;                                                              // 0x0490 (size: 0x1C)
    TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent; // 0x04AC (size: 0x1C)
    class UTexture2D* HeightmapTexture;                                               // 0x04C8 (size: 0x8)
    TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;                  // 0x04D0 (size: 0x10)
    TArray<class UTexture2D*> WeightmapTextures;                                      // 0x04E0 (size: 0x10)
    FGuid MapBuildDataId;                                                             // 0x04F0 (size: 0x10)
    TArray<FGuid> IrrelevantLights;                                                   // 0x0500 (size: 0x10)
    int32 CollisionMipLevel;                                                          // 0x0510 (size: 0x4)
    int32 SimpleCollisionMipLevel;                                                    // 0x0514 (size: 0x4)
    float NegativeZBoundsExtension;                                                   // 0x0518 (size: 0x4)
    float PositiveZBoundsExtension;                                                   // 0x051C (size: 0x4)
    float StaticLightingResolution;                                                   // 0x0520 (size: 0x4)
    int32 ForcedLOD;                                                                  // 0x0524 (size: 0x4)
    int32 LODBias;                                                                    // 0x0528 (size: 0x4)
    FGuid StateId;                                                                    // 0x052C (size: 0x10)
    FGuid BakedTextureMaterialGuid;                                                   // 0x053C (size: 0x10)
    class UTexture2D* GIBakedBaseColorTexture;                                        // 0x0550 (size: 0x8)
    uint8 MobileBlendableLayerMask;                                                   // 0x0558 (size: 0x1)
    class UMaterialInterface* MobileMaterialInterface;                                // 0x0560 (size: 0x8)
    TArray<class UMaterialInterface*> MobileMaterialInterfaces;                       // 0x0568 (size: 0x10)
    TArray<class UTexture2D*> MobileWeightmapTextures;                                // 0x0578 (size: 0x10)

    class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex);
    float EditorGetPaintLayerWeightByNameAtLocation(const FVector& InLocation, const FName InPaintLayerName);
    float EditorGetPaintLayerWeightAtLocation(const FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);
}; // Size: 0x5D0

class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
}; // Size: 0x3E0

class ULandscapeGrassType : public UObject
{
    TArray<FGrassVariety> GrassVarieties;                                             // 0x0028 (size: 0x10)
    uint8 bEnableDensityScaling;                                                      // 0x0038 (size: 0x1)
    class UStaticMesh* GrassMesh;                                                     // 0x0040 (size: 0x8)
    float GrassDensity;                                                               // 0x0048 (size: 0x4)
    float PlacementJitter;                                                            // 0x004C (size: 0x4)
    int32 StartCullDistance;                                                          // 0x0050 (size: 0x4)
    int32 EndCullDistance;                                                            // 0x0054 (size: 0x4)
    bool RandomRotation;                                                              // 0x0058 (size: 0x1)
    bool AlignToSurface;                                                              // 0x0059 (size: 0x1)

}; // Size: 0x60

class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
    TArray<class ULandscapeLayerInfoObject*> ComponentLayerInfos;                     // 0x03D8 (size: 0x10)
    int32 SectionBaseX;                                                               // 0x03E8 (size: 0x4)
    int32 SectionBaseY;                                                               // 0x03EC (size: 0x4)
    int32 CollisionSizeQuads;                                                         // 0x03F0 (size: 0x4)
    float CollisionScale;                                                             // 0x03F4 (size: 0x4)
    int32 SimpleCollisionSizeQuads;                                                   // 0x03F8 (size: 0x4)
    TArray<uint8> CollisionQuadFlags;                                                 // 0x0400 (size: 0x10)
    FGuid HeightfieldGuid;                                                            // 0x0410 (size: 0x10)
    FBox CachedLocalBox;                                                              // 0x0420 (size: 0x1C)
    TLazyObjectPtr<class ULandscapeComponent> RenderComponent;                        // 0x043C (size: 0x1C)
    TArray<class UPhysicalMaterial*> CookedPhysicalMaterials;                         // 0x0468 (size: 0x10)

    class ULandscapeComponent* GetRenderComponent();
}; // Size: 0x4C0

class ULandscapeInfo : public UObject
{
    TLazyObjectPtr<class ALandscape> LandscapeActor;                                  // 0x0028 (size: 0x1C)
    FGuid LandscapeGuid;                                                              // 0x0044 (size: 0x10)
    int32 ComponentSizeQuads;                                                         // 0x0054 (size: 0x4)
    int32 SubsectionSizeQuads;                                                        // 0x0058 (size: 0x4)
    int32 ComponentNumSubsections;                                                    // 0x005C (size: 0x4)
    FVector DrawScale;                                                                // 0x0060 (size: 0xC)
    TArray<class ALandscapeStreamingProxy*> Proxies;                                  // 0x0110 (size: 0x10)

}; // Size: 0x210

class ULandscapeInfoMap : public UObject
{
}; // Size: 0x80

class ULandscapeLayerInfoObject : public UObject
{
    FName LayerName;                                                                  // 0x0028 (size: 0x8)
    class UPhysicalMaterial* PhysMaterial;                                            // 0x0030 (size: 0x8)
    float Hardness;                                                                   // 0x0038 (size: 0x4)
    FLinearColor LayerUsageDebugColor;                                                // 0x003C (size: 0x10)

}; // Size: 0x50

class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
    uint8 bIsLayerThumbnail;                                                          // 0x01D8 (size: 0x1)
    uint8 bDisableTessellation;                                                       // 0x01D8 (size: 0x1)
    uint8 bMobile;                                                                    // 0x01D8 (size: 0x1)
    uint8 bEditorToolUsage;                                                           // 0x01D8 (size: 0x1)

}; // Size: 0x1E0

class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
    FGuid MeshGuid;                                                                   // 0x04B8 (size: 0x10)

}; // Size: 0x4D0

class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
    FGuid LandscapeGuid;                                                              // 0x0468 (size: 0x10)
    TArray<FIntPoint> ProxyComponentBases;                                            // 0x0478 (size: 0x10)
    int8 ProxyLOD;                                                                    // 0x0488 (size: 0x1)

}; // Size: 0x490

class ULandscapeSettings : public UDeveloperSettings
{
    int32 MaxNumberOfLayers;                                                          // 0x0038 (size: 0x4)

}; // Size: 0x40

class ULandscapeSplineControlPoint : public UObject
{
    FVector Location;                                                                 // 0x0028 (size: 0xC)
    FRotator Rotation;                                                                // 0x0034 (size: 0xC)
    float Width;                                                                      // 0x0040 (size: 0x4)
    float LayerWidthRatio;                                                            // 0x0044 (size: 0x4)
    float SideFalloff;                                                                // 0x0048 (size: 0x4)
    float LeftSideFalloffFactor;                                                      // 0x004C (size: 0x4)
    float RightSideFalloffFactor;                                                     // 0x0050 (size: 0x4)
    float LeftSideLayerFalloffFactor;                                                 // 0x0054 (size: 0x4)
    float RightSideLayerFalloffFactor;                                                // 0x0058 (size: 0x4)
    float EndFalloff;                                                                 // 0x005C (size: 0x4)
    TArray<FLandscapeSplineConnection> ConnectedSegments;                             // 0x0060 (size: 0x10)
    TArray<FLandscapeSplineInterpPoint> Points;                                       // 0x0070 (size: 0x10)
    FBox Bounds;                                                                      // 0x0080 (size: 0x1C)
    class UControlPointMeshComponent* LocalMeshComponent;                             // 0x00A0 (size: 0x8)

}; // Size: 0xA8

class ULandscapeSplineSegment : public UObject
{
    FLandscapeSplineSegmentConnection Connections;                                    // 0x0028 (size: 0x30)
    FInterpCurveVector SplineInfo;                                                    // 0x0058 (size: 0x18)
    TArray<FLandscapeSplineInterpPoint> Points;                                       // 0x0070 (size: 0x10)
    FBox Bounds;                                                                      // 0x0080 (size: 0x1C)
    TArray<class USplineMeshComponent*> LocalMeshComponents;                          // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class ULandscapeSplinesComponent : public UPrimitiveComponent
{
    TArray<class ULandscapeSplineControlPoint*> ControlPoints;                        // 0x03D8 (size: 0x10)
    TArray<class ULandscapeSplineSegment*> Segments;                                  // 0x03E8 (size: 0x10)
    TArray<class UMeshComponent*> CookedForeignMeshComponents;                        // 0x03F8 (size: 0x10)

    TArray<class USplineMeshComponent*> GetSplineMeshComponents();
}; // Size: 0x410

class ULandscapeWeightmapUsage : public UObject
{
    class ULandscapeComponent* ChannelUsage;                                          // 0x0028 (size: 0x20)
    FGuid LayerGuid;                                                                  // 0x0048 (size: 0x10)

}; // Size: 0x58

class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
    TArray<FGrassInput> GrassTypes;                                                   // 0x0040 (size: 0x10)

}; // Size: 0x50

class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
    TArray<FLayerBlendInput> Layers;                                                  // 0x0040 (size: 0x10)
    FGuid ExpressionGUID;                                                             // 0x0050 (size: 0x10)

}; // Size: 0x60

class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
    TEnumAsByte<ETerrainCoordMappingType> MappingType;                                // 0x0040 (size: 0x1)
    TEnumAsByte<ELandscapeCustomizedCoordType> CustomUVType;                          // 0x0041 (size: 0x1)
    float MappingScale;                                                               // 0x0044 (size: 0x4)
    float MappingRotation;                                                            // 0x0048 (size: 0x4)
    float MappingPanU;                                                                // 0x004C (size: 0x4)
    float MappingPanV;                                                                // 0x0050 (size: 0x4)

}; // Size: 0x58

class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
    FName ParameterName;                                                              // 0x0040 (size: 0x8)
    float PreviewWeight;                                                              // 0x0048 (size: 0x4)
    FGuid ExpressionGUID;                                                             // 0x004C (size: 0x10)

}; // Size: 0x60

class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
    FExpressionInput LayerUsed;                                                       // 0x0040 (size: 0xC)
    FExpressionInput LayerNotUsed;                                                    // 0x0054 (size: 0xC)
    FName ParameterName;                                                              // 0x0068 (size: 0x8)
    uint8 PreviewUsed;                                                                // 0x0070 (size: 0x1)
    FGuid ExpressionGUID;                                                             // 0x0074 (size: 0x10)

}; // Size: 0x88

class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
    FExpressionInput Base;                                                            // 0x0040 (size: 0xC)
    FExpressionInput Layer;                                                           // 0x0054 (size: 0xC)
    FName ParameterName;                                                              // 0x0068 (size: 0x8)
    float PreviewWeight;                                                              // 0x0070 (size: 0x4)
    FVector ConstBase;                                                                // 0x0074 (size: 0xC)
    FGuid ExpressionGUID;                                                             // 0x0080 (size: 0x10)

}; // Size: 0x90

class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
    FGuid ExpressionGUID;                                                             // 0x0040 (size: 0x10)

}; // Size: 0x50

#endif
