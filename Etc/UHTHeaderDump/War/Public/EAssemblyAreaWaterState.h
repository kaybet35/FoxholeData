#pragma once
#include "CoreMinimal.h"
#include "EAssemblyAreaWaterState.generated.h"

UENUM(BlueprintType)
enum class EAssemblyAreaWaterState : uint8 {
    Raised,
    Raising,
    Lowered,
    Lowering,
};

