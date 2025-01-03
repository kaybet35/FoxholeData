#include "TeamFlagMeshComponent.h"

UTeamFlagMeshComponent::UTeamFlagMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bCanEverAffectNavigation = false;
    this->bReceivesDecals = false;
    this->AlwaysLoadOnServer = false;
    this->bAllowWindRotation = true;
}


