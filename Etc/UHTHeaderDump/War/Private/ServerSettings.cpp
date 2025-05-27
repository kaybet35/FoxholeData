#include "ServerSettings.h"

UServerSettings::UServerSettings() {
    this->bFriendlyFire = true;
    this->bLoginRestrictions = true;
    this->bAllowMods = true;
    this->WelcomeMessage = FText::FromString(TEXT("Welcome to Foxhole! Remember to work together and follow the code of conduct."));
    this->MaxPlayers = 0;
    this->IsCommunityServer = false;
    this->ServerRegion = ERegionType::Global;
    this->GlobalRefineYieldModifier = 1.00f;
    this->SpawnInvulnerabilityTime = 3.00f;
    this->bEnableVehicleAFKTimeout = true;
    this->bEnableTravelPortalSearchFallback = false;
    this->bAdvertiseToSteam = false;
    this->bSelfServeFactionUnlockEnabled = true;
}


