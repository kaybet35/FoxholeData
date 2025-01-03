#pragma once
#include "CoreMinimal.h"
#include "FortConnector.h"
#include "ConcreteFortConnector.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFortConnector : public AFortConnector {
    GENERATED_BODY()
public:
    AConcreteFortConnector(const FObjectInitializer& ObjectInitializer);

};

