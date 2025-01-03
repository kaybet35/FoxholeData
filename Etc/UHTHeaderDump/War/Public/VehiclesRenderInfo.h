#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "PhysicalMaterialResolver.h"
#include "VehiclesRenderInfo.generated.h"

UCLASS(Blueprintable)
class WAR_API AVehiclesRenderInfo : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicalMaterialResolver PhysicalMaterialResolver;
    
public:
    AVehiclesRenderInfo(const FObjectInitializer& ObjectInitializer);

};

