#pragma once
#include "CoreMinimal.h"
#include "FortObservation.h"
#include "ConcreteFortObservation.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFortObservation : public AFortObservation {
    GENERATED_BODY()
public:
    AConcreteFortObservation(const FObjectInitializer& ObjectInitializer);

};

