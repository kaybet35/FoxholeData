#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LandscapeEnvironmentActor.generated.h"

UCLASS(Blueprintable)
class WAR_API ALandscapeEnvironmentActor : public AActor {
    GENERATED_BODY()
public:
    ALandscapeEnvironmentActor(const FObjectInitializer& ObjectInitializer);

};

