#ifndef MEMENTO_H
#define MEMENTO_H

#include <map>
#include <list>

#include "Graphic.h"

class Point
{
    public:
        Point(){
            x = y = 0;
        }
        double x;
        double y;
};

class Memento
{
    public:
        ~Memento(){}

    private:
        friend class ConstraintSolver;
        Memento(){
        }

        void addPos(Graphic *g, double x, double y){
            Point p;
            p.x = x;
            p.y = y;
            _posMap[g] = p;
        }

        double getX(Graphic *g){
            return _posMap[g].x;
        }

        double getY(Graphic *g){
            return _posMap[g].y;
        }

    private:
        std::map<Graphic *, Point> _posMap;
};

#endif
