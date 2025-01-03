#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraph -FallbackName=ReplicationGraph
#include "WarReplicationGraph.generated.h"

class UReplicationGraphNode_ActorList;
class UWarReplicationGraphNode_GridSpatialization2D;
class UWarReplicationGraphNode_RailVehicleNode;

UCLASS(Blueprintable, NonTransient)
class WAR_API UWarReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> NonSpatializedChildClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWarReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWarReplicationGraphNode_RailVehicleNode* RailVehicleNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UWarReplicationGraph();

};

