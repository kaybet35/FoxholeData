#include "HeadlessPlayerController.h"

AHeadlessPlayerController::AHeadlessPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void AHeadlessPlayerController::ClientParseCommand_Implementation(const FString& CommandString) {
}


