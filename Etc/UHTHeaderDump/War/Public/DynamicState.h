#pragma once
#include "CoreMinimal.h"
#include "EDynamicState.h"
#include "DynamicState.generated.h"

USTRUCT(BlueprintType)
struct FDynamicState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float OpenAnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float ClosedAnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EDynamicState State;
    
    WAR_API FDynamicState();
};

