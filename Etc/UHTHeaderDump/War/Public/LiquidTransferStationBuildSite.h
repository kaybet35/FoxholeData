#pragma once
#include "CoreMinimal.h"
#include "FuelQuantity.h"
#include "StructureBuildSite.h"
#include "LiquidTransferStationBuildSite.generated.h"

UCLASS(Blueprintable)
class WAR_API ALiquidTransferStationBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFuelQuantity> FuelInputBuffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FFuelQuantity FuelOutputBuffer;
    
    ALiquidTransferStationBuildSite(const FObjectInitializer& ObjectInitializer);

};

