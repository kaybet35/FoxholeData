#pragma once
#include "CoreMinimal.h"
#include "EDynamicState.generated.h"

UENUM(BlueprintType)
enum class EDynamicState : uint8 {
    Closed,
    Opening,
    Open,
    Closing,
};

