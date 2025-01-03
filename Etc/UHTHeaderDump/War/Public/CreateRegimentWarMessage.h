#pragma once
#include "CoreMinimal.h"
#include "CreateRegimentWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FCreateRegimentWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Link;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 FactionId;
    
    WAR_API FCreateRegimentWarMessage();
};

