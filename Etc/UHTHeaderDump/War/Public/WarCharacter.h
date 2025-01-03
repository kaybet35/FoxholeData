#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "EFactionId.h"
#include "EncumbranceManager.h"
#include "WarCharacter.generated.h"

class AFlareExplosionEffect;
class APawn;
class AStructure;
class UStealthComponent;

UCLASS(Blueprintable)
class WAR_API AWarCharacter : public ACharacter, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewRadiusDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Temperature, meta=(AllowPrivateAccess=true))
    uint8 ReplicatedTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Muddyness, meta=(AllowPrivateAccess=true))
    uint8 ReplicatedMuddyness;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 PlayerFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncumbranceManager EncumbranceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStealthComponent* StealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Muddyness;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFlareExplosionEffect>> NearbyFlares;
    
public:
    AWarCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseStructure(AStructure* Structure);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnstuck();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Temperature(const uint8 PreviousTemperature);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Muddyness(const uint8 PreviousMuddyness);
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastPlaceCalloutMarker(const EFactionId FactionId, const int8 CalloutInfoIndex, const FVector_NetQuantize Location);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastPerformCallOut(const EFactionId FactionId, const int8 CalloutInfoIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPawnVisible(const APawn* TargetPawn) const;
    

    // Fix for true pure virtual functions not being implemented
};

