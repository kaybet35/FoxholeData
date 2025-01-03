---@meta

---@class ATownCLargeGarrisonGS1_C : AGarrisonStation
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spawn5 USpawnPointComponent
---@field Spawn4 USpawnPointComponent
---@field Spawn3 USpawnPointComponent
---@field Spawn2 USpawnPointComponent
---@field Spawn1 USpawnPointComponent
---@field Spawn0 USpawnPointComponent
---@field RadioStationMesh1 UStaticMeshComponent
---@field ArtilleryShelterMesh UStaticMeshComponent
---@field GarrisonStationBase UStaticMeshComponent
---@field OperatingPostMesh UStaticMeshComponent
---@field RadioStationMesh UStaticMeshComponent
---@field Decal32 UDecalComponent
---@field Decal31 UDecalComponent
---@field Decal30 UDecalComponent
---@field Decal29 UDecalComponent
---@field Decal28 UDecalComponent
---@field Decal27 UDecalComponent
---@field Decal26 UDecalComponent
---@field StaticMesh UStaticMeshComponent
---@field Decal25 UDecalComponent
---@field Decal24 UDecalComponent
---@field Decal23 UDecalComponent
---@field Decal22 UDecalComponent
---@field Decal21 UDecalComponent
---@field Decal20 UDecalComponent
---@field Decal19 UDecalComponent
---@field Decal18 UDecalComponent
---@field Decal17 UDecalComponent
---@field Decal16 UDecalComponent
---@field Decal15 UDecalComponent
---@field Decal14 UDecalComponent
---@field Decal13 UDecalComponent
---@field Decal12 UDecalComponent
---@field Decal11 UDecalComponent
---@field Decal7 UDecalComponent
---@field Decal6 UDecalComponent
---@field Decal10 UDecalComponent
---@field Decal9 UDecalComponent
---@field Decal8 UDecalComponent
---@field Decal5 UDecalComponent
---@field Decal UDecalComponent
---@field Window4 UStaticMeshComponent
---@field Window3 UStaticMeshComponent
---@field Window2 UStaticMeshComponent
---@field Window1 UStaticMeshComponent
---@field Decal4 UDecalComponent
---@field Decal3 UDecalComponent
---@field Decal2 UDecalComponent
---@field Decal1 UDecalComponent
---@field BPAIGarrisonTurret_Back UBPAIGarrisonTurret_C
---@field BPAIGarrisonTurret_Right UBPAIGarrisonTurret_C
---@field BPAIGarrisonTurret_Front UBPAIGarrisonTurret_C
---@field BPAIGarrisonTurret_Left UBPAIGarrisonTurret_C
---@field BPStructureInteriorArea1 UBPStructureInteriorArea_C
---@field MultiplexedRoof UMultiplexedStaticMeshComponent
---@field MultiplexedHouse UMultiplexedStaticMeshComponent
---@field BPBicycleSpawnLocationComponent UBPBicycleSpawnLocationComponent_C
---@field ViewTargetCamera UCameraComponent
---@field BPStructureInteriorArea UBPStructureInteriorArea_C
---@field RoofMesh UStaticMeshComponent
---@field ArtilleryShelterWeakPoint UBoxComponent
---@field HouseMesh UStaticMeshComponent
ATownCLargeGarrisonGS1_C = {}

function ATownCLargeGarrisonGS1_C:ReceiveBeginPlay() end
---@param TechTreeComponent UTechTreeComponent
---@param TechID ETechComponentID
function ATownCLargeGarrisonGS1_C:OnResearched(TechTreeComponent, TechID) end
---@param EntryPoint int32
function ATownCLargeGarrisonGS1_C:ExecuteUbergraph_TownCLargeGarrisonGS1(EntryPoint) end


