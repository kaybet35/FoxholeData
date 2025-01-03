#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "WaterReloadSourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWaterReloadSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWaterReloadSourceComponent(const FObjectInitializer& ObjectInitializer);

};

