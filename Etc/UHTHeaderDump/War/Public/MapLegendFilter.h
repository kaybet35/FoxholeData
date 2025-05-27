#pragma once
#include "CoreMinimal.h"
#include "MapLegendFilter.generated.h"

USTRUCT(BlueprintType)
struct FMapLegendFilter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 VisibleCategories;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 VisibleIntelC;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 VisibleIntelW;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 VisibleIcons[12];
    
public:
    WAR_API FMapLegendFilter();
};

