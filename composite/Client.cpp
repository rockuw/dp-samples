#include "Widget.h"
#include "GroupWidget.h"

void showWidget(AbstractWidget *widget)
{
    widget->draw();
}

int main(int argc, char *argv[])
{
    Button *button = new Button();
    TextBox *textbox = new TextBox();

    GroupBox *group = new GroupBox();
    group->addChild(button);
    group->addChild(textbox);

    showWidget(button);
    showWidget(textbox);
    showWidget(group);

    GroupBox *bigGroup = new GroupBox();
    bigGroup->addChild(new Button);
    bigGroup->addChild(group);

    showWidget(bigGroup);

    delete bigGroup;
    return 0;
}
