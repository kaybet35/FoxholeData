#pragma once
#include "CoreMinimal.h"
#include "ConstructionEquipmentServerState.generated.h"

class ABuildSite;

USTRUCT(BlueprintType)
struct FConstructionEquipmentServerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABuildSite> TargetBuildSite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimestamp;
    
    WAR_API FConstructionEquipmentServerState();
};

