#include "Seaport.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "CraneSpawnLocationComponent.h"
#include "PersistentProxyComponent.h"
#include "TeamFlagMeshComponent.h"

ASeaport::ASeaport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TransferLocation2 = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation2"));
    this->CraneSpawnLocationComponent2 = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent2"));
    this->ProxyLoadingDockComponent = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("ProxyLoadingDockComponent"));
    this->PassengerUnloadingArea1 = CreateDefaultSubobject<UBoxComponent>(TEXT("PassengerUnloadingArea1"));
    this->PassengerUnloadingArea2 = CreateDefaultSubobject<UBoxComponent>(TEXT("PassengerUnloadingArea2"));
    this->LadderLocationSeaport1 = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocationSeaport1"));
    this->LadderLocationSeaport2 = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocationSeaport2"));
    this->LadderLocationDock1 = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocationDock1"));
    this->LadderLocationDock2 = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocationDock2"));
    this->LadderType = NULL;
    this->FlagMesh = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("FlagMesh"));
    this->ProxyLoadingDockComponent->SetupAttachment(RootComponent);
    this->PassengerUnloadingArea1->SetupAttachment(RootComponent);
    this->PassengerUnloadingArea2->SetupAttachment(RootComponent);
    this->LadderLocationSeaport1->SetupAttachment(RootComponent);
    this->LadderLocationSeaport2->SetupAttachment(RootComponent);
    this->LadderLocationDock1->SetupAttachment(RootComponent);
    this->LadderLocationDock2->SetupAttachment(RootComponent);
    this->FlagMesh->SetupAttachment(RootComponent);
    this->TransferLocation2->SetupAttachment(RootComponent);
    this->CraneSpawnLocationComponent2->SetupAttachment(RootComponent);
}


