#pragma once
#include "CoreMinimal.h"
#include "AssignableSpawnPoint.h"
#include "FortBuildSite.h"
#include "SpawnPoints.h"
#include "HospitalBuildSite.generated.h"

class UGenericStockpileComponent;
class UHospitalComponent;

UCLASS(Blueprintable)
class WAR_API AHospitalBuildSite : public AFortBuildSite, public IAssignableSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UHospitalComponent* HospitalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnPoints SpawnPoints;
    
    AHospitalBuildSite(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

