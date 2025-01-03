#pragma once
#include "CoreMinimal.h"
#include "EFireIntensity.generated.h"

UENUM(BlueprintType)
enum class EFireIntensity : uint8 {
    None,
    Low,
    Medium,
    High,
    Blazing,
    Blazing2,
    MAX,
};

