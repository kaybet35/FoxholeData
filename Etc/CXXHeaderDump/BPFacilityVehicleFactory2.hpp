#ifndef UE4SS_SDK_BPFacilityVehicleFactory2_HPP
#define UE4SS_SDK_BPFacilityVehicleFactory2_HPP

class ABPFacilityVehicleFactory2_C : public AAssemblyStation
{
    class UWarAudioComponent* WarAudio;                                               // 0x09C0 (size: 0x8)
    class UParkingSpotComponent* ParkingSpot;                                         // 0x09C8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x09D0 (size: 0x8)
    class USkeletalMeshComponent* MainMesh;                                           // 0x09D8 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x09E0 (size: 0x8)
    class UStaticMeshComponent* PowerLineConnector;                                   // 0x09E8 (size: 0x8)

}; // Size: 0x9F0

#endif
