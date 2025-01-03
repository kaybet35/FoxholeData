#pragma once
#include "CoreMinimal.h"
#include "SpecializedFactory.h"
#include "MassProductionFactory.generated.h"

class UBoxComponent;
class UCraneSpawnLocationComponent;
class UParticleSystem;
class USceneComponent;
class USoundCue;

UCLASS(Blueprintable)
class WAR_API AMassProductionFactory : public ASpecializedFactory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TransferLocationFootprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShippableCrateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ShippableCratePS;
    
public:
    AMassProductionFactory(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayShippableCrateFX();
    
};

