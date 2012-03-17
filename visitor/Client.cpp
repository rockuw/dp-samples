#include "Equipment.h"
#include "ConcreteVisitor.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    FloppyDisk floppy1;
    FloppyDisk floppy2;
    FloppyDisk floppy3;
    Chassis chassis1;
    Chassis chassis2;

    chassis1.addPart(&floppy1);
    chassis1.addPart(&floppy2);
    chassis2.addPart(&chassis1);
    chassis2.addPart(&floppy3);

    PriceVisitor priceVisitor;
    PowerVisitor powerVisitor;

    chassis2.accept(priceVisitor);
    chassis2.accept(powerVisitor);

    cout << "total price: " << priceVisitor.getPrice() << endl;
    cout << "total power: " << powerVisitor.getPower() << endl;
    return 0;
}
