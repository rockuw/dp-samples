#ifndef ABSTRACT_WIDGET_H
#define ABSTRACT_WIDGET_H

#include <iostream>
#include <list>

class AbstractWidget
{
    public:
        AbstractWidget(){}
        virtual ~AbstractWidget(){}

        virtual void draw(void){
            std::cout << "draw AbstractWidget" << std::endl;
        }
};

#endif
