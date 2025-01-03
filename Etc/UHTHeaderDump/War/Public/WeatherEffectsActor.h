#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WeatherEffectsActor.generated.h"

UCLASS(Blueprintable)
class WAR_API AWeatherEffectsActor : public AActor {
    GENERATED_BODY()
public:
    AWeatherEffectsActor(const FObjectInitializer& ObjectInitializer);

};

