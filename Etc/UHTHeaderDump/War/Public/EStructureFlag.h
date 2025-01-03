#pragma once
#include "CoreMinimal.h"
#include "EStructureFlag.generated.h"

UENUM(BlueprintType)
enum class EStructureFlag : uint8 {
    None,
    Invulnerable,
    VictoryTown,
    IndustrialTown = 4,
    ColonialLiberated = 8,
    WardenLiberated = 16,
    Port = 32,
    LastFlag = 128,
};

