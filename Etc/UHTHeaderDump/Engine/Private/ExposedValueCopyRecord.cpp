#include "ExposedValueCopyRecord.h"

FExposedValueCopyRecord::FExposedValueCopyRecord() {
    this->SourceArrayIndex = 0;
    this->bInstanceIsTarget = false;
    this->PostCopyOperation = EPostCopyOperation::None;
    this->CopyType = ECopyType::MemCopy;
    this->DestProperty = NULL;
    this->DestArrayIndex = 0;
    this->Size = 0;
    this->CachedSourceProperty = NULL;
    this->CachedSourceStructSubProperty = NULL;
}

