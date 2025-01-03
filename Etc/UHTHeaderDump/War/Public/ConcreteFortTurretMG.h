#pragma once
#include "CoreMinimal.h"
#include "FortTurretMG.h"
#include "ConcreteFortTurretMG.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AConcreteFortTurretMG : public AFortTurretMG {
    GENERATED_BODY()
public:
    AConcreteFortTurretMG(const FObjectInitializer& ObjectInitializer);

};

