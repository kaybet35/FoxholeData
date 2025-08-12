#pragma once
#include "CoreMinimal.h"
#include "Structure.h"
#include "DestroyedStructure.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API ADestroyedStructure : public AStructure {
    GENERATED_BODY()
public:
    ADestroyedStructure(const FObjectInitializer& ObjectInitializer);

};

