---@meta

---@class FMagicLeapAudioDummyStruct
FMagicLeapAudioDummyStruct = {}


---@class UMagicLeapAudioFunctionLibrary : UBlueprintFunctionLibrary
UMagicLeapAudioFunctionLibrary = {}

---@param ResultDelegate FSetOnAudioJackUnpluggedDelegateResultDelegate
---@return boolean
function UMagicLeapAudioFunctionLibrary:SetOnAudioJackUnpluggedDelegate(ResultDelegate) end
---@param ResultDelegate FSetOnAudioJackPluggedDelegateResultDelegate
---@return boolean
function UMagicLeapAudioFunctionLibrary:SetOnAudioJackPluggedDelegate(ResultDelegate) end


