#pragma once
#include "CoreMinimal.h"
#include "LiquidTank.h"
#include "TeamStructure.h"
#include "Pipeline.generated.h"

class UBuildSocketComponent;
class UModificationSlotComponent;
class USplineConnectorComponent;

UCLASS(Blueprintable)
class WAR_API APipeline : public ATeamStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineConnectorComponent* SplineConnector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModificationSlotComponent* UpgradeSlotComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* BackSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* FrontSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* LeftSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* RightSocket;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FLiquidTank LiquidTank;
    
    APipeline(const FObjectInitializer& ObjectInitializer);

};

