#pragma once
#include "CoreMinimal.h"
#include "EFacilityRefineryItemsType.generated.h"

UENUM(BlueprintType)
enum class EFacilityRefineryItemsType : uint8 {
    Input,
    CrateInput,
    FuelInput,
    Output,
    CrateOutput,
    FuelOutput,
};

