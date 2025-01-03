#include "BuildSocketComponent.h"

UBuildSocketComponent::UBuildSocketComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetAddressable = true;
    this->bDisabled = false;
    this->bIsUnidirectional = false;
    this->bIgnoreUnidirectionalityForModifications = false;
    this->bDisabledInBuildGhost = false;
    this->Direction = ESocketDirection::None;
    this->MaxRotation = 0.00f;
    this->SlopeRotationMode = ESlopeRotationMode::OpposingSockets;
    this->MaxZRotation = 0.00f;
    this->bDoLandscapeChecks = true;
    this->bDisallowBuildingOnWater = false;
    this->bMustBeBuiltOnWater = false;
    this->MaxHeightAboveLandscape = 100.00f;
    this->MaxDepthBelowLandscape = 20.00f;
    this->MaxSurfaceSamplePadding = 0.00f;
    this->MaxSurfaceSampleSlopeAngle = 45.00f;
    this->bAllowMultipleOverlaps = false;
    this->MinimumPathSeparation = 0.00f;
    this->bOnlyTestMinimumPathSeparationOnUnconnected = false;
    this->bAllowRotatedPlacement = false;
}


