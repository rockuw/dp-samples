#ifndef WIDGET_H
#define WIDGET_H

#include "AbstractWidget.h"

class Button: public AbstractWidget
{
    public:
        Button(){}
        ~Button(){}

        void draw(void){
            std::cout << "draw Button" << std::endl;
        }
};

class TextBox: public AbstractWidget
{
    public:
        TextBox(){}
        ~TextBox(){}

        void draw(void){
            std::cout << "draw TextBox" << std::endl;
        }
};
#endif
