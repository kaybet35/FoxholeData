#pragma once
#include "CoreMinimal.h"
#include "EVehicleProfileType.generated.h"

UENUM(BlueprintType)
enum class EVehicleProfileType : uint8 {
    Default,
    WheeledTransport,
    OpenRoofWheeledTransport,
    WheeledArmoured,
    TrackedTransport,
    Tank,
    SuperTank,
    FieldWeapon,
    BeachableShip,
    Ship,
    CombatShip,
    Construction,
    Bicycle,
    Rail,
    RailCar,
    Trailer,
    MAX,
};

