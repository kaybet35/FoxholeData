#pragma once
#include "CoreMinimal.h"
#include "DecayInfo.generated.h"

USTRUCT(BlueprintType)
struct FDecayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SaveGame, meta=(AllowPrivateAccess=true))
    float FractionalSuppliesConsumed;
    
    WAR_API FDecayInfo();
};

