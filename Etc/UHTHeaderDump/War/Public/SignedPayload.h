#pragma once
#include "CoreMinimal.h"
#include "SignedPayload.generated.h"

USTRUCT(BlueprintType)
struct FSignedPayload {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Signature[20];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Payload;
    
    WAR_API FSignedPayload();
};

