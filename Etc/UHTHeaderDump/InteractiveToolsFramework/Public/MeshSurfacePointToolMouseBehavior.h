#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "MeshSurfacePointToolMouseBehavior.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMeshSurfacePointToolMouseBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UMeshSurfacePointToolMouseBehavior();

};

