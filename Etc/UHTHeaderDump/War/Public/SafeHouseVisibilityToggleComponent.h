#pragma once
#include "CoreMinimal.h"
#include "VisibilityToggleAreaComponent.h"
#include "SafeHouseVisibilityToggleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USafeHouseVisibilityToggleComponent : public UVisibilityToggleAreaComponent {
    GENERATED_BODY()
public:
    USafeHouseVisibilityToggleComponent(const FObjectInitializer& ObjectInitializer);

};

