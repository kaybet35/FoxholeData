#pragma once
#include "CoreMinimal.h"
#include "TrailerVehicle.h"
#include "TrailerVehicleStockpile.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ATrailerVehicleStockpile : public ATrailerVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    ATrailerVehicleStockpile(const FObjectInitializer& ObjectInitializer);

};

