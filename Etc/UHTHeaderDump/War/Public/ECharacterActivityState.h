#pragma once
#include "CoreMinimal.h"
#include "ECharacterActivityState.generated.h"

UENUM(BlueprintType)
enum class ECharacterActivityState : uint8 {
    Idle,
    Equipping,
    UnEquipping,
    Firing,
    Reloading,
    ToProne,
    Throwing,
    Dying,
    UsingBinoculars,
    KarateAttack,
    PlacingBuildSite,
    Vaulting,
    Climbing,
    WallClimbing,
    PullingPin,
    DoWork,
    Wheelbarrow,
    Deploying,
    ShortWallStep,
    UsingBandages,
    ApplyingFirstAid,
    EncumberedFall,
    Wounded,
    WoundedRecover,
    Revive,
    Retrieving,
    LightingBomb,
    PlacingBomb,
    AttachingAccessory,
    DettachingAccessory,
    SlowWounds,
    SlowWoundsComplete,
    SwitchingSeats,
    EnterLadderBottom,
    EnterLadderTop,
    ExitLadderBottom,
    ExitLadderTop,
    FromProne,
    EmoteGoFoward,
    EmoteHalt,
    EmoteSalute,
    EmoteWave,
    EmoteRallyPoint,
    EmoteSurrender,
    EmoteCheer,
    EnteringVehicle,
    ZombieAttack,
    CommanderFiring,
    EnteringStructure,
    EngineerRepair,
    ExitingVehicle,
    TransmittingLaunchCodes,
    Packaging,
    ZombieSpawning,
    Excavating,
    Modifying,
    DeployingLargeItem,
    UsingSoulstone,
    ZombieSecondaryT2,
    ZombieSecondaryT3,
    WoundedCarried,
    Freezing,
    AdjustingValve,
    FiremanShovel,
    ShipFlagInteraction,
    TransferringTorpedo,
    MeleeCharging,
    MeleeAttackQuick,
    MeleeAttackLong,
    DetachLargeItem,
    MAX,
};

