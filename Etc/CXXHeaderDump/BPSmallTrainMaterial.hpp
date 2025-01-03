#ifndef UE4SS_SDK_BPSmallTrainMaterial_HPP
#define UE4SS_SDK_BPSmallTrainMaterial_HPP

class ABPSmallTrainMaterial_C : public ARailVehicleResourcePlatform
{
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x1210 (size: 0x8)
    class UItemGroupRenderComponent* ItemGroupRender;                                 // 0x1218 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1220 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat0;                                      // 0x1228 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1230 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1238 (size: 0x8)

}; // Size: 0x1240

#endif
