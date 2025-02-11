#pragma once
#include "CoreMinimal.h"
#include "EValveRotationDirection.generated.h"

UENUM()
enum class EValveRotationDirection {
    Decreasing = -1,
    None = 0,
    Increasing,
};

