#pragma once
#include "CoreMinimal.h"
#include "ForwardBase.h"
#include "PowerNode.h"
#include "Templates/SubclassOf.h"
#include "FortForwardBase.generated.h"

class ALadder;
class USceneComponent;

UCLASS(Blueprintable)
class WAR_API AFortForwardBase : public AForwardBase, public IPowerNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LadderLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALadder> LadderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALadder* Ladder;
    
public:
    AFortForwardBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

