#include "DecalActor.h"
#include "DecalComponent.h"

ADecalActor::ADecalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("NewDecalComponent"));
    this->Decal = (UDecalComponent*)RootComponent;
}

void ADecalActor::SetDecalMaterial(UMaterialInterface* NewDecalMaterial) {
}

UMaterialInterface* ADecalActor::GetDecalMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* ADecalActor::CreateDynamicMaterialInstance() {
    return NULL;
}


