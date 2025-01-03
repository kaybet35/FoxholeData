#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "MeleeAttackData.h"
#include "MeleeDynamicData.generated.h"

USTRUCT(BlueprintType)
struct FMeleeDynamicData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargingMaxSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockingMaxSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeAttackData QuickAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeAttackData LongAttack;
    
    WAR_API FMeleeDynamicData();
};

