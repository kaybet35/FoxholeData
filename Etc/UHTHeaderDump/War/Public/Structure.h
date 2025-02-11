#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ActorLog.h"
#include "ClaimStatus.h"
#include "DamageableActor.h"
#include "EArmourType.h"
#include "EDynamicTier.h"
#include "EFireIntensity.h"
#include "EMapIconType.h"
#include "EMapIntelligenceType.h"
#include "ESimScreen.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"
#include "ETechComponentID.h"
#include "ETechID.h"
#include "GenericActor.h"
#include "ItemInstance.h"
#include "MapIntelligenceInterface.h"
#include "PersistentActor.h"
#include "SeatSupport.h"
#include "StructureBuildStep.h"
#include "Structure.generated.h"

class AFlameActor;
class AStructureIsland;
class AWarCharacter;
class UArrowComponent;
class UBoxComponent;
class UFirePitComponent;
class UGarrisonComponent;
class UInfrastructureComponent;
class UItemHolderComponent;
class UMeshVisibilityComponent;
class UMultiplexedSkeletalMeshComponent;
class UMultiplexedStaticMeshComponent;
class UParkingSpotComponent;
class UParticleSystem;
class USoundCue;
class UStaticMeshComponent;
class UStealthComponent;
class UStructureSeatComponent;
class UTechTreeComponent;
class UTemperatureModifierBoxComponent;

UCLASS(Abstract, Blueprintable)
class WAR_API AStructure : public AActor, public IGenericTeamAgentInterface, public IPersistentActor, public IMapIntelligenceInterface, public IDamageableActor, public IGenericActor, public ISeatSupport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ConversionCodeNames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChassisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStructureProfileType ProfileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmourType ArmourType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* UseAreaBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* KillVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DestroyedFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DestroyedSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UItemHolderComponent* ItemHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> ItemHolderItems;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FActorLog ActorLog;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETechID TechID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETechComponentID> TechComponentIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGarrisonComponent* GarrisonComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInfrastructureComponent* InfrastructureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshVisibilityComponent* MeshVisibilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    int32 Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_DynamicTier, meta=(AllowPrivateAccess=true))
    EDynamicTier DynamicTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UpgradeStructureCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconType MapIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapIconVisibleToAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBuildSiteMapIconVisible;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeDismantled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideIsBurnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBurnable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogWhenDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTrackedClimbable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DropLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateDropLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsVaultable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimScreen ScreenToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDeployed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float DecayRemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIntelligenceType MapIntelligenceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 StructureFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreFriendlyFire: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStructureNetRelevancySize StructureNetRelevancySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStockpilable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReserveStockpiled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProvidesBasedShelter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsBuiltNearBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIgnoresRapidDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_IsPrototype, meta=(AllowPrivateAccess=true))
    bool bIsPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDistanceOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FString BuilderPlayerOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FString BuilderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FClaimStatus ClaimStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_BuildStepProgress, meta=(AllowPrivateAccess=true))
    uint8 BuildStepProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructureBuildStep> BuildSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasMeshVisibilityComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAddLandscapeHolesOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRemoveLandscapeHolesOnDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasLandscapeHoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRemovedLandscapeHoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStructureIsland> Island;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMultiplexedStaticMeshComponent*> MultiplexedStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMultiplexedSkeletalMeshComponent*> MultiplexedSkeletalMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStealthComponent* StealthComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Rainfall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuantizedRainfall, meta=(AllowPrivateAccess=true))
    uint8 QuantizedRainfall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PuddleVisualsMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceivesRainfall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StructureFlameCountFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecaySupplyDrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireIntensity, meta=(AllowPrivateAccess=true))
    EFireIntensity FireIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float PreMitigationFireDamagePerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTemperatureModifierBoxComponent* BurningHeatArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTemperatureModifierBoxComponent* WarmingHeatArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFlameActor*> FlameActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecentExtinguishingHit, meta=(AllowPrivateAccess=true))
    bool bRecentExtinguishingHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStructureSeatComponent*> SeatComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParkingSpotComponent* ParkingSpotComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFirePitComponent* FirePitComponent;
    
    AStructure(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Use(AWarCharacter* UsingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecentExtinguishingHit(bool Previous);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_QuantizedRainfall();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPrototype();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireIntensity(EFireIntensity Previous);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DynamicTier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuildStepProgress();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void MulticastOnVehicleDrivingOverDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollidingWithDuplicate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTechTreeComponent* GetTechTreeComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnVehicleDrivingOverDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnFireIntensityReduced(int32 OldIntensity, int32 NewIntensity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnFireIntensityIncreased(int32 OldIntensity, int32 NewIntensity);
    

    // Fix for true pure virtual functions not being implemented
};

