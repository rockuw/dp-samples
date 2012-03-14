#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>
#include "Observer.h"

class Subject
{
    public:
        virtual ~Subject(){}
        
        virtual void attach(Observer *o){
            _observers.push_back(o);
        }

        virtual void detach(Observer *o){
            _observers.remove(o);
        }
        
        virtual void notify(void){
            for(std::list<Observer *>::iterator it = _observers.begin(); it != _observers.end(); it ++){
                (*it)->update(this);
            }
        }

    protected:
        Subject(){}

    private:
        std::list<Observer *> _observers;
};

#endif
