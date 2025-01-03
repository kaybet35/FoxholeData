#pragma once
#include "CoreMinimal.h"
#include "ShipFlagUseComponent.h"
#include "ShipEngineUseComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UShipEngineUseComponent : public UShipFlagUseComponent {
    GENERATED_BODY()
public:
    UShipEngineUseComponent(const FObjectInitializer& ObjectInitializer);

};

