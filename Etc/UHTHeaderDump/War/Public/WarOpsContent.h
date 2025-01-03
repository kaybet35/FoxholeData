#pragma once
#include "CoreMinimal.h"
#include "WarOpsItem.h"
#include "WarOpsStructure.h"
#include "WarOpsVehicle.h"
#include "WarOpsContent.generated.h"

USTRUCT(BlueprintType)
struct FWarOpsContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarOpsItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarOpsStructure> Structures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarOpsVehicle> Vehicles;
    
    WAR_API FWarOpsContent();
};

