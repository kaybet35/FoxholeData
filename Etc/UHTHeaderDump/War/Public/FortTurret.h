#pragma once
#include "CoreMinimal.h"
#include "FoxholeTurret.h"
#include "FortTurret.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AFortTurret : public AFoxholeTurret {
    GENERATED_BODY()
public:
    AFortTurret(const FObjectInitializer& ObjectInitializer);

};

