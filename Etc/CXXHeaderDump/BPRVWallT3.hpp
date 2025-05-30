#ifndef UE4SS_SDK_BPRVWallT3_HPP
#define UE4SS_SDK_BPRVWallT3_HPP

class ABPRVWallT3_C : public ALimitedVulnerabilityStructure
{
    class UAudioComponent* Audio;                                                     // 0x0800 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0808 (size: 0x8)
    class UStaticMeshComponent* RVWallT2;                                             // 0x0810 (size: 0x8)

}; // Size: 0x818

#endif
