#pragma once
#include "CoreMinimal.h"
#include "AssignableSpawnPoint.h"
#include "SpawnPoints.h"
#include "TeamStructure.h"
#include "FortGarrisonStation.generated.h"

class UBoatHullComponent;
class UGenericStockpileComponent;
class USafeHouseVisibilityToggleComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API AFortGarrisonStation : public ATeamStructure, public IAssignableSpawnPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RoofMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BasementMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GroundStaircaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoatHullComponent* BoatHullComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USafeHouseVisibilityToggleComponent* VisibilityToggleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnPoints SpawnPoints;
    
public:
    AFortGarrisonStation(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

