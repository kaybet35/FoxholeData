#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "WeatherStationMountComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWeatherStationMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
    UWeatherStationMountComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartPrediction();
    
};

