#pragma once
#include "CoreMinimal.h"
#include "EWarOpsAlertMessage.generated.h"

UENUM(BlueprintType)
enum class EWarOpsAlertMessage : uint8 {
    Invalid,
    DeployUpdate,
    UpcomingServerPatch,
    DeployingServerPatch,
    UpcomingFoxholeServicesPatch,
    DeployingFoxholeServicesPatch,
    DevBranchUpdateWorldSave,
    DevBranchUpdateWorldReset,
    RegionServerRestart,
    UpcomingForcedServerPatch,
    DeployingForcedServerPatch,
};

