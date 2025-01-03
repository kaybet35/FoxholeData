#include "FortTurretAT.h"
#include "EStructureProfileType.h"
#include "InfrastructureComponent.h"
#include "Net/UnrealNetwork.h"

AFortTurretAT::AFortTurretAT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FortRotatableUpgrade;
    this->InfrastructureComponent = CreateDefaultSubobject<UInfrastructureComponent>(TEXT("InfrastructureComponent"));
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
}

void AFortTurretAT::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTurretAT, PowerInfo);
}


