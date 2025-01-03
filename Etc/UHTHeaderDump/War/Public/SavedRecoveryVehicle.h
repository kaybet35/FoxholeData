#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "SavedActor.h"
#include "SavedRecoveryVehicle.generated.h"

USTRUCT(BlueprintType)
struct FSavedRecoveryVehicle : public FSavedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastAutoSaveTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OriginatorBuildSiteName;
    
    WAR_API FSavedRecoveryVehicle();
};

