#pragma once
#include "CoreMinimal.h"
#include "InviteToRegimentMessage.generated.h"

USTRUCT(BlueprintType)
struct FInviteToRegimentMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InviterRegimentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InviterOnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InviterPlayerName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 InviterFactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegimentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegimentTag;
    
    WAR_API FInviteToRegimentMessage();
};

