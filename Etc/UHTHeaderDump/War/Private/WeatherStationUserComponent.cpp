#include "WeatherStationUserComponent.h"
#include "Net/UnrealNetwork.h"

UWeatherStationUserComponent::UWeatherStationUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpcomingWeather = EWeatherType::None;
    this->UpcomingPeakIntensity = 0;
    this->UpcomingStartTimeHours = 0;
}

void UWeatherStationUserComponent::ServerDisconnectFromNetwork_Implementation(const bool bResetConnectionTo) {
}

void UWeatherStationUserComponent::ServerConnectToNetwork_Implementation(const FWeatherStationID GlobalID) {
}

void UWeatherStationUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeatherStationUserComponent, UpcomingWeather);
    DOREPLIFETIME(UWeatherStationUserComponent, UpcomingPeakIntensity);
    DOREPLIFETIME(UWeatherStationUserComponent, UpcomingStartTimeHours);
}


