#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "DecalData.h"
#include "ExplosionMaterialOverride.generated.h"

class UParticleSystem;
class USoundCue;

USTRUCT(BlueprintType)
struct FExplosionMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PhysicalSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplosionFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ExplosionSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData Decal;
    
    WAR_API FExplosionMaterialOverride();
};

