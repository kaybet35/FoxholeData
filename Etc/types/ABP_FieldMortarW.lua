---@meta

---@class UABP_FieldMortarW_C : USimVehicleGunnerSupportAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnimGraphNode_Root_80F49D714C4380B96AC0418992D6762C FAnimNode_Root
---@field AnimGraphNode_SequencePlayer_0A91DA55492B14CAD9E7FE905133E6CC FAnimNode_SequencePlayer
---@field AnimGraphNode_LayeredBoneBlend_E693425546B24B5B8E8EB6B5E1F980C7 FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendSpacePlayer_993342604A94473BCE70F698D82C79FC FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_BlendSpacePlayer_4B7CDDEF422B8A6DF1DA14B9F0E35694 FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_SequencePlayer_C794192144EA0D22E04A5487C971B211 FAnimNode_SequencePlayer
---@field AnimGraphNode_SequencePlayer_FBD5AFAF4D3C59005D8A9C893755CDBB FAnimNode_SequencePlayer
---@field AnimGraphNode_BlendListByBool_98D0EFB94A3168A63B153C89AB46A98B FAnimNode_BlendListByBool
---@field WheelRotationSpeedFactor int32
local UABP_FieldMortarW_C = {}

---@param AnimGraph FPoseLink
function UABP_FieldMortarW_C:AnimGraph(AnimGraph) end
function UABP_FieldMortarW_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMortarW_AnimGraphNode_BlendSpacePlayer_993342604A94473BCE70F698D82C79FC() end
function UABP_FieldMortarW_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMortarW_AnimGraphNode_SequencePlayer_0A91DA55492B14CAD9E7FE905133E6CC() end
function UABP_FieldMortarW_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FieldMortarW_AnimGraphNode_SequencePlayer_C794192144EA0D22E04A5487C971B211() end
---@param EntryPoint int32
function UABP_FieldMortarW_C:ExecuteUbergraph_ABP_FieldMortarW(EntryPoint) end


