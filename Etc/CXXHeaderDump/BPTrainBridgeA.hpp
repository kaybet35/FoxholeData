#ifndef UE4SS_SDK_BPTrainBridgeA_HPP
#define UE4SS_SDK_BPTrainBridgeA_HPP

class ABPTrainBridgeA_C : public ADrawbridge
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x08F0 (size: 0x8)
    class UStaticMeshComponent* SideBColumn;                                          // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* SideAColumn;                                          // 0x0900 (size: 0x8)
    class UStaticMeshComponent* TrimMesh1;                                            // 0x0908 (size: 0x8)
    class UStaticMeshComponent* TrimMesh;                                             // 0x0910 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0918 (size: 0x8)

}; // Size: 0x920

#endif
