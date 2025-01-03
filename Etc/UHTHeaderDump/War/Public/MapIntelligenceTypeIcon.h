#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "MapIntelligenceTypeIcon.generated.h"

USTRUCT(BlueprintType)
struct FMapIntelligenceTypeIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FadedIconBrush;
    
    WAR_API FMapIntelligenceTypeIcon();
};

