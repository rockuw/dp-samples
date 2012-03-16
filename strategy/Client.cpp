#include "Editor.h"
#include "WinLineBreak.h"
#include "UnixLineBreak.h"

int main(int argc, char *argv[])
{
    Editor ed(new WinLineBreak());

    ed.keyPressed('A');
    ed.keyPressed('\n');
    ed.keyPressed('B');
    ed.show();

    Editor ed2(new UnixLineBreak()); 
    ed2.keyPressed('A');
    ed2.keyPressed('\n');
    ed2.keyPressed('B');
    ed2.show();

    return 0;
}
