#ifndef UE4SS_SDK_BPKeep_HPP
#define UE4SS_SDK_BPKeep_HPP

class ABPKeep_C : public AKeep
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0890 (size: 0x8)
    class UBPStructureInteriorArea_C* BPStructureInteriorArea4;                       // 0x0898 (size: 0x8)
    class UBPStructureInteriorArea_C* BPStructureInteriorArea3;                       // 0x08A0 (size: 0x8)
    class UBPStructureInteriorArea_C* BPStructureInteriorArea2;                       // 0x08A8 (size: 0x8)
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;                       // 0x08B0 (size: 0x8)
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;                        // 0x08B8 (size: 0x8)
    class USpawnPointComponent* Spawn8;                                               // 0x08C0 (size: 0x8)
    class USpawnPointComponent* Spawn7;                                               // 0x08C8 (size: 0x8)
    class USpawnPointComponent* Spawn6;                                               // 0x08D0 (size: 0x8)
    class USpawnPointComponent* Spawn5;                                               // 0x08D8 (size: 0x8)
    class USpawnPointComponent* Spawn4;                                               // 0x08E0 (size: 0x8)
    class USpawnPointComponent* Spawn3;                                               // 0x08E8 (size: 0x8)
    class USpawnPointComponent* Spawn2;                                               // 0x08F0 (size: 0x8)
    class USpawnPointComponent* Spawn1;                                               // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh18;                                         // 0x0900 (size: 0x8)
    class UStaticMeshComponent* BulwarkKeepInteriorDoor;                              // 0x0908 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMeshRoof;                 // 0x0910 (size: 0x8)
    class UStaticMeshComponent* StaticMesh17;                                         // 0x0918 (size: 0x8)
    class UStaticMeshComponent* StaticMesh16;                                         // 0x0920 (size: 0x8)
    class UStaticMeshComponent* StaticMesh15;                                         // 0x0928 (size: 0x8)
    class UStaticMeshComponent* StaticMesh14;                                         // 0x0930 (size: 0x8)
    class UStaticMeshComponent* StaticMesh13;                                         // 0x0938 (size: 0x8)
    class UStaticMeshComponent* StaticMesh12;                                         // 0x0940 (size: 0x8)
    class UBoxComponent* Box3;                                                        // 0x0948 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x0950 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x0958 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0960 (size: 0x8)
    class UStaticMeshComponent* StaticMesh11;                                         // 0x0968 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0970 (size: 0x8)
    class UStaticMeshComponent* StaticMesh10;                                         // 0x0978 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x0980 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x0988 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x0990 (size: 0x8)
    class UPointLightComponent* PointLight5;                                          // 0x0998 (size: 0x8)
    class UPointLightComponent* PointLight4;                                          // 0x09A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x09A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x09B0 (size: 0x8)
    class UPointLightComponent* PointLight3;                                          // 0x09B8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x09C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x09C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x09D0 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x09D8 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x09E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x09E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* WheelMesh;                                            // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* RoofMesh;                                             // 0x0A00 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0A08 (size: 0x8)

    void OnEnterExitKeep(bool Exiting, class AActor* Actor);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BPKeep(int32 EntryPoint);
}; // Size: 0xA10

#endif
