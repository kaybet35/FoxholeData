#pragma once
#include "CoreMinimal.h"
#include "AssignableSpawnPoint.h"
#include "SpawnPoints.h"
#include "StructureBuildSite.h"
#include "Templates/SubclassOf.h"
#include "BaseBuildSite.generated.h"

class ATunnelNodeProxy;
class UGenericStockpileComponent;
class UTechTreeComponent;

UCLASS(Blueprintable)
class WAR_API ABaseBuildSite : public AStructureBuildSite, public IAssignableSpawnPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStaticBase;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UTechTreeComponent* TechTreeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnPoints SpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATunnelNodeProxy> TunnelNodeProxyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATunnelNodeProxy* TunnelNodeProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsBaseUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TunnelConnectionRange;
    
public:
    ABaseBuildSite(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

