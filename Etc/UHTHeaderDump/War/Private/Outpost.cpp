#include "Outpost.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "EMapIntelligenceType.h"

AOutpost::AOutpost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapIntelligenceType = EMapIntelligenceType::Outpost;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->MeshComponent->SetupAttachment(RootComponent);
}


