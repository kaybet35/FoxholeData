#include "MainMenuPlayerController.h"

AMainMenuPlayerController::AMainMenuPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void AMainMenuPlayerController::RefreshShardStatus(const int32 ShardId) {
}


