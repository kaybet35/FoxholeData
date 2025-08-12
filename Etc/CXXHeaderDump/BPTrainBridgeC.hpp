#ifndef UE4SS_SDK_BPTrainBridgeC_HPP
#define UE4SS_SDK_BPTrainBridgeC_HPP

class ABPTrainBridgeC_C : public ADrawbridge
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh1;                    // 0x08F0 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* SideBColumn;                                          // 0x0900 (size: 0x8)
    class UStaticMeshComponent* SideAColumn;                                          // 0x0908 (size: 0x8)
    class UStaticMeshComponent* TrimMesh2;                                            // 0x0910 (size: 0x8)
    class UStaticMeshComponent* TrimMesh1;                                            // 0x0918 (size: 0x8)
    class UBoxComponent* BelowBlockingA;                                              // 0x0920 (size: 0x8)
    class UBoxComponent* BelowBlockingB;                                              // 0x0928 (size: 0x8)
    class UStaticMeshComponent* TrainBridgeSectionSideA;                              // 0x0930 (size: 0x8)
    class UStaticMeshComponent* TrainBridgeSectionSideB;                              // 0x0938 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0940 (size: 0x8)

}; // Size: 0x948

#endif
