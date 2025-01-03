#include "Ladder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "LadderComponent.h"

ALadder::ALadder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->LadderComponent = CreateDefaultSubobject<ULadderComponent>(TEXT("Ladder"));
    this->BoxCollision = (UBoxComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ClimbVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("ClimbVolume"));
    this->ClimbVolumeTop = CreateDefaultSubobject<UBoxComponent>(TEXT("ClimbVolumeTop"));
    this->EnterPositionBottom = CreateDefaultSubobject<USceneComponent>(TEXT("EnterPositionBottom"));
    this->EnterPositionTop = CreateDefaultSubobject<USceneComponent>(TEXT("EnterPositionTop"));
    this->LadderComponent->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->ClimbVolume->SetupAttachment(RootComponent);
    this->ClimbVolumeTop->SetupAttachment(RootComponent);
    this->EnterPositionBottom->SetupAttachment(RootComponent);
    this->EnterPositionTop->SetupAttachment(RootComponent);
}


