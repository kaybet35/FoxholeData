#ifndef UE4SS_SDK_TownWLargeGS1_HPP
#define UE4SS_SDK_TownWLargeGS1_HPP

class ATownWLargeGS1_C : public AGarrisonStation
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08D0 (size: 0x8)
    class USpawnPointComponent* Spawn5;                                               // 0x08D8 (size: 0x8)
    class USpawnPointComponent* Spawn4;                                               // 0x08E0 (size: 0x8)
    class USpawnPointComponent* Spawn3;                                               // 0x08E8 (size: 0x8)
    class USpawnPointComponent* Spawn2;                                               // 0x08F0 (size: 0x8)
    class USpawnPointComponent* Spawn1;                                               // 0x08F8 (size: 0x8)
    class USpawnPointComponent* Spawn0;                                               // 0x0900 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0908 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0910 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0918 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0920 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0928 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x0930 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x0938 (size: 0x8)
    class UBPBicycleSpawnLocationComponent_C* BPBicycleSpawnLocationComponent;        // 0x0940 (size: 0x8)
    class UCameraComponent* ViewTargetCamera;                                         // 0x0948 (size: 0x8)
    class UStaticMeshComponent* BackDoorStair;                                        // 0x0950 (size: 0x8)
    class UDecalComponent* AITurretMarker01;                                          // 0x0958 (size: 0x8)
    class UDecalComponent* AITurretMarker03;                                          // 0x0960 (size: 0x8)
    class UDecalComponent* AITurretMarker02;                                          // 0x0968 (size: 0x8)
    class UDecalComponent* AITurretMarker04;                                          // 0x0970 (size: 0x8)
    class UDecalComponent* AITurretMarker00;                                          // 0x0978 (size: 0x8)
    class UStaticMeshComponent* w5;                                                   // 0x0980 (size: 0x8)
    class UStaticMeshComponent* w4;                                                   // 0x0988 (size: 0x8)
    class UStaticMeshComponent* w3;                                                   // 0x0990 (size: 0x8)
    class UStaticMeshComponent* w2;                                                   // 0x0998 (size: 0x8)
    class UStaticMeshComponent* w1;                                                   // 0x09A0 (size: 0x8)
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret4;                                 // 0x09A8 (size: 0x8)
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret3;                                 // 0x09B0 (size: 0x8)
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret2;                                 // 0x09B8 (size: 0x8)
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret1;                                 // 0x09C0 (size: 0x8)
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret;                                  // 0x09C8 (size: 0x8)
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;                       // 0x09D0 (size: 0x8)
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;                        // 0x09D8 (size: 0x8)
    class UStaticMeshComponent* GarrisonStationBase;                                  // 0x09E0 (size: 0x8)
    class UStaticMeshComponent* RadioStationMesh1;                                    // 0x09E8 (size: 0x8)
    class UStaticMeshComponent* RadioStationMesh;                                     // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* ArtilleryShelterMesh;                                 // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* OperatingPostMesh;                                    // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* RoofMesh;                                             // 0x0A08 (size: 0x8)
    class UBoxComponent* ArtilleryShelterWeakPoint;                                   // 0x0A10 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedRoof;                           // 0x0A18 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedHouse;                          // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* HouseMesh;                                            // 0x0A28 (size: 0x8)

    void ReceiveBeginPlay();
    void OnResearched(const class UTechTreeComponent* TechTreeComponent, const ETechComponentID TechID);
    void ExecuteUbergraph_TownWLargeGS1(int32 EntryPoint);
}; // Size: 0xA30

#endif
