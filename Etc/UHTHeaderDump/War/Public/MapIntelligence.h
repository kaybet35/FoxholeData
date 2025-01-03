#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "MapIntelligenceTypeConfig.h"
#include "MapIntelligence.generated.h"

UCLASS(Blueprintable)
class WAR_API AMapIntelligence : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIntelligenceTypeConfig MapIntelligenceTypeConfigs[15];
    
public:
    AMapIntelligence(const FObjectInitializer& ObjectInitializer);

};

