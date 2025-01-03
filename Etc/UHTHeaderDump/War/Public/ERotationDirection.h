#pragma once
#include "CoreMinimal.h"
#include "ERotationDirection.generated.h"

UENUM(BlueprintType)
enum class ERotationDirection : uint8 {
    None,
    Clockwise,
    CounterClockwise,
};

