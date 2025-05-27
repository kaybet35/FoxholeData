#pragma once
#include "CoreMinimal.h"
#include "ETechComponentID.generated.h"

UENUM(BlueprintType)
enum class ETechComponentID : uint8 {
    None,
    T1Garrison,
    T2Garrison,
    T3Garrison,
    T1SupportBunkers,
    T3SupportBunkers,
    Deployment,
    AdvancedBunkers,
    CommandCenter,
    ListeningPost,
    Hospital,
    ProvisionalGarrison,
    SmallGarrison,
    LargeGarrison,
    Industry,
    Fortifications,
    ArtilleryShelter,
    RadioStation,
    OccupiedTown,
    ArtilleryGarrison,
    SafeHouse,
    TechAvailable,
    Count,
};

