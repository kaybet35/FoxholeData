#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "TeamStructure.generated.h"

UCLASS(Blueprintable)
class WAR_API ATeamStructure : public ABuildableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_TeamIdNotify, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowUseByEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeFlaggedForDisruptivePlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisruptivePlacementVoteMultiplier;
    
public:
    ATeamStructure(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamIdNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPSetTeamVisuals(const int32 VisualTeamId);
    
};

