#include "ActorComponent.h"
#include "Net/UnrealNetwork.h"

UActorComponent::UActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    this->bNetAddressable = false;
    this->bAutoActivate = false;
    this->bIsActive = false;
    this->bEditableWhenInherited = true;
    this->bCanEverAffectNavigation = false;
    this->bIsEditorOnly = false;
    this->CreationMethod = EComponentCreationMethod::Native;
}

void UActorComponent::ToggleActive() {
}

void UActorComponent::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup) {
}

void UActorComponent::SetTickableWhenPaused(bool bTickableWhenPaused) {
}

void UActorComponent::SetIsReplicated(bool ShouldReplicate) {
}

void UActorComponent::SetComponentTickInterval(float TickInterval) {
}

void UActorComponent::SetComponentTickEnabled(bool bEnabled) {
}

void UActorComponent::SetAutoActivate(bool bNewAutoActivate) {
}

void UActorComponent::SetActive(bool bNewActive, bool bReset) {
}

void UActorComponent::RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) {
}

void UActorComponent::RemoveTickPrerequisiteActor(AActor* PrerequisiteActor) {
}




void UActorComponent::OnRep_IsActive() {
}

void UActorComponent::K2_DestroyComponent(UObject* Object) {
}

bool UActorComponent::IsComponentTickEnabled() const {
    return false;
}

bool UActorComponent::IsBeingDestroyed() const {
    return false;
}

bool UActorComponent::IsActive() const {
    return false;
}

AActor* UActorComponent::GetOwner() const {
    return NULL;
}

float UActorComponent::GetComponentTickInterval() const {
    return 0.0f;
}

void UActorComponent::Deactivate() {
}

bool UActorComponent::ComponentHasTag(FName Tag) const {
    return false;
}

void UActorComponent::AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) {
}

void UActorComponent::AddTickPrerequisiteActor(AActor* PrerequisiteActor) {
}

void UActorComponent::Activate(bool bReset) {
}

void UActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UActorComponent, bReplicates);
    DOREPLIFETIME(UActorComponent, bIsActive);
}


