#pragma once
#include "CoreMinimal.h"
#include "FacilityRefineryOrder.h"
#include "FuelTank.h"
#include "StructureBuildSite.h"
#include "FacilityRefineryBuildSite.generated.h"

class UCraneSpawnLocationComponent;
class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AFacilityRefineryBuildSite : public AStructureBuildSite {
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
    AFacilityRefineryBuildSite(const FObjectInitializer& ObjectInitializer);

};

