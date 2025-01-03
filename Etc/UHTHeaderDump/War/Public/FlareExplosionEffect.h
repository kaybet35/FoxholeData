#pragma once
#include "CoreMinimal.h"
#include "WarExplosionEffect.h"
#include "FlareExplosionEffect.generated.h"

class UCurveFloat;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class WAR_API AFlareExplosionEffect : public AWarExplosionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AltitudeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IlluminationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityIndicatorRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LightFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveLightsInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLightCullingRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LightParticleSystem;
    
public:
    AFlareExplosionEffect(const FObjectInitializer& ObjectInitializer);

};

