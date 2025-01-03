#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PersistentActor.h"
#include "PuddleInfo.h"
#include "EnvironmentModification.generated.h"

class AClientFoliageReplacement;
class AStructure;
class UDecalComponent;

UCLASS(Blueprintable)
class WAR_API AEnvironmentModification : public AActor, public IPersistentActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint16> ImpactMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Seed, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DevastationHeatmap, meta=(AllowPrivateAccess=true))
    TArray<uint8> DevastationHeatmap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> LastProcessedDevastationHeatmap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuantizedPuddleRainfall, meta=(AllowPrivateAccess=true))
    TArray<uint8> QuantizedPuddleRainfall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPuddleInfo> Puddles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<float> SavedPuddleRainfall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AStructure*> RainfallReceivers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AClientFoliageReplacement*> Replacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> Decals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstReplicationOfDevastationHeatmap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CreationTime, meta=(AllowPrivateAccess=true))
    float CreationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EncodedRemovedFoliageInstances, meta=(AllowPrivateAccess=true))
    TArray<uint8> EncodedRemovedFoliageInstances;
    
public:
    AEnvironmentModification(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ProcessDevastationHeatmapReplication(const TArray<uint8>& OldDevastationHeatmap);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Seed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_QuantizedPuddleRainfall(const TArray<uint8>& Prev);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EncodedRemovedFoliageInstances();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_DevastationHeatmap(const TArray<uint8>& OldDevastationHeatmap);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CreationTime(const float& OldCreationTime);
    

    // Fix for true pure virtual functions not being implemented
};

