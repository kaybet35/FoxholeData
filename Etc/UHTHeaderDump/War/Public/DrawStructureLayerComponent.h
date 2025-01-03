#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "DrawStructureLayerComponent.generated.h"

UCLASS(Blueprintable, HideDropdown, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UDrawStructureLayerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDrawStructureLayerComponent(const FObjectInitializer& ObjectInitializer);

};

