#include "CoastalGun.h"
#include "AIArtilleryGunTurretComponent.h"

ACoastalGun::ACoastalGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAIArtilleryGunTurretComponent>(TEXT("AITurretComponent"))) {
    this->bIsBuildSiteMapIconVisible = true;
    this->bIgnoreFriendlyFire = true;
    this->AITurretComponent->SetupAttachment(RootComponent);
}


