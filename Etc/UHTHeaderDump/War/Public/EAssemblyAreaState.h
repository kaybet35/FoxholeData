#pragma once
#include "CoreMinimal.h"
#include "EAssemblyAreaState.generated.h"

UENUM(BlueprintType)
enum class EAssemblyAreaState : uint8 {
    Closed,
    Closing,
    Open,
    Opening,
};

