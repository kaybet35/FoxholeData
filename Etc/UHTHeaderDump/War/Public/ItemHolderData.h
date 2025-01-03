#pragma once
#include "CoreMinimal.h"
#include "ItemInstance.h"
#include "ItemHolderData.generated.h"

class UItemHolderComponent;

USTRUCT(BlueprintType)
struct FItemHolderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UItemHolderComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> Items;
    
    WAR_API FItemHolderData();
};

