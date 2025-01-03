#pragma once
#include "CoreMinimal.h"
#include "GunTurret.h"
#include "CoastalGun.generated.h"

UCLASS(Blueprintable)
class WAR_API ACoastalGun : public AGunTurret {
    GENERATED_BODY()
public:
    ACoastalGun(const FObjectInitializer& ObjectInitializer);

};

