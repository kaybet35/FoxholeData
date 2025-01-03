#pragma once
#include "CoreMinimal.h"
#include "FacilityLightRenderInfo.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FFacilityLightRenderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    WAR_API FFacilityLightRenderInfo();
};

