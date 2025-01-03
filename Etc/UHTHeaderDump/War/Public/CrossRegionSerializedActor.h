#pragma once
#include "CoreMinimal.h"
#include "CrossRegionSerializedActor.generated.h"

USTRUCT(BlueprintType)
struct FCrossRegionSerializedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ActorBytes;
    
    WAR_API FCrossRegionSerializedActor();
};

