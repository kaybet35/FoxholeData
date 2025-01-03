#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "ResourceTransferStation.generated.h"

class UGenericStockpileComponent;
class USceneComponent;

UCLASS(Blueprintable)
class WAR_API AResourceTransferStation : public ATeamStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    AResourceTransferStation(const FObjectInitializer& ObjectInitializer);

};

