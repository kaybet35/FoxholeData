#pragma once
#include "CoreMinimal.h"
#include "DeployedTripodAnimInstance.h"
#include "ModularMountAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UModularMountAnimInstance : public UDeployedTripodAnimInstance {
    GENERATED_BODY()
public:
    UModularMountAnimInstance();

};

