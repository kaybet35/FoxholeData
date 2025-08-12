#pragma once
#include "CoreMinimal.h"
#include "EIntervalSequence.generated.h"

UENUM(BlueprintType)
enum class EIntervalSequence : uint8 {
    Random,
    Sequential,
};

