#pragma once
#include "CoreMinimal.h"
#include "ExposedValueCopyRecord.h"
#include "ExposedValueHandler.generated.h"

class UFunction;
class UStructProperty;

USTRUCT(BlueprintType)
struct ENGINE_API FExposedValueHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoundFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExposedValueCopyRecord> CopyRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStructProperty* ValueHandlerNodeProperty;
    
    FExposedValueHandler();
};

