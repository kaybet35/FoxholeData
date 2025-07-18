#include "PrimitiveComponent.h"
#include "Templates/SubclassOf.h"

UPrimitiveComponent::UPrimitiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinDrawDistance = 0.00f;
    this->LDMaxDrawDistance = 0.00f;
    this->CachedMaxDrawDistance = 0.00f;
    this->DepthPriorityGroup = SDPG_World;
    this->ViewOwnerDepthPriorityGroup = SDPG_World;
    this->IndirectLightingCacheQuality = ILCQ_Point;
    this->LightmapType = ELightmapType::Default;
    this->bUseMaxLODAsImposter = false;
    this->bBatchImpostersAsInstances = false;
    this->bNeverDistanceCull = false;
    this->bAlwaysCreatePhysicsState = false;
    this->bGenerateOverlapEvents = true;
    this->bMultiBodyOverlap = false;
    this->bTraceComplexOnMove = false;
    this->bReturnMaterialOnMove = false;
    this->bUseViewOwnerDepthPriorityGroup = false;
    this->bAllowCullDistanceVolume = true;
    this->bHasMotionBlurVelocityMeshes = false;
    this->bVisibleInReflectionCaptures = true;
    this->bVisibleInRayTracing = true;
    this->bRenderInMainPass = true;
    this->bRenderInDepthPass = true;
    this->bReceivesDecals = true;
    this->bOwnerNoSee = false;
    this->bOnlyOwnerSee = false;
    this->bTreatAsBackgroundForOcclusion = false;
    this->bUseAsOccluder = false;
    this->bSelectable = true;
    this->bForceMipStreaming = false;
    this->bHasPerInstanceHitProxies = false;
    this->CastShadow = false;
    this->bAffectDynamicIndirectLighting = true;
    this->bAffectDistanceFieldLighting = true;
    this->bCastDynamicShadow = true;
    this->bCastStaticShadow = true;
    this->bCastVolumetricTranslucentShadow = false;
    this->bSelfShadowOnly = false;
    this->bCastFarShadow = false;
    this->bCastInsetShadow = false;
    this->bCastCinematicShadow = false;
    this->bCastHiddenShadow = false;
    this->bCastShadowAsTwoSided = false;
    this->bLightAsIfStatic = false;
    this->bLightAttachmentsAsGroup = false;
    this->bExcludeFromLightAttachmentGroup = false;
    this->bReceiveMobileCSMShadows = true;
    this->bSingleSampleShadowFromStationaryLights = false;
    this->bIgnoreRadialImpulse = false;
    this->bIgnoreRadialForce = false;
    this->bApplyImpulseOnDamage = true;
    this->bReplicatePhysicsToAutonomousProxy = true;
    this->AlwaysLoadOnClient = true;
    this->AlwaysLoadOnServer = true;
    this->bUseEditorCompositing = false;
    this->bRenderCustomDepth = false;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::No;
    this->CanCharacterStepUpOn = ECB_Yes;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->CustomDepthStencilValue = 0;
    this->TranslucencySortPriority = 0;
    this->VisibilityId = -1;
    this->VirtualTextureLodBias = 0;
    this->VirtualTextureCullMips = 0;
    this->VirtualTextureMinCoverage = 0;
    this->VirtualTextureRenderPassType = ERuntimeVirtualTextureMainPassType::Exclusive;
    this->LpvBiasMultiplier = 1.00f;
    this->BoundsScale = 1.00f;
    this->LODParentPrimitive = NULL;
}

void UPrimitiveComponent::WakeRigidBody(FName BoneName) {
}

void UPrimitiveComponent::WakeAllRigidBodies() {
}

void UPrimitiveComponent::SetWalkableSlopeOverride(const FWalkableSlopeOverride& NewOverride) {
}

void UPrimitiveComponent::SetUseCCD(bool InUseCCD, FName BoneName) {
}

void UPrimitiveComponent::SetTranslucentSortPriority(int32 NewTranslucentSortPriority) {
}

void UPrimitiveComponent::SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights) {
}

void UPrimitiveComponent::SetSimulatePhysics(bool bSimulate) {
}

void UPrimitiveComponent::SetRenderInMainPass(bool bValue) {
}

void UPrimitiveComponent::SetRenderCustomDepth(bool bValue) {
}

void UPrimitiveComponent::SetReceivesDecals(bool bNewReceivesDecals) {
}

void UPrimitiveComponent::SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial) {
}

void UPrimitiveComponent::SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, FName BoneName) {
}

void UPrimitiveComponent::SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, FName BoneName) {
}

void UPrimitiveComponent::SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, FName BoneName) {
}

void UPrimitiveComponent::SetPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName) {
}

void UPrimitiveComponent::SetPhysicsAngularVelocityInRadians(FVector NewAngVel, bool bAddToCurrent, FName BoneName) {
}

void UPrimitiveComponent::SetPhysicsAngularVelocityInDegrees(FVector NewAngVel, bool bAddToCurrent, FName BoneName) {
}

void UPrimitiveComponent::SetPhysicsAngularVelocity(FVector NewAngVel, bool bAddToCurrent, FName BoneName) {
}

void UPrimitiveComponent::SetOwnerNoSee(bool bNewOwnerNoSee) {
}

void UPrimitiveComponent::SetOnlyOwnerSee(bool bNewOnlyOwnerSee) {
}

void UPrimitiveComponent::SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision) {
}

void UPrimitiveComponent::SetMaterialByName(FName MaterialSlotName, UMaterialInterface* Material) {
}

void UPrimitiveComponent::SetMaterial(int32 ElementIndex, UMaterialInterface* Material) {
}

void UPrimitiveComponent::SetMassScale(FName BoneName, float InMassScale) {
}

void UPrimitiveComponent::SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass) {
}

void UPrimitiveComponent::SetLinearDamping(float InDamping) {
}

void UPrimitiveComponent::SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup) {
}

void UPrimitiveComponent::SetGenerateOverlapEvents(bool bInGenerateOverlapEvents) {
}

void UPrimitiveComponent::SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup) {
}

void UPrimitiveComponent::SetEnableGravity(bool bGravityEnabled) {
}

void UPrimitiveComponent::SetCustomPrimitiveDataVector4(int32 DataIndex, FVector4 Value) {
}

void UPrimitiveComponent::SetCustomPrimitiveDataVector3(int32 DataIndex, FVector Value) {
}

void UPrimitiveComponent::SetCustomPrimitiveDataVector2(int32 DataIndex, FVector2D Value) {
}

void UPrimitiveComponent::SetCustomPrimitiveDataFloat(int32 DataIndex, float Value) {
}

void UPrimitiveComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit) {
}

void UPrimitiveComponent::SetCustomDepthStencilValue(int32 Value) {
}

void UPrimitiveComponent::SetCullDistance(float NewCullDistance) {
}

void UPrimitiveComponent::SetConstraintMode(TEnumAsByte<EDOFMode::Type> ConstraintMode) {
}

void UPrimitiveComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse) {
}

void UPrimitiveComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse) {
}

void UPrimitiveComponent::SetCollisionProfileName(FName InCollisionProfileName) {
}

void UPrimitiveComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel) {
}

void UPrimitiveComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled::Type> NewType) {
}

void UPrimitiveComponent::SetCenterOfMass(FVector CenterOfMassOffset, FName BoneName) {
}

void UPrimitiveComponent::SetCastShadow(bool NewCastShadow) {
}

void UPrimitiveComponent::SetCastInsetShadow(bool bInCastInsetShadow) {
}

void UPrimitiveComponent::SetBoundsScale(float NewBoundsScale) {
}

void UPrimitiveComponent::SetAngularDamping(float InDamping) {
}

void UPrimitiveComponent::SetAllUseCCD(bool InUseCCD) {
}

void UPrimitiveComponent::SetAllPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent) {
}

void UPrimitiveComponent::SetAllPhysicsAngularVelocityInRadians(const FVector& NewAngVel, bool bAddToCurrent) {
}

void UPrimitiveComponent::SetAllPhysicsAngularVelocityInDegrees(const FVector& NewAngVel, bool bAddToCurrent) {
}

void UPrimitiveComponent::SetAllMassScale(float InMassScale) {
}

FVector UPrimitiveComponent::ScaleByMomentOfInertia(FVector InputVector, FName BoneName) const {
    return FVector{};
}

void UPrimitiveComponent::PutRigidBodyToSleep(FName BoneName) {
}

bool UPrimitiveComponent::K2_SphereTraceComponent(FVector TraceStart, FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit) {
    return false;
}

bool UPrimitiveComponent::K2_SphereOverlapComponent(FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit) {
    return false;
}

bool UPrimitiveComponent::K2_LineTraceComponent(FVector TraceStart, FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit) {
    return false;
}

bool UPrimitiveComponent::K2_IsQueryCollisionEnabled() const {
    return false;
}

bool UPrimitiveComponent::K2_IsPhysicsCollisionEnabled() const {
    return false;
}

bool UPrimitiveComponent::K2_IsCollisionEnabled() const {
    return false;
}

bool UPrimitiveComponent::K2_BoxOverlapComponent(FVector InBoxCentre, const FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit) {
    return false;
}

bool UPrimitiveComponent::IsOverlappingComponent(const UPrimitiveComponent* OtherComp) const {
    return false;
}

bool UPrimitiveComponent::IsOverlappingActor(const AActor* Other) const {
    return false;
}

bool UPrimitiveComponent::IsGravityEnabled() const {
    return false;
}

bool UPrimitiveComponent::IsAnyRigidBodyAwake() {
    return false;
}

void UPrimitiveComponent::IgnoreComponentWhenMoving(UPrimitiveComponent* Component, bool bShouldIgnore) {
}

void UPrimitiveComponent::IgnoreActorWhenMoving(AActor* Actor, bool bShouldIgnore) {
}

FWalkableSlopeOverride UPrimitiveComponent::GetWalkableSlopeOverride() const {
    return FWalkableSlopeOverride{};
}

FVector UPrimitiveComponent::GetPhysicsLinearVelocityAtPoint(FVector Point, FName BoneName) {
    return FVector{};
}

FVector UPrimitiveComponent::GetPhysicsLinearVelocity(FName BoneName) {
    return FVector{};
}

FVector UPrimitiveComponent::GetPhysicsAngularVelocityInRadians(FName BoneName) const {
    return FVector{};
}

FVector UPrimitiveComponent::GetPhysicsAngularVelocityInDegrees(FName BoneName) const {
    return FVector{};
}

FVector UPrimitiveComponent::GetPhysicsAngularVelocity(FName BoneName) const {
    return FVector{};
}

void UPrimitiveComponent::GetOverlappingComponents(TArray<UPrimitiveComponent*>& OutOverlappingComponents) const {
}

void UPrimitiveComponent::GetOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const {
}

int32 UPrimitiveComponent::GetNumMaterials() const {
    return 0;
}

UMaterialInterface* UPrimitiveComponent::GetMaterialFromCollisionFaceIndex(int32 FaceIndex, int32& SectionIndex) const {
    return NULL;
}

UMaterialInterface* UPrimitiveComponent::GetMaterial(int32 ElementIndex) const {
    return NULL;
}

float UPrimitiveComponent::GetMassScale(FName BoneName) const {
    return 0.0f;
}

float UPrimitiveComponent::GetMass() const {
    return 0.0f;
}

float UPrimitiveComponent::GetLinearDamping() const {
    return 0.0f;
}

FVector UPrimitiveComponent::GetInertiaTensor(FName BoneName) const {
    return FVector{};
}

bool UPrimitiveComponent::GetGenerateOverlapEvents() const {
    return false;
}

TEnumAsByte<ECollisionResponse> UPrimitiveComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel) const {
    return ECR_Ignore;
}

FName UPrimitiveComponent::GetCollisionProfileName() const {
    return NAME_None;
}

TEnumAsByte<ECollisionChannel> UPrimitiveComponent::GetCollisionObjectType() const {
    return ECC_WorldStatic;
}

TEnumAsByte<ECollisionEnabled::Type> UPrimitiveComponent::GetCollisionEnabled() const {
    return ECollisionEnabled::NoCollision;
}

float UPrimitiveComponent::GetClosestPointOnCollision(const FVector& Point, FVector& OutPointOnBody, FName BoneName) const {
    return 0.0f;
}

FVector UPrimitiveComponent::GetCenterOfMass(FName BoneName) const {
    return FVector{};
}

float UPrimitiveComponent::GetAngularDamping() const {
    return 0.0f;
}

UMaterialInstanceDynamic* UPrimitiveComponent::CreateDynamicMaterialInstance(int32 ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName) {
    return NULL;
}

UMaterialInstanceDynamic* UPrimitiveComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int32 ElementIndex, UMaterialInterface* Parent) {
    return NULL;
}

UMaterialInstanceDynamic* UPrimitiveComponent::CreateAndSetMaterialInstanceDynamic(int32 ElementIndex) {
    return NULL;
}

TArray<UPrimitiveComponent*> UPrimitiveComponent::CopyArrayOfMoveIgnoreComponents() {
    return TArray<UPrimitiveComponent*>();
}

TArray<AActor*> UPrimitiveComponent::CopyArrayOfMoveIgnoreActors() {
    return TArray<AActor*>();
}

void UPrimitiveComponent::ClearMoveIgnoreComponents() {
}

void UPrimitiveComponent::ClearMoveIgnoreActors() {
}

bool UPrimitiveComponent::CanCharacterStepUp(APawn* Pawn) const {
    return false;
}

void UPrimitiveComponent::AddTorqueInRadians(FVector Torque, FName BoneName, bool bAccelChange) {
}

void UPrimitiveComponent::AddTorqueInDegrees(FVector Torque, FName BoneName, bool bAccelChange) {
}

void UPrimitiveComponent::AddTorque(FVector Torque, FName BoneName, bool bAccelChange) {
}

void UPrimitiveComponent::AddRadialImpulse(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange) {
}

void UPrimitiveComponent::AddRadialForce(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange) {
}

void UPrimitiveComponent::AddImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName) {
}

void UPrimitiveComponent::AddImpulse(FVector Impulse, FName BoneName, bool bVelChange) {
}

void UPrimitiveComponent::AddForceAtLocationLocal(FVector Force, FVector Location, FName BoneName) {
}

void UPrimitiveComponent::AddForceAtLocation(FVector Force, FVector Location, FName BoneName) {
}

void UPrimitiveComponent::AddForce(FVector Force, FName BoneName, bool bAccelChange) {
}

void UPrimitiveComponent::AddAngularImpulseInRadians(FVector Impulse, FName BoneName, bool bVelChange) {
}

void UPrimitiveComponent::AddAngularImpulseInDegrees(FVector Impulse, FName BoneName, bool bVelChange) {
}

void UPrimitiveComponent::AddAngularImpulse(FVector Impulse, FName BoneName, bool bVelChange) {
}


