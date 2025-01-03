#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "ETechID.h"
#include "TechTreeCategories.h"
#include "TechTreeItemInfo.h"
#include "TechTree.generated.h"

UCLASS(Blueprintable)
class WAR_API ATechTree : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETechID, FTechTreeItemInfo> ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTechTreeCategories Categories;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_TechUnlockBits, meta=(AllowPrivateAccess=true))
    TArray<uint32> TechUnlockBits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<float> TechUnlockProgress;
    
public:
    ATechTree(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_TechUnlockBits(const TArray<uint32>& PreviousTechUnlockBits);
    
};

