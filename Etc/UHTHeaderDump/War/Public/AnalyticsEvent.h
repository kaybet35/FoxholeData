#pragma once
#include "CoreMinimal.h"
#include "EAnalyticsAccessLevel.h"
#include "EAnalyticsEventType.h"
#include "EWorldConquestMapId.h"
#include "AnalyticsEvent.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WarId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnalyticsEventType EventType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UnixTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnalyticsAccessLevel AccessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldPosX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldPosY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldPosZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JsonPayload;
    
    WAR_API FAnalyticsEvent();
};

