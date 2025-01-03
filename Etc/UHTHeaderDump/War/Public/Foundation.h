#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "Foundation.generated.h"

UCLASS(Blueprintable)
class WAR_API AFoundation : public ATeamStructure {
    GENERATED_BODY()
public:
    AFoundation(const FObjectInitializer& ObjectInitializer);

};

