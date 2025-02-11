#ifndef UE4SS_SDK_BPRVT2Room_HPP
#define UE4SS_SDK_BPRVT2Room_HPP

class ABPRVT2Room_C : public ABuildableStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C0 (size: 0x8)
    class UBoxComponent* TankCollision2;                                              // 0x07C8 (size: 0x8)
    class UBoxComponent* TankCollision1;                                              // 0x07D0 (size: 0x8)
    class UBoxComponent* TankCollision;                                               // 0x07D8 (size: 0x8)
    class UDecalComponent* Decal5;                                                    // 0x07E0 (size: 0x8)
    class UDecalComponent* Decal4;                                                    // 0x07E8 (size: 0x8)
    class UDecalComponent* Decal3;                                                    // 0x07F0 (size: 0x8)
    class UDecalComponent* Decal2;                                                    // 0x07F8 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0800 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0808 (size: 0x8)
    class UStaticMeshComponent* StaticMesh30;                                         // 0x0810 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0818 (size: 0x8)
    class UStaticMeshComponent* StaticMesh29;                                         // 0x0820 (size: 0x8)
    class UStaticMeshComponent* StaticMesh28;                                         // 0x0828 (size: 0x8)
    class UStaticMeshComponent* StaticMesh27;                                         // 0x0830 (size: 0x8)
    class UStaticMeshComponent* StaticMesh26;                                         // 0x0838 (size: 0x8)
    class UStaticMeshComponent* StaticMesh25;                                         // 0x0840 (size: 0x8)
    class UStaticMeshComponent* BasicCrates04;                                        // 0x0848 (size: 0x8)
    class USkeletalMeshComponent* SK_RelicLightTank;                                  // 0x0850 (size: 0x8)
    class UStaticMeshComponent* StaticMesh24;                                         // 0x0858 (size: 0x8)
    class UStaticMeshComponent* StaticMesh23;                                         // 0x0860 (size: 0x8)
    class UStaticMeshComponent* CamouflageCrates01;                                   // 0x0868 (size: 0x8)
    class UStaticMeshComponent* StaticMesh22;                                         // 0x0870 (size: 0x8)
    class UStaticMeshComponent* StaticMesh21;                                         // 0x0878 (size: 0x8)
    class UStaticMeshComponent* StaticMesh20;                                         // 0x0880 (size: 0x8)
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;                       // 0x0888 (size: 0x8)
    class UStaticMeshComponent* StaticMesh19;                                         // 0x0890 (size: 0x8)
    class UStaticMeshComponent* StaticMesh18;                                         // 0x0898 (size: 0x8)
    class UStaticMeshComponent* StaticMesh17;                                         // 0x08A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh16;                                         // 0x08A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x08B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh11;                                         // 0x08B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh15;                                         // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh14;                                         // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh13;                                         // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh12;                                         // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x08E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh10;                                         // 0x08E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x08F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x0900 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0908 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0910 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0918 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0928 (size: 0x8)
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;                        // 0x0930 (size: 0x8)
    class UStaticMeshComponent* Roof;                                                 // 0x0938 (size: 0x8)
    class UStaticMeshComponent* TownWMedS1;                                           // 0x0940 (size: 0x8)
    float Timeline_0_Intensity_29CABEEB4EF0B47466DC4D96552C0298;                      // 0x0948 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_29CABEEB4EF0B47466DC4D96552C0298; // 0x094C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0950 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPRVT2Room(int32 EntryPoint);
}; // Size: 0x958

#endif
