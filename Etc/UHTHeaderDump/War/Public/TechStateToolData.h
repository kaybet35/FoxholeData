#pragma once
#include "CoreMinimal.h"
#include "TechStateDataFormat.h"
#include "TechStateToolData.generated.h"

USTRUCT(BlueprintType)
struct FTechStateToolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MapNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TechNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTechStateDataFormat> Formats;
    
    WAR_API FTechStateToolData();
};

