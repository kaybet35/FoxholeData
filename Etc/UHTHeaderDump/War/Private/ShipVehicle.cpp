#include "ShipVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"
#include "ShipMovementComponent.h"

AShipVehicle::AShipVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("ShipCollision")).SetDefaultSubobjectClass<UShipMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->BoxCollision = NULL;
    this->bUsesTraces = false;
    this->bIsVisibleOnSonar = true;
    this->ShipCollision = (UStaticMeshComponent*)RootComponent;
    this->StructureToIgnore = NULL;
    this->MovementFlags = 0;
}

void AShipVehicle::ServerMoveShip_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}
bool AShipVehicle::ServerMoveShip_Validate(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
    return true;
}

void AShipVehicle::ServerMoveNoBaseShip_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
}
bool AShipVehicle::ServerMoveNoBaseShip_Validate(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
    return true;
}

void AShipVehicle::ServerMoveDualShip_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
}
bool AShipVehicle::ServerMoveDualShip_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode) {
    return true;
}

void AShipVehicle::ServerMoveDualNoBaseShip_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
}
bool AShipVehicle::ServerMoveDualNoBaseShip_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
    return true;
}

void AShipVehicle::OnRep_StructureToIgnore() {
}

void AShipVehicle::OnRep_RepShipMovement() {
}

void AShipVehicle::OnPassengerAreaEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AShipVehicle::OnPassengerAreaBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AShipVehicle::ClientVeryShortAdjustPositionShip_Implementation(float Timestamp, const FShipVeryShortAdjustment& Adjustment, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition) {
}

void AShipVehicle::ClientAdjustPositionShip_Implementation(float Timestamp, const FShipAdjustment& Adjustment, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition) {
}

void AShipVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShipVehicle, RepShipMovement);
    DOREPLIFETIME(AShipVehicle, StructureToIgnore);
}


