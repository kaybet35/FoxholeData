#include "DeployedListeningKit.h"
#include "ListeningAreaComponent.h"

ADeployedListeningKit::ADeployedListeningKit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ListeningAreaComponent = CreateDefaultSubobject<UListeningAreaComponent>(TEXT("ListeningAreaComponent"));
    this->ListeningAreaComponent->SetupAttachment(RootComponent);
}


