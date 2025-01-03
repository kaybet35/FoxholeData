#pragma once
#include "CoreMinimal.h"
#include "ESplineWaterPlacementRequirement.generated.h"

UENUM(BlueprintType)
enum class ESplineWaterPlacementRequirement : uint8 {
    None,
    NoPlacementAboveWater,
    RequireWaterAtEnd,
};

