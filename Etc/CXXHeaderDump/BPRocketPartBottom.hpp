#ifndef UE4SS_SDK_BPRocketPartBottom_HPP
#define UE4SS_SDK_BPRocketPartBottom_HPP

class ABPRocketPartBottom_C : public ABPRocketPart_C
{
    class UMultiplexedStaticMeshComponent* MultiplexedCenterMesh;                     // 0x0818 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedMainMesh;                       // 0x0820 (size: 0x8)
    class UStaticMeshComponent* RocketPartCenter;                                     // 0x0828 (size: 0x8)

}; // Size: 0x830

#endif
