#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ETankArmourEffectBehaviour.h"
#include "ExplosionMaterialOverride.h"
#include "Templates/SubclassOf.h"
#include "WarExplosionEffect.generated.h"

class AImpactEffect;
class AWarPainVolume;
class UAudioComponent;
class UCameraShake;
class UParticleSystemComponent;
class UPointLightComponent;
class USoundCue;

UCLASS(Blueprintable)
class WAR_API AWarExplosionEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExplosionMaterialOverride> ParticleSystemOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> RadialHitImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactEffectDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionLightFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ExplosionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoNotOrientToImpactNormal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOrientToDirectionOfTravel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bManualDestruction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyWhenParticleSystemCompletes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bParentToImpactSurface: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualDeactivateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeSoundOnDeactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWarPainVolume> PainVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PainVolumeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDelayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPersistentEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETankArmourEffectBehaviour TankArmourEffectBehaviour;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasManuallyDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* SpawnedExplosionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DetonationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TelegraphDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* ExplosionLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FHitResult SurfaceHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerDetonationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector ProjectileImpactVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ExplosionParticleSystem;
    
public:
    AWarExplosionEffect(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemFinished(UParticleSystemComponent* PSystem);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastTelegraph(float TimeUntilDetonation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDetonate();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetTimeSinceDetonation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPTelegraphProjectile(FVector ImpactVelocity, float TimeUntilDetonation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPTelegraph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPDetonate();
    
};

