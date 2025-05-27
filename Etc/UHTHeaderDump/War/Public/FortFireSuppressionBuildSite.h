#pragma once
#include "CoreMinimal.h"
#include "FuelTank.h"
#include "StructureBuildSite.h"
#include "FortFireSuppressionBuildSite.generated.h"

UCLASS(Blueprintable)
class WAR_API AFortFireSuppressionBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FFuelTank WaterTank;
    
    AFortFireSuppressionBuildSite(const FObjectInitializer& ObjectInitializer);

};

