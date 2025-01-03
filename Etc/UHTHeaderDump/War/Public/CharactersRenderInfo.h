#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "CharacterSkinToneInfo.h"
#include "EOutfitType.h"
#include "FootPrintActorInfo.h"
#include "IdleAnimation.h"
#include "OutfitMeshInfo.h"
#include "PhysicalMaterialResolver.h"
#include "UniformRenderInfo.h"
#include "ZombieFootPrintActorInfo.h"
#include "CharactersRenderInfo.generated.h"

UCLASS(Blueprintable)
class WAR_API ACharactersRenderInfo : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOutfitType, FOutfitMeshInfo> OutfitInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniformRenderInfo UniformInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSkinToneInfo> MaleSkinTones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSkinToneInfo> FemaleSkinTones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFootPrintActorInfo> FootPrintInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZombieFootPrintActorInfo ZombieFootprintInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIdleAnimation> IdleAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicalMaterialResolver PhysicalMaterialResolver;
    
public:
    ACharactersRenderInfo(const FObjectInitializer& ObjectInitializer);

};

