#pragma once
#include "CoreMinimal.h"
#include "EActivityBonusState.generated.h"

UENUM(BlueprintType)
enum class EActivityBonusState : uint8 {
    None,
    Inactive,
    Active,
};

