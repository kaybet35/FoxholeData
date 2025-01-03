#include "FuelSilo.h"
#include "BuildSocketComponent.h"
#include "Net/UnrealNetwork.h"

AFuelSilo::AFuelSilo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreFriendlyFire = true;
    this->bIsBuiltOnFoundation = true;
    this->bCanBeFlaggedForDisruptivePlacement = true;
    this->PipeInput0 = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PipeInput0"));
    this->PipeOutput0 = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PipeOutput0"));
    this->PipeInput0->SetupAttachment(RootComponent);
    this->PipeOutput0->SetupAttachment(RootComponent);
}

void AFuelSilo::OnRep_LiquidTank() {
}

void AFuelSilo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFuelSilo, LiquidTank);
}


