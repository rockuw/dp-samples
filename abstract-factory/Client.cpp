#include <iostream>
#include "Factory.h"

using namespace std;

int main(int argc, char *argv[])
{
    AbstractFactory *factory;
    AbstractProduct1 *product1;
    AbstractProduct2 *product2;

    factory = new CNFactory();
    product1 = factory->createProduct1();
    product2 = factory->createProduct2();

    cout << product1->getDescription() << endl;
    cout << product2->getDescription() << endl;

    delete factory;
    delete product1;
    delete product2;

    factory = new USFactory();
    product1 = factory->createProduct1();
    product2 = factory->createProduct2();

    cout << product1->getDescription() << endl;
    cout << product2->getDescription() << endl;

    delete factory;
    delete product1;
    delete product2;
    return 0;
}
