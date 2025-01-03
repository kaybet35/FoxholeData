#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "DestroyedResourceTransferStation.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedResourceTransferStation : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    ADestroyedResourceTransferStation(const FObjectInitializer& ObjectInitializer);

};

