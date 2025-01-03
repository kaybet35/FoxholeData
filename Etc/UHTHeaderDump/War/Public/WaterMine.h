#pragma once
#include "CoreMinimal.h"
#include "Mine.h"
#include "WaterMine.generated.h"

UCLASS(Blueprintable)
class WAR_API AWaterMine : public AMine {
    GENERATED_BODY()
public:
    AWaterMine(const FObjectInitializer& ObjectInitializer);

};

