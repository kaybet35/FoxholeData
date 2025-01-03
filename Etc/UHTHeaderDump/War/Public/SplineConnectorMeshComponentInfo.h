#pragma once
#include "CoreMinimal.h"
#include "SplineConnectorMeshComponentInfo.generated.h"

class UMaterialInterface;
class UMeshComponent;

USTRUCT(BlueprintType)
struct FSplineConnectorMeshComponentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BuildGhostMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BuildSiteMaterialOverride;
    
    WAR_API FSplineConnectorMeshComponentInfo();
};

