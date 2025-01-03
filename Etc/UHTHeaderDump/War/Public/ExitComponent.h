#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ExitComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UExitComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UExitComponent(const FObjectInitializer& ObjectInitializer);

};

