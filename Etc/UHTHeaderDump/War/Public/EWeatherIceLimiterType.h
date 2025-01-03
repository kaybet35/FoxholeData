#pragma once
#include "CoreMinimal.h"
#include "EWeatherIceLimiterType.generated.h"

UENUM(BlueprintType)
enum class EWeatherIceLimiterType : uint8 {
    Include,
    Exclude,
};

