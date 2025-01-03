#include "MainMenuGameMode.h"
#include "MainMenuPlayerController.h"
#include "WarBaseHUD.h"

AMainMenuGameMode::AMainMenuGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AMainMenuPlayerController::StaticClass();
    this->HUDClass = AWarBaseHUD::StaticClass();
}


