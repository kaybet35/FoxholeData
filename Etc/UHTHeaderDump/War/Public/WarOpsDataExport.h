#pragma once
#include "CoreMinimal.h"
#include "WarOpsContent.h"
#include "WarOpsMap.h"
#include "WarOpsTech.h"
#include "WarOpsDataExport.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FWarOpsDataExport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString P4ChangeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StructureLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarOpsContent Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarOpsMap> Maps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarOpsTech> Techs;
    
    FWarOpsDataExport();
};

