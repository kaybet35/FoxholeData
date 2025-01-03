#pragma once
#include "CoreMinimal.h"
#include "PurchaseType.h"
#include "PurchaseConfirmation.generated.h"

USTRUCT(BlueprintType)
struct FPurchaseConfirmation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PurchaseType Type;
    
    MAGICLEAP_API FPurchaseConfirmation();
};

