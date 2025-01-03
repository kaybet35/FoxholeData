#pragma once
#include "CoreMinimal.h"
#include "EShipFXType.generated.h"

UENUM(BlueprintType)
enum class EShipFXType : uint8 {
    IdleLoop,
    WaterLapping,
    Exhaust,
    SideWaves,
    Wake,
    WaveBreak,
    DebrisBubbles,
    PropellerBubbles,
    BallastBlowMain,
    BallastBlowSafety,
    BallastBlowNegative,
    BallastBlowAny,
    BallastFloodMain,
    BallastFloodSafety,
    BallastFloodNegative,
    BatteryCharging,
    UnderwaterAmbience,
    Num,
};

