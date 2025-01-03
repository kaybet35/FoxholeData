#ifndef UE4SS_SDK_BPDeployedExplosiveTripod_HPP
#define UE4SS_SDK_BPDeployedExplosiveTripod_HPP

class ABPDeployedExplosiveTripod_C : public ADeployedTripod
{
    class UBoxComponent* CollisionBox;                                                // 0x07F0 (size: 0x8)
    class UBuildSocketComponent* BuildSocket;                                         // 0x07F8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0800 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0808 (size: 0x8)

}; // Size: 0x810

#endif
