#pragma once
#include "CoreMinimal.h"
#include "EWeatherStationState.generated.h"

UENUM(BlueprintType)
enum class EWeatherStationState : uint8 {
    Idle,
    Active,
};

