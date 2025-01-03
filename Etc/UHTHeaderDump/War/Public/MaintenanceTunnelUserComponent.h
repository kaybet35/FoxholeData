#pragma once
#include "CoreMinimal.h"
#include "DecayPreventionStructureCounts.h"
#include "UserComponent.h"
#include "MaintenanceTunnelUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UMaintenanceTunnelUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDecayPreventionStructureCounts StructureCounts;
    
    UMaintenanceTunnelUserComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateStructureCounts(float Range, uint16 Filter);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerApplySettings(float Range, uint16 Filter);
    
};

