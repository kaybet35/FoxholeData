#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "Wall.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AWall : public ABuildableStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowStanding;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpgradeRequiresConnectedWalls;
    
public:
    AWall(const FObjectInitializer& ObjectInitializer);

};

