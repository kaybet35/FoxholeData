#pragma once
#include "CoreMinimal.h"
#include "TreadData.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FTreadData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackMaterialIndices[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackLength;
    
    FTreadData();
};

