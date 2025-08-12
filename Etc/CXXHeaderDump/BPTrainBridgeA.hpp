#ifndef UE4SS_SDK_BPTrainBridgeA_HPP
#define UE4SS_SDK_BPTrainBridgeA_HPP

class ABPTrainBridgeA_C : public ADrawbridge
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0910 (size: 0x8)
    class UStaticMeshComponent* SideBColumn;                                          // 0x0918 (size: 0x8)
    class UStaticMeshComponent* SideAColumn;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* TrimMesh1;                                            // 0x0928 (size: 0x8)
    class UStaticMeshComponent* TrimMesh;                                             // 0x0930 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0938 (size: 0x8)

}; // Size: 0x940

#endif
