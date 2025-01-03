#pragma once
#include "CoreMinimal.h"
#include "EDamageSource.generated.h"

UENUM(BlueprintType)
enum class EDamageSource : uint8 {
    Weapon,
    Vehicle,
    StructureWeapon,
    VehicleWeapon,
    MAX,
};

