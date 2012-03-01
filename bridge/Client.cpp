#include "Window.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    IconWindow iconWin("icon.png");
    DialogWindow dialogWin;

    cout << "showing IconWindow... " << endl;
    iconWin.show();

    cout << endl;
    cout << "showing DialogWindow... " << endl;
    dialogWin.show();
    return 0;
}
