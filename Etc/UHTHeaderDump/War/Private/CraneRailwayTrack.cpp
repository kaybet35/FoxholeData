#include "CraneRailwayTrack.h"

ACraneRailwayTrack::ACraneRailwayTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BackSwitch = NULL;
    this->FrontSwitch = NULL;
    this->BackSwitchMesh = NULL;
    this->FrontSwitchMesh = NULL;
    this->RoadCheckPhysMaterials.AddDefaulted(3);
}


