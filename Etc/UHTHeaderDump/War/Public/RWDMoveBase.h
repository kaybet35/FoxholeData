#pragma once
#include "CoreMinimal.h"
#include "RWDMoveBase.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FRWDMoveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* MovementBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    WAR_API FRWDMoveBase();
};

