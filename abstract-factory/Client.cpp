#include <iostream>
#include "Factory.h"

using namespace std;

// the produce procedure remains unchanged
// because of Abstract Factory pattern
void produce(AbstractFactory *factory){
    AbstractProduct1 *product1 = factory->createProduct1();
    AbstractProduct2 *product2 = factory->createProduct2();

    cout << product1->getDescription() << endl;
    cout << product2->getDescription() << endl;

    delete product1;
    delete product2;
}

int main(int argc, char *argv[])
{
    AbstractFactory *factory = new CNFactory();
    produce(factory);

    delete factory;

    factory = new USFactory();
    produce(factory);

    delete factory;
    return 0;
}
