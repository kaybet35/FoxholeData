#pragma once
#include "CoreMinimal.h"
#include "EBanReason.h"
#include "DeviceIdBanRequest.generated.h"

USTRUCT(BlueprintType)
struct FDeviceIdBanRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetDeviceId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BanDurationSec;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UnderReviewDurationSec;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBanReason BanReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminPlayerName;
    
    WAR_API FDeviceIdBanRequest();
};

