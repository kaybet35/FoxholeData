#pragma once
#include "CoreMinimal.h"
#include "EBanReason.h"
#include "EViolationLogType.h"
#include "ViolationEvent.generated.h"

USTRUCT(BlueprintType)
struct FViolationEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EViolationLogType LogType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBanReason Reason;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DurationMins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstigatorOnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rtk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rtd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rsd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rvd;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Rnc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Note;
    
    WAR_API FViolationEvent();
};

