#pragma once
#include "CoreMinimal.h"
#include "PayloadMeshes.h"
#include "TankBase.h"
#include "BattleTank.generated.h"

UCLASS(Blueprintable)
class WAR_API ABattleTank : public ATankBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MainGunYaw, meta=(AllowPrivateAccess=true))
    float MainGunYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MainGunPitch, meta=(AllowPrivateAccess=true))
    float MainGunPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AlternateGunYaw, meta=(AllowPrivateAccess=true))
    float AlternateGunYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AlternateGunPitch, meta=(AllowPrivateAccess=true))
    float AlternateGunPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Alternate2GunYaw, meta=(AllowPrivateAccess=true))
    float Alternate2GunYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Alternate2GunPitch, meta=(AllowPrivateAccess=true))
    float Alternate2GunPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FName StashedAmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FName AlternateStashedAmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FName Alternate2StashedAmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_StashedAmmo, meta=(AllowPrivateAccess=true))
    int32 StashedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_AlternateStashedAmmo, meta=(AllowPrivateAccess=true))
    int32 AlternateStashedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Alternate2StashedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPayloadMeshes PayloadMeshes;
    
public:
    ABattleTank(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_StashedAmmo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MainGunYaw();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MainGunPitch();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AlternateStashedAmmo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AlternateGunYaw();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AlternateGunPitch();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Alternate2GunYaw();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Alternate2GunPitch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMainGunFiring() const;
    
};

