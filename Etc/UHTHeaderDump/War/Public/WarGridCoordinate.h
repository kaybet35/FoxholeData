#pragma once
#include "CoreMinimal.h"
#include "WarGridCoordinate.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FWarGridCoordinate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int16 Letter;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int16 Number;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int8 KeypadX;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int8 KeypadY;
    
    FWarGridCoordinate();
};

