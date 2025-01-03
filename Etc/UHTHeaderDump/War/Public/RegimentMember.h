#pragma once
#include "CoreMinimal.h"
#include "ERegimentRole.h"
#include "RegimentMember.generated.h"

USTRUCT(BlueprintType)
struct FRegimentMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERegimentRole Role;
    
    WAR_API FRegimentMember();
};

