#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize10 -FallbackName=Vector_NetQuantize10
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
#include "ControlSurface.h"
#include "RepShipMovement.h"
#include "ShipAdjustment.h"
#include "ShipVeryShortAdjustment.h"
#include "SimVehicle.h"
#include "ShipVehicle.generated.h"

class AActor;
class AStructure;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API AShipVehicle : public ASimVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShipCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepShipMovement, meta=(AllowPrivateAccess=true))
    FRepShipMovement RepShipMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StructureToIgnore, meta=(AllowPrivateAccess=true))
    AStructure* StructureToIgnore;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PropellerPositions[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RudderPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlSurface> ControlSurfaces;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 MovementFlags;
    
public:
    AShipVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveShip(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveNoBaseShip(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveDualShip(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveDualNoBaseShip(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StructureToIgnore();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepShipMovement();
    
    UFUNCTION(BlueprintCallable)
    void OnPassengerAreaEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPassengerAreaBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientVeryShortAdjustPositionShip(float Timestamp, const FShipVeryShortAdjustment& Adjustment, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAdjustPositionShip(float Timestamp, const FShipAdjustment& Adjustment, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition);
    
};

