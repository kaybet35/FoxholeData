#pragma once
#include "CoreMinimal.h"
#include "LoadoutData.h"
#include "LoadoutSaveData.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FLoadoutData> LoadoutDataC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FLoadoutData> LoadoutDataW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SelectedLoadoutIndexC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SelectedLoadoutIndexW;
    
    WAR_API FLoadoutSaveData();
};

