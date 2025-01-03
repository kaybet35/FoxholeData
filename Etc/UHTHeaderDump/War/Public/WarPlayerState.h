#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "WarPlayerState.generated.h"

UCLASS(Blueprintable)
class WAR_API AWarPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    AWarPlayerState(const FObjectInitializer& ObjectInitializer);

};

