#ifndef UE4SS_SDK_BPWeatherStation_HPP
#define UE4SS_SDK_BPWeatherStation_HPP

class ABPWeatherStation_C : public AWeatherStation
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08C0 (size: 0x8)
    class UTemplateComponent* LargeFortCommon;                                        // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* RoofBaseMesh;                                         // 0x08D0 (size: 0x8)
    class UStructureSeatComponent* OccupiableComponent;                               // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x08E0 (size: 0x8)
    class USeatTriggerComponent* OccupiableTrigger;                                   // 0x08E8 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x08F0 (size: 0x8)
    class UStaticMeshComponent* RoofMesh;                                             // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* FloorMesh;                                            // 0x0900 (size: 0x8)
    class UBuildSocketComponent* FrontFortSocket;                                     // 0x0908 (size: 0x8)
    class UBuildSocketComponent* RightFortSocket;                                     // 0x0910 (size: 0x8)
    class UBuildSocketComponent* BackFortSocket;                                      // 0x0918 (size: 0x8)
    class UBuildSocketComponent* LeftFortSocket;                                      // 0x0920 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0928 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPWeatherStation(int32 EntryPoint);
}; // Size: 0x930

#endif
