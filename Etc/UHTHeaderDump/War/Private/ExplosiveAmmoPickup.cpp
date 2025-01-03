#include "ExplosiveAmmoPickup.h"

AExplosiveAmmoPickup::AExplosiveAmmoPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionClass = NULL;
    this->DirectFireExplosionClass = NULL;
    this->ShotSoundCue = NULL;
    this->bSupportsDirectFireMode = false;
}


