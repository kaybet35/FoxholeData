#include "ForwardBase.h"
#include "GarrisonComponent.h"
#include "TeamFlagMeshComponent.h"

AForwardBase::AForwardBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GarrisonComponent = CreateDefaultSubobject<UGarrisonComponent>(TEXT("GarrisonComponent"));
    this->TeamFlagMeshComponent = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("TeamFlagMesh"));
    this->TeamFlagMeshComponent->SetupAttachment(RootComponent);
}


