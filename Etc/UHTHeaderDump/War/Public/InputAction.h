#pragma once
#include "CoreMinimal.h"
#include "EInputActionCategory.h"
#include "InputAction.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputActionCategory Category;
    
    FInputAction();
};

