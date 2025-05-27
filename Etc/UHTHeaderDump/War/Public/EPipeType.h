#pragma once
#include "CoreMinimal.h"
#include "EPipeType.generated.h"

UENUM(BlueprintType)
enum class EPipeType : uint8 {
    None,
    Input,
    Output,
};

