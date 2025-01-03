#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "SeatTriggerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USeatTriggerComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    USeatTriggerComponent(const FObjectInitializer& ObjectInitializer);

};

