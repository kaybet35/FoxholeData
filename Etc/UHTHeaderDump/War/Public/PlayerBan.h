#pragma once
#include "CoreMinimal.h"
#include "EBanReason.h"
#include "PlayerBan.generated.h"

USTRUCT(BlueprintType)
struct FPlayerBan {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BanLiftTimeUnix;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UnderReviewLiftTimeUnix;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBanReason BanReason;
    
    WAR_API FPlayerBan();
};

