#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphNode -FallbackName=ReplicationGraphNode
#include "WarReplicationGraphNode_PlayerStateFrequencyLimiter.generated.h"

UCLASS(Blueprintable, NonTransient)
class UWarReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UWarReplicationGraphNode_PlayerStateFrequencyLimiter();

};

