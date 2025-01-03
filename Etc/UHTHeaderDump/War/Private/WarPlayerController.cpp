#include "WarPlayerController.h"

AWarPlayerController::AWarPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bTravelRequestIsPending = false;
    this->bTravelRequestWasSuccessful = false;
    this->bTravelReservationIsPending = false;
    this->bTravelReservationIsComplete = false;
    this->bQueuedViaBorderTravel = false;
    this->bAllowedToContinueTravelling = false;
    this->WarBeaconClient = NULL;
}

void AWarPlayerController::ServerInitiateTravel_Implementation() {
}
bool AWarPlayerController::ServerInitiateTravel_Validate() {
    return true;
}

void AWarPlayerController::ServerClientTravelLoadComplete_Implementation() {
}
bool AWarPlayerController::ServerClientTravelLoadComplete_Validate() {
    return true;
}

void AWarPlayerController::SelectWarDrawDebugWorld() {
}

void AWarPlayerController::ClientTravelSuccess_Implementation(uint64 TravelId, FRegionConnectionInfo RegionConnectionInfo, float Delay) {
}

void AWarPlayerController::ClientTravelProgress_Implementation(uint32 NumPlayersConnected, uint32 NumPlayersTotal, float AdditionalDelay) {
}

void AWarPlayerController::ClientTravelPending_Implementation(int32 PendingTravelId, EWorldConquestMapId DestinationMapId) {
}

void AWarPlayerController::ClientTravelFailure_Implementation(ETravelResult Result, int32 PartySize) {
}

void AWarPlayerController::ClientTravelComplete_Implementation(uint64 TravelId, float InvulnerabilityDuration) {
}

void AWarPlayerController::ClientTravelArrived_Implementation(FTransform ReservationLocation) {
}

void AWarPlayerController::ClientQueueForTravel_Implementation(EWorldConquestMapId DestinationMapId, FRegionConnectionInfo RegionConnectionInfo) {
}


