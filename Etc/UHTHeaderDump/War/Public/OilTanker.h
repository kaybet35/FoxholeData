#pragma once
#include "CoreMinimal.h"
#include "RWDSimVehicle.h"
#include "OilTanker.generated.h"

UCLASS(Blueprintable)
class WAR_API AOilTanker : public ARWDSimVehicle {
    GENERATED_BODY()
public:
    AOilTanker(const FObjectInitializer& ObjectInitializer);

};

