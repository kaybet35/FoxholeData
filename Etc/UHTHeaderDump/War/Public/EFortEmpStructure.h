#pragma once
#include "CoreMinimal.h"
#include "EFortEmpStructure.generated.h"

UENUM(BlueprintType)
enum class EFortEmpStructure : uint8 {
    StormCannon,
    WeatherStation,
    IntelCenter,
    FortGarrisonStation,
    NumStructures,
    None = 255,
};

