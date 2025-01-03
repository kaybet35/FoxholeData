#pragma once
#include "CoreMinimal.h"
#include "EBuildLocationType.h"
#include "TeamStructure.h"
#include "ConstructionSite.generated.h"

class UBoxComponent;
class UCraneSpawnLocationComponent;

UCLASS(Blueprintable)
class WAR_API AConstructionSite : public ATeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildLocationType BuildLocationFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* GarageFootprintComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FullRepairCost;
    
public:
    AConstructionSite(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ValidateMapBuildLocation() const;
    
};

