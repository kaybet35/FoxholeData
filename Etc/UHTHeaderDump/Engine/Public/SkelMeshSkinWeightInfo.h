#pragma once
#include "CoreMinimal.h"
#include "SkelMeshSkinWeightInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkelMeshSkinWeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Bones[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Weights[8];
    
    ENGINE_API FSkelMeshSkinWeightInfo();
};

