#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ButtonStyle -FallbackName=ButtonStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "InfrastructureStyle.h"
#include "TechTreeComponentUIItem.h"
#include "InfrastructuresStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FInfrastructuresStyle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInfrastructureStyle Entries[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTechTreeComponentUIItem Items[22];
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush VoteBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle ActivityBonusButton;
    
    FInfrastructuresStyle();
};

