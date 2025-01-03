#pragma once
#include "CoreMinimal.h"
#include "EWeatherStationResult.generated.h"

UENUM(BlueprintType)
enum class EWeatherStationResult : uint8 {
    Success,
    Error,
    NotEnoughPower,
    AlreadyActive,
    CantConnectToSelf,
    CantConnectTooFar,
    AlreadyConnected,
    AlreadyConnectedToOther,
    AlreadyDisconnected,
    AlreadyReceivingConnection,
    NoValidTarget,
    ConnectedToNetwork,
    DisconnectedFromNetwork,
    MustBeIdle,
    TryAgainSoon,
};

