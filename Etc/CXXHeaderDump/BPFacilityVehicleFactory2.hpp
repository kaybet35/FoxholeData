#ifndef UE4SS_SDK_BPFacilityVehicleFactory2_HPP
#define UE4SS_SDK_BPFacilityVehicleFactory2_HPP

class ABPFacilityVehicleFactory2_C : public AAssemblyStation
{
    class UWarAudioComponent* WarAudio;                                               // 0x0980 (size: 0x8)
    class UParkingSpotComponent* ParkingSpot;                                         // 0x0988 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0990 (size: 0x8)
    class USkeletalMeshComponent* MainMesh;                                           // 0x0998 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x09A0 (size: 0x8)
    class UStaticMeshComponent* PowerLineConnector;                                   // 0x09A8 (size: 0x8)

}; // Size: 0x9B0

#endif
