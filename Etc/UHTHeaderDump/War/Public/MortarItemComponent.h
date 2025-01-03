#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActivityStateChange.h"
#include "MultiAmmoItemComponent.h"
#include "MortarItemComponent.generated.h"

class AExplosiveAmmoPickup;
class UParticleSystem;
class USkeletalMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UMortarItemComponent : public UMultiAmmoItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleFlashPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelegraphDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MortarFlightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
public:
    UMortarItemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFire(float Distance, FActivityStateChange ActivityStateChange);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFiringFX(const AExplosiveAmmoPickup* AmmoPickup);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDamageDebug(FVector HitLocation, float Radius);
    
};

