#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "FacilityRefineryOrder.h"
#include "FuelTank.h"
#include "DestroyedFacilityRefinery.generated.h"

class UCraneSpawnLocationComponent;
class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedFacilityRefinery : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* CrateGenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFuelTank> FuelTanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFacilityRefineryOrder> PendingOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFacilityRefineryOrder> Orders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFacilityRefineryOrder> CompletedOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ItemInputBuffer;
    
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 ModificationMask;
    
    ADestroyedFacilityRefinery(const FObjectInitializer& ObjectInitializer);

};

