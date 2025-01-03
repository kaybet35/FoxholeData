#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "CatWalk.generated.h"

UCLASS(Blueprintable)
class WAR_API ACatWalk : public ATeamStructure {
    GENERATED_BODY()
public:
    ACatWalk(const FObjectInitializer& ObjectInitializer);

};

