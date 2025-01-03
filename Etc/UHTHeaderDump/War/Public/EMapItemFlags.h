#pragma once
#include "CoreMinimal.h"
#include "EMapItemFlags.generated.h"

UENUM(BlueprintType)
enum class EMapItemFlags : uint8 {
    IsTownBase = 1,
    IsHomeTown,
    IsBuildSite = 4,
    IsDetectionAreaHidden = 8,
    IsScorched = 16,
    IsTownClaimed = 32,
};

