#pragma once
#include "CoreMinimal.h"
#include "LargeItemComponent.h"
#include "FestivalFlagItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UFestivalFlagItemComponent : public ULargeItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkingSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamID, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
public:
    UFestivalFlagItemComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamID();
    
};

