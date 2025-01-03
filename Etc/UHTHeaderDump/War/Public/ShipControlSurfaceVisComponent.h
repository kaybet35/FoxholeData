#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "ShipControlSurfaceVisComponent.generated.h"

UCLASS(Blueprintable, HideDropdown, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UShipControlSurfaceVisComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UShipControlSurfaceVisComponent(const FObjectInitializer& ObjectInitializer);

};

