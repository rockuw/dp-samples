#include "Document.h"
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    Document doc;

    doc.addChar('H');
    doc.addChar('E');
    doc.addChar('L');
    doc.addChar('L');
    doc.addChar('O');
    doc.addChar('W');
    doc.addChar('O');
    doc.addChar('R');
    doc.addChar('L');
    doc.addChar('D');

    doc.show();
    return 0;
}
