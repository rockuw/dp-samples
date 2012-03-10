#include "Widget.h"
#include "Mediator.h"

void Widget::changed(void){
    _mediator->widgetChanged(this);
}
