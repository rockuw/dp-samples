#include "Widget.h"

int main(int argc, char *argv[])
{
    Application app;

    Dialog *dialog = new Dialog(&app);
    Button *button = new Button(dialog);

    button->showHelp();

    delete button;
    delete dialog;
    return 0;
}
