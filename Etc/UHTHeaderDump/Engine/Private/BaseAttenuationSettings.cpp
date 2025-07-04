#include "BaseAttenuationSettings.h"

FBaseAttenuationSettings::FBaseAttenuationSettings() {
    this->DistanceAlgorithm = EAttenuationDistanceModel::Linear;
    this->AttenuationShape = EAttenuationShape::Sphere;
    this->dBAttenuationAtMax = 0.00f;
    this->ConeOffset = 0.00f;
    this->FalloffDistance = 0.00f;
}

