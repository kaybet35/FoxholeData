#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "EPermissionLevel.h"
#include "EWorldConquestMapId.h"
#include "PlayerServerData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId RegionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPermissionLevel PermissionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    WAR_API FPlayerServerData();
};

