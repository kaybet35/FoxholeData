#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PathSocket.generated.h"

class UBuildSocketComponent;

USTRUCT(BlueprintType)
struct FPathSocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float PackedAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBuildSocketComponent> Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle CleanupHandle;
    
    WAR_API FPathSocket();
};

