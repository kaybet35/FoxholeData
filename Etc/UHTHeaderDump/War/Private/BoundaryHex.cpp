#include "BoundaryHex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ABoundaryHex::ABoundaryHex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->EditorMesh = NULL;
}


