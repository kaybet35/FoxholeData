#include "MaterialInstance.h"

UMaterialInstance::UMaterialInstance() {
    this->PhysMaterial = NULL;
    this->Parent = NULL;
    this->bHasStaticPermutationResource = false;
    this->bOverrideSubsurfaceProfile = false;
}


