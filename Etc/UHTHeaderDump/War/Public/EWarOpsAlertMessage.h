#pragma once
#include "CoreMinimal.h"
#include "EWarOpsAlertMessage.generated.h"

UENUM(BlueprintType)
enum class EWarOpsAlertMessage : uint8 {
    DeployUpdate,
    UpcomingServerPatch,
    DeployingServerPatch,
    UpcomingFoxholeServicesPatch,
    DeployingFoxholeServicesPatch,
};

