#pragma once
#include "CoreMinimal.h"
#include "ERampState.generated.h"

UENUM(BlueprintType)
enum class ERampState : uint8 {
    Raised,
    Lowering,
    Lowered,
    Raising,
};

