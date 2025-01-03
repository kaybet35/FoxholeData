#include "Shippable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

AShippable::AShippable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::MiscellaneousDefault;
    this->GlobalShippableInfo = NULL;
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->DynamicMeshComponent = NULL;
    this->BaseMesh->SetupAttachment(RootComponent);
    this->RopeMesh->SetupAttachment(RootComponent);
}

void AShippable::OnRep_ShippableType() {
}

void AShippable::OnRep_ShippableData() {
}

void AShippable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShippable, ShippableType);
    DOREPLIFETIME(AShippable, ShippableData);
}


