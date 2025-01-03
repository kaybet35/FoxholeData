#include "WeatherIceMapData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AWeatherIceMapData::AWeatherIceMapData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->IceActorClass = NULL;
}


