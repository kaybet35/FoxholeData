#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SkySphere.generated.h"

UCLASS(Blueprintable)
class WAR_API ASkySphere : public AActor {
    GENERATED_BODY()
public:
    ASkySphere(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateSunDirection();
    
};

