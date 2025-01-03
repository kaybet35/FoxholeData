#pragma once
#include "CoreMinimal.h"
#include "CodeNameQuantity.h"
#include "EAccessLevel.h"
#include "EFacilityRefineryOrderState.h"
#include "FuelQuantity.h"
#include "FacilityRefineryOrder.generated.h"

USTRUCT(BlueprintType)
struct FFacilityRefineryOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SaveGame, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCodeNameQuantity> Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCodeNameQuantity> CrateInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFuelQuantity> FuelInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCodeNameQuantity> Output;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCodeNameQuantity> CrateOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFuelQuantity> FuelOutput;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int8 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EAccessLevel AccessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasConsumedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EFacilityRefineryOrderState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float ConsumeAmountModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float ProgressNormalized;
    
    UPROPERTY(EditAnywhere, NotReplicated, SaveGame, meta=(AllowPrivateAccess=true))
    int64 LastUseTime;
    
    WAR_API FFacilityRefineryOrder();
};

