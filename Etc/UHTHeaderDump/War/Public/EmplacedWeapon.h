#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EmplacedStructure.h"
#include "GunnerSupport.h"
#include "MuzzleInfo.h"
#include "PayloadMeshes.h"
#include "EmplacedWeapon.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WAR_API AEmplacedWeapon : public AEmplacedStructure, public IGunnerSupport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmplacedTrackingModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FoundationMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FVector2D GunnerYawAndPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_StashedAmmo, meta=(AllowPrivateAccess=true))
    int32 StashedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName StashedAmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMuzzleInfo> MuzzleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPayloadMeshes PayloadMeshes;
    
    AEmplacedWeapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_StashedAmmo();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void UpdateGunnerYawAndPitch(int32 GunnerIndex, FVector2D YawAndPitch) override PURE_VIRTUAL(UpdateGunnerYawAndPitch,);
    
    UFUNCTION(BlueprintCallable)
    void SetStashedAmmo(int32 GunnerIndex, int32 AmmoAmount, FName AmmoName) override PURE_VIRTUAL(SetStashedAmmo,);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFiring(int32 GunnerIndex, bool IsFiring) override PURE_VIRTUAL(SetIsFiring,);
    
    UFUNCTION(BlueprintCallable)
    void SetGunnerWorking(int32 GunnerIndex, bool IsWorking) override PURE_VIRTUAL(SetGunnerWorking,);
    
    UFUNCTION(BlueprintCallable)
    bool IsGunnerWorking(int32 GunnerIndex) const override PURE_VIRTUAL(IsGunnerWorking, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFiring(int32 GunnerIndex) const override PURE_VIRTUAL(IsFiring, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsDeployed(int32 GunnerIndex, bool bTestFullDeploy) const override PURE_VIRTUAL(IsDeployed, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetTrackingSpeedModifier(int32 GunnerIndex) const override PURE_VIRTUAL(GetTrackingSpeedModifier, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FName GetStashedAmmoType(int32 GunnerIndex) const override PURE_VIRTUAL(GetStashedAmmoType, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStashedAmmo(int32 GunnerIndex) const override PURE_VIRTUAL(GetStashedAmmo, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumMuzzleSockets(int32 GunnerIndex) const override PURE_VIRTUAL(GetNumMuzzleSockets, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetMuzzleTransformFromIndex(int32 GunnerIndex, int32 MuzzleIndex) const override PURE_VIRTUAL(GetMuzzleTransformFromIndex, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    FName GetMuzzleSocketName(int32 GunnerIndex, const int32 MuzzleIndex) const override PURE_VIRTUAL(GetMuzzleSocketName, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLineOfSightLocation(int32 GunnerIndex, int32 MuzzleIndex) const override PURE_VIRTUAL(GetLineOfSightLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetGunnerYawAndPitch(int32 GunnerIndex) const override PURE_VIRTUAL(GetGunnerYawAndPitch, return FVector2D{};);
    
    UFUNCTION(BlueprintCallable)
    bool CanRotate(int32 GunnerIndex) const override PURE_VIRTUAL(CanRotate, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanFire(int32 GunnerIndex) const override PURE_VIRTUAL(CanFire, return false;);
    
};
