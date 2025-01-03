#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "WarGameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class WAR_API AWarGameMode : public AGameMode {
    GENERATED_BODY()
public:
    AWarGameMode(const FObjectInitializer& ObjectInitializer);

};

