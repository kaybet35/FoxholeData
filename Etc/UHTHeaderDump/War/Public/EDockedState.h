#pragma once
#include "CoreMinimal.h"
#include "EDockedState.generated.h"

UENUM(BlueprintType)
enum class EDockedState : uint8 {
    Docked,
    Docking,
    Undocked,
    Undocking,
};

