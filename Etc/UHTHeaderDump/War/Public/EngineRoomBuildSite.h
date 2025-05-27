#pragma once
#include "CoreMinimal.h"
#include "FacilityRefineryBuildSite.h"
#include "EngineRoomBuildSite.generated.h"

UCLASS(Blueprintable)
class WAR_API AEngineRoomBuildSite : public AFacilityRefineryBuildSite {
    GENERATED_BODY()
public:
    AEngineRoomBuildSite(const FObjectInitializer& ObjectInitializer);

};

