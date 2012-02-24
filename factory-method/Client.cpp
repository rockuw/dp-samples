#include "UserApplication.h"

int main(int argc, char *argv[])
{
    Application *app;

    app = new CNApp();
    app->makeProduct();
    delete app;

    app = new USApp();
    app->makeProduct();
    delete app;

    return 0;
}
