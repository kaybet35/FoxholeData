#pragma once
#include "CoreMinimal.h"
#include "RailVehicle.h"
#include "RailVehicleResourcePlatform.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ARailVehicleResourcePlatform : public ARailVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    ARailVehicleResourcePlatform(const FObjectInitializer& ObjectInitializer);

};

