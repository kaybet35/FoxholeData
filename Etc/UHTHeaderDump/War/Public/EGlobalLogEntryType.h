#pragma once
#include "CoreMinimal.h"
#include "EGlobalLogEntryType.generated.h"

UENUM(BlueprintType)
enum class EGlobalLogEntryType : uint8 {
    None,
    VehiclesTransferred,
    MAX,
};

