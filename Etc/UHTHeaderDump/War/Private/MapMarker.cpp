#include "MapMarker.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextRenderComponent -FallbackName=TextRenderComponent

AMapMarker::AMapMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("StructureArrow"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->MarkerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("MarkerArea"));
    this->MajorTextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("MajorTextRender"));
    this->MinorTextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("MinorTextRender"));
    this->MapMarkerType = EMapMarkerType::Minor;
    this->MajorTextRender->SetupAttachment(RootComponent);
    this->MarkerArea->SetupAttachment(RootComponent);
    this->MinorTextRender->SetupAttachment(RootComponent);
}

void AMapMarker::BeginMarkerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


