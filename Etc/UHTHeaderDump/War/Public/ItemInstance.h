#pragma once
#include "CoreMinimal.h"
#include "ItemInstance.generated.h"

class AItemPickup;
class UItemComponent;

USTRUCT(BlueprintType)
struct FItemInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItemPickup* PickupCDO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItemComponent* ItemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int8 StackSize;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 Payload;
    
    UPROPERTY(EditAnywhere, NotReplicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 HolderId;
    
    WAR_API FItemInstance();
};

