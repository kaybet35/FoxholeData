#pragma once
#include "CoreMinimal.h"
#include "EInteractiveObjectType.generated.h"

UENUM(BlueprintType)
enum class EInteractiveObjectType : uint8 {
    ItemPickup,
    LargeItemPickup,
    BuildableStructure,
    DeployedStructure,
    StructureSeatTrigger,
    DestroyedStructure,
    StructureBuildSite,
    Vehicle,
    VehicleSeatTrigger,
    UseComponent,
    TravelBorder,
    Ladder,
    Character,
    VehicleAccessBox,
    Invalid,
};

