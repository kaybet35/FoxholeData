#pragma once
#include "CoreMinimal.h"
#include "EVehicleDeploymentState.generated.h"

UENUM(BlueprintType)
enum class EVehicleDeploymentState : uint8 {
    Undeployed,
    Deploying,
    Deployed,
    Undeploying,
};

