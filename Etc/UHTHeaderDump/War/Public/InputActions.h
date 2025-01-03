#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "InputActions.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FInputActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FInputAction> Actions;
    
    FInputActions();
};

