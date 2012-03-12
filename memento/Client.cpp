#include "ConstraintSolver.h"

int main(int argc, char *argv[])
{
    ConstraintSolver cs;
    Memento *memento;

    cs.addGraphic(new Graphic("A", 1, 1));
    cs.addGraphic(new Graphic("B", 2, 2));
    cs.addGraphic(new Graphic("C", 3, 3));
    cs.solve();

    memento = cs.createMemento();
    cs.move("A", 100, 100);
    cs.move("B", 200, 200);
    cs.solve();

    cs.setMemento(memento);
    cs.solve();

    delete memento;
    return 0;
}
