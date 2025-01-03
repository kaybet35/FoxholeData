#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "Templates/SubclassOf.h"
#include "RelicAPCStructure.generated.h"

class ASimVehicle;

UCLASS(Blueprintable)
class WAR_API ARelicAPCStructure : public ABuildableStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASimVehicle> VehicleClass;
    
public:
    ARelicAPCStructure(const FObjectInitializer& ObjectInitializer);

};

