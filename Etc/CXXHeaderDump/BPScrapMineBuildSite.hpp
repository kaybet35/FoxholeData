#ifndef UE4SS_SDK_BPScrapMineBuildSite_HPP
#define UE4SS_SDK_BPScrapMineBuildSite_HPP

class ABPScrapMineBuildSite_C : public AResourceMineBuildSite
{
    class UBoxComponent* NoBuildArea;                                                 // 0x07C0 (size: 0x8)
    class UBoxComponent* Box3;                                                        // 0x07C8 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x07D0 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x07D8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x07E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x07E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x07F0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x07F8 (size: 0x8)

}; // Size: 0x800

#endif
