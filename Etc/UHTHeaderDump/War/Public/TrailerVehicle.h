#pragma once
#include "CoreMinimal.h"
#include "RWDSimVehicle.h"
#include "TrailerVehicle.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API ATrailerVehicle : public ARWDSimVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* UseAreaBox;
    
    ATrailerVehicle(const FObjectInitializer& ObjectInitializer);

};

