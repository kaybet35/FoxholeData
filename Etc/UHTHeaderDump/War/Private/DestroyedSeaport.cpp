#include "DestroyedSeaport.h"
#include "CraneSpawnLocationComponent.h"
#include "PersistentProxyComponent.h"

ADestroyedSeaport::ADestroyedSeaport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraneSpawnLocationComponent2 = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent2"));
    this->ProxyLoadingDockComponent = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("ProxyLoadingDockComponent"));
    this->CraneSpawnLocationComponent2->SetupAttachment(RootComponent);
    this->ProxyLoadingDockComponent->SetupAttachment(RootComponent);
}


