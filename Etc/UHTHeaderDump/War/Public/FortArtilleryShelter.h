#pragma once
#include "CoreMinimal.h"
#include "Fort.h"
#include "FortArtilleryShelter.generated.h"

UCLASS(Blueprintable)
class WAR_API AFortArtilleryShelter : public AFort {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseShelterBonus;
    
    AFortArtilleryShelter(const FObjectInitializer& ObjectInitializer);

};

