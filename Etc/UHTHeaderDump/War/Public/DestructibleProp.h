#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DestructibleProp.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS(Blueprintable)
class WAR_API ADestructibleProp : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DestroyedFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DestroyedSoundCue;
    
public:
    ADestructibleProp(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastApplyFatalHit();
    
};

