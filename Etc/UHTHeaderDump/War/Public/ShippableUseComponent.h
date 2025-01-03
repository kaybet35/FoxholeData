#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "ShippableUseComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UShippableUseComponent : public UUseComponent {
    GENERATED_BODY()
public:
    UShippableUseComponent(const FObjectInitializer& ObjectInitializer);

};

