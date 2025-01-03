#include "FestivalPortal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"

AFestivalPortal::AFestivalPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeleportLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Teleport Location"));
    this->TeleportLocation->SetupAttachment(RootComponent);
}

void AFestivalPortal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFestivalPortal, Name);
    DOREPLIFETIME(AFestivalPortal, Destination);
}


