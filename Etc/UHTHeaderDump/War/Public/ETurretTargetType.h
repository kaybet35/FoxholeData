#pragma once
#include "CoreMinimal.h"
#include "ETurretTargetType.generated.h"

UENUM(BlueprintType)
enum class ETurretTargetType : uint8 {
    None,
    Players,
    AllVehicles,
    WaterVehicles = 4,
    BuildSites = 8,
    EmplacedWeapons = 16,
    LargeShips = 32,
    All = 63,
};

