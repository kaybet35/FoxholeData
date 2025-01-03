#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawn -FallbackName=SpectatorPawn
#include "RespawnSpectatorPawn.generated.h"

UCLASS(Blueprintable)
class WAR_API ARespawnSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    ARespawnSpectatorPawn(const FObjectInitializer& ObjectInitializer);

};

