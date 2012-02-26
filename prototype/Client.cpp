#include "Application.h"
#include "Product.h"

int main(int argc, char *argv[])
{
    Application CNApp(new CNProduct());

    CNApp.makeProduct();

    Application USApp(new USProduct());
    USApp.makeProduct();

    return 0;
}
