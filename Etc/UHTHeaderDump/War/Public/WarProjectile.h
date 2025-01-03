#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ProjectileHitInfo_NetQuantize.h"
#include "Templates/SubclassOf.h"
#include "WarProjectile.generated.h"

class AController;
class APhysicsVolume;
class AWarExplosionEffect;
class UAudioComponent;
class UParticleSystemComponent;
class UProjectileMovementComponent;
class USkeletalMesh;
class USphereComponent;

UCLASS(Blueprintable)
class WAR_API AWarProjectile : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* MovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* LoopingAudio;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWarExplosionEffect> ExplosionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> MyController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExplosiveCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDetonateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileDeathDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionImpactBumpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PenetrationBonusMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAccurateHitReplication: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProjectImpactDownward: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideMeshOnExplode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnExplosionOnServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bImpactsWater: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugDraw: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Exploded, meta=(AllowPrivateAccess=true))
    uint8 bExploded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotationRequiresVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationVelocityRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWarExplosionEffect> UnderWaterExplosionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWarExplosionEffect> WaterSurfaceExplosionTemplate;
    
public:
    AWarProjectile(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetHomingTarget(AActor* Target);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Exploded();
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileStop(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPhysicsVolumeChanged(APhysicsVolume* NewVolume);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExploded(const FProjectileHitInfo_NetQuantize& HitResult);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastExplodeAll(const FProjectileHitInfo_NetQuantize& Impact);
    
public:
    UFUNCTION(BlueprintCallable)
    void Detonate(const FProjectileHitInfo_NetQuantize& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void ApplyExplosiveDamageAndSpawnFx(const FProjectileHitInfo_NetQuantize& HitResult);
    
};

