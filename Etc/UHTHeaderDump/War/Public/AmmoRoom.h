#pragma once
#include "CoreMinimal.h"
#include "PowerNode.h"
#include "TeamStructure.h"
#include "AmmoRoom.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AAmmoRoom : public ATeamStructure, public IPowerNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    AAmmoRoom(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

