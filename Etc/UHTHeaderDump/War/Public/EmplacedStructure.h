#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "EmplacedStructure.generated.h"

UCLASS(Blueprintable)
class WAR_API AEmplacedStructure : public ATeamStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmplacedIncomingDamageModifier;
    
    AEmplacedStructure(const FObjectInitializer& ObjectInitializer);

};

