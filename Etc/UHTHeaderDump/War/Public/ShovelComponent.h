#pragma once
#include "CoreMinimal.h"
#include "TaskItemComponent.h"
#include "Templates/SubclassOf.h"
#include "ShovelComponent.generated.h"

class AImpactEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UShovelComponent : public UTaskItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> ImpactEffect;
    
public:
    UShovelComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFX();
    
};

