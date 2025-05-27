#pragma once
#include "CoreMinimal.h"
#include "HitNotify.h"
#include "HitScanWeaponComponent.h"
#include "ShotgunComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UShotgunComponent : public UHitScanWeaponComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SimulatedHitNotifies, meta=(AllowPrivateAccess=true))
    TArray<FHitNotify> SimulatedHitNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxHitsPerShot;
    
public:
    UShotgunComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SimulatedHitNotifies();
    
};

