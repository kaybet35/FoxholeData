#pragma once
#include "CoreMinimal.h"
#include "SimCharacter.h"
#include "PlayerCharacter.generated.h"

UCLASS(Blueprintable)
class WAR_API APlayerCharacter : public ASimCharacter {
    GENERATED_BODY()
public:
    APlayerCharacter(const FObjectInitializer& ObjectInitializer);

};

