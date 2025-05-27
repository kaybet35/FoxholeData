#pragma once
#include "CoreMinimal.h"
#include "EActivityBonusState.h"
#include "EInfrastructureType.h"
#include "ESpawnPointCategory.h"
#include "TechTreeComponentVotes.h"
#include "UserComponent.h"
#include "TechTreeUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTechTreeUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTechTreeComponentVotes TechTreeVotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsSpawnPointSetHere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsActivityBonusActive, meta=(AllowPrivateAccess=true))
    EActivityBonusState ActivityBonusState;
    
    UTechTreeUserComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetVote(const ESpawnPointCategory SpawnPointCategory, const EInfrastructureType Vote);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActivityBonusActive();
    
};

