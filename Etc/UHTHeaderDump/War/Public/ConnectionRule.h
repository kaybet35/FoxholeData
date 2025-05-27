#pragma once
#include "CoreMinimal.h"
#include "ESocketDirection.h"
#include "ConnectionRule.generated.h"

USTRUCT(BlueprintType)
struct FConnectionRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirectional;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESocketDirection Direction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SocketTypeMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ShowsTags;
    
    WAR_API FConnectionRule();
};

