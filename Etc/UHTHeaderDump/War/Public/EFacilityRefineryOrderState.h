#pragma once
#include "CoreMinimal.h"
#include "EFacilityRefineryOrderState.generated.h"

UENUM(BlueprintType)
enum class EFacilityRefineryOrderState : uint8 {
    None,
    Pending,
    Paused,
    Active,
    Completed,
};

