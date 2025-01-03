#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "EMapIconCategory.h"
#include "MapIconStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FMapIconStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideInSecureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTeamSpecificIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntelDetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfDetectionAngle;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FactionIconBrushes[3];
    
public:
    FMapIconStyle();
};

