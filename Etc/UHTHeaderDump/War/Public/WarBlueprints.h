#pragma once
#include "CoreMinimal.h"
#include "WarBlueprints.generated.h"

class UObjectLibrary;

USTRUCT(BlueprintType)
struct FWarBlueprints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* ItemPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* Modifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* Structures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* Vehicles;
    
    WAR_API FWarBlueprints();
};

