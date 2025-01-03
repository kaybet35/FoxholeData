#pragma once
#include "CoreMinimal.h"
#include "ActivityStateChange.h"
#include "CharacterInvokeInfo.h"
#include "ECoverMitigationType.h"
#include "HitNotify.h"
#include "ItemComponent.h"
#include "Templates/SubclassOf.h"
#include "HitScanWeaponComponent.generated.h"

class AImpactEffect;
class AWeaponFireFX;
class UCameraShake;
class UParticleSystem;
class USkeletalMesh;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UHitScanWeaponComponent : public UItemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> FireCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> ImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponFireFX> WeaponFireFXClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShotSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShotNoAmmoSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ClipEmptiedSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleFlashPS;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TotalShotsFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstFiringRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverMitigationType MitigationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFireFromVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEquipped, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SimulatedHitNotify, meta=(AllowPrivateAccess=true))
    FHitNotify SimulatedHitNotify;
    
public:
    UHitScanWeaponComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInvoke(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SimulatedHitNotify();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEquipped();
    
};

