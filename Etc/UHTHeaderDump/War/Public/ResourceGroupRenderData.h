#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ResourceRenderInfo.h"
#include "ResourceGroupRenderData.generated.h"

UCLASS(Blueprintable)
class WAR_API UResourceGroupRenderData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResourceRenderInfo> Info;
    
    UResourceGroupRenderData();

};

