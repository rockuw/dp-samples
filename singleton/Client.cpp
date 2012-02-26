#include "Config.h"
#include "Singleton.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Config *config = Config::getInstance();

    config->setConfig("hello", "world");
    cout << config->getConfig("hello") << endl;

    Singleton *singleton = Singleton::getInstance();
    cout << singleton->self() << endl;
    return 0;
}
