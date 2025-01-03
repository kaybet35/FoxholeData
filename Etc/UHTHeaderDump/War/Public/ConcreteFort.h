#pragma once
#include "CoreMinimal.h"
#include "Fort.h"
#include "ConcreteFort.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFort : public AFort {
    GENERATED_BODY()
public:
    AConcreteFort(const FObjectInitializer& ObjectInitializer);

};

