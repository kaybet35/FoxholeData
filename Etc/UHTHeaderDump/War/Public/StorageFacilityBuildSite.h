#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "StorageFacilityBuildSite.generated.h"

class UCraneSpawnLocationComponent;
class UGenericStockpileComponent;
class UReserveStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AStorageFacilityBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UReserveStockpileComponent* ReserveStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    AStorageFacilityBuildSite(const FObjectInitializer& ObjectInitializer);

};

