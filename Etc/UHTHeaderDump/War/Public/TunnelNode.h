#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ETunnelConnectionState.h"
#include "ETunnelNodeType.h"
#include "TeamStructure.h"
#include "TunnelNode.generated.h"

class ATunnelNode;

UCLASS(Blueprintable)
class WAR_API ATunnelNode : public ATeamStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ObstructionCheckOverrideExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityTraceOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAggroSingleStructureOnDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETunnelNodeType TunnelNodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TunnelConnectionState, meta=(AllowPrivateAccess=true))
    ETunnelConnectionState TunnelConnectionState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATunnelNode*> ConnectedTunnelNodes;
    
public:
    ATunnelNode(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TunnelConnectionState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPSetTunnelConnectionStateVisuals(const ETunnelConnectionState NewTunnelConnectionState);
    
};

