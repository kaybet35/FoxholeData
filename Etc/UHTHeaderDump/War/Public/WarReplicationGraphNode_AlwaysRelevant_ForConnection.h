#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphNode -FallbackName=ReplicationGraphNode
#include "WarAlwaysRelevantActorInfo.h"
#include "WarReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class UWarReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarAlwaysRelevantActorInfo> PastRelevantActors;
    
public:
    UWarReplicationGraphNode_AlwaysRelevant_ForConnection();

};

