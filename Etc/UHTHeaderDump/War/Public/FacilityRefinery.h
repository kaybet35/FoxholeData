#pragma once
#include "CoreMinimal.h"
#include "EFortModificationType.h"
#include "FacilityModification.h"
#include "FacilityRefineryOrder.h"
#include "FuelTank.h"
#include "MultiConversionInfo.h"
#include "PowerGridInfo.h"
#include "PowerGridNode.h"
#include "ReservePower.h"
#include "TeamStructure.h"
#include "FacilityRefinery.generated.h"

class UBuildSocketComponent;
class UCraneSpawnLocationComponent;
class UFacilityLightComponent;
class UGenericStockpileComponent;
class UModificationSlotComponent;
class USceneComponent;

UCLASS(Blueprintable)
class WAR_API AFacilityRefinery : public ATeamStructure, public IPowerGridNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* CrateGenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModificationSlotComponent* UpgradeSlotComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* PowerSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFacilityLightComponent* LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMultiConversionInfo> ConversionEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortModificationType, FFacilityModification> Modifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredResourceFieldCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFuelTank> FuelTanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PowerGridInfo, meta=(AllowPrivateAccess=true))
    FPowerGridInfo PowerGridInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FReservePower ReservePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSetOrdersToBlocked;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ReplicatedIndex, meta=(AllowPrivateAccess=true))
    int8 ReplicatedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedIsActive, meta=(AllowPrivateAccess=true))
    bool bReplicatedIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFacilityRefineryOrder> PendingOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFacilityRefineryOrder> Orders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFacilityRefineryOrder> CompletedOrders;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ItemInputBuffer;
    
    AFacilityRefinery(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedIsActive();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PowerGridInfo();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSetMaxOrderCount(const uint8 MaxOrderCount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnStateInactive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnStateActive();
    

    // Fix for true pure virtual functions not being implemented
};

