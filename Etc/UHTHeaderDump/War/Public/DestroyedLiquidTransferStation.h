#pragma once
#include "CoreMinimal.h"
#include "DestroyedResourceTransferStation.h"
#include "FuelQuantity.h"
#include "DestroyedLiquidTransferStation.generated.h"

UCLASS(Blueprintable)
class WAR_API ADestroyedLiquidTransferStation : public ADestroyedResourceTransferStation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFuelQuantity> FuelBuffers;
    
    ADestroyedLiquidTransferStation(const FObjectInitializer& ObjectInitializer);

};

