#pragma once
#include "CoreMinimal.h"
#include "ELuminARLineTraceChannel.generated.h"

UENUM(BlueprintType)
enum class ELuminARLineTraceChannel : uint8 {
    None,
    FeaturePoint,
    InfinitePlane,
    PlaneUsingExtent = 4,
    PlaneUsingBoundaryPolygon = 8,
    FeaturePointWithSurfaceNormal = 16,
};

