#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "EWorldConquestMapId.h"
#include "WarOpsMapMarkerInstance.h"
#include "WarOpsStructureInstance.h"
#include "WarOpsMap.generated.h"

USTRUCT(BlueprintType)
struct FWarOpsMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint GridCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarOpsMapMarkerInstance> MapMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarOpsStructureInstance> Structures;
    
    WAR_API FWarOpsMap();
};

