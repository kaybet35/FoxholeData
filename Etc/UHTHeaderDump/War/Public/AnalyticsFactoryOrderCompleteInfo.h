#pragma once
#include "CoreMinimal.h"
#include "EFactoryOrderAccess.h"
#include "SpecializedFactoryOrderItem.h"
#include "AnalyticsFactoryOrderCompleteInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsFactoryOrderCompleteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecializedFactoryOrderItem> OrderItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactoryOrderAccess AccessLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SquadId;
    
    WAR_API FAnalyticsFactoryOrderCompleteInfo();
};

