---@meta

---@class UMagicLeapPrivilegesFunctionLibrary : UBlueprintFunctionLibrary
local UMagicLeapPrivilegesFunctionLibrary = {}

---@param Privilege EMagicLeapPrivilege
---@param ResultDelegate FRequestPrivilegeAsyncResultDelegate
---@return boolean
function UMagicLeapPrivilegesFunctionLibrary:RequestPrivilegeAsync(Privilege, ResultDelegate) end
---@param Privilege EMagicLeapPrivilege
---@return boolean
function UMagicLeapPrivilegesFunctionLibrary:RequestPrivilege(Privilege) end
---@param Privilege EMagicLeapPrivilege
---@return boolean
function UMagicLeapPrivilegesFunctionLibrary:CheckPrivilege(Privilege) end


