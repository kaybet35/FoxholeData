#pragma once
#include "CoreMinimal.h"
#include "ELeakOffsetRangeSide.generated.h"

UENUM(BlueprintType)
enum class ELeakOffsetRangeSide : uint8 {
    Both,
    Left,
    Right,
};

