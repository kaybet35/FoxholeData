#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameSession -FallbackName=GameSession
#include "WarGameSession.generated.h"

UCLASS(Blueprintable)
class WAR_API AWarGameSession : public AGameSession {
    GENERATED_BODY()
public:
    AWarGameSession(const FObjectInitializer& ObjectInitializer);

};

