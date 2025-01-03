#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LoreKeyVerificationActor.generated.h"

UCLASS(Blueprintable)
class WAR_API ALoreKeyVerificationActor : public AActor {
    GENERATED_BODY()
public:
    ALoreKeyVerificationActor(const FObjectInitializer& ObjectInitializer);

};

