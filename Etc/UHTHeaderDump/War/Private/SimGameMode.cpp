#include "SimGameMode.h"
#include "RespawnSpectatorPawn.h"
#include "SimGameState.h"
#include "SimPlayerController.h"
#include "SimPlayerState.h"
#include "WarHUD.h"

ASimGameMode::ASimGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = ASimGameState::StaticClass();
    this->PlayerControllerClass = ASimPlayerController::StaticClass();
    this->PlayerStateClass = ASimPlayerState::StaticClass();
    this->HUDClass = AWarHUD::StaticClass();
    this->SpectatorClass = ARespawnSpectatorPawn::StaticClass();
    this->bUseSeamlessTravel = true;
    this->bStartPlayersAsSpectators = true;
    this->bPauseable = false;
    this->DefaultAutoSavePeriod = 0.00f;
    this->DefaultBotClass = NULL;
    this->CurrentVehicleID = 0;
    this->PlayerProfileManager = NULL;
}

void ASimGameMode::HeadlessServerCommand(const FString& Command) {
}

void ASimGameMode::HeadlessCommand(const FString& Command) {
}


