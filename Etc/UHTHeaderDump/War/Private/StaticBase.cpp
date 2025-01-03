#include "StaticBase.h"
#include "AITurretsControllerComponent.h"
#include "EStructureProfileType.h"
#include "GarrisonComponent.h"
#include "Net/UnrealNetwork.h"

AStaticBase::AStaticBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::StaticBase;
    this->GarrisonComponent = CreateDefaultSubobject<UGarrisonComponent>(TEXT("GarrisonComponent"));
    this->AITurretsController = CreateDefaultSubobject<UAITurretsControllerComponent>(TEXT("AITurretsControllerComponent"));
    this->bIsVictoryTownRep = false;
    this->TownConnectionLevel = 1;
}

void AStaticBase::OnRep_IsVictoryTown() {
}

void AStaticBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStaticBase, bIsVictoryTownRep);
}


