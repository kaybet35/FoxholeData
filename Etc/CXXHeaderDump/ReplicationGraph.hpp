#ifndef UE4SS_SDK_ReplicationGraph_HPP
#define UE4SS_SDK_ReplicationGraph_HPP

struct FAlwaysRelevantActorInfo
{
    class UNetConnection* Connection;                                                 // 0x0000 (size: 0x8)
    class AActor* LastViewer;                                                         // 0x0008 (size: 0x8)
    class AActor* LastViewTarget;                                                     // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FConnectionAlwaysRelevantNodePair
{
    class UNetConnection* NetConnection;                                              // 0x0000 (size: 0x8)
    class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLastLocationGatherInfo
{
    class UNetConnection* Connection;                                                 // 0x0000 (size: 0x8)
    FVector LastLocation;                                                             // 0x0008 (size: 0xC)

}; // Size: 0x18

struct FTearOffActorInfo
{
    class AActor* Actor;                                                              // 0x0008 (size: 0x8)

}; // Size: 0x18

class AReplicationGraphDebugActor : public AActor
{
    class UReplicationGraph* ReplicationGraph;                                        // 0x0218 (size: 0x8)
    class UNetReplicationGraphConnection* ConnectionManager;                          // 0x0220 (size: 0x8)

    void ServerStopDebugging();
    void ServerStartDebugging();
    void ServerSetPeriodFrameForClass(UClass* Class, int32 PeriodFrame);
    void ServerSetCullDistanceForClass(UClass* Class, float CullDistance);
    void ServerSetConditionalActorBreakpoint(class AActor* Actor);
    void ServerPrintCullDistances();
    void ServerPrintAllActorInfo(FString Str);
    void ServerCellInfo();
    void ClientCellInfo(FVector CellLocation, FVector CellExtent, const TArray<class AActor*>& Actors);
}; // Size: 0x228

class UBasicReplicationGraph : public UReplicationGraph
{
    class UReplicationGraphNode_GridSpatialization2D* GridNode;                       // 0x0498 (size: 0x8)
    class UReplicationGraphNode_ActorList* AlwaysRelevantNode;                        // 0x04A0 (size: 0x8)
    TArray<FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;        // 0x04A8 (size: 0x10)
    TArray<class AActor*> ActorsWithoutNetConnection;                                 // 0x04B8 (size: 0x10)

}; // Size: 0x4D0

class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
    class UNetConnection* NetConnection;                                              // 0x0028 (size: 0x8)
    class AReplicationGraphDebugActor* DebugActor;                                    // 0x01A8 (size: 0x8)
    TArray<FLastLocationGatherInfo> LastGatherLocations;                              // 0x01C8 (size: 0x10)
    TArray<class UReplicationGraphNode*> ConnectionGraphNodes;                        // 0x01E0 (size: 0x10)
    class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                   // 0x01F0 (size: 0x8)

}; // Size: 0x268

class UReplicationGraph : public UReplicationDriver
{
    TSubclassOf<class UNetReplicationGraphConnection> ReplicationConnectionManagerClass; // 0x0028 (size: 0x8)
    class UNetDriver* NetDriver;                                                      // 0x0030 (size: 0x8)
    TArray<class UNetReplicationGraphConnection*> Connections;                        // 0x0038 (size: 0x10)
    TArray<class UNetReplicationGraphConnection*> PendingConnections;                 // 0x0048 (size: 0x10)
    TArray<class UReplicationGraphNode*> GlobalGraphNodes;                            // 0x0098 (size: 0x10)
    TArray<class UReplicationGraphNode*> PrepareForReplicationNodes;                  // 0x00A8 (size: 0x10)

}; // Size: 0x4A0

class UReplicationGraphNode : public UObject
{
    TArray<class UReplicationGraphNode*> AllChildNodes;                               // 0x0028 (size: 0x10)

}; // Size: 0x50

class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
}; // Size: 0xF8

class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
}; // Size: 0x138

class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
    class UReplicationGraphNode* ChildNode;                                           // 0x0050 (size: 0x8)

}; // Size: 0x68

class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
    TArray<FAlwaysRelevantActorInfo> PastRelevantActors;                              // 0x0110 (size: 0x10)
    class AActor* LastViewer;                                                         // 0x0120 (size: 0x8)
    class AActor* LastViewTarget;                                                     // 0x0128 (size: 0x8)

}; // Size: 0x130

class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{
}; // Size: 0x190

class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
}; // Size: 0x108

class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
}; // Size: 0x128

class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
    class UReplicationGraphNode* DynamicNode;                                         // 0x0140 (size: 0x8)
    class UReplicationGraphNode_DormancyNode* DormancyNode;                           // 0x0148 (size: 0x8)

}; // Size: 0x150

class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
}; // Size: 0x230

class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
    TArray<FTearOffActorInfo> TearOffActors;                                          // 0x0050 (size: 0x10)

}; // Size: 0x78

#endif
