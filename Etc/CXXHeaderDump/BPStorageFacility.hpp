#ifndef UE4SS_SDK_BPStorageFacility_HPP
#define UE4SS_SDK_BPStorageFacility_HPP

class ABPStorageFacility_C : public AStorageFacility
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class UBPLoadingAreaBox_C* BPLoadingAreaBox;                                      // 0x0878 (size: 0x8)
    class UTemperatureModifierBoxComponent* TemperatureModifierBox;                   // 0x0880 (size: 0x8)
    class UStaticMeshComponent* ItemCrate;                                            // 0x0888 (size: 0x8)
    class UStaticMeshComponent* HomeRegionTarp03;                                     // 0x0890 (size: 0x8)
    class UStaticMeshComponent* StaticMesh18;                                         // 0x0898 (size: 0x8)
    class UStaticMeshComponent* BasicCrates03;                                        // 0x08A0 (size: 0x8)
    class UStaticMeshComponent* MachineryVarious01;                                   // 0x08A8 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x08B0 (size: 0x8)
    class UChildActorComponent* Crates;                                               // 0x08B8 (size: 0x8)
    class UStaticMeshComponent* Barrel_11;                                            // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh17;                                         // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* BulwarkDressingMetalBracket;                          // 0x08D0 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh16;                                         // 0x08E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh15;                                         // 0x08E8 (size: 0x8)
    class USpotLightComponent* SpotLight3;                                            // 0x08F0 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x08F8 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x0900 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x0908 (size: 0x8)
    class UStaticMeshComponent* StaticMesh13;                                         // 0x0910 (size: 0x8)
    class UStaticMeshComponent* StaticMesh12;                                         // 0x0918 (size: 0x8)
    class UStaticMeshComponent* StaticMesh11;                                         // 0x0920 (size: 0x8)
    class UStaticMeshComponent* StaticMesh10;                                         // 0x0928 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x0930 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x0938 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0940 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0948 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0950 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0958 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0960 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0968 (size: 0x8)
    class UStaticMeshComponent* Rope02;                                               // 0x0970 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0978 (size: 0x8)
    class UDecalComponent* Decal4;                                                    // 0x0980 (size: 0x8)
    class UStaticMeshComponent* StaticMesh19;                                         // 0x0988 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x0990 (size: 0x8)
    class UStaticMeshComponent* AmmoCrate;                                            // 0x0998 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x09A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh14;                                         // 0x09A8 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x09B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x09B8 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPStorageFacility(int32 EntryPoint);
}; // Size: 0x9C0

#endif
