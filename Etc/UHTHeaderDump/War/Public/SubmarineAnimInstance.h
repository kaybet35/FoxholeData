#pragma once
#include "CoreMinimal.h"
#include "EDynamicState.h"
#include "LargeShipAnimInstance.h"
#include "SubmarineAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API USubmarineAnimInstance : public ULargeShipAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicState HatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicState LeftTorpedoTubeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicState RightTorpedoTubeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivePlaneAngle;
    
    USubmarineAnimInstance();

};

