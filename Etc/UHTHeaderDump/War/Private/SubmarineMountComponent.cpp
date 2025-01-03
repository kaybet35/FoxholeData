#include "SubmarineMountComponent.h"

USubmarineMountComponent::USubmarineMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SensorReadingProxy = NULL;
}

void USubmarineMountComponent::ClientSensorPingResponse_Implementation(const TArray<FSensorPingResponse>& Responses, bool bIsIntel) {
}


