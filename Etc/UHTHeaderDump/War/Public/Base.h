#pragma once
#include "CoreMinimal.h"
#include "AssignableSpawnPoint.h"
#include "DecayInfo.h"
#include "DecayPreventer.h"
#include "SpawnPoints.h"
#include "TunnelNode.h"
#include "Base.generated.h"

class UAudioComponent;
class UGenericStockpileComponent;
class UTechTreeComponent;

UCLASS(Blueprintable)
class WAR_API ABase : public ATunnelNode, public IAssignableSpawnPoint, public IDecayPreventer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UTechTreeComponent* TechTreeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SirenLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GarrisonLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseTunnelConnectionRange;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FDecayInfo DecayInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnPoints SpawnPoints;
    
public:
    ABase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

