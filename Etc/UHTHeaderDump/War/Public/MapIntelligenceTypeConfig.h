#pragma once
#include "CoreMinimal.h"
#include "EMapIntelCategory.h"
#include "MapIntelligenceTypeIcon.h"
#include "MapIntelligenceTypeConfig.generated.h"

USTRUCT(BlueprintType)
struct FMapIntelligenceTypeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIntelCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpirySeconds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIntelligenceTypeIcon FactionIconBrush[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresPlayerLineOfSight;
    
    WAR_API FMapIntelligenceTypeConfig();
};

