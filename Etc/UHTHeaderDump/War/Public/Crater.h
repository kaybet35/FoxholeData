#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "Crater.generated.h"

UCLASS(Blueprintable)
class WAR_API ACrater : public ABuildableStructure {
    GENERATED_BODY()
public:
    ACrater(const FObjectInitializer& ObjectInitializer);

};

