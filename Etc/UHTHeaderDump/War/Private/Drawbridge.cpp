#include "Drawbridge.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EArmourType.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"
#include "PersistentProxyComponent.h"

ADrawbridge::ADrawbridge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::Bridge;
    this->ArmourType = EArmourType::Tier3Structure;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Custom;
    this->SideAMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SideAMesh"));
    this->SideBMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SideBMesh"));
    this->SideALeverMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SideALeverMesh"));
    this->SideBLeverMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SideBLeverMesh"));
    this->SideAUseArea = CreateDefaultSubobject<UBoxComponent>(TEXT("SideAUseArea"));
    this->SideBUseArea = CreateDefaultSubobject<UBoxComponent>(TEXT("SideBUseArea"));
    this->SideAProxy = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("SideAProxy"));
    this->SideBProxy = CreateDefaultSubobject<UPersistentProxyComponent>(TEXT("SideBProxy"));
    this->SideBottomUseArea = CreateDefaultSubobject<UBoxComponent>(TEXT("SideBottomUseArea"));
    this->AboveBlockingArea = CreateDefaultSubobject<UBoxComponent>(TEXT("AboveBlockingArea"));
    this->AboveBlockingVolumeA = CreateDefaultSubobject<UBoxComponent>(TEXT("AboveBlockingVolumeA"));
    this->AboveBlockingVolumeB = CreateDefaultSubobject<UBoxComponent>(TEXT("AboveBlockingVolumeB"));
    this->BelowBlockingArea = CreateDefaultSubobject<UBoxComponent>(TEXT("BelowBlockingArea"));
    this->BelowBlockingVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BelowBlockingVolume"));
    this->SwitchSound = NULL;
    this->OpenedSound = NULL;
    this->ClosedSound = NULL;
    this->MovingLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("MovingLoop"));
    this->Ladder1Location = CreateDefaultSubobject<USceneComponent>(TEXT("Ladder1Location"));
    this->Ladder2Location = CreateDefaultSubobject<USceneComponent>(TEXT("Ladder2Location"));
    this->Ladder1 = NULL;
    this->Ladder2 = NULL;
    this->LadderType = NULL;
    this->BridgeOpenDuration = 5.00f;
    this->bIsRailBridge = false;
    this->LinkedTrack = NULL;
    this->State = Closed;
    this->StartTime = 0.00f;
    this->SideBottomUseArea->SetupAttachment(RootComponent);
    this->AboveBlockingArea->SetupAttachment(RootComponent);
    this->AboveBlockingVolumeA->SetupAttachment(RootComponent);
    this->AboveBlockingVolumeB->SetupAttachment(RootComponent);
    this->BelowBlockingArea->SetupAttachment(RootComponent);
    this->BelowBlockingVolume->SetupAttachment(RootComponent);
    this->MovingLoop->SetupAttachment(RootComponent);
    this->Ladder1Location->SetupAttachment(RootComponent);
    this->Ladder2Location->SetupAttachment(RootComponent);
    this->SideAMesh->SetupAttachment(RootComponent);
    this->SideBMesh->SetupAttachment(RootComponent);
    this->SideALeverMesh->SetupAttachment(RootComponent);
    this->SideBLeverMesh->SetupAttachment(RootComponent);
    this->SideAUseArea->SetupAttachment(SideAMesh);
    this->SideBUseArea->SetupAttachment(SideBMesh);
    this->SideAProxy->SetupAttachment(RootComponent);
    this->SideBProxy->SetupAttachment(RootComponent);
}

void ADrawbridge::OnRep_State() {
}

void ADrawbridge::OnRep_StartTime() {
}

void ADrawbridge::MulticastPlayTransitionEffects_Implementation(TEnumAsByte<EBridgeState> OldState, TEnumAsByte<EBridgeState> NewState) {
}

void ADrawbridge::MulticastPlaySideToggleEffect_Implementation(TEnumAsByte<EBridgeSide> BridgeSide) {
}

float ADrawbridge::GetProgress() const {
    return 0.0f;
}

void ADrawbridge::ApplyVehicleDecay() {
}

void ADrawbridge::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADrawbridge, SideAState);
    DOREPLIFETIME(ADrawbridge, SideBState);
    DOREPLIFETIME(ADrawbridge, State);
    DOREPLIFETIME(ADrawbridge, StartTime);
}


