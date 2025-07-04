---@meta

---@class ABPKeep_C : AKeep
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BPStructureInteriorArea4 UBPStructureInteriorArea_C
---@field BPStructureInteriorArea3 UBPStructureInteriorArea_C
---@field BPStructureInteriorArea2 UBPStructureInteriorArea_C
---@field BPStructureInteriorArea1 UBPStructureInteriorArea_C
---@field BPStructureInteriorArea UBPStructureInteriorArea_C
---@field Spawn8 USpawnPointComponent
---@field Spawn7 USpawnPointComponent
---@field Spawn6 USpawnPointComponent
---@field Spawn5 USpawnPointComponent
---@field Spawn4 USpawnPointComponent
---@field Spawn3 USpawnPointComponent
---@field Spawn2 USpawnPointComponent
---@field Spawn1 USpawnPointComponent
---@field StaticMesh18 UStaticMeshComponent
---@field BulwarkKeepInteriorDoor UStaticMeshComponent
---@field MultiplexedStaticMeshRoof UMultiplexedStaticMeshComponent
---@field StaticMesh17 UStaticMeshComponent
---@field StaticMesh16 UStaticMeshComponent
---@field StaticMesh15 UStaticMeshComponent
---@field StaticMesh14 UStaticMeshComponent
---@field StaticMesh13 UStaticMeshComponent
---@field StaticMesh12 UStaticMeshComponent
---@field Box3 UBoxComponent
---@field Box2 UBoxComponent
---@field Box1 UBoxComponent
---@field Box UBoxComponent
---@field StaticMesh11 UStaticMeshComponent
---@field StaticMesh7 UStaticMeshComponent
---@field StaticMesh10 UStaticMeshComponent
---@field StaticMesh9 UStaticMeshComponent
---@field StaticMesh8 UStaticMeshComponent
---@field StaticMesh6 UStaticMeshComponent
---@field PointLight5 UPointLightComponent
---@field PointLight4 UPointLightComponent
---@field StaticMesh5 UStaticMeshComponent
---@field StaticMesh4 UStaticMeshComponent
---@field PointLight3 UPointLightComponent
---@field PointLight UPointLightComponent
---@field StaticMesh3 UStaticMeshComponent
---@field StaticMesh2 UStaticMeshComponent
---@field PointLight2 UPointLightComponent
---@field PointLight1 UPointLightComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field WheelMesh UStaticMeshComponent
---@field RoofMesh UStaticMeshComponent
---@field MultiplexedStaticMesh UMultiplexedStaticMeshComponent
local ABPKeep_C = {}

---@param Exiting boolean
---@param Actor AActor
function ABPKeep_C:OnEnterExitKeep(Exiting, Actor) end
---@param OtherActor AActor
function ABPKeep_C:ReceiveActorBeginOverlap(OtherActor) end
---@param OtherActor AActor
function ABPKeep_C:ReceiveActorEndOverlap(OtherActor) end
---@param EntryPoint int32
function ABPKeep_C:ExecuteUbergraph_BPKeep(EntryPoint) end


