#ifndef UE4SS_SDK_BPDeployedExplosiveTripod_HPP
#define UE4SS_SDK_BPDeployedExplosiveTripod_HPP

class ABPDeployedExplosiveTripod_C : public ADeployedTripod
{
    class UBoxComponent* CollisionBox;                                                // 0x0820 (size: 0x8)
    class UBuildSocketComponent* BuildSocket;                                         // 0x0828 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0830 (size: 0x8)

}; // Size: 0x838

#endif
