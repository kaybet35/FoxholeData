#pragma once
#include "CoreMinimal.h"
#include "EVehicleMovementProfileType.generated.h"

UENUM(BlueprintType)
enum class EVehicleMovementProfileType : uint8 {
    Default,
    Truck,
    ScoutVehicle,
    Halftrack,
    FulltrackLight,
    FulltrackLightTanks,
    Fulltrack,
    FulltrackMediumTanks,
    Motorcycle,
    Bicycle,
    FieldWalked,
    LightTruck,
    BattleTank,
    ArmoredCar,
    ArmoredCarLarge,
    ConstructionTracked,
    Mech,
    SuperTankW,
    Trailer,
    FieldWalkedLarge,
    Tractor,
    HeavyTruck,
    FulltrackHeavyTruck,
    Count,
};

