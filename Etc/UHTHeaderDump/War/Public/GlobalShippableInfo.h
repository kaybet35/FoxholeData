#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "ShippableRenderInfo.h"
#include "GlobalShippableInfo.generated.h"

UCLASS(Blueprintable)
class WAR_API AGlobalShippableInfo : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShippableRenderInfo SmallSizeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShippableRenderInfo NormalSizeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShippableRenderInfo LargeSizeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShippableRenderInfo ExtraLargeSizeConfig;
    
public:
    AGlobalShippableInfo(const FObjectInitializer& ObjectInitializer);

};

