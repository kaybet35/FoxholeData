#include "StorageBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "EArmourType.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"

AStorageBox::AStorageBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FieldStructure;
    this->ArmourType = EArmourType::Tier1Structure;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Small;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ReplenishRate = 0.00f;
    this->bReplenishFirstItem = false;
    this->bReplenishedOnce = false;
    this->KillVolume->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
}


