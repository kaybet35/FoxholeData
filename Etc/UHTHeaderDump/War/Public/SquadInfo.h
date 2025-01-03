#pragma once
#include "CoreMinimal.h"
#include "SquadInfo.generated.h"

USTRUCT(BlueprintType)
struct FSquadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderOnlineID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 OnlineActiveCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 OnlineInactiveCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 AccessLevel;
    
    WAR_API FSquadInfo();
};

