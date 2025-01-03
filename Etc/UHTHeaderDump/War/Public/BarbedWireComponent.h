#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "BarbedWireComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UBarbedWireComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UBarbedWireComponent(const FObjectInitializer& ObjectInitializer);

};

