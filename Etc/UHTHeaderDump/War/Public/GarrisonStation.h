#pragma once
#include "CoreMinimal.h"
#include "AssignableSpawnPoint.h"
#include "DecayInfo.h"
#include "DecayPreventer.h"
#include "GarrisonHouse.h"
#include "SpawnPoints.h"
#include "GarrisonStation.generated.h"

class UGenericStockpileComponent;
class UMapIntelligenceSourceComponent;
class UTechTreeComponent;

UCLASS(Blueprintable)
class WAR_API AGarrisonStation : public AGarrisonHouse, public IAssignableSpawnPoint, public IDecayPreventer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UTechTreeComponent* TechTreeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapIntelligenceSourceComponent* MapIntelligenceSourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TunnelConnectionRange;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FDecayInfo DecayInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnPoints SpawnPoints;
    
public:
    AGarrisonStation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

