#pragma once
#include "CoreMinimal.h"
#include "ERestrictedState.generated.h"

UENUM(BlueprintType)
enum class ERestrictedState : uint8 {
    None,
    WeaponUsage,
    Build,
    Chat = 4,
    Voice = 8,
    Intel = 16,
    Driving = 32,
};

