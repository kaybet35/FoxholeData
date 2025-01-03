#pragma once
#include "CoreMinimal.h"
#include "LocalShardProfileSerialized.generated.h"

USTRUCT(BlueprintType)
struct FLocalShardProfileSerialized {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> GameServerProfileBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastWarId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 OfflineCharacterExpiry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OfflineCharacterMapId;
    
    WAR_API FLocalShardProfileSerialized();
};

