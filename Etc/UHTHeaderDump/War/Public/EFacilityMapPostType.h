#pragma once
#include "CoreMinimal.h"
#include "EFacilityMapPostType.generated.h"

UENUM()
enum class EFacilityMapPostType : int8 {
    None,
    General,
    Vehicle,
    Resource,
    Material,
    Crate,
    Fuel,
    MAX,
};

