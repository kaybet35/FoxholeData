#pragma once
#include "CoreMinimal.h"
#include "TechStateDataFormat.generated.h"

USTRUCT(BlueprintType)
struct FTechStateDataFormat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TechIndexToItemIndex;
    
    WAR_API FTechStateDataFormat();
};

