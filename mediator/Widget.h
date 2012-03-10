#ifndef WIDGET_H
#define WIDGET_H

#include <iostream>
#include <string>

class Mediator;

class Widget
{
    public:
        virtual ~Widget(){};

        virtual void changed(void);

    protected:
        Widget(Mediator *mediator):_mediator(mediator){}

    private:
        Mediator *_mediator;
};

class Button: public Widget
{
    public:
        Button(Mediator *mediator):Widget(mediator){}
        ~Button(){}
        
        void clicked(){
            std::cout << "button clicked" << std::endl;
            changed();
        }
};

class ListBox: public Widget
{
    public:
        ListBox(Mediator *mediator): Widget(mediator){}
        ~ListBox(){}

        std::string getSelection(){
            std::cout << "get listbox selection" << std::endl;
            return "listbox";
        }
        
        void selected(){
            std::cout << "listbox selected" << std::endl;
            changed();
        }
};

class TextBox: public Widget
{
    public:
        TextBox(Mediator *mediator):Widget(mediator){}
        ~TextBox(){}

        void setText(const std::string& text){
            std::cout << "set text: " << text << std::endl;
        }
};

#endif
