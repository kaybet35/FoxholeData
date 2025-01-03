#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EWorldConquestMapId.h"
#include "RocketLaunchCodeInfo.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FRocketLaunchCodeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId TargetMapID;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 LaunchCodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector StrikeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector LocalStrikeLocation;
    
    FRocketLaunchCodeInfo();
};

