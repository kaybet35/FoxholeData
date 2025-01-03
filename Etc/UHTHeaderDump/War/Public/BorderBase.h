#pragma once
#include "CoreMinimal.h"
#include "BorderBaseInfo.h"
#include "ForwardBase.h"
#include "BorderBase.generated.h"

class UParticleSystemComponent;
class USoundCue;

UCLASS(Blueprintable)
class WAR_API ABorderBase : public AForwardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* OnSpawnedPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnSpawnedSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_IsUsable, meta=(AllowPrivateAccess=true))
    bool bIsUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FBorderBaseInfo Info;
    
public:
    ABorderBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsUsable();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnSpawned();
    
};

