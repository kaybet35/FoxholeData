#pragma once
#include "CoreMinimal.h"
#include "EJoinWarResponse.generated.h"

UENUM(BlueprintType)
enum class EJoinWarResponse : uint8 {
    Success,
    AskToJoinModQueue,
    Banned,
    TooManyLogins,
    NoFactionSwitch,
    FactionLockedSelfServeUnlockAvailable,
    FactionLimitReached,
    EarlyWarRestricted,
    TravelGroupSizeTooLarge,
    TravelGroupHasEnemy,
    UnknownError,
    EnteringQueueDisabled,
    InvalidFaction,
    ConquestPending,
    VersionCheckFailed,
    OfflineCharacterUnavailable,
    TravelPointAtBorder,
    TravelPointAtCapacity,
    TravelPointDestroyed,
    TravelPointLacksGarrisonSize,
    TravelOnCooldown,
    ReservedButFull,
    EnteringQueueDisabledShardVipMode,
    EnteringQueueDisabledLocalVipMode,
};

