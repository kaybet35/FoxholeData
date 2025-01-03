#include "SavedVehicle.h"

FSavedVehicle::FSavedVehicle() {
    this->ActorClass = NULL;
    this->bHasTrailer = false;
    this->bFacingForward = false;
    this->RailEntryTrackId = 0;
    this->RailEntryPackedAlpha = 0.00f;
    this->bRailIsTailFirst = false;
    this->ShipDepth = 0.00f;
}

