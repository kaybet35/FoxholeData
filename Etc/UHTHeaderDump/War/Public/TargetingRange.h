#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TargetingRange.generated.h"

UCLASS(Blueprintable)
class WAR_API ATargetingRange : public AActor {
    GENERATED_BODY()
public:
    ATargetingRange(const FObjectInitializer& ObjectInitializer);

};

