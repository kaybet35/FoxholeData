#pragma once
#include "CoreMinimal.h"
#include "RocketLaunchCodeRequest.generated.h"

class ARocketFacility;

USTRUCT(BlueprintType)
struct WAR_API FRocketLaunchCodeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARocketFacility* RocketFacility;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LaunchCodeID;
    
    FRocketLaunchCodeRequest();
};

