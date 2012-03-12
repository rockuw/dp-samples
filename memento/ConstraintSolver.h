#ifndef CONSTRAINT_SOLVER_H
#define CONSTRAINT_SOLVER_H

#include "Graphic.h"
#include "Memento.h"
#include <list>
#include <iostream>

class ConstraintSolver
{
    public:
        ConstraintSolver(){}
        ~ConstraintSolver(){
            for(std::list<Graphic *>::iterator it = _graphicList.begin(); it != _graphicList.end(); it ++){
                delete (*it);
            }
        }
        
        void solve(){
            for(std::list<Graphic *>::iterator it = _graphicList.begin(); it != _graphicList.end(); it ++){
                std::cout << "Graphic (" << (*it)->getX() << ", " << (*it)->getY() << ")" << std::endl;
            }
        }
        
        Memento *createMemento(void){
            Memento *m = new Memento();
            for(std::list<Graphic *>::iterator it = _graphicList.begin(); it != _graphicList.end(); it ++){
                m->addPos(*it, (*it)->getX(), (*it)->getY());
            }
            return m;
        }

        void setMemento(Memento *memento){
            for(std::list<Graphic *>::iterator it = _graphicList.begin(); it != _graphicList.end(); it ++){
                (*it)->setX(memento->getX((*it)));
                (*it)->setY(memento->getY((*it)));
            }
        }

        void move(const std::string& name, double dx, double dy){
            Graphic *g = 0;
            for(std::list<Graphic *>::iterator it = _graphicList.begin(); it != _graphicList.end(); it ++){
                if((*it)->getName() == name){
                    g = (*it);
                    break;
                }
            }
            if(g) g->move(dx, dy);
        }

        void addGraphic(Graphic *g){
            _graphicList.push_back(g);
        }
        
        void removeGraphic(Graphic *g){
            _graphicList.remove(g);
        }

    private:
        std::list<Graphic *> _graphicList;
};

#endif
