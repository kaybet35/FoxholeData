#include "TunnelNode.h"
#include "Net/UnrealNetwork.h"

ATunnelNode::ATunnelNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisibilityTraceOffsetZ = 50.00f;
    this->bAggroSingleStructureOnDamage = false;
    this->TunnelNodeType = ETunnelNodeType::Terminal;
    this->bCanBeHidden = false;
    this->TunnelConnectionState = ETunnelConnectionState::DisconnectedStarved;
}

void ATunnelNode::OnRep_TunnelConnectionState() {
}

void ATunnelNode::BPSetTunnelConnectionStateVisuals_Implementation(const ETunnelConnectionState NewTunnelConnectionState) {
}

void ATunnelNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATunnelNode, TunnelConnectionState);
}


