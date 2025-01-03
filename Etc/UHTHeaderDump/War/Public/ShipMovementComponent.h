#pragma once
#include "CoreMinimal.h"
#include "SimpleVehicleMovementComponent.h"
#include "ShipMovementComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UShipMovementComponent : public USimpleVehicleMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ThrustCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SubmergedThrustCurve;
    
    UShipMovementComponent(const FObjectInitializer& ObjectInitializer);

};

