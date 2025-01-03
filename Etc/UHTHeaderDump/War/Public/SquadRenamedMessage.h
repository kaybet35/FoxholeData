#pragma once
#include "CoreMinimal.h"
#include "SquadRenamedMessage.generated.h"

USTRUCT(BlueprintType)
struct FSquadRenamedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    WAR_API FSquadRenamedMessage();
};

