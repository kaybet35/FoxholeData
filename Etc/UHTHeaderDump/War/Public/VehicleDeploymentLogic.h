#pragma once
#include "CoreMinimal.h"
#include "EVehicleDeploymentState.h"
#include "VehicleDeploymentLogic.generated.h"

USTRUCT(BlueprintType)
struct FVehicleDeploymentLogic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bRequiresDeployment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bRequiresHorizontalResetForUndeployment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bDeploymentAdjustsPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bUndeployingCountAsDeployed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float UndeployedAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float DeploymentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float MaxGroundAngleDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float HorizontalResetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleDeploymentState DeploymentState;
    
    WAR_API FVehicleDeploymentLogic();
};

