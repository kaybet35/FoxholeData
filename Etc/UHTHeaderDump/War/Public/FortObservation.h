#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PowerInfo.h"
#include "PowerNode.h"
#include "TeamStructure.h"
#include "FortObservation.generated.h"

class UMapIntelligenceSourceComponent;
class UTeamFlagMeshComponent;

UCLASS(Blueprintable)
class WAR_API AFortObservation : public ATeamStructure, public IPowerNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ObstructionCheckOverrideExtents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapIntelligenceSourceComponent* MapIntelligenceSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamFlagMeshComponent* TeamFlagMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPowerInfo PowerInfo;
    
public:
    AFortObservation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

