#include "RepRailwayMovement.h"

FRepRailwayMovement::FRepRailwayMovement() {
    this->FrontTrack = NULL;
    this->bFrontTrackSet = false;
    this->RearTrack = NULL;
    this->bRearTrackSet = false;
    this->Actor = NULL;
    this->LinearMomentum = 0.00f;
    this->PackedPrimaryAlpha = 0.00f;
}

