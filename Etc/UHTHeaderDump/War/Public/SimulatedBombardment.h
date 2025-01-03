#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SimulatedBombardment.generated.h"

UCLASS(Blueprintable)
class WAR_API ASimulatedBombardment : public AActor {
    GENERATED_BODY()
public:
    ASimulatedBombardment(const FObjectInitializer& ObjectInitializer);

};

