#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "ObstructionCheckBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UObstructionCheckBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UObstructionCheckBoxComponent(const FObjectInitializer& ObjectInitializer);

};

