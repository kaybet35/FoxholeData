#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "AITurretComponent.h"
#include "Templates/SubclassOf.h"
#include "AIGunTurretComponent.generated.h"

class AWarExplosionEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UAIGunTurretComponent : public UAITurretComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FiringThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWarExplosionEffect> ExplosionTemplate;
    
    UAIGunTurretComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFiringFX(const FHitResult& HitResult);
    
};

