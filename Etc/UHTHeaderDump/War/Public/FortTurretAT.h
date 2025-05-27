#pragma once
#include "CoreMinimal.h"
#include "GunTurret.h"
#include "FortTurretAT.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AFortTurretAT : public AGunTurret {
    GENERATED_BODY()
public:
    AFortTurretAT(const FObjectInitializer& ObjectInitializer);

};

