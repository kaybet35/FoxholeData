#include "SteamSocketsNetDriver.h"

USteamSocketsNetDriver::USteamSocketsNetDriver() {
    this->NetConnectionClassName = TEXT("/Script/SteamSockets.SteamSocketsNetConnection");
    this->ChannelDefinitions.AddDefaulted(3);
}


