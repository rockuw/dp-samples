#include "Expression.h"
#include "Context.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    LiteralExp *a = new LiteralExp('A');
    LiteralExp *b = new LiteralExp('B');
    SequenceExp *seq = new SequenceExp(a, b);
    AlternateExp *alt = new AlternateExp(a, b);
    RepeatExp *rep = new RepeatExp(alt);
    SequenceExp *seq2 = new SequenceExp(seq, rep);
    // A & B & (A | B)*

    Context context("ABBBBAAA");
    cout << seq2->match(context) << endl;

    delete a;
    delete b;
    delete seq;
    delete alt;
    delete rep;
    delete seq2;

    return 0;
}
