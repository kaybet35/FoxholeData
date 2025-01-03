#pragma once
#include "CoreMinimal.h"
#include "AlwaysRelevantActorInfo.h"
#include "ReplicationGraphNode_ActorList.h"
#include "ReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAlwaysRelevantActorInfo> PastRelevantActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastViewTarget;
    
    UReplicationGraphNode_AlwaysRelevant_ForConnection();

};

