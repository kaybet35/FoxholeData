#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "ClaimStatus.generated.h"

USTRUCT(BlueprintType)
struct FClaimStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowReclaim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeDemolished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBuildSiteBeDemolished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 ClaimTime;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int64 OriginalBuildTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ClaimDurationHours;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 DemolishDurationHours;
    
    WAR_API FClaimStatus();
};

