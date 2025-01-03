#pragma once
#include "CoreMinimal.h"
#include "EBuildTool.generated.h"

UENUM(BlueprintType)
enum class EBuildTool : uint8 {
    None,
    Hammer,
    Shovel,
    Material = 4,
    Vehicle = 8,
    AdvancedVehicle = 16,
};

