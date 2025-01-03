#pragma once
#include "CoreMinimal.h"
#include "DestroyedGarrisonHouse.h"
#include "DestroyedGarrisonStation.generated.h"

class UGenericStockpileComponent;
class UTechTreeComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedGarrisonStation : public ADestroyedGarrisonHouse {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UTechTreeComponent* TechTreeComponent;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 LastSpawnPointID;
    
public:
    ADestroyedGarrisonStation(const FObjectInitializer& ObjectInitializer);

};

