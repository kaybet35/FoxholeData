#pragma once
#include "CoreMinimal.h"
#include "MagicLeapPolygon.h"
#include "MagicLeapPlaneBoundary.generated.h"

USTRUCT(BlueprintType)
struct FMagicLeapPlaneBoundary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapPolygon Polygon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMagicLeapPolygon> Holes;
    
    MAGICLEAPPLANES_API FMagicLeapPlaneBoundary();
};

