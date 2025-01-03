#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "MuzzleOffsetVector_NetQuantize.h"
#include "CharacterInvokeInfo.generated.h"

USTRUCT(BlueprintType)
struct FCharacterInvokeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ImpactPoint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMuzzleOffsetVector_NetQuantize MuzzleOffset;
    
    WAR_API FCharacterInvokeInfo();
};

