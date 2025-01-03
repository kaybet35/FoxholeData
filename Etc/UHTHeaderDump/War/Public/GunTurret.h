#pragma once
#include "CoreMinimal.h"
#include "FoxholeTurret.h"
#include "GunTurret.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WAR_API AGunTurret : public AFoxholeTurret {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GunnerYaw, meta=(AllowPrivateAccess=true))
    float GunnerYaw;
    
public:
    AGunTurret(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GunnerYaw();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTrackingAngle() const;
    
};

