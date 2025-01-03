#include "WarBeaconClient.h"

AWarBeaconClient::AWarBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AWarBeaconClient::ServerRequestQueueStatusUpdate_Implementation() {
}
bool AWarBeaconClient::ServerRequestQueueStatusUpdate_Validate() {
    return true;
}

void AWarBeaconClient::ServerLeaveQueue_Implementation() {
}
bool AWarBeaconClient::ServerLeaveQueue_Validate() {
    return true;
}

void AWarBeaconClient::ServerJoinQueue_Implementation(FWarBeaconJoinRequestData JoinRequestData) {
}
bool AWarBeaconClient::ServerJoinQueue_Validate(FWarBeaconJoinRequestData JoinRequestData) {
    return true;
}

void AWarBeaconClient::ClientUpdateQueueStatus_Implementation(const int32 NumPlayersAhead) {
}

void AWarBeaconClient::ClientPlayerIsBannedResponse_Implementation(const bool IsBanned, const int64 BanDurationTicks, const FBanReasonInfo& BanReasonInfo) {
}

void AWarBeaconClient::ClientOnServerTravelling_Implementation() {
}

void AWarBeaconClient::ClientOfflineCharacterExpired_Implementation() {
}

void AWarBeaconClient::ClientJoinServer_Implementation(const EFactionId TeamId) {
}

void AWarBeaconClient::ClientJoinQueueResponse_Implementation(const EJoinWarResponse JoinWarResponse) {
}


