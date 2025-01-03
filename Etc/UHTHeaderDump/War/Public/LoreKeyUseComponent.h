#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UseComponent.h"
#include "LoreKeyUseComponent.generated.h"

class ALoreList;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API ULoreKeyUseComponent : public UUseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALoreList> LoreListClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RemovedItemCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AddedItemCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StepIncompleteCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StepCompletedCodeName;
    
public:
    ULoreKeyUseComponent(const FObjectInitializer& ObjectInitializer);

};

