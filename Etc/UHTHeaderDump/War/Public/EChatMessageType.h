#pragma once
#include "CoreMinimal.h"
#include "EChatMessageType.generated.h"

UENUM()
enum class EChatMessageType : uint64 {
    RegionTeam = 1,
    WorldTeam,
    Logistics = 4,
    Intel = 8,
    LocalAll = 16,
    Squad = 32,
    Regiment = 64,
    Whisper = 128,
    Operation = 256,
    Zombie = 512,
    Admin = 1024,
};

