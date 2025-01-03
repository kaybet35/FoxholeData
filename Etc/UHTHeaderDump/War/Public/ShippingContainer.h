#pragma once
#include "CoreMinimal.h"
#include "Container.h"
#include "ShippingContainer.generated.h"

UCLASS(Blueprintable)
class WAR_API AShippingContainer : public AContainer {
    GENERATED_BODY()
public:
    AShippingContainer(const FObjectInitializer& ObjectInitializer);

};

