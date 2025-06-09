#include "MaterialPlatform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "ESimScreen.h"
#include "EStructureProfileType.h"
#include "ReplicatedGenericStockpileComponent.h"

AMaterialPlatform::AMaterialPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::Shippable;
    this->ScreenToUse = ESimScreen::SimpleStockpile;
    this->bIsStockpilable = true;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->GenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->BoxCollision->SetupAttachment(MeshComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
}


