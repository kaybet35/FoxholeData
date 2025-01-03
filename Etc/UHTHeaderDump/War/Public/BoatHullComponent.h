#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "BoatHullComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UBoatHullComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UBoatHullComponent(const FObjectInitializer& ObjectInitializer);

};

