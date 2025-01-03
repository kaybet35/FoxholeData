#include "WeatherIceLimiterBox.h"

UWeatherIceLimiterBox::UWeatherIceLimiterBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EWeatherIceLimiterType::Include;
}


