#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "FestivalRenderInfo.h"
#include "GlobalFestivalInfo.generated.h"

UCLASS(Blueprintable)
class WAR_API AGlobalFestivalInfo : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFestivalRenderInfo> RenderInfoMap;
    
public:
    AGlobalFestivalInfo(const FObjectInitializer& ObjectInitializer);

};

