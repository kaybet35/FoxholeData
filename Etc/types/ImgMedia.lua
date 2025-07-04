---@meta

---@class UImgMediaSource : UBaseMediaSource
---@field FrameRateOverride FFrameRate
---@field ProxyOverride FString
---@field SequencePath FDirectoryPath
local UImgMediaSource = {}

---@param Path FString
function UImgMediaSource:SetSequencePath(Path) end
---@return FString
function UImgMediaSource:GetSequencePath() end
---@param OutProxies TArray<FString>
function UImgMediaSource:GetProxies(OutProxies) end


