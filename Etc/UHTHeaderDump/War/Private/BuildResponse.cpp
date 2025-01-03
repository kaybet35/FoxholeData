#include "BuildResponse.h"

FBuildResponse::FBuildResponse() {
    this->Result = EBuildResponse::Success;
    this->PlacementStatus = EPlacementStatus::Valid;
    this->Structure = NULL;
}

