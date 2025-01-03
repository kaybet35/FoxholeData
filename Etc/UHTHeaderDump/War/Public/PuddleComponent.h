#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "PuddleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UPuddleComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPuddleComponent(const FObjectInitializer& ObjectInitializer);

};

