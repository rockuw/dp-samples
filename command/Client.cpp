#include "Invoker.h"
#include "Command.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Data data(10);
    AddCommand add(&data);
    SubCommand sub(&data);
    Invoker invoker;

    cout << "value = " << data.getValue() << endl;
    invoker.invoke(&add);
    cout << "value = " << data.getValue() << endl;
    invoker.invoke(&sub);
    cout << "value = " << data.getValue() << endl;
    invoker.undo();
    cout << "value = " << data.getValue() << endl;
    invoker.undo();
    invoker.undo();
    invoker.undo();
    cout << "value = " << data.getValue() << endl;
    return 0;
}
