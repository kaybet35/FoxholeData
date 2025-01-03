#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "RoomLeak.h"
#include "RoomLeakArray.generated.h"

USTRUCT(BlueprintType)
struct FRoomLeakArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FRoomLeak> Items;
    
    WAR_API FRoomLeakArray();
};

