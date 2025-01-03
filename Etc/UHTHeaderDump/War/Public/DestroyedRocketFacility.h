#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "FuelTank.h"
#include "DestroyedRocketFacility.generated.h"

UCLASS(Blueprintable)
class WAR_API ADestroyedRocketFacility : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FFuelTank FuelTank;
    
    ADestroyedRocketFacility(const FObjectInitializer& ObjectInitializer);

};

