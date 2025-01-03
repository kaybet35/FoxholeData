#include "ClientFoliageReplacement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AClientFoliageReplacement::AClientFoliageReplacement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->DestroyedMesh = NULL;
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->CriticalThreshold = 0.20f;
    this->ReplacementState = EClientFoliageReplacementState::Initial;
    this->OriginalComponent = NULL;
}

void AClientFoliageReplacement::OnStateChanged_Implementation(EClientFoliageReplacementState State) {
}


