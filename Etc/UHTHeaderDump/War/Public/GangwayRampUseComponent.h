#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "GangwayRampUseComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGangwayRampUseComponent : public UUseComponent {
    GENERATED_BODY()
public:
    UGangwayRampUseComponent(const FObjectInitializer& ObjectInitializer);

};

