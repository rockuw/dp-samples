#include "Facade.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Facade processor;

    cout << processor.process("Hello World");

    return 0;
}
