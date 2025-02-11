#pragma once
#include "CoreMinimal.h"
#include "EPlayerOnlineStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerOnlineStatus : uint8 {
    OnlineInRegion,
    Offline,
    TransferredRegion,
    ActiveElsewhere,
    MAX,
};

