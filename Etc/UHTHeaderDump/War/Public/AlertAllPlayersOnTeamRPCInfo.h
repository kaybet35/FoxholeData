#pragma once
#include "CoreMinimal.h"
#include "AlertAllPlayersOnTeamRPCInfo.generated.h"

USTRUCT(BlueprintType)
struct FAlertAllPlayersOnTeamRPCInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AlertText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration_Sec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    WAR_API FAlertAllPlayersOnTeamRPCInfo();
};

