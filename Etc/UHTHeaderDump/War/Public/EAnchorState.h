#pragma once
#include "CoreMinimal.h"
#include "EAnchorState.generated.h"

UENUM(BlueprintType)
enum class EAnchorState : uint8 {
    Raised,
    Dropping,
    Dropped,
    Raising,
};

