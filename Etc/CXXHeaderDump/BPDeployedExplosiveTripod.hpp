#ifndef UE4SS_SDK_BPDeployedExplosiveTripod_HPP
#define UE4SS_SDK_BPDeployedExplosiveTripod_HPP

class ABPDeployedExplosiveTripod_C : public ADeployedTripod
{
    class UBoxComponent* CollisionBox;                                                // 0x0850 (size: 0x8)
    class UBuildSocketComponent* BuildSocket;                                         // 0x0858 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0860 (size: 0x8)

}; // Size: 0x868

#endif
