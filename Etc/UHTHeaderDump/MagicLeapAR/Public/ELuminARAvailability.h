#pragma once
#include "CoreMinimal.h"
#include "ELuminARAvailability.generated.h"

UENUM(BlueprintType)
enum class ELuminARAvailability : uint8 {
    UnknownError,
    SupportedInstalled = 200,
};

