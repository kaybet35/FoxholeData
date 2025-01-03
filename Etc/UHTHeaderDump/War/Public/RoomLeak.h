#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "RoomLeak.generated.h"

class UAudioComponent;
class UDecalComponent;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FRoomLeak : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 RoomIx;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UDecalComponent> ExteriorDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UDecalComponent> InteriorDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> WaterFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> AboveWaterFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> LeakingSFXLoop;
    
    WAR_API FRoomLeak();
};

