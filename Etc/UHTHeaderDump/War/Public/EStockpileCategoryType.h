#pragma once
#include "CoreMinimal.h"
#include "EStockpileCategoryType.generated.h"

UENUM(BlueprintType)
enum class EStockpileCategoryType : uint8 {
    Items,
    Vehicles,
    Structures,
    MAX,
};

