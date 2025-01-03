#pragma once
#include "CoreMinimal.h"
#include "CoalitionAssignable.h"
#include "EmplacedWeapon.h"
#include "EmplacedArtillery.generated.h"

UCLASS(Blueprintable)
class WAR_API AEmplacedArtillery : public AEmplacedWeapon, public ICoalitionAssignable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 RequiredSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
public:
    AEmplacedArtillery(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

