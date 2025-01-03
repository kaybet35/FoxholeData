#include "Container.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "EArmourType.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

AContainer::AContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::Shippable;
    this->ArmourType = EArmourType::Tier1Structure;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->bIsReserveStockpiled = true;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->GenericStockpileComponent = NULL;
    this->ColorIndex = 0;
    this->KillVolume->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
}

void AContainer::OnRep_Color() {
}

void AContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AContainer, ColorIndex);
}


