#pragma once
#include "CoreMinimal.h"
#include "GetProfileResponse.h"
#include "PlayerBan.h"
#include "GetBanAndProfileResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetBanAndProfileResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBan PlayerBan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetProfileResponse ProfileResponse;
    
    WAR_API FGetBanAndProfileResponse();
};

