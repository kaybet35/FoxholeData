#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "EVehicleProfileType.h"
#include "VehicleProfileData.h"
#include "VehicleProfileList.generated.h"

UCLASS(Blueprintable)
class WAR_API AVehicleProfileList : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVehicleProfileType, FVehicleProfileData> VehicleProfileMap;
    
public:
    AVehicleProfileList(const FObjectInitializer& ObjectInitializer);

};

