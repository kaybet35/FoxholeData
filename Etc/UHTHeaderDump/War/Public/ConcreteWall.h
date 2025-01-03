#pragma once
#include "CoreMinimal.h"
#include "Wall.h"
#include "ConcreteWall.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AConcreteWall : public AWall {
    GENERATED_BODY()
public:
    AConcreteWall(const FObjectInitializer& ObjectInitializer);

};

