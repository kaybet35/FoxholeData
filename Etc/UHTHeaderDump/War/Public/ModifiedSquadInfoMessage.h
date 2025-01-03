#pragma once
#include "CoreMinimal.h"
#include "SquadInfo.h"
#include "ModifiedSquadInfoMessage.generated.h"

USTRUCT(BlueprintType)
struct FModifiedSquadInfoMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquadInfo SquadInfo;
    
    WAR_API FModifiedSquadInfoMessage();
};

