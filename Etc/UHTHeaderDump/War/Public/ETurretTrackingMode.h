#pragma once
#include "CoreMinimal.h"
#include "ETurretTrackingMode.generated.h"

UENUM(BlueprintType)
enum class ETurretTrackingMode : uint8 {
    Instant,
    GunnerSupportTracking,
};

