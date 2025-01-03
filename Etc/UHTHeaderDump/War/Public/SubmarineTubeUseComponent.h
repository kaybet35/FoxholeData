#pragma once
#include "CoreMinimal.h"
#include "ShipFlagUseComponent.h"
#include "SubmarineTubeUseComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USubmarineTubeUseComponent : public UShipFlagUseComponent {
    GENERATED_BODY()
public:
    USubmarineTubeUseComponent(const FObjectInitializer& ObjectInitializer);

};

