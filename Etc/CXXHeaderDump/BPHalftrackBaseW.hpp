#ifndef UE4SS_SDK_BPHalftrackBaseW_HPP
#define UE4SS_SDK_BPHalftrackBaseW_HPP

class ABPHalfTrackBaseW_C : public ABPHalfTrackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13A8 (size: 0x8)
    class USeatTriggerComponent* RearSeatTrigger6;                                    // 0x13B0 (size: 0x8)
    class USeatTriggerComponent* RearSeatTrigger5;                                    // 0x13B8 (size: 0x8)
    class USeatTriggerComponent* RearSeatTrigger4;                                    // 0x13C0 (size: 0x8)
    class UVehicleSeatComponent* RearSeat6;                                           // 0x13C8 (size: 0x8)
    class UVehicleSeatComponent* RearSeat5;                                           // 0x13D0 (size: 0x8)
    class UVehicleSeatComponent* RearSeat4;                                           // 0x13D8 (size: 0x8)
    class UVehicleSeatComponent* RearSeat3;                                           // 0x13E0 (size: 0x8)
    class UStaticMeshComponent* mainBody;                                             // 0x13E8 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x13F0 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x13F8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalfTrackBaseW(int32 EntryPoint);
}; // Size: 0x1400

#endif
