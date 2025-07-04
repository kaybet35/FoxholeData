#include "MaterialInterface.h"

UMaterialInterface::UMaterialInterface() {
    this->SubsurfaceProfile = NULL;
}

void UMaterialInterface::SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups, bool bFastResponse) {
}

UPhysicalMaterial* UMaterialInterface::GetPhysicalMaterial() const {
    return NULL;
}

UMaterial* UMaterialInterface::GetBaseMaterial() {
    return NULL;
}


