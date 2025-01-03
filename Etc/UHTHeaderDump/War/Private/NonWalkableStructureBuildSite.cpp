#include "NonWalkableStructureBuildSite.h"

ANonWalkableStructureBuildSite::ANonWalkableStructureBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsVaultable = false;
    this->bAllowStanding = false;
}


