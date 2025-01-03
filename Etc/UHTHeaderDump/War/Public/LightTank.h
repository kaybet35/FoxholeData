#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "PayloadMeshes.h"
#include "TankBase.h"
#include "LightTank.generated.h"

UCLASS(Blueprintable)
class WAR_API ALightTank : public ATankBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GunnerYawAndPitch, meta=(AllowPrivateAccess=true))
    FVector2D GunnerYawAndPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_StashedAmmo, meta=(AllowPrivateAccess=true))
    int32 StashedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FName StashedAmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPayloadMeshes PayloadMeshes;
    
public:
    ALightTank(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_StashedAmmo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GunnerYawAndPitch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsShooting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGunYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGunPitch() const;
    
};

