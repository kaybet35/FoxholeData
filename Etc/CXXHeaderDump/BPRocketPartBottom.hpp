#ifndef UE4SS_SDK_BPRocketPartBottom_HPP
#define UE4SS_SDK_BPRocketPartBottom_HPP

class ABPRocketPartBottom_C : public ABPRocketPart_C
{
    class UMultiplexedStaticMeshComponent* MultiplexedCenterMesh;                     // 0x07F8 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedMainMesh;                       // 0x0800 (size: 0x8)
    class UStaticMeshComponent* RocketPartCenter;                                     // 0x0808 (size: 0x8)

}; // Size: 0x810

#endif
