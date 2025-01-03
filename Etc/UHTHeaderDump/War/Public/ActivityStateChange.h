#pragma once
#include "CoreMinimal.h"
#include "ECharacterActivityState.h"
#include "ActivityStateChange.generated.h"

USTRUCT(BlueprintType)
struct FActivityStateChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LastAckedSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterActivityState State;
    
    WAR_API FActivityStateChange();
};

