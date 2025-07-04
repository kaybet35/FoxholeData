#include "SkyAtmosphere.h"
#include "SkyAtmosphereComponent.h"

ASkyAtmosphere::ASkyAtmosphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = false;
    this->RootComponent = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphereComponent"));
    this->SkyAtmosphereComponent = (USkyAtmosphereComponent*)RootComponent;
}


