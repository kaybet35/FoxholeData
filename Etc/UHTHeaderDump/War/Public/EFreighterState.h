#pragma once
#include "CoreMinimal.h"
#include "EFreighterState.generated.h"

UENUM(BlueprintType)
enum class EFreighterState : uint8 {
    Idle,
    Deploying,
    Deployed,
    Undeploying,
};

