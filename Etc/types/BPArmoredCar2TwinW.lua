---@meta

---@class ABPArmoredCar2TwinW_C : ABPArmoredCarBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LightRear UStaticMeshComponent
---@field LightRearEmitter UPointLightComponent
---@field chassis USkeletalMeshComponent
ABPArmoredCar2TwinW_C = {}

---@param IsOn boolean
function ABPArmoredCar2TwinW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPArmoredCar2TwinW_C:ExecuteUbergraph_BPArmoredCar2TwinW(EntryPoint) end

