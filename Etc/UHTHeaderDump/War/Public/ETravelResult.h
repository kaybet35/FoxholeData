#pragma once
#include "CoreMinimal.h"
#include "ETravelResult.generated.h"

UENUM(BlueprintType)
enum class ETravelResult : uint8 {
    Success = 1,
    FailureInvalidRequest,
    FailureServerError,
    FailureProfileSave,
    FailureProfileLoad,
    FailureServerFull,
    FailureNoLocation,
    FailureServerUnavailable,
    FailureTimeout,
    FailureEnemyPresent,
    FailureTooManyRequests,
    FailureNestedCargo,
    FailureDead,
    FailureWarServiceUnavailable,
    FailureTooManyRailPassengers,
    FailureNoRailConnection,
    FailureTooManyLargeShipPassengers,
    FailureStockpileInUse,
    FailureNoLocationIce,
    FailureNoLocationTooShallow,
    Count,
};

