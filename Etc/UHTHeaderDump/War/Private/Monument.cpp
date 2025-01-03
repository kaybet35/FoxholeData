#include "Monument.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "UseMonumentComponent.h"

AMonument::AMonument(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MonumentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MonumentMesh"));
    this->UseMonumentComponent = CreateDefaultSubobject<UUseMonumentComponent>(TEXT("UseMonument"));
    this->MonumentIndex = -1;
    this->MonumentType = EMonumentType::None;
    this->UseMonumentComponent->SetupAttachment(MonumentMesh);
}


