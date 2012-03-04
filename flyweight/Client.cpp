#include "WordProcessor.h"
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    WordProcessor word;

    word.addChar('H');
    word.addChar('E');
    word.addChar('L');
    word.addChar('L');
    word.addChar('O');
    word.addChar('W');
    word.addChar('O');
    word.addChar('R');
    word.addChar('L');
    word.addChar('D');

    word.showChar();
    return 0;
}
