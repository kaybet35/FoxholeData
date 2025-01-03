#pragma once
#include "CoreMinimal.h"
#include "EWaterSourceType.generated.h"

UENUM(BlueprintType)
enum class EWaterSourceType : uint8 {
    None,
    InfiniteWater,
    Floodable,
    StructurePuddle,
    Puddle,
};

