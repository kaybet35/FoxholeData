#pragma once
#include "CoreMinimal.h"
#include "BuildFootprintInfo.generated.h"

USTRUCT(BlueprintType)
struct FBuildFootprintInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckForLandscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckForObstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IgnoreMask;
    
    WAR_API FBuildFootprintInfo();
};

