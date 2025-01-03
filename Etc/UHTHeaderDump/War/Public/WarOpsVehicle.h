#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "ETechID.h"
#include "WarOpsVehicle.generated.h"

USTRUCT(BlueprintType)
struct FWarOpsVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionVariant;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETechID TechID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBePrototyped;
    
    WAR_API FWarOpsVehicle();
};

