#pragma once
#include "CoreMinimal.h"
#include "ReservePower.generated.h"

USTRUCT(BlueprintType)
struct FReservePower {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float MaxAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Amount;
    
    WAR_API FReservePower();
};

