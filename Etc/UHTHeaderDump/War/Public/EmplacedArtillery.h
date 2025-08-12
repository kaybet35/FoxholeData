#pragma once
#include "CoreMinimal.h"
#include "EmplacedWeapon.h"
#include "EmplacedArtillery.generated.h"

UCLASS(Blueprintable)
class WAR_API AEmplacedArtillery : public AEmplacedWeapon {
    GENERATED_BODY()
public:
    AEmplacedArtillery(const FObjectInitializer& ObjectInitializer);

};

