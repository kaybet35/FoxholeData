#pragma once
#include "CoreMinimal.h"
#include "FortTurret.h"
#include "ConcreteFortTurret.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFortTurret : public AFortTurret {
    GENERATED_BODY()
public:
    AConcreteFortTurret(const FObjectInitializer& ObjectInitializer);

};

