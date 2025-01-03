#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FilePath -FallbackName=FilePath
#include "ELuminFrameTimingHint.h"
#include "ELuminPrivilege.h"
#include "LuminComponentElement.h"
#include "LuminComponentSubElement.h"
#include "LuminRuntimeSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class LUMINRUNTIMESETTINGS_API ULuminRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString ApplicationDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bIsScreensApp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    ELuminFrameTimingHint FrameTimingHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bProtectedContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bUseMobileRendering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bUseVulkan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FFilePath Certificate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FDirectoryPath IconModelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FDirectoryPath IconPortalPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 VersionCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 MinimumAPILevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<ELuminPrivilege> AppPrivileges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FLuminComponentSubElement> ExtraComponentSubElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FLuminComponentElement> ExtraComponentElements;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpatializationPlugin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReverbPlugin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OcclusionPlugin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 SoundCueCookQualityIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bRemoveDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FDirectoryPath VulkanValidationLayerLibs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bFrameVignette;
    
    ULuminRuntimeSettings();

};

