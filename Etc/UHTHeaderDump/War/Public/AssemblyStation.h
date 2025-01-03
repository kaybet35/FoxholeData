#pragma once
#include "CoreMinimal.h"
#include "AssemblyItem.h"
#include "AssemblyModification.h"
#include "EAssemblyAreaState.h"
#include "EFortModificationType.h"
#include "PowerGridInfo.h"
#include "PowerGridNode.h"
#include "ResourceAmounts.h"
#include "TeamStructure.h"
#include "Templates/SubclassOf.h"
#include "AssemblyStation.generated.h"

class AActor;
class ALadder;
class UAssemblyAreaComponent;
class UBoxComponent;
class UBuildSocketComponent;
class UFacilityLightComponent;
class UGenericStockpileComponent;
class UModificationSlotComponent;
class USceneComponent;

UCLASS(Blueprintable)
class WAR_API AAssemblyStation : public ATeamStructure, public IPowerGridNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModificationSlotComponent* UpgradeSlotComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* PowerSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFacilityLightComponent* LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* GarageFootprintComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAssemblyAreaComponent* AssemblyAreaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssemblyItem> AssemblyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortModificationType, FAssemblyModification> Modifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceAmounts RepairCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PowerGridInfo, meta=(AllowPrivateAccess=true))
    FPowerGridInfo PowerGridInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuildActor, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> BuildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_AssemblyAreaState, meta=(AllowPrivateAccess=true))
    EAssemblyAreaState AssemblyAreaState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName BuildActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString ProducerOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowsTierUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsExtraLargeShippables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDockyard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVehiclesMustBePositionedForRepairs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradeCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GarageFootprintKillLocationZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LadderLocation1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LadderLocation2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LadderLocation3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALadder> LadderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALadder*> SpawnedLadders;
    
public:
    AAssemblyStation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PowerGridInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildActor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AssemblyAreaState();
    

    // Fix for true pure virtual functions not being implemented
};

