---@meta

---@class ATownWLargeGS1_C : AGarrisonStation
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spawn5 USpawnPointComponent
---@field Spawn4 USpawnPointComponent
---@field Spawn3 USpawnPointComponent
---@field Spawn2 USpawnPointComponent
---@field Spawn1 USpawnPointComponent
---@field Spawn0 USpawnPointComponent
---@field Decal1 UDecalComponent
---@field Decal UDecalComponent
---@field StaticMesh2 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field StaticMesh1 UStaticMeshComponent
---@field SpotLight2 USpotLightComponent
---@field SpotLight1 USpotLightComponent
---@field BPBicycleSpawnLocationComponent UBPBicycleSpawnLocationComponent_C
---@field ViewTargetCamera UCameraComponent
---@field BackDoorStair UStaticMeshComponent
---@field AITurretMarker01 UDecalComponent
---@field AITurretMarker03 UDecalComponent
---@field AITurretMarker02 UDecalComponent
---@field AITurretMarker04 UDecalComponent
---@field AITurretMarker00 UDecalComponent
---@field w5 UStaticMeshComponent
---@field w4 UStaticMeshComponent
---@field w3 UStaticMeshComponent
---@field w2 UStaticMeshComponent
---@field w1 UStaticMeshComponent
---@field BPAIGarrisonTurret4 UBPAIGarrisonTurret_C
---@field BPAIGarrisonTurret3 UBPAIGarrisonTurret_C
---@field BPAIGarrisonTurret2 UBPAIGarrisonTurret_C
---@field BPAIGarrisonTurret1 UBPAIGarrisonTurret_C
---@field BPAIGarrisonTurret UBPAIGarrisonTurret_C
---@field BPStructureInteriorArea1 UBPStructureInteriorArea_C
---@field BPStructureInteriorArea UBPStructureInteriorArea_C
---@field GarrisonStationBase UStaticMeshComponent
---@field RadioStationMesh1 UStaticMeshComponent
---@field RadioStationMesh UStaticMeshComponent
---@field ArtilleryShelterMesh UStaticMeshComponent
---@field OperatingPostMesh UStaticMeshComponent
---@field RoofMesh UStaticMeshComponent
---@field ArtilleryShelterWeakPoint UBoxComponent
---@field MultiplexedRoof UMultiplexedStaticMeshComponent
---@field MultiplexedHouse UMultiplexedStaticMeshComponent
---@field HouseMesh UStaticMeshComponent
ATownWLargeGS1_C = {}

function ATownWLargeGS1_C:ReceiveBeginPlay() end
---@param TechTreeComponent UTechTreeComponent
---@param TechID ETechComponentID
function ATownWLargeGS1_C:OnResearched(TechTreeComponent, TechID) end
---@param EntryPoint int32
function ATownWLargeGS1_C:ExecuteUbergraph_TownWLargeGS1(EntryPoint) end


