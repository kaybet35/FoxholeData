#pragma once
#include "CoreMinimal.h"
#include "EFloorVisibility.generated.h"

UENUM(BlueprintType)
enum class EFloorVisibility : uint8 {
    None,
    Floor1,
    Floor2,
    All,
};

