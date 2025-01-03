#pragma once
#include "CoreMinimal.h"
#include "RWDSimVehicle.h"
#include "Tractor.generated.h"

UCLASS(Blueprintable)
class WAR_API ATractor : public ARWDSimVehicle {
    GENERATED_BODY()
public:
    ATractor(const FObjectInitializer& ObjectInitializer);

};

