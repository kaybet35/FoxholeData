#pragma once
#include "CoreMinimal.h"
#include "SquadMessageWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FSquadMessageWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Language;
    
    WAR_API FSquadMessageWarMessage();
};

