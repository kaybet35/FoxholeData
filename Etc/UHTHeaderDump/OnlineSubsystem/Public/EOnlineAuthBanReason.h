#pragma once
#include "CoreMinimal.h"
#include "EOnlineAuthBanReason.generated.h"

UENUM(BlueprintType)
enum class EOnlineAuthBanReason : uint8 {
    AutomatedSystemBan,
    SystemBanCheckTimedOut,
    GameBan,
    NotBanned,
};

