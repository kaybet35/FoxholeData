#pragma once
#include "CoreMinimal.h"
#include "EArmourType.generated.h"

UENUM(BlueprintType)
enum class EArmourType : uint8 {
    None,
    NoArmour,
    LightVehicle,
    Tier1Tank,
    Tier2Tank,
    Tier0Structure,
    Tier1Structure,
    Tier2Structure,
    Tier2BStructure,
    Tier3Structure,
    Tier3BStructure,
    HeavyBuildSite,
    Tier1GarrisonHouse,
    Tier2GarrisonHouse,
    Tier3GarrisonHouse,
    Trench,
    Tier1LargeShip,
    Tier1Ship,
    WorldStructureHusk,
    Ice,
    MAX,
};

