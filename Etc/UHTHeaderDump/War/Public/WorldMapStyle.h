#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TextBlockStyle -FallbackName=TextBlockStyle
#include "WorldMapStyle.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct WAR_API FWorldMapStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush RegionAvailableIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush RegionQueuesIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush RegionContestedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush RegionFocusImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> RegionFocusAlphaCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> RegionFocusScaleCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TitleTextStyle;
    
    FWorldMapStyle();
};

