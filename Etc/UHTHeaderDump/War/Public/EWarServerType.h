#pragma once
#include "CoreMinimal.h"
#include "EWarServerType.generated.h"

UENUM()
enum class EWarServerType : int32 {
    Skirmish,
    WorldConquest,
    Event = 3,
    Training,
    HomeRegionC,
    HomeRegionW,
};

