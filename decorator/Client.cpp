#include "ConcreteAdditive.h"
#include "ConcreteDrink.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Drink *coffee = new Sugar(new Ice(new Coffee()));
    cout << coffee->getDescription() << endl;
    cout << "price: " << coffee->getPrice() << endl;

    Drink *tea = new Sugar(new Sugar(new Tea()));
    cout << tea->getDescription() << endl;
    cout << "price: " << tea->getPrice() << endl;

    delete coffee;
    delete tea;

    return 0;
}
