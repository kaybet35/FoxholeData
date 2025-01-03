#include "VehicleDeploymentLogic.h"

FVehicleDeploymentLogic::FVehicleDeploymentLogic() {
    this->bRequiresDeployment = false;
    this->bRequiresHorizontalResetForUndeployment = false;
    this->bDeploymentAdjustsPitch = false;
    this->bUndeployingCountAsDeployed = false;
    this->UndeployedAngle = 0.00f;
    this->DeploymentTime = 0.00f;
    this->MaxGroundAngleDeviation = 0.00f;
    this->HorizontalResetSpeed = 0.00f;
    this->DeploymentState = EVehicleDeploymentState::Undeployed;
}

