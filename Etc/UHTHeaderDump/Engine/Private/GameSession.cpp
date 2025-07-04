#include "GameSession.h"

AGameSession::AGameSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSpectators = 2;
    this->MaxPlayers = 140;
    this->MaxPartySize = -1;
    this->MaxSplitscreensPerConnection = 4;
    this->bRequiresPushToTalk = true;
}


