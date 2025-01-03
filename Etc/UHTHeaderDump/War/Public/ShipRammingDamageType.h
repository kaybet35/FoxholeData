#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "ShipRammingDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UShipRammingDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UShipRammingDamageType();

};

