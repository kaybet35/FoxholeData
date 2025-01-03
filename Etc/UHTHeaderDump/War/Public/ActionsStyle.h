#pragma once
#include "CoreMinimal.h"
#include "ActionStyle.h"
#include "ActionsStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FActionsStyle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionStyle AllStyles[63];
    
public:
    FActionsStyle();
};

