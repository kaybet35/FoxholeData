#include "SeaportBuildSite.h"
#include "CraneSpawnLocationComponent.h"
#include "PersistentProxyComponent.h"

ASeaportBuildSite::ASeaportBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraneSpawnLocationComponent2 = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent2"));
    this->ProxyLoadingDockComponent = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("ProxyLoadingDockComponent"));
    this->ProxyLoadingDockComponent->SetupAttachment(RootComponent);
    this->CraneSpawnLocationComponent2->SetupAttachment(RootComponent);
}


