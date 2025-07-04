#include "CollisionProfile.h"

UCollisionProfile::UCollisionProfile() {
    this->Profiles.AddDefaulted(78);
    this->DefaultChannelResponses.AddDefaulted(11);
    this->EditProfiles.AddDefaulted(14);
    this->ProfileRedirects.AddDefaulted(7);
    this->CollisionChannelRedirects.AddDefaulted(4);
}


