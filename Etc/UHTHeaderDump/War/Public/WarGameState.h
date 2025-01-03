#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameState -FallbackName=GameState
#include "WarGameState.generated.h"

UCLASS(Blueprintable)
class WAR_API AWarGameState : public AGameState {
    GENERATED_BODY()
public:
    AWarGameState(const FObjectInitializer& ObjectInitializer);

};

