#include "RPCWeatherConnectResponse.h"

FRPCWeatherConnectResponse::FRPCWeatherConnectResponse() {
    this->TargetLocalID = 0;
    this->Result = EWeatherStationResult::Success;
}

