#pragma once
#include "CoreMinimal.h"
#include "EHospitalResponse.generated.h"

UENUM(BlueprintType)
enum class EHospitalResponse : uint8 {
    Success,
    Error,
    AtCapacity,
    NoCriticalSoldiersInInventory,
    NoRecoveringPatients,
    NoRecoveredPatients,
};

