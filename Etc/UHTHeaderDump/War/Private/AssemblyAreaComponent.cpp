#include "AssemblyAreaComponent.h"
#include "Net/UnrealNetwork.h"

UAssemblyAreaComponent::UAssemblyAreaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->AnimationDuration = 0.00f;
    this->WaterAnimationDuration = 0.00f;
    this->WaterDepth = 0.00f;
    this->WaterMaterialOverrides[0] = NULL;
    this->WaterMaterialOverrides[1] = NULL;
    this->WaterMaterialOverrides[2] = NULL;
    this->WaterMaterialOverrides[3] = NULL;
    this->WaterMaterialOverrides[4] = NULL;
    this->WaterMaterialOverrides[5] = NULL;
    this->WaterMaterialOverrides[6] = NULL;
    this->WaterMaterialOverrides[7] = NULL;
    this->WaterMaterialOverrides[8] = NULL;
    this->WaterMaterialOverrides[9] = NULL;
    this->WaterMaterialOverrides[10] = NULL;
    this->WaterMaterialOverrides[11] = NULL;
    this->WaterMaterialOverrides[12] = NULL;
    this->WaterMaterialOverrides[13] = NULL;
    this->WaterMaterialOverrides[14] = NULL;
    this->WaterMaterialOverrides[15] = NULL;
    this->WaterMaterialOverrides[16] = NULL;
    this->WaterMaterialOverrides[17] = NULL;
    this->WaterMaterialOverrides[18] = NULL;
    this->WaterMaterialOverrides[19] = NULL;
    this->WaterMaterialOverrides[20] = NULL;
    this->WaterMaterialOverrides[21] = NULL;
    this->WaterMaterialOverrides[22] = NULL;
    this->WaterMaterialOverrides[23] = NULL;
    this->WaterMaterialOverrides[24] = NULL;
    this->WaterMaterialOverrides[25] = NULL;
    this->WaterMaterialOverrides[26] = NULL;
    this->WaterMaterialOverrides[27] = NULL;
    this->WaterMaterialOverrides[28] = NULL;
    this->WaterMaterialOverrides[29] = NULL;
    this->WaterMaterialOverrides[30] = NULL;
    this->WaterMaterialOverrides[31] = NULL;
    this->WaterMaterialOverrides[32] = NULL;
    this->WaterMaterialOverrides[33] = NULL;
    this->WaterMaterialOverrides[34] = NULL;
    this->WaterMaterialOverrides[35] = NULL;
    this->WaterMaterialOverrides[36] = NULL;
    this->WaterMaterialOverrides[37] = NULL;
    this->WaterMaterialOverrides[38] = NULL;
    this->WaterMaterialOverrides[39] = NULL;
    this->WaterMaterialOverrides[40] = NULL;
    this->WaterMaterialOverrides[41] = NULL;
    this->WaterMaterialOverrides[42] = NULL;
    this->WaterMaterialOverrides[43] = NULL;
    this->WaterMaterialOverrides[44] = NULL;
    this->WaterMaterialOverrides[45] = NULL;
    this->WaterMaterialOverrides[46] = NULL;
    this->WaterMaterialOverrides[47] = NULL;
    this->WaterMaterialOverrides[48] = NULL;
    this->WaterCullingComponent = NULL;
    this->WaterMeshComponent = NULL;
    this->WaterStencilComponent = NULL;
    this->WaterRaiseSFX = NULL;
    this->WaterLowerSFX = NULL;
    this->GateMovingSFX = NULL;
    this->GateStopSFX = NULL;
    this->GeneralAnimationSFX = NULL;
    this->WaterState = EAssemblyAreaWaterState::Raised;
    this->WaterLevel = 255;
}

void UAssemblyAreaComponent::OnRep_WaterState() {
}

void UAssemblyAreaComponent::OnRep_WaterLevel() {
}

void UAssemblyAreaComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAssemblyAreaComponent, WaterState);
    DOREPLIFETIME(UAssemblyAreaComponent, WaterLevel);
}


