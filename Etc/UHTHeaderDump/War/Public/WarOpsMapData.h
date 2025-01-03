#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WarOpsMap.h"
#include "WarOpsMapData.generated.h"

UCLASS(Blueprintable)
class WAR_API UWarOpsMapData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarOpsMap Map;
    
    UWarOpsMapData();

};

