#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "BulkheadDoorUseComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBulkheadDoorUseComponent : public UUseComponent {
    GENERATED_BODY()
public:
    UBulkheadDoorUseComponent(const FObjectInitializer& ObjectInitializer);

};

