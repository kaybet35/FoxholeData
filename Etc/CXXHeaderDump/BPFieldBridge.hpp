#ifndef UE4SS_SDK_BPFieldBridge_HPP
#define UE4SS_SDK_BPFieldBridge_HPP

class ABPFieldBridge_C : public AFieldBridge
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0810 (size: 0x8)
    class UBoxComponent* RampFrontBuildFootprint;                                     // 0x0818 (size: 0x8)
    class UBoxComponent* RampBackBuildFootprint;                                      // 0x0820 (size: 0x8)
    class UStaticMeshComponent* PillarFront;                                          // 0x0828 (size: 0x8)
    class UStaticMeshComponent* PillarBack;                                           // 0x0830 (size: 0x8)
    class USceneComponent* SandbagTarget;                                             // 0x0838 (size: 0x8)
    class USplineConnectorComponent* SplineComponent2;                                // 0x0840 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0848 (size: 0x8)
    class USplineConnectorComponent* Sandbag;                                         // 0x0850 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0858 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0860 (size: 0x8)
    FVector Timeline_0_NewTrack_0_738F45B945E6F66E508CF1BDC736E93C;                   // 0x0868 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_738F45B945E6F66E508CF1BDC736E93C; // 0x0874 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0878 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BPOnVehicleDrivingOverDamage();
    void ExecuteUbergraph_BPFieldBridge(int32 EntryPoint);
}; // Size: 0x880

#endif
