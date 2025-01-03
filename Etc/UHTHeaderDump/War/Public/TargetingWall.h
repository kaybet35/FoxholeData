#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointDamageEvent -FallbackName=PointDamageEvent
#include "TargetingWall.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API ATargetingWall : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageEvents, meta=(AllowPrivateAccess=true))
    TArray<FPointDamageEvent> DamageEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ResetTrigger;
    
public:
    ATargetingWall(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageEvents();
    
};

