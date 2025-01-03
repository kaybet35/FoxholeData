#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "BuildFootprintInfo.h"
#include "BuildFootprintBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UBuildFootprintBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildFootprintInfo Info;
    
    UBuildFootprintBoxComponent(const FObjectInitializer& ObjectInitializer);

};

