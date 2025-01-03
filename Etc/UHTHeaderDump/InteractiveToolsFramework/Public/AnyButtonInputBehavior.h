#pragma once
#include "CoreMinimal.h"
#include "InputBehavior.h"
#include "AnyButtonInputBehavior.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UAnyButtonInputBehavior : public UInputBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonNumber;
    
public:
    UAnyButtonInputBehavior();

};

