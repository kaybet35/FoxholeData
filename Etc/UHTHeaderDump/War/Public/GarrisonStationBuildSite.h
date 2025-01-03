#pragma once
#include "CoreMinimal.h"
#include "AssignableSpawnPoint.h"
#include "GarrisonHouseBuildSite.h"
#include "SpawnPoints.h"
#include "GarrisonStationBuildSite.generated.h"

class UGenericStockpileComponent;
class UTechTreeComponent;

UCLASS(Blueprintable)
class WAR_API AGarrisonStationBuildSite : public AGarrisonHouseBuildSite, public IAssignableSpawnPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UTechTreeComponent* TechTreeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnPoints SpawnPoints;
    
public:
    AGarrisonStationBuildSite(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

