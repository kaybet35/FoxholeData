#pragma once
#include "CoreMinimal.h"
#include "Fort.h"
#include "DestroyedFort.generated.h"

UCLASS(Blueprintable)
class WAR_API ADestroyedFort : public AFort {
    GENERATED_BODY()
public:
    ADestroyedFort(const FObjectInitializer& ObjectInitializer);

};

