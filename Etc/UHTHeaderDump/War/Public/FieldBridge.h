#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "FieldBridge.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API AFieldBridge : public ABuildableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FrontRamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BackRamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FrontKillVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BackKillVolume;
    
public:
    AFieldBridge(const FObjectInitializer& ObjectInitializer);

};

