#pragma once
#include "CoreMinimal.h"
#include "FuelTank.h"
#include "StructureBuildSite.h"
#include "RocketFacilityBuildSite.generated.h"

UCLASS(Blueprintable)
class WAR_API ARocketFacilityBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FFuelTank FuelTank;
    
    ARocketFacilityBuildSite(const FObjectInitializer& ObjectInitializer);

};

