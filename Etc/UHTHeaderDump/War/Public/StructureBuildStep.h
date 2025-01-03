#pragma once
#include "CoreMinimal.h"
#include "StructureBuildStep.generated.h"

USTRUCT(BlueprintType)
struct FStructureBuildStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextStructureCodeName;
    
    WAR_API FStructureBuildStep();
};

