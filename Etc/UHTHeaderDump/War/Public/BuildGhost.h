#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ModificationSocketPreviewInfo.h"
#include "BuildGhost.generated.h"

class ABuildableStructure;
class ALineOfSightVisualizationActor;
class UArrowComponent;
class UBoxComponent;
class UBuildSocketComponent;
class UMaterialInterface;
class UMaterialParameterCollection;
class USplineConnectorComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class WAR_API ABuildGhost : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBuildSocketComponent> RotatedSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PlacementHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBuildSocketComponent*> Sockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* ManualConnectorSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineConnectorComponent* MainSplineConnector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBoxComponent> LandscapeHoleVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform LandscapeHoleVolumeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBuildSocketComponent*, FModificationSocketPreviewInfo> ModificationSocketPreviewInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BuildFootprintComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> IgnoredActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildableStructure* CDO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* BuildGhostParamCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BuildGhostMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BuildGhostHighlightMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DirectionArrowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* UpgradeModeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALineOfSightVisualizationActor* LineOfSightVisualizationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildableStructure* UpgradeStructure;
    
public:
    ABuildGhost(const FObjectInitializer& ObjectInitializer);

};

