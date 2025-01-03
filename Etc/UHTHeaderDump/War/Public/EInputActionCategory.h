#pragma once
#include "CoreMinimal.h"
#include "EInputActionCategory.generated.h"

UENUM()
enum class EInputActionCategory : int32 {
    None,
    Movement,
    Vehicle,
    General,
    Camera,
    Communication,
    Equipment,
    Miscellaneous,
    Emote,
    Count,
};

