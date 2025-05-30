#pragma once
#include "CoreMinimal.h"
#include "EStructureProfileType.generated.h"

UENUM(BlueprintType)
enum class EStructureProfileType : uint8 {
    Default,
    GarrisonHouse,
    BuildSite,
    DestroyedFort,
    DestroyedFortBase,
    DestroyedForwardBase,
    VehicleProxy,
    ResourceField,
    ResourceMine,
    ItemStash,
    DeployableWeapon,
    ForwardBase,
    LogiStructure,
    StaticBase,
    DestroyedStructure,
    DestroyedRuinableStructure,
    Shippable,
    LogiStructureWithValuableStorage,
    FieldGate,
    FieldDefenseStructure,
    FieldLogiStructure,
    FieldStructure,
    Bridge,
    FortForwardBase,
    FortUpgrade,
    FortRotatableUpgrade,
    Fort,
    FortBase,
    Trench,
    SignPost,
    GenericWorldStructure,
    EmplacedWeapon,
    EmplacedArtillery,
    MiscellaneousDefault,
    Crater,
    EmplacementHouse,
    BorderBase,
    Fill,
    FieldBridge,
    RocketMisc,
    FortRotatableUpgradeRestricted,
    LandMine,
    Count,
};

