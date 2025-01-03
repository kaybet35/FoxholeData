#pragma once
#include "CoreMinimal.h"
#include "MeleeAttackData.generated.h"

USTRUCT(BlueprintType)
struct FMeleeAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaCostNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    WAR_API FMeleeAttackData();
};

