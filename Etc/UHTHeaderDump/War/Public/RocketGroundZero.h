#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "RocketGroundZero.generated.h"

UCLASS(Blueprintable)
class WAR_API ARocketGroundZero : public ATeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDuration;
    
public:
    ARocketGroundZero(const FObjectInitializer& ObjectInitializer);

};

