#include "HospitalComponent.h"
#include "Net/UnrealNetwork.h"

UHospitalComponent::UHospitalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->NumBeds = 6;
    this->SpawnChargesPerPatient = 5;
    this->PatientConversionSeconds = 600.00f;
}

void UHospitalComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHospitalComponent, Patients);
    DOREPLIFETIME(UHospitalComponent, RecoveredPatients);
}


