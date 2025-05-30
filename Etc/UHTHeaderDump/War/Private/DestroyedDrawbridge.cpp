#include "DestroyedDrawbridge.h"
#include "PersistentProxyComponent.h"

ADestroyedDrawbridge::ADestroyedDrawbridge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SideAProxy = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("SideAProxy"));
    this->SideBProxy = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("SideBProxy"));
    this->SideAProxy->SetupAttachment(RootComponent);
    this->SideBProxy->SetupAttachment(RootComponent);
}


