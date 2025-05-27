#include "PipelineSilo.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

APipelineSilo::APipelineSilo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_Awake;
    this->ProfileType = EStructureProfileType::FieldLogiStructure;
    this->bIsBuiltOnFoundation = true;
    this->bIsConnector = false;
    this->bIsManualConnector = false;
    this->bUsesImpactsMaterial = false;
    const FProperty* p_SplineConnector = GetClass()->FindPropertyByName("SplineConnector");
    (*p_SplineConnector->ContainerPtrToValuePtr<USplineConnectorComponent*>(this)) = NULL;
    this->VisibleMeshes = 0;
}

void APipelineSilo::OnRep_VisibleMeshes() {
}

void APipelineSilo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APipelineSilo, VisibleMeshes);
}


