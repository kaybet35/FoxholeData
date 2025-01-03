#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "TeamStructure.h"
#include "RocketTarget.generated.h"

UCLASS(Blueprintable)
class WAR_API ARocketTarget : public ATeamStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId OriginMapID;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 LaunchCodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float LaunchTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSirenActive, meta=(AllowPrivateAccess=true))
    bool bIsSirenActive;
    
    ARocketTarget(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSirenActive();
    
};

