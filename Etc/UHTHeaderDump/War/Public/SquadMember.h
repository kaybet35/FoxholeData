#pragma once
#include "CoreMinimal.h"
#include "SquadMember.generated.h"

USTRUCT(BlueprintType)
struct FSquadMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOfficer;
    
    WAR_API FSquadMember();
};

