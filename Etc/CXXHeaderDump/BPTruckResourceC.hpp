#ifndef UE4SS_SDK_BPTruckResourceC_HPP
#define UE4SS_SDK_BPTruckResourceC_HPP

class ABPTruckResourceC_C : public ABPTruckBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13C0 (size: 0x8)
    class UPointLightComponent* LightRear_L;                                          // 0x13C8 (size: 0x8)
    class UStaticMeshComponent* RearLight_L;                                          // 0x13D0 (size: 0x8)
    class UPointLightComponent* LightRear_R;                                          // 0x13D8 (size: 0x8)
    class UStaticMeshComponent* RearLight_R;                                          // 0x13E0 (size: 0x8)
    class UStaticMeshComponent* Node15;                                               // 0x13E8 (size: 0x8)
    class UStaticMeshComponent* Node14;                                               // 0x13F0 (size: 0x8)
    class UStaticMeshComponent* Node13;                                               // 0x13F8 (size: 0x8)
    class UStaticMeshComponent* Node12;                                               // 0x1400 (size: 0x8)
    class UStaticMeshComponent* Node11;                                               // 0x1408 (size: 0x8)
    class UStaticMeshComponent* Node10;                                               // 0x1410 (size: 0x8)
    class UStaticMeshComponent* Node09;                                               // 0x1418 (size: 0x8)
    class UStaticMeshComponent* Node08;                                               // 0x1420 (size: 0x8)
    class UStaticMeshComponent* Node07;                                               // 0x1428 (size: 0x8)
    class UStaticMeshComponent* Node06;                                               // 0x1430 (size: 0x8)
    class UStaticMeshComponent* Node05;                                               // 0x1438 (size: 0x8)
    class UStaticMeshComponent* Node04;                                               // 0x1440 (size: 0x8)
    class UStaticMeshComponent* Node03;                                               // 0x1448 (size: 0x8)
    class UStaticMeshComponent* Node02;                                               // 0x1450 (size: 0x8)
    class UStaticMeshComponent* Node01;                                               // 0x1458 (size: 0x8)
    class UStaticMeshComponent* Node00;                                               // 0x1460 (size: 0x8)
    class UBPResourceGroupRenderComponent_C* BPResourceGroupRenderComponent;          // 0x1468 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTruckResourceC(int32 EntryPoint);
}; // Size: 0x1470

#endif
