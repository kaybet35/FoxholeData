#pragma once
#include "CoreMinimal.h"
#include "RailVehicle.h"
#include "CabooseRailVehicle.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ACabooseRailVehicle : public ARailVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    ACabooseRailVehicle(const FObjectInitializer& ObjectInitializer);

};

