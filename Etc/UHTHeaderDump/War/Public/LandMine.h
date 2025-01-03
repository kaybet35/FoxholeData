#pragma once
#include "CoreMinimal.h"
#include "Mine.h"
#include "LandMine.generated.h"

UCLASS(Blueprintable)
class WAR_API ALandMine : public AMine {
    GENERATED_BODY()
public:
    ALandMine(const FObjectInitializer& ObjectInitializer);

};

