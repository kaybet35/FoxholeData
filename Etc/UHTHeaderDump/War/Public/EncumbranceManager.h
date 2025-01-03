#pragma once
#include "CoreMinimal.h"
#include "EncumbranceModifiers.h"
#include "EncumbranceManager.generated.h"

USTRUCT(BlueprintType)
struct FEncumbranceManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableItemEncumbrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMudEncumbrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncumbranceModifiers EncumbranceModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentItemEncumbrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMudEncumbrance;
    
public:
    WAR_API FEncumbranceManager();
};

