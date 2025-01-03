#include "SpecializedFactoryBuildSite.h"
#include "SpecializedFactoryComponent.h"

ASpecializedFactoryBuildSite::ASpecializedFactoryBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBuildSiteMapIconVisible = true;
    this->SpecializedFactoryComponent = CreateDefaultSubobject<USpecializedFactoryComponent>(TEXT("SpecializedFactoryComponent"));
}


