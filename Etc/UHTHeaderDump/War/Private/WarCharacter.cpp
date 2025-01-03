#include "WarCharacter.h"
#include "Net/UnrealNetwork.h"
#include "StealthComponent.h"

AWarCharacter::AWarCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ViewRadiusDegrees = 0.00f;
    this->Temperature = 1.00f;
    this->ReplicatedTemperature = 100;
    this->ReplicatedMuddyness = 0;
    this->PlayerFlags = 0;
    this->StealthComponent = CreateDefaultSubobject<UStealthComponent>(TEXT("StealthComponent"));
    this->Muddyness = 0.00f;
}

void AWarCharacter::ServerUseStructure_Implementation(AStructure* Structure) {
}
bool AWarCharacter::ServerUseStructure_Validate(AStructure* Structure) {
    return true;
}

void AWarCharacter::ServerUnstuck_Implementation() {
}
bool AWarCharacter::ServerUnstuck_Validate() {
    return true;
}

void AWarCharacter::OnRep_Temperature(const uint8 PreviousTemperature) {
}

void AWarCharacter::OnRep_Muddyness(const uint8 PreviousMuddyness) {
}

void AWarCharacter::MulticastPlaceCalloutMarker_Implementation(const EFactionId FactionId, const int8 CalloutInfoIndex, const FVector_NetQuantize Location) {
}

void AWarCharacter::MulticastPerformCallOut_Implementation(const EFactionId FactionId, const int8 CalloutInfoIndex) {
}

bool AWarCharacter::IsPawnVisible(const APawn* TargetPawn) const {
    return false;
}

void AWarCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWarCharacter, ReplicatedTemperature);
    DOREPLIFETIME(AWarCharacter, ReplicatedMuddyness);
    DOREPLIFETIME(AWarCharacter, PlayerFlags);
}


