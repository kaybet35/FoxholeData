#pragma once
#include "CoreMinimal.h"
#include "ESeatDirection.generated.h"

UENUM(BlueprintType)
enum class ESeatDirection : uint8 {
    None,
    Center,
    Front,
    Left,
    Rear,
    Right,
    Bow,
    Midships,
    Stern,
    Port,
    PortBow,
    PortBeam,
    PortQuarter,
    Starboard,
    StarboardBow,
    StarboardBeam,
    StarboardQuarter,
    MAX,
};

