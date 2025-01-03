#pragma once
#include "CoreMinimal.h"
#include "ERestrictedState.h"
#include "WarPlayerState.h"
#include "SimPlayerState.generated.h"

UCLASS(Blueprintable)
class WAR_API ASimPlayerState : public AWarPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 TeamId;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 Level;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int16 CP;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 CPToGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 SquadLeaderDirection;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int64 TimeOfLastVoteKick;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint16 DailyVoteKickCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RestrictedState, meta=(AllowPrivateAccess=true))
    ERestrictedState RestrictedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SquadId, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_InactiveSquadIds, meta=(AllowPrivateAccess=true))
    int32 InactiveSquadIds[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RegimentId, meta=(AllowPrivateAccess=true))
    int32 RegimentID;
    
    ASimPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SquadId(const int32 PreviousSquadId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RestrictedState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RegimentId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InactiveSquadIds();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetIsGodMode(const bool bIsGodMode);
    
};

