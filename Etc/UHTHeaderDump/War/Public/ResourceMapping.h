#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "ResourceMapping.generated.h"

class AFacilityRefinery;
class AResourceField;
class AResourceMine;

UCLASS(Blueprintable)
class WAR_API UResourceMapping : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<AResourceMine>> MineTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<AResourceField>> FieldTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFacilityRefinery> OilRigType;
    
    UResourceMapping();

};

