#include "CursorWidget.h"

UCursorWidget::UCursorWidget() : UUserWidget(FObjectInitializer::Get()) {
}

FSlateBrush UCursorWidget::GetCursorBrush() const {
    return FSlateBrush{};
}


