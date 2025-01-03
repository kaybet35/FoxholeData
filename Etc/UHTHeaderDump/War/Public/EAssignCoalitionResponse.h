#pragma once
#include "CoreMinimal.h"
#include "EAssignCoalitionResponse.generated.h"

UENUM(BlueprintType)
enum class EAssignCoalitionResponse : uint8 {
    Success,
    Error,
    Locked,
    Occupied,
    OtherFaction,
    NotAuthorized,
    MissingMembers,
};

