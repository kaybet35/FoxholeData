#include "UniformPickup.h"

AUniformPickup::AUniformPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UniformType = EUniformType::Default;
}


