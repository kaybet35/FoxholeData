#include "CraneMarker.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ACraneMarker::ACraneMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->InteractMesh = NULL;
    this->InteractGreyMesh = NULL;
    this->InteractBlockedMesh = NULL;
    this->InvalidMesh = NULL;
    this->UseMesh = NULL;
}


