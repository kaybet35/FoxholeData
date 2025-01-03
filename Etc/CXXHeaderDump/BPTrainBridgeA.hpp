#ifndef UE4SS_SDK_BPTrainBridgeA_HPP
#define UE4SS_SDK_BPTrainBridgeA_HPP

class ABPTrainBridgeA_C : public ADrawbridge
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x08B0 (size: 0x8)
    class UStaticMeshComponent* SideBColumn;                                          // 0x08B8 (size: 0x8)
    class UStaticMeshComponent* SideAColumn;                                          // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* TrimMesh1;                                            // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* TrimMesh;                                             // 0x08D0 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x08D8 (size: 0x8)

}; // Size: 0x8E0

#endif
