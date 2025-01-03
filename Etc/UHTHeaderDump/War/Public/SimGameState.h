#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EFactionId.h"
#include "EWarPhase.h"
#include "GameplayFlags.h"
#include "TownHallInfo.h"
#include "WarAchievementProgress.h"
#include "WarGameState.h"
#include "WorldWeatherState.h"
#include "SimGameState.generated.h"

class AMapIntelligence;
class ASubmarineAudioVolume;
class ATechTree;

UCLASS(Blueprintable)
class WAR_API ASimGameState : public AWarGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FTownHallInfo> TownHallInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameplayFlags, meta=(AllowPrivateAccess=true))
    FGameplayFlags GameplayFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMapIntelligence* MapIntelligence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASubmarineAudioVolume* SubmarineAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FWarAchievementProgress WarAchievementProgress;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint32 StructureLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WorldWeatherState, meta=(AllowPrivateAccess=true))
    FWorldWeatherState WorldWeatherState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PrevWindSpeedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 PrevWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float NextWindSpeedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 NextWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PrevWindDirectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 PrevWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float NextWindDirectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 NextWindDirection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ColonialTechTree, meta=(AllowPrivateAccess=true))
    ATechTree* ColonialTechTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WardenTechTree, meta=(AllowPrivateAccess=true))
    ATechTree* WardenTechTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFactionId ConquestWinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EWarPhase WarPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDateTime WarPhaseEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPatchRequired;
    
public:
    ASimGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldWeatherState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WardenTechTree();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameplayFlags();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ColonialTechTree();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastToggleEarlyWarRestrictionOverride();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastRemoveOfflinePlayerState(const FString& OnlineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetWindVector() const;
    
};

