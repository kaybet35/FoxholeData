#pragma once
#include "CoreMinimal.h"
#include "VisibilityToggleAreaComponent.h"
#include "SubmarineVisibilityToggleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USubmarineVisibilityToggleComponent : public UVisibilityToggleAreaComponent {
    GENERATED_BODY()
public:
    USubmarineVisibilityToggleComponent(const FObjectInitializer& ObjectInitializer);

};

