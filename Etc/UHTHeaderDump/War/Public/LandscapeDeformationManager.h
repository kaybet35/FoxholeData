#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CachedLandscape.h"
#include "EnvironmentModificationKey.h"
#include "ModifiedFoliageInfo.h"
#include "LandscapeDeformationManager.generated.h"

class AEnvironmentModification;
class UFoliageInstancedStaticMeshComponent;

UCLASS(Blueprintable, Config=Game)
class WAR_API ULandscapeDeformationManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCachedLandscape> LandscapeCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FEnvironmentModificationKey, AEnvironmentModification*> EnvironmentalModifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFoliageInstancedStaticMeshComponent*, FModifiedFoliageInfo> ModifiedFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFoliageInstancedStaticMeshComponent*> InProgressTreeRebuilds;
    
public:
    ULandscapeDeformationManager();

    UFUNCTION(BlueprintCallable, Exec)
    void VerifyLandscapeZ(float X, float Y, float Extent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawModifiedLandscapes(float Duration, bool bPersistent, bool bDrawOriginal, bool bDrawAll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawEnvironmentalModification(float Duration);
    
};

