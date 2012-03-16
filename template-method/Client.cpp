#include "HtmlView.h"

int main(int argc, char *argv[])
{
    View *view = new HtmlView();

    view->display();

    delete view;

    return 0;
}
