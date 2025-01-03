#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagicLeapPolygon.generated.h"

USTRUCT(BlueprintType)
struct FMagicLeapPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    MAGICLEAPPLANES_API FMagicLeapPolygon();
};

