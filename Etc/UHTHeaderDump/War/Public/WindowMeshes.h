#pragma once
#include "CoreMinimal.h"
#include "WindowMeshes.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct WAR_API FWindowMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Colonial[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Warden[3];
    
    FWindowMeshes();
};

