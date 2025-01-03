#pragma once
#include "CoreMinimal.h"
#include "ActivityStateChange.h"
#include "MultiAmmoVehicleMountComponent.h"
#include "ArtilleryGunnerMountComponent.generated.h"

class AExplosiveAmmoPickup;
class ARocketLauncherProjectileDummy;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UArtilleryGunnerMountComponent : public UMultiAmmoVehicleMountComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARocketLauncherProjectileDummy> DummyProjectileActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleFlashPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelegraphOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpoolupDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FiringAngleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMuzzleRotationForFiringAngleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomDelayScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseClampTrjectoryToDistanceHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutomaticFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlightObstructionCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePerBarrelFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsDirectFireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectFireScopeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectFireMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectFireDropOffset;
    
public:
    UArtilleryGunnerMountComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopInvoke();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireShell(FActivityStateChange ActivityStateChange, const bool bInIsDirectFireMode);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayRocketFiringFX(const AExplosiveAmmoPickup* AmmoPickupCDO, const uint8 MuzzleIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFiringFX(const AExplosiveAmmoPickup* AmmoPickupCDO);
    
};

