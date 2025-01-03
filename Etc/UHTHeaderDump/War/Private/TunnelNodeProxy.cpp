#include "TunnelNodeProxy.h"
#include "EStructureProfileType.h"
#include "ETunnelNodeType.h"
#include "Net/UnrealNetwork.h"

ATunnelNodeProxy::ATunnelNodeProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CodeName = TEXT("TunnelNodeProxy");
    this->ProfileType = EStructureProfileType::FieldStructure;
    this->TunnelNodeType = ETunnelNodeType::Source;
    this->ProxyConnectionRange = 4000.00f;
}

void ATunnelNodeProxy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATunnelNodeProxy, ProxyConnectionRange);
}


