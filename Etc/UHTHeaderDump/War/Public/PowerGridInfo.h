#pragma once
#include "CoreMinimal.h"
#include "PowerGridInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPowerGridInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 PowerDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 MaxConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bAllowDisabling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerProvided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerConsumed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Connections[4];
    
private:
    UPROPERTY(EditAnywhere, NotReplicated, SaveGame, meta=(AllowPrivateAccess=true))
    FName ConnectionNames[4];
    
public:
    WAR_API FPowerGridInfo();
};

