#pragma once
#include "CoreMinimal.h"
#include "StructureSeatComponent.h"
#include "OccupiableDefensibleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UOccupiableDefensibleComponent : public UStructureSeatComponent {
    GENERATED_BODY()
public:
    UOccupiableDefensibleComponent(const FObjectInitializer& ObjectInitializer);

};

