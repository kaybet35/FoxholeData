#pragma once
#include "CoreMinimal.h"
#include "TaskItemComponent.h"
#include "Templates/SubclassOf.h"
#include "LargeMaterialComponent.generated.h"

class AImpactEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API ULargeMaterialComponent : public UTaskItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> ImpactEffect;
    
public:
    ULargeMaterialComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFX();
    
};

