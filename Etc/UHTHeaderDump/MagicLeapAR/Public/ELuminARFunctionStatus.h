#pragma once
#include "CoreMinimal.h"
#include "ELuminARFunctionStatus.generated.h"

UENUM(BlueprintType)
enum class ELuminARFunctionStatus : uint8 {
    Success,
    Fatal,
    SessionPaused,
    NotTracking,
    ResourceExhausted,
    NotAvailable,
    InvalidType,
    Unknown,
};

