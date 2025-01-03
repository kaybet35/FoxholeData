#pragma once
#include "CoreMinimal.h"
#include "ERamDamageFlags.generated.h"

UENUM(BlueprintType)
enum class ERamDamageFlags : uint8 {
    Light = 1,
    Medium,
    Destructible = 4,
    DrivenOver = 8,
    DrivenOverTracked = 16,
    WaterVehicles = 32,
    RailVehicles = 64,
};

