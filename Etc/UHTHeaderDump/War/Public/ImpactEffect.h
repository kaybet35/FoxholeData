#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DecalData.h"
#include "HitNotify.h"
#include "ImpactEffectOverride.h"
#include "ImpactEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AImpactEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImpactEffectOverride> EffectOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData FleshBloodSplatterDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitNotify HitNotify;
    
    AImpactEffect(const FObjectInitializer& ObjectInitializer);

};

