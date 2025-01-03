#pragma once
#include "CoreMinimal.h"
#include "EActorLogEntryType.generated.h"

UENUM(BlueprintType)
enum class EActorLogEntryType : uint8 {
    None,
    BuildStarted,
    BuildComplete,
    Upgrade,
    TierUpgrade,
    AddedMod,
    RemovedMod,
    ChangedDirection,
    ChangedPipeValve,
    ChangedPowerState,
    ChangedPowerLine,
    ChangedSettings,
    FlaggedDisruptive,
    TransferredFuel,
    RepairStarted,
    RepairComplete,
    StockpileCreate,
    StockpileAccess,
    StockpileAccessReset,
    StockpileTransaction,
    StockpileTransferPublic,
    StockpileTransferReserve,
    Mounted,
    Unmounted,
    Fired,
    OrderQueued,
    OrderStarted,
    OrderExpired,
    OrderCompleted,
    Activated,
    SubmitPatient,
    RetrievePatient,
    ConvertPatient,
    MAX,
};

