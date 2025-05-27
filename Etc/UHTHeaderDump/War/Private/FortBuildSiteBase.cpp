#include "FortBuildSiteBase.h"
#include "ModularMountsComponent.h"

AFortBuildSiteBase::AFortBuildSiteBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModularMountsComponent = CreateDefaultSubobject<UModularMountsComponent>(TEXT("ModularMountsComponent"));
}


