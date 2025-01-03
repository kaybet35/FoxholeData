#include "SmokeGrenadeExplosionEffect.h"
#include "ObscuringSphereComponent.h"

ASmokeGrenadeExplosionEffect::ASmokeGrenadeExplosionEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObscuringSphere = CreateDefaultSubobject<UObscuringSphereComponent>(TEXT("ObscuringSphere"));
    this->MinimumVisibilityRadius = 100.00f;
    this->VisibilityRadiusCurve = NULL;
    this->ObscuringSphere->SetupAttachment(RootComponent);
}


