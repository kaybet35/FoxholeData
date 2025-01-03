---@meta

---@class ABPAmmoRoomT2_C : AAmmoRoom
---@field SideLeft UStaticMeshComponent
---@field Light UParticleSystemComponent
---@field ParticleSystem UParticleSystemComponent
---@field RoofDirt UStaticMeshComponent
---@field DirtCornerBackLeft UStaticMeshComponent
---@field DirtCornerBackRight UStaticMeshComponent
---@field DirtCornerFrontRight UStaticMeshComponent
---@field DirtRight UStaticMeshComponent
---@field DirtBack UStaticMeshComponent
---@field DirtLeft UStaticMeshComponent
---@field DirtFront UStaticMeshComponent
---@field CornerBackRight UStaticMeshComponent
---@field Roof UStaticMeshComponent
---@field CornerFrontRight UStaticMeshComponent
---@field CornerFrontLeft UStaticMeshComponent
---@field CornerBackLeft UStaticMeshComponent
---@field Floor UStaticMeshComponent
---@field DirtCornerFrontLeft UStaticMeshComponent
---@field InstancedStaticMesh UInstancedStaticMeshComponent
---@field ItemGroupRender UItemGroupRenderComponent
---@field BuildSiteWorkVolume UBoxComponent
---@field FortCommonT2T3ModsMinimal UTemplateComponent
---@field FortCommonDefenseMods UTemplateComponent
---@field UnderModSlot UBPFortUnderModSlot_C
---@field BackModSlot UBPFortWallModSlotMinimal_C
---@field RightModSlot UBPFortWallModSlotMinimal_C
---@field FrontModSlot UBPFortWallModSlotMinimal_C
---@field FortCommon UTemplateComponent
---@field AmmoRoom UStaticMeshComponent
ABPAmmoRoomT2_C = {}

---@param AmmoCount int32
function ABPAmmoRoomT2_C:UpdateAmmoInstanceMesh(AmmoCount) end


