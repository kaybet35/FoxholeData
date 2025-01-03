#pragma once
#include "CoreMinimal.h"
#include "EMapIntelCategory.generated.h"

UENUM()
enum class EMapIntelCategory : uint16 {
    None,
    Infantry,
    Vehicles,
    Structures = 4,
    Defense = 8,
    Artillery = 16,
    FieldHospital = 32,
    Outpost = 64,
    Facility = 128,
    LargeShip = 256,
    All = 65535,
};

