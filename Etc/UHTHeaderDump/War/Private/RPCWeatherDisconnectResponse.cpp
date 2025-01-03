#include "RPCWeatherDisconnectResponse.h"

FRPCWeatherDisconnectResponse::FRPCWeatherDisconnectResponse() {
    this->TargetLocalID = 0;
    this->Result = EWeatherStationResult::Success;
}

