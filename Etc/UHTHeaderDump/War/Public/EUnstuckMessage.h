#pragma once
#include "CoreMinimal.h"
#include "EUnstuckMessage.generated.h"

UENUM(BlueprintType)
enum class EUnstuckMessage : uint8 {
    ZeroCount,
    Count,
    Execute,
    Fail,
    FailAnchor,
    FailDeployed,
    FailDisabled,
    FailEnemy,
    FailHitched,
    FailNotOnFoot,
    FailMovement,
    FailUnsupported,
    FailNotInDriverSeat,
    FailUnstableBase,
};

