#pragma once
#include "CoreMinimal.h"
#include "EUnstuckMessage.generated.h"

UENUM(BlueprintType)
enum class EUnstuckMessage : uint8 {
    UnstuckZeroCount,
    UnstuckCount,
    UnstuckExecute,
    UnstuckFail,
    UnstuckFailAnchor,
    UnstuckFailDeployed,
    UnstuckFailDisabled,
    UnstuckFailEnemy,
    UnstuckFailHitched,
    UnstuckFailNotOnFoot,
    UnstuckFailMovement,
    UnstuckFailUnsupported,
    UnstuckFailNotInDriverSeat,
};

