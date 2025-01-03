#pragma once
#include "CoreMinimal.h"
#include "ERocketLaunchResponse.generated.h"

UENUM(BlueprintType)
enum class ERocketLaunchResponse : uint8 {
    Success,
    Error,
    Cancelled,
    DestroyedIntelCenter,
    DestroyedRocket,
    DestroyedRocketSite,
    MustAvoidFriendly,
    MustHitEnemy,
    MustHitLand,
    TargetOutsideRange,
    TimedOut,
};

