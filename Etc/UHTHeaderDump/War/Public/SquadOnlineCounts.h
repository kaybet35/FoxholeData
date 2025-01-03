#pragma once
#include "CoreMinimal.h"
#include "SquadOnlineCounts.generated.h"

USTRUCT(BlueprintType)
struct FSquadOnlineCounts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Active;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Inactive;
    
    WAR_API FSquadOnlineCounts();
};

