#ifndef UE4SS_SDK_BPDeployedTripod_HPP
#define UE4SS_SDK_BPDeployedTripod_HPP

class ABPDeployedTripod_C : public ADeployedTripod
{
    class UBuildSocketComponent* BuildSocket;                                         // 0x07F0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x07F8 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0800 (size: 0x8)

}; // Size: 0x808

#endif
