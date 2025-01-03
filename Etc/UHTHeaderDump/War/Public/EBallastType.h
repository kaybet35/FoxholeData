#pragma once
#include "CoreMinimal.h"
#include "EBallastType.generated.h"

UENUM(BlueprintType)
enum class EBallastType : uint8 {
    Main,
    Negative,
    Safety,
};

