#pragma once
#include "CoreMinimal.h"
#include "MagicLeapHandMeshBlock.h"
#include "MagicLeapHandMesh.generated.h"

USTRUCT(BlueprintType)
struct FMagicLeapHandMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMagicLeapHandMeshBlock> Data;
    
    MAGICLEAPHANDMESHING_API FMagicLeapHandMesh();
};

