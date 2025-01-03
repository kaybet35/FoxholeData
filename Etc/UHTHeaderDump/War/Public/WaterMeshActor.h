#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
#include "WaterMeshActor.generated.h"

UCLASS(Blueprintable)
class WAR_API AWaterMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    AWaterMeshActor(const FObjectInitializer& ObjectInitializer);

};

