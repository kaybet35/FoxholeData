#include "ConstructionEquipmentConfig.h"

FConstructionEquipmentConfig::FConstructionEquipmentConfig() {
    this->MaxDeltaAngleToIgnoreRotation = 0.00f;
    this->ScoopingAnimHalfwayDuration = 0.00f;
    this->ScoopingAnimCompletionDuration = 0.00f;
    this->MinAnimDuration = 0.00f;
    this->MaxAnimDuration = 0.00f;
    this->ScoopDoorOpenDuration = 0.00f;
    this->MaterialDropDuration = 0.00f;
    this->MinScoopRotation = 0.00f;
    this->MaxScoopRotation = 0.00f;
    this->MinScoopDoorRotation = 0.00f;
    this->MaxScoopDoorRotation = 0.00f;
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->MinHeight = 0.00f;
    this->MaxHeight = 0.00f;
    this->StartingScoopDoorRotation = 0.00f;
    this->StartingScoopRotation = 0.00f;
    this->StartingHeight = 0.00f;
    this->StartingDistance = 0.00f;
    this->StartingRotation = 0.00f;
    this->ScoopingAnimStartHeight = 0.00f;
    this->ScoopingAnimMidHeight = 0.00f;
    this->ScoopingAnimStartDistance = 0.00f;
    this->ScoopingAnimEndDistance = 0.00f;
    this->ScoopingAnimStartScoopRotation = 0.00f;
    this->ScoopingAnimEndScoopRotation = 0.00f;
    this->DumpMaterialHeight = 0.00f;
    this->GhostMaterialIndices[0] = 0;
    this->GhostMaterialIndices[1] = 0;
    this->GhostMaterial = NULL;
    this->ScoopMaterialMesh = NULL;
    this->ScoopRadius = 0.00f;
}

