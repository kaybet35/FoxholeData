#ifndef UE4SS_SDK_BPFacilityVehicleFactory2_HPP
#define UE4SS_SDK_BPFacilityVehicleFactory2_HPP

class ABPFacilityVehicleFactory2_C : public AAssemblyStation
{
    class UWarAudioComponent* WarAudio;                                               // 0x09F0 (size: 0x8)
    class UParkingSpotComponent* ParkingSpot;                                         // 0x09F8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0A00 (size: 0x8)
    class USkeletalMeshComponent* MainMesh;                                           // 0x0A08 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* PowerLineConnector;                                   // 0x0A18 (size: 0x8)

}; // Size: 0xA20

#endif
