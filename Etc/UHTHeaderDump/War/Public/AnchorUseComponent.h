#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "AnchorUseComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAnchorUseComponent : public UUseComponent {
    GENERATED_BODY()
public:
    UAnchorUseComponent(const FObjectInitializer& ObjectInitializer);

};

