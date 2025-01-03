#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "SurfaceMovementData.h"
#include "GlobalMovementModifiersInfo.generated.h"

UCLASS(Blueprintable)
class WAR_API AGlobalMovementModifiersInfo : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSurfaceMovementData> VehicleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSurfaceMovementData> MotorboatData;
    
    AGlobalMovementModifiersInfo(const FObjectInitializer& ObjectInitializer);

};

