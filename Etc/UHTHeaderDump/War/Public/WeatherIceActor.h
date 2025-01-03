#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DamageableActor.h"
#include "PersistentActor.h"
#include "WeatherIceMeshData.h"
#include "WeatherIceState.h"
#include "WeatherIceActor.generated.h"

class AWeatherIceMapData;
class UMaterialInterface;
class UParticleSystem;
class USoundCue;

UCLASS(Blueprintable)
class WAR_API AWeatherIceActor : public AActor, public IDamageableActor, public IPersistentActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherIceMeshData> AllIceMeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshHeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MeshHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightAboveWaterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshSetsAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DamagedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CriticalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DamageStateSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DamageStateVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DestroyedSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DestroyedVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FWeatherIceState> States;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ReplicatedStates, meta=(AllowPrivateAccess=true))
    TArray<uint32> ReplicatedStates;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int16 IceActorDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeatherIceMapData* WeatherIceMapData;
    
public:
    AWeatherIceActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_ReplicatedStates(const TArray<uint32>& PreviousReplicatedStates);
    

    // Fix for true pure virtual functions not being implemented
};

