#pragma once
#include "CoreMinimal.h"
#include "EWarCollisionIgnoreFlags.generated.h"

UENUM(BlueprintType)
enum class EWarCollisionIgnoreFlags : uint8 {
    BridgeWaterAccess = 1,
    MovementSweep,
    DefenseMods = 4,
    RailwayTrack = 8,
    PlayerCharacter = 16,
    ShipSweep = 32,
};

