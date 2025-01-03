#pragma once
#include "CoreMinimal.h"
#include "SubmarineMountComponent.h"
#include "SubmarineDivingMountComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USubmarineDivingMountComponent : public USubmarineMountComponent {
    GENERATED_BODY()
public:
    USubmarineDivingMountComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetDivingPlaneInput(int8 Input);
    
};

