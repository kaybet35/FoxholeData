#pragma once
#include "CoreMinimal.h"
#include "CreateSquadWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FCreateSquadWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    WAR_API FCreateSquadWarMessage();
};

