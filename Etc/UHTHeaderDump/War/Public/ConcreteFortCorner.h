#pragma once
#include "CoreMinimal.h"
#include "FortCorner.h"
#include "ConcreteFortCorner.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFortCorner : public AFortCorner {
    GENERATED_BODY()
public:
    AConcreteFortCorner(const FObjectInitializer& ObjectInitializer);

};

