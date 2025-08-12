#pragma once
#include "CoreMinimal.h"
#include "ELogChannel.generated.h"

UENUM(BlueprintType)
enum class ELogChannel : uint8 {
    WarServer,
    WarBans,
    WarLogins,
    WarLogouts,
    WarGameShare,
    WarTeamKills,
    WarMisc,
    WarVerify,
    WarCreate,
    WarChat,
    WarComms,
    WarVehicles,
};

