#pragma once
#include "CoreMinimal.h"
#include "FreighterCargo.h"
#include "ReplicatedShippableData.h"
#include "ShipVehicle.h"
#include "Templates/SubclassOf.h"
#include "Freighter.generated.h"

class AGlobalShippableInfo;
class UAudioComponent;
class UMeshComponent;
class UParticleSystemComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API AFreighter : public AShipVehicle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RopeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontLeftWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontRightWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BackRightWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BackLeftWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* WakeWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* WaterDriveLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* DeployingSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGlobalShippableInfo> GlobalShippableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxShippableCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CurrentShippables, meta=(AllowPrivateAccess=true))
    TArray<FFreighterCargo> CurrentShippables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShippableData, meta=(AllowPrivateAccess=true))
    FReplicatedShippableData ShippableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    uint8 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* DynamicMeshComponent;
    
public:
    AFreighter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleMode(const bool bIsDeploy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(const uint8 PreviousState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShippableData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentShippables();
    
};

