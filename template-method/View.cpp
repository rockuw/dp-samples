#include "View.h"
#include <string>
#include <iostream>

using namespace std;

void View::display(){
    showHeader();
    doDisplay();
    showFooter();
}

void View::showHeader(){
    cout << "-----------header-----------" << endl;
}

void View::showFooter(){
    cout << "-----------footer-----------" << endl;
}
