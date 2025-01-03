#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActivityStateChange.h"
#include "MultiAmmoStructureMountComponent.h"
#include "EmplacementMortarMountComponent.generated.h"

class AExplosiveAmmoPickup;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UEmplacementMortarMountComponent : public UMultiAmmoStructureMountComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScopeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleFlashPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelegraphDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MortarFlightTime;
    
public:
    UEmplacementMortarMountComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInvoke(FActivityStateChange ActivityStateChange, float Distance);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFiringFX(const AExplosiveAmmoPickup* AmmoPickupCDO);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDamageDebug(FVector TraceStart, FVector TraceEnd, FVector Location, const AExplosiveAmmoPickup* AmmoPickupCDO);
    
};

