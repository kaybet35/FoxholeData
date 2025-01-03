#include "WeatherIceLimiterSphere.h"

UWeatherIceLimiterSphere::UWeatherIceLimiterSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EWeatherIceLimiterType::Include;
}


