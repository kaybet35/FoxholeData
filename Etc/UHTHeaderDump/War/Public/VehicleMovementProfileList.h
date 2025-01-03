#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "EVehicleMovementProfileType.h"
#include "VehicleMovementProfileData.h"
#include "VehicleMovementProfileList.generated.h"

UCLASS(Blueprintable)
class WAR_API AVehicleMovementProfileList : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVehicleMovementProfileType, FVehicleMovementProfileData> VehicleMovementProfileMap;
    
public:
    AVehicleMovementProfileList(const FObjectInitializer& ObjectInitializer);

};

