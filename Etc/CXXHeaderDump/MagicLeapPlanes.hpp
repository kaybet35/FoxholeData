#ifndef UE4SS_SDK_MagicLeapPlanes_HPP
#define UE4SS_SDK_MagicLeapPlanes_HPP

#include "MagicLeapPlanes_enums.hpp"

struct FMagicLeapPlaneBoundaries
{
    FGuid ID;                                                                         // 0x0000 (size: 0x10)
    TArray<FMagicLeapPlaneBoundary> Boundaries;                                       // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMagicLeapPlaneBoundary
{
    FMagicLeapPolygon Polygon;                                                        // 0x0000 (size: 0x10)
    TArray<FMagicLeapPolygon> Holes;                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMagicLeapPlaneResult
{
    FVector PlanePosition;                                                            // 0x0000 (size: 0xC)
    FRotator PlaneOrientation;                                                        // 0x000C (size: 0xC)
    FRotator ContentOrientation;                                                      // 0x0018 (size: 0xC)
    FVector2D PlaneDimensions;                                                        // 0x0024 (size: 0x8)
    TArray<EMagicLeapPlaneQueryFlags> PlaneFlags;                                     // 0x0030 (size: 0x10)
    FGuid ID;                                                                         // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FMagicLeapPlanesQuery
{
    TArray<EMagicLeapPlaneQueryFlags> Flags;                                          // 0x0000 (size: 0x10)
    class UBoxComponent* SearchVolume;                                                // 0x0010 (size: 0x8)
    int32 MaxResults;                                                                 // 0x0018 (size: 0x4)
    float MinHoleLength;                                                              // 0x001C (size: 0x4)
    float MinPlaneArea;                                                               // 0x0020 (size: 0x4)
    FVector SearchVolumePosition;                                                     // 0x0024 (size: 0xC)
    FQuat SearchVolumeOrientation;                                                    // 0x0030 (size: 0x10)
    FVector SearchVolumeExtents;                                                      // 0x0040 (size: 0xC)

}; // Size: 0x50

struct FMagicLeapPolygon
{
    TArray<FVector> Vertices;                                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

class UMagicLeapPlanesComponent : public USceneComponent
{
    TArray<EMagicLeapPlaneQueryFlags> QueryFlags;                                     // 0x01F0 (size: 0x10)
    class UBoxComponent* SearchVolume;                                                // 0x0200 (size: 0x8)
    int32 MaxResults;                                                                 // 0x0208 (size: 0x4)
    float MinHolePerimeter;                                                           // 0x020C (size: 0x4)
    float MinPlaneArea;                                                               // 0x0210 (size: 0x4)
    FMagicLeapPlanesComponentOnPlanesQueryResult OnPlanesQueryResult;                 // 0x0218 (size: 0x10)
    void MagicLeapPlanesResultDelegateMulti(const bool bSuccess, const TArray<FMagicLeapPlaneResult>& Planes, const TArray<FMagicLeapPlaneBoundaries>& Polygons);

    bool RequestPlanesAsync();
}; // Size: 0x230

class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ReorderPlaneFlags(const TArray<EMagicLeapPlaneQueryFlags>& InPriority, const TArray<EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>& OutReorderedFlags);
    void RemoveFlagsNotInQuery(const TArray<EMagicLeapPlaneQueryFlags>& InQueryFlags, const TArray<EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<EMagicLeapPlaneQueryFlags>& OutFlags);
    bool PlanesQueryBeginAsync(const FMagicLeapPlanesQuery& Query, const FPlanesQueryBeginAsyncResultDelegate& ResultDelegate);
    bool IsTrackerValid();
    FTransform GetContentScale(const class AActor* ContentActor, const FMagicLeapPlaneResult& PlaneResult);
    bool DestroyTracker();
    bool CreateTracker();
}; // Size: 0x28

#endif
