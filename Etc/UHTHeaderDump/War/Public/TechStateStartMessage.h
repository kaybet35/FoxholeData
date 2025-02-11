#pragma once
#include "CoreMinimal.h"
#include "TechStateStartMessage.generated.h"

USTRUCT(BlueprintType)
struct FTechStateStartMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TechStateID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 DataUniqueID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 TeamId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Territory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsContested;
    
    WAR_API FTechStateStartMessage();
};

