#include "Mediator.h"

int main(int argc, char *argv[])
{
    Mediator *dialog = new DialogDirector();

    dialog->showWidgets();
    return 0;
}
