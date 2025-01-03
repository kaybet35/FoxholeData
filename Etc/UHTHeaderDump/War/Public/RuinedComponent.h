#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "RuinedComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API URuinedComponent : public USceneComponent {
    GENERATED_BODY()
public:
    URuinedComponent(const FObjectInitializer& ObjectInitializer);

};

