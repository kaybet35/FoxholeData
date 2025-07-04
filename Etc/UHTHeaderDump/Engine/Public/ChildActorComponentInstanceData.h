#pragma once
#include "CoreMinimal.h"
#include "ChildActorAttachedActorInfo.h"
#include "SceneComponentInstanceData.h"
#include "ChildActorComponentInstanceData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FChildActorComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChildActorAttachedActorInfo> AttachedActors;
    
    FChildActorComponentInstanceData();
};

