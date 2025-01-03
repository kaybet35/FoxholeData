#pragma once
#include "CoreMinimal.h"
#include "DecayPreventionStructureCounts.h"
#include "UserComponent.h"
#include "DecayPreventionUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UDecayPreventionUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDecayPreventionStructureCounts StructureCounts;
    
    UDecayPreventionUserComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateStructureCount();
    
};

