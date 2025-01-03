#pragma once
#include "CoreMinimal.h"
#include "EBanReason.h"
#include "BanReasonInfo.generated.h"

USTRUCT(BlueprintType)
struct FBanReasonInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBanReason BanReason;
    
    WAR_API FBanReasonInfo();
};

