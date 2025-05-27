#pragma once
#include "CoreMinimal.h"
#include "WarProjectile.h"
#include "WaterProjectile.generated.h"

class URoomComponent;

UCLASS(Blueprintable)
class WAR_API AWaterProjectile : public AWarProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URoomComponent* InstigatorRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URoomComponent* LastRoom;
    
    AWaterProjectile(const FObjectInitializer& ObjectInitializer);

};

