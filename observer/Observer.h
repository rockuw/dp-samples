#ifndef OBSERVER_H
#define OBSERVER_H

class Subject;

class Observer
{
    public:
        Observer(){}
        virtual ~Observer(){}

        virtual void update(Subject *source) = 0;
};

#endif
