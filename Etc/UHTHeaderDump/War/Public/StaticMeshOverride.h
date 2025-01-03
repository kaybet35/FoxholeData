#pragma once
#include "CoreMinimal.h"
#include "StaticMeshOverride.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FStaticMeshOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Override;
    
    WAR_API FStaticMeshOverride();
};

