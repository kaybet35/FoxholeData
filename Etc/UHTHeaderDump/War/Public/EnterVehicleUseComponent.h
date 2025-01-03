#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "EnterVehicleUseComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UEnterVehicleUseComponent : public UUseComponent {
    GENERATED_BODY()
public:
    UEnterVehicleUseComponent(const FObjectInitializer& ObjectInitializer);

};

