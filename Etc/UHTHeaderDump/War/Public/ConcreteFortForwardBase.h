#pragma once
#include "CoreMinimal.h"
#include "FortForwardBase.h"
#include "ConcreteFortForwardBase.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFortForwardBase : public AFortForwardBase {
    GENERATED_BODY()
public:
    AConcreteFortForwardBase(const FObjectInitializer& ObjectInitializer);

};

