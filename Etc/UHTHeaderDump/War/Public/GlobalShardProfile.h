#pragma once
#include "CoreMinimal.h"
#include "CommendHistory.h"
#include "GlobalShardProfile.generated.h"

USTRUCT(BlueprintType)
struct FGlobalShardProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 CP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 CPToGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XPForCP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommendHistory> CommendHistories;
    
    WAR_API FGlobalShardProfile();
};

