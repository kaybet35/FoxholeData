#include "WeatherStationMountComponent.h"

UWeatherStationMountComponent::UWeatherStationMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Weather Station"));
    this->bIsStationary = true;
}

void UWeatherStationMountComponent::ServerStartPrediction_Implementation() {
}


