#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SeatExitComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USeatExitComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USeatExitComponent(const FObjectInitializer& ObjectInitializer);

};

